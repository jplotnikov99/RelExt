#include "beq_solver.hpp"

namespace DT
{
    BeqSolver::BeqSolver(std::shared_ptr<Dof> degrees_of_freedom, std::shared_ptr<Model> model)
    {
        mod = model;
        dof = degrees_of_freedom;
        beq = std::make_unique<Beqs>(dof, mod);
    }

    void BeqSolver::sort_inimasses(const std::vector<std::string> &ch_str)
    {
        beq->sort_inimasses(ch_str);
    }

    double BeqSolver::secant_method(double x0, double x1, const std::vector<std::string> &ch_str)
    {
        // Initialize the number of iterations
        int iterations = 0;
        double x2;
        double y1;
        double y0 = beq->fstart(x0, ch_str);
        // Loop until the tolerance is reached
        while (fabs(x1 - x0) > secant_eps)
        {

            if (iterations > secant_maxiter)
                return x2;
            // Calculate the new value of x
            y1 = beq->fstart(x1, ch_str);

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

    void BeqSolver::rk4(double &x, double &y, const double &h, const std::vector<std::string> &ch_str)
    {
        double k1, k2, k3, k4;
        k1 = h * beq->beq_FO(x, y, ch_str);
        x = x + h / 2;
        k2 = h * beq->beq_FO(x, (y + k1 / 2), ch_str);
        k3 = h * beq->beq_FO(x, (y + k2 / 2), ch_str);
        x = x + h / 2;
        k4 = h * beq->beq_FO(x, (y + k3), ch_str);
        y += (k1 + 2 * k2 + 2 * k3 + k4) / 6;
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

    void BeqSolver::adap_rk4(const double &xtoday, double &x, double &y, const std::vector<std::string> &ch_str, double h)
    {
        double xsave, ysave, ytemp;
        xsave = x;
        ysave = y;

        rk4(x, y, h, ch_str);
        ytemp = y;
        x = xsave;
        y = ysave;
        rk4(x, y, h / 2, ch_str);
        rk4(x, y, h / 2, ch_str);
        double err = fabs((y - ytemp) / ytemp) / rk4_eps;
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
            adap_rk4(xtoday, x, y, ch_str, h);
        }
        else if (x + h > xtoday)
        {
            h = xtoday - x;
            rk4(x, y, h, ch_str);
            beq->reset_tac_state();
        }
        else
        {
            adap_rk4(xtoday, x, y, ch_str, h);
        }
    }
} // namespace DT
