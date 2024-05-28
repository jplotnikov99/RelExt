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

    void RelicOps::set_mechanism(const size_t mech)
    {
        mechanism = mech;
        bs->set_mechanism(mech);
    }

    void RelicOps::set_omega_target(const double om)
    {
        omega_target = om;
    }

    void RelicOps::set_omega_err(const double err)
    {
        omega_err = err;
    }

    ResError RelicOps::get_last_relic()
    {
        return omega;
    }

    ResError RelicOps::CalcRelic()
    {
        bs->sort_inimasses(bath_procs);
        double x, xtoday;
        bool appr;
        ResError y{0., 0.};

        switch (mechanism)
        {
        case 0:
            x = bs->secant_method(15., 15.1);
            y.res = 1.1 * bs->yeq(x);
            xinitial = x;
            xtoday = xtoday_FO;
            appr = false;
            break;
        case 1:
            x = x_reheating;
            y.res = 0;
            xtoday = xtoday_FI;
            appr = false;
            break;

        default:
            std::cout << "This mechanism ID is not valid. Please set the mechanism to 0 or 1.\n";
            exit(1);
            break;
        }
        y = bs->calc_yield(xtoday, x, y, appr);
        // bs->adap_rk4(xtoday, x, y);
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
        if (std::signbit(omega_old) != std::signbit(omega_new))
        {
            searchmode = bisect;
            bi_x1 = par_old;
            bi_y1 = omega_old,
            bi_x2 = par_new;
            bi_y2 = omega_new;
            std::cout << "Switch to bisect mode.\n";
        }
        if (first_step)
        {
            first_step = false;
        }
        else
        {
            if (std::signbit(step_old) != std::signbit(step_new))
            {
                if (!(searchmode == descent))
                {
                    std::cout << "Switch to descent mode.\n";
                    searchmode = descent;
                }
            }
        }
    }

    double RelicOps::get_next_omega(const std::string &par, const double om)
    {
        const double eps = 0.001;
        double om1 = om;
        double par1, par2, om2, step;

        par1 = mod->get_parameter_val(par);
        par2 = par1 * (1 + eps);
        mod->change_parameter(par, par2);
        om2 = CalcRelic().res - omega_target;

        step = get_next_step(par1, par2, om1, om2, omega_target);
        par1 += step;
        mod->change_parameter(par, par1);
        om1 = CalcRelic().res - omega_target;
        check_sign_flip(step, om1, par1);
        par_old = par1;
        step_old = step;
        omega_old = om1;
        return om1;
    }

    double RelicOps::vanguard_search(const std::string &par)
    {
        double res = {};
        double om1, om2;
        om1 = CalcRelic().res - omega_target;
        omega_old = om1;
        par_old = mod->get_parameter_val(par);
        while ((fabs(om1) > omega_err) && (searchmode == vanguard))
        {
            om2 = om1;
            om1 = get_next_omega(par, om1);
            if (om2 == om1)
            {
                std::cout << par << " does not change the relic density.\n";
                break;
            }
        }
        if (searchmode == vanguard)
        {
            searchmode = stop;
            res = mod->get_parameter_val(par);
        }
        return res;
    }

    double RelicOps::descent_search(const std::string &par)
    {
        double res = {};
        double om1 = omega_old;
        double om2;
        size_t max_it = 200;
        size_t current_it= 0;
        do
        {
            om2 = om1;
            om1 = get_next_omega(par, om1);
            current_it++;
            
        } while ((fabs(om2 / om1 - 1) > 0.001) && (searchmode == descent) && (current_it < max_it));
        if (searchmode == descent)
        {
            searchmode = stop;
            res = mod->get_parameter_val(par);
        }
        return res;
    }

    double RelicOps::bisect_search(const std::string &par)
    {
        double res;
        double dx, xmid, rtb;
        rtb = bi_y1 < 0. ? (dx = bi_x2 - bi_x1, bi_x1) : (dx = bi_x1 - bi_x2, bi_x2);
        for (size_t i = 0; i < max_N_bisections; i++)
        {
            dx *= 0.5;
            xmid = rtb + dx;
            mod->change_parameter(par, xmid);
            bi_y2 = CalcRelic().res - omega_target;

            if (bi_y2 <= 0.)
                rtb = xmid;
            if (fabs(bi_y2) < omega_err)
            {
                searchmode = stop;
                res = rtb;
                return res;
            }
        }
        searchmode = stop;
        std::cout << "Bisection limit reached.\n";
        res = rtb;
        return res;
    }

    double RelicOps::find_pars(const std::string &par)
    {
        first_step = true;
        searchmode = vanguard;
        double res;

        while (searchmode != stop)
        {
            switch (searchmode)
            {
            case vanguard:
                res = vanguard_search(par);
                break;

            case descent:
                res = descent_search(par);
                break;

            case bisect:
                res = bisect_search(par);
                break;

            default:
                break;
            }
        }

        return res;
    }
} // namespace DT
