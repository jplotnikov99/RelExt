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

    ResError BeqSolver::adap_simpson38(const double l, const double r, ResError *y, const double &est)
    {
        ResError I1, I2, I3, y1[4];
        double m = (r + l) / 2.;
        double h = (r - l) / 8.;
        ResError I = h * (y[0] + 3 * y[1] + 3 * y[2] + y[3]);
        y1[0] = beq->pre_tac(m);
        y1[1] = y[2];
        y1[2] = beq->pre_tac((l + 5 * r) / 6);
        y1[3] = y[3];
        y[3] = y1[0];
        y[2] = y[1];
        y[1] = beq->pre_tac((5 * l + r) / 6);
        I1 = h / 2 * (y[0] + 3 * y[1] + 3 * y[2] + y[3]);
        I2 = h / 2 * (y1[0] + 3 * y1[1] + 3 * y1[2] + y1[3]);
        I3 = I1 + I2;

        if (fabs(I.res - I3.res) < 1e-6 * fabs(est))
        {
            I3.err += fabs(I.res - I3.res);
            return I3;
        }
        return adap_simpson38(l, m, y, est) + adap_simpson38(m, r, y1, est);
    }

    ResError BeqSolver::icoll(const double xf, const double x0)
    {
        ResError f[4];
        double f_est[10];
        double f_err[10];
        double h = (x0 - xf) / 9;
        for (size_t i = 0; i < 10; i++)
        {
            f[0] = beq->pre_tac(xf + h * i);
            f_est[i] = f[0].res;
            f_err[i] = f[0].err;
        }
        double est = simpson_est(xf, x0, f_est);

        f[0] = {f_est[0], f_err[0]};
        f[1] = {f_est[3], f_err[3]};
        f[2] = {f_est[6], f_err[6]};
        f[3] = {f_est[9], f_err[9]};

        return adap_simpson38(xf, x0, f, est);
    }

    ResError BeqSolver::calc_yield(const double &xtoday, double &x, ResError &y)
    {
        ResError yf, y0;
        adap_rk4(xtoday, x, y);
        yf = y;

        y0 = 1 / yf - icoll(x, xtoday);
        beq->reset_tac_state(true);
        return 1 / y0;
    }
} // namespace DT
