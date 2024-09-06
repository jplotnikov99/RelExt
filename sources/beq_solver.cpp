#include "beq_solver.hpp"

namespace DT {
BeqSolver::BeqSolver(std::shared_ptr<Model> model) {
    mod = model;
    beq = std::make_unique<Beqs>(mod);
}

void BeqSolver::set_mechanism(const size_t &mech) { beq->set_mechanism(mech); }

bool BeqSolver::sort_inimasses(const vstring &ch_str) {
    return beq->sort_inimasses(ch_str);
}

double BeqSolver::yeq(const double &x) { return beq->yeq(x); }

double BeqSolver::secant_method(double x0, double x1, const double del) {
    // Initialize the number of iterations
    int iterations = 0;
    double x2;
    double y1;
    double y0 = beq->fstart(x0);
    // Loop until the tolerance is reached
    while (fabs(x1 - x0) > secant_eps) {
        if (iterations > secant_maxiter) return x2;
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

double BeqSolver::bisec(double x1, double x2, const double del) {
    double dx, xmid, rtb;
    double f = beq->fout_condition(x1, del).res;
    double fmid = beq->fout_condition(x2, del).res;
    if(f*fmid >= 0.) return 0.;
    rtb = f < 0. ? (dx = x2 - x1, x1) : (dx = x1 - x2, x2);
    for (size_t i = 0; i < 100; i++) {
        fmid = beq->fout_condition(xmid = rtb + (dx *= 0.5), del).res;
        if (fmid <= 0.) rtb = xmid;
        if (fabs(dx) < secant_eps) return rtb;
    }
    return rtb;
}

double BeqSolver::dopr5(double &x, ResError &y, const double &h) {
    static const double c2 = 0.2, c3 = 0.3, c4 = 0.8, c5 = 8.0 / 9.0, a21 = 0.2,
                        a31 = 3.0 / 40.0, a32 = 9.0 / 40.0, a41 = 44.0 / 45.0,
                        a42 = -56.0 / 15.0, a43 = 32.0 / 9.0,
                        a51 = 19372.0 / 6561.0, a52 = -25360.0 / 2187.0,
                        a53 = 64448.0 / 6561.0, a54 = -212.0 / 729.0,
                        a61 = 9017.0 / 3168.0, a62 = -355.0 / 33.0,
                        a63 = 46732.0 / 5247.0, a64 = 49.0 / 176.0,
                        a65 = -5103.0 / 18656.0, a71 = 35.0 / 384.0,
                        a73 = 500.0 / 1113.0, a74 = 125.0 / 192.0,
                        a75 = -2187.0 / 6784.0, a76 = 11.0 / 84.0,
                        e1 = 71.0 / 57600.0, e3 = -71.0 / 16695.0,
                        e4 = 71.0 / 1920.0, e5 = -17253.0 / 339200.0,
                        e6 = 22.0 / 525.0, e7 = -1.0 / 40.0;
    ResError k1, k2, k3, k4, k5, k6, k7, yout;

    k1 = h * beq->beq(x, y);
    k2 = h * beq->beq(x + c2 * h, y + k1 * a21);
    k3 = h * beq->beq(x + c3 * h, y + k1 * a31 + k2 * a32);
    k4 = h * beq->beq(x + c4 * h, y + k1 * a41 + k2 * a42 + k3 * a43);
    k5 =
        h * beq->beq(x + c5 * h, y + k1 * a51 + k2 * a52 + k3 * a53 + k4 * a54);
    x = x + h;
    k6 = h *
         beq->beq(x, y + k1 * a61 + k2 * a62 + k3 * a63 + k4 * a64 + k5 * a65);
    yout = y + (k1 * a71 + k3 * a73 + k4 * a74 + k5 * a75 + k6 * a76);
    k7 = h * beq->beq(x, yout);
    y = yout;

    return (e1 * k1.res + e3 * k3.res + e4 * k4.res + e5 * k5.res +
            e6 * k6.res + e7 * k7.res);
}
double BeqSolver::controller(const double &hnow, const double &err) {
    double hnext;
    if (err > 1) {
        hnext = 0.9 * 1 / (sqrt(sqrt(err))) * hnow;
        if (hnext < 0.1 * hnow) {
            hnext = 0.1 * hnow;
        }
    } else {
        if (err > 0.0006) {
            hnext = 0.9 * pow(err, -0.2) * hnow;
        } else {
            hnext = 5 * hnow;
        }
    }
    return hnext;
}

/* double BeqSolver::controller(const double &hnow, const double &err)
{
    static const double beta = 0.05, alpha = 0.2 - beta * 0.75, safe = 0.9,
minscale = 0.2, maxscale = 10.0; double hnext; double scale; if (err > 1)
    {
        scale = std::max(safe * pow(err, -alpha), minscale);
        hnext = hnow * scale;
        reject = true;
    }
    else
    {
        if (err != 0)
        {
            scale = safe * pow(err, -alpha) * pow(errold, beta);
            if (scale < minscale)
                scale = minscale;
            if (scale > maxscale)
                scale = maxscale;
        }
        else
        {
            scale = maxscale;
        }
        if (reject)
            hnext = hnow * std::min(scale, 1.);
        else
            hnext = hnow * scale;
        errold = std::max(err, 1e-4);
        reject = false;
    }
    return hnext;
} */

void BeqSolver::adap_dopr5(const double &xtoday, double &x, ResError &y,
                           double h) {
    double xsave = x;
    ResError ysave = y;
    double errest = fabs(dopr5(x, y, h));
    double err = errest / std::max(ysave.res, y.res) / dopr_eps;
    h = controller(h, err);
    /* if (x + h == x) {
        printf("Stepsize too small. Stiff system suspected.\n");
        exit(1);
    } */
    if (h < 1e-6) {
        h = 1e-6;
        y.err += errest;
        adap_dopr5(xtoday, x, y, h);
    } else if (err > 1) {
        x = xsave;
        y = ysave;
        adap_dopr5(xtoday, x, y, h);
    } else if (x + h > xtoday) {
        h = xtoday - x;
        dopr5(x, y, h);
    } /* else if ((y.res > 10. * beq->yeq(x)) && FOapprox) {
        y.err += errest;
    } */
    else {
        y.err += errest;
        adap_dopr5(xtoday, x, y, h);
    }
}

ResError BeqSolver::adap_simpson38(const double l, const double r, ResError *y,
                                   const double &est) {
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

    if (fabs(I.res - I3.res) < 1e-6 * fabs(est)) {
        I3.err += fabs(I.res - I3.res);
        return I3;
    }
    return adap_simpson38(l, m, y, est) + adap_simpson38(m, r, y1, est);
}

ResError BeqSolver::icoll(const double xf, const double x0) {
    ResError f[4];
    double f_est[10], f_err[10];
    double h = (x0 - xf) / 9;
    for (size_t i = 0; i < 10; i++) {
        f[0] = beq->pre_tac(xf + h * (double)i);
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

ResError BeqSolver::calc_yield(const double &xtoday, double &x, ResError &y,
                               const bool appr) {
    FOapprox = appr;
    ResError y0;
    if (appr) {
        y0 = 1 / y - icoll(x, xtoday);
        y0 = 1 / y0;
    } else {
        adap_dopr5(xtoday, x, y);
        y0 = y;
    }
    return y0;
}

void BeqSolver::reset_tac_state(const bool full) { beq->reset_tac_state(full); }

}  // namespace DT
