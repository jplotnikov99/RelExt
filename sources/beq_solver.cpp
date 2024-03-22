#include "beq_solver.hpp"

namespace DT
{
    BeqSolver::BeqSolver(std::shared_ptr<Model> model)
    {
        mod = model;
        beq = std::make_unique<Beqs>(mod);
    }

    void BeqSolver::set_mechanism(const size_t &mech)
    {
        beq->set_mechanism(mech);
    }

    void BeqSolver::sort_inimasses(const vstring &ch_str)
    {
        beq->sort_inimasses(ch_str);
    }

    double BeqSolver::yeq(const double &x)
    {
        return beq->yeq(x);
    }

    double BeqSolver::secant_method(double x0, double x1)
    {
        // Initialize the number of iterations
        int iterations = 0;
        double x2;
        double y1;
        double y0 = beq->fstart(x0);
        // Loop until the tolerance is reached
        while (fabs(x1 - x0) > secant_eps)
        {

            if (iterations > secant_maxiter)
                return x2;
            // Calculate the new value of x
            y1 = beq->fstart(x1);

            x2 = x1 - (x1 - x0) * y1 / (y1 - y0);

            // Update the values of x0, x1 and y0
            x0 = x1;
            x1 = x2;

            y0 = y1;
            // Increment the number of iterations
            iterations++;
        }

        // Return the root of the function
        return x2;
    }

    void BeqSolver::rk4(double &x, ResError &y, const double &h)
    {
        ResError k1, k2, k3, k4;
        k1 = h * beq->beq(x, y);
        x = x + h / 2;
        k2 = h * beq->beq(x, (y + k1 / 2));
        k3 = h * beq->beq(x, (y + k2 / 2));
        x = x + h / 2;
        k4 = h * beq->beq(x, (y + k3));
        y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
    }

    double BeqSolver::setStep(const double &hnow, const double &err)
    {
        double hnext;
        if (err > 1)
        {
            hnext = 0.9 * 1 / (sqrt(sqrt(err))) * hnow;
            if (hnext < 0.1 * hnow)
            {
                hnext = 0.1 * hnow;
            }
        }
        else
        {
            if (err > 0.0006)
            {
                hnext = 0.9 * pow(err, -0.2) * hnow;
            }
            else
            {
                hnext = 5 * hnow;
            }
        }
        return hnext;
    }

    void BeqSolver::adap_rk4(const double &xtoday, double &x, ResError &y, double h)
    {
        double xsave = x;
        ResError ysave = y;
        rk4(x, y, h);
        ResError ytemp = y;
        x = xsave;
        y = ysave;
        rk4(x, y, h / 2);
        rk4(x, y, h / 2);
        double err = fabs((y.res - ytemp.res) / ytemp.res) / rk4_eps;
        h = setStep(h, err);
        if (x + h == x)
        {
            printf("Stepsize too small. Stiff system suspected.\n");
            exit(1);
        }
        else if (err > 1)
        {
            x = xsave;
            y = ysave;
            adap_rk4(xtoday, x, y, h);
        }
        else if (x + h > xtoday)
        {
            h = xtoday - x;
            rk4(x, y, h);
            beq->reset_tac_state(true);
        }
        else if (y.res > 4. * beq->yeq(x))
        {
        }
        else
        {
            y.err += fabs(y.res - ytemp.res);
            adap_rk4(xtoday, x, y, h);
        }
    }
    ResError BeqSolver::pre_tac_t(const double t)
    {
        double dx = x0 - xF;
        double x = t * dx + xF;
        return beq->pre_tac(x) * dx;
    }

    ResError BeqSolver::simpson38_peak(const double l, const double r)
    {
        return (r - l) / 8 * (pre_tac_t(l) + 3 * pre_tac_t((2 * l + r) / 3) + 3 * pre_tac_t((l + 2 * r) / 3) + pre_tac_t(r));
    }

    ResError BeqSolver::simpson38_adap_peak(const double l, const double r, const ResError &ans, size_t depth)
    {
        if (ans.res == 0)
            return ans;
        double eps = 1e-3;
        double m = (l + r) / 2;
        ResError I1 = simpson38_peak(l, m), I2 = simpson38_peak(m, r);
        ResError I = I1 + I2;
        if (fabs(I.res / ans.res - 1) < eps)
        {
            I.err += fabs(I.res - ans.res);
            return I;
        }
        return simpson38_adap_peak(l, m, I1, depth + 1) + simpson38_adap_peak(m, r, I2, depth + 1);
    }

    ResError BeqSolver::adap_gauss_kronrod(const double l, const double r, int depth)
    {
        double m = 0.5 * (r + l);
        double h = 0.5 * (r - l);

        ResError res{0., 0.};
        for (size_t i = 0; i < 30; i++)
        {
            double dx = h * kronx_61[i];
            res = res + wkron_61[i] * (pre_tac_t(m + dx) + pre_tac_t(m - dx));
        }
        res = res + wkron_61[30] * (pre_tac_t(m));
        res = res * h;

        return res;
    }

    ResError BeqSolver::calc_yield(const double &xtoday, double &x, ResError &y)
    {
        ResError yF, y0;
        adap_rk4(xtoday, x, y);
        xF = x;
        yF = y;
        x0 = xtoday;
        y0 = 1 / yF - simpson38_adap_peak(0, 1, simpson38_peak(0, 1));
        beq->reset_tac_state(true);
        return 1 / y0;
    }
} // namespace DT
