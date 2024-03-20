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
        double gradient = (y2 - y1) / (x2 - x1);
        double proximity = ytarget > y2 ? y2 / ytarget : ytarget / y2;
        double step = (1 - proximity);
        if (gradient > 0)
        {
            step *= -0.1 * exp(-fabs(gradient));
        }
        else
        {
            step *= 0.1 * exp(-fabs(gradient));
        }
        return x1 * step;
    }
} // namespace DT
