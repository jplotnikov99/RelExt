#include "relic_ops.hpp"

namespace DT
{
    RelicOps::RelicOps(std::shared_ptr<Model> model)
    {
        mod = model;
        bs = std::make_unique<BeqSolver>(model);
    }

    void RelicOps::set_bath_procs(const vstring &b)
    {
        bath_procs = b;
    }

    ResError RelicOps::calc_relic(const size_t mech)
    {
        bs->set_mechanism(mech);
        bs->sort_inimasses(bath_procs);
        double x, xtoday;
        ResError y{0., 0.};

        switch (mech)
        {
        case 0:
            x = bs->secant_method(15., 15.1);
            y.res = 1.1 * bs->yeq(x);
            xinitial = x;
            xtoday = xtoday_FO;
            break;
        case 1:
            x = x_reheating;
            y.res = 0;
            xtoday = xtoday_FI;
            break;

        default:
            std::cout << "This mechanism ID is not valid. Please set the mechanism to 0 or 1.\n";
            exit(1);
            break;
        }

        bs->adap_rk4(xtoday, x, y);
        omega = 2.742e8 * mod->MDM * y;

        return omega;
    }

    double RelicOps::get_next_step(const double &x1, const double &x2, const double &y1, const double &y2, const double &ytarget)
    {
        double gradient = (fabs(y2) - fabs(y1)) / (x2 - x1);
        switch (searchmode)
        {
        case vanguard:
        {
            double step = fabs(y1) / ytarget > 1 ? 1. : fabs(y1) / ytarget;
            if (gradient > 0)
            {
                step *= -vanguard_step_size;
            }
            else
            {
                step *= vanguard_step_size;
            }
            return fabs(x1) * step;
            break;
        }
        case descent:
            return -descent_learning_rate * gradient;
            break;
        default:
            std::cout << "Wrong case in " << __func__ << ".\n";
            exit(1);
            break;
        }
    }

    void RelicOps::check_sign_flip(const double step_new, const double omega_new, const double par_new)
    {
        if (first_step)
        {
            first_step = false;
        }
        else
        {
            if (std::signbit(step_old) != std::signbit(step_new))
            {
                if (std::signbit(omega_old) != std::signbit(omega_new))
                {
                    searchmode = bisect;
                    bi_x1 = par_old;
                    bi_y1 = omega_old,
                    bi_x2 = par_new;
                    bi_y2 = omega_new;
                    std::cout << "Switch to bisect mode (1).\n";
                }
                else
                {
                    std::cout << "Switch to descent mode.\n";
                    searchmode = descent;
                }
            }
            else
            {
                if (std::signbit(omega_old) != std::signbit(omega_new))
                {
                    searchmode = bisect;
                    bi_x1 = par_old;
                    bi_y1 = omega_old,
                    bi_x2 = par_new;
                    bi_y2 = omega_new;
                    std::cout << "Switch to bisect mode (2).\n";
                }
            }
        }
    }

    double RelicOps::get_next_omega(const vstring &pars, const double om, const double relic, const size_t mech)
    {
        const double eps = 0.001;
        double om1 = om;
        double par1, par2, om2, step;

        par1 = mod->get_parameter_val(pars.at(0));
        par2 = par1 * (1 + eps);
        mod->change_parameter(pars.at(0), par2);
        om2 = calc_relic(mech).res - relic;

        step = get_next_step(par1, par2, om1, om2, relic);
        par1 += step;
        mod->change_parameter(pars.at(0), par1);
        om1 = calc_relic(mech).res - relic;

        check_sign_flip(step, om1, par1);
        par_old = par1;
        step_old = step;
        omega_old = om1;
        return om1;
    }

    std::vector<double> RelicOps::vanguard_search(const vstring &pars, const double relic, const double err, const size_t mech)
    {
        std::vector<double> res = {};
        double om1 = calc_relic(mech).res - relic;
        double om2;
        while ((fabs(om1) > err) && (searchmode == vanguard))
        {
            om2 = om1;
            om1 = get_next_omega(pars, om1, relic, mech);
            if (om2 == om1)
            {
                std::cout << pars.at(0) << " does not change the relic density.\n";
                break;
            }
        }
        if (searchmode == vanguard)
        {
            searchmode = stop;
            res.push_back(mod->get_parameter_val(pars.at(0)));
        }
        return res;
    }

    std::vector<double> RelicOps::descent_search(const vstring &pars, const double relic, const size_t mech)
    {
        std::vector<double> res = {};
        double om1 = omega_old;
        double om2;
        do
        {
            om2 = om1;
            om1 = get_next_omega(pars, om1, relic, mech);
        } while ((fabs(om2 / om1 - 1) > 0.01) && (searchmode == descent));
        if (searchmode == descent)
        {
            searchmode = stop;
            res.push_back(mod->get_parameter_val(pars.at(0)));
        }
        return res;
    }

    std::vector<double> RelicOps::bisect_search(const vstring &pars, const double relic, const double err, const size_t mech)
    {
        std::vector<double> res;
        double dx, xmid, rtb;
        rtb = bi_y1 < 0. ? (dx = bi_x2 - bi_x1, bi_x1) : (dx = bi_x1 - bi_x2, bi_x2);
        for(size_t i = 0; i < max_N_bisections; i++)
        {
            dx *= 0.5;
            xmid = rtb + dx;
            mod->change_parameter(pars.at(0), xmid);
            bi_y2 = calc_relic(mech).res - relic;
            if(bi_y2 <= 0.) rtb = xmid;
            if(fabs(bi_y2) < err)
            {
                searchmode = stop;
                res.push_back(rtb);
                return res;
            }
        }
        searchmode = stop;
        std::cout << "Bisection limit reached.\n";
        res.push_back(rtb);
        return res;
    }

    std::vector<double> RelicOps::find_pars(const vstring &pars, const double relic, const double err, const size_t mech)
    {
        first_step = true;
        searchmode = vanguard;
        std::vector<double> res;

        while (searchmode != stop)
        {
            switch (searchmode)
            {
            case vanguard:
                res = vanguard_search(pars, relic, err, mech);
                break;

            case descent:
                res = descent_search(pars, relic, mech);
                break;

            case bisect:
                res = bisect_search(pars, relic, err, mech);
                break;

            default:
                break;
            }
        }

        return res;
    }
} // namespace DT
