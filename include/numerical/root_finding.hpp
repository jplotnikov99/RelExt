#pragma once
#include <cmath>
#include <iostream>

#include "../hyper_parameters.hpp"

namespace DT {

enum SearchMode { vanguard, bisect, descent, stop };

template <class FUNC>
double absgradient(FUNC &f, const double x, const double y) {
    double x2 = x * (1. + 1e-6);
    double y2 = f(x2);
    return (std::abs(y2) - std::abs(y)) / (x2 - x);
}

template <class FUNC>
double bisec(FUNC &f, double x1, double x2, const double eps) {
    double dx, xmid, rtb;
    double ff = f(x1);
    double fmid = f(x2);
    if (ff * fmid >= 0.) return 0.;
    rtb = ff < 0. ? (dx = x2 - x1, x1) : (dx = x1 - x2, x2);
    for (size_t i = 0; i < 100; i++) {
        fmid = f(xmid = rtb + (dx *= 0.5));
        if (fmid <= 0.) rtb = xmid;
        if (std::abs(dx) < eps) return rtb;
    }
    return rtb;
}

class FindRoot {
   private:
    bool first_step = true;
    SearchMode searchmode = vanguard;
    const double xlo, xhi, eps, scale;
    double stepold, yold, xold;

   public:
    FindRoot(const double xlow, const double xhigh, const double epss,
             const double scal)
        : xlo(xlow), xhi(xhigh), eps(epss), scale(scal) {}

    void update_mode(const double step, const double y);

    template <class FUNC>
    double next_x(FUNC &f, double x);

    template <class FUNC>
    double find(FUNC &f, double xstart);

    ~FindRoot() {};
};

template <class FUNC>
double FindRoot::next_x(FUNC &f, double x) {
    double xsave = x;
    if (x < xlo) x = xlo;
    if (x > xhi) x = xhi;
    if (!f.valid(x)) x = xsave;
    return x;
}

template <class FUNC>
double FindRoot::find(FUNC &f, double xstart) {
    static const int MAXIT = 200;
    double y = f(xstart);
    int it = 0;
    while (it != MAXIT) {
        ++it;
        xold = xstart;
        yold = y;
        switch (searchmode) {
            case vanguard: {
                double dir = absgradient(f, xstart, y) > 0 ? 1. : -1.;
                double step =
                    std::abs(y) / scale > 1 ? 1. : std::abs(y) / scale;
                step =
                    dir * (step * vanguard_step_size + 1e-5) * std::abs(xstart);
                xstart = next_x(f, xstart - step);
                if (std::abs(xstart - xold) < 1e-14 * xold) return xstart;
                y = f(xstart);
                update_mode(step, y);
                stepold = step;
                if (std::abs(y) < eps) return xstart;
            } break;

            case descent: {
                double grad = descent_rate * absgradient(f, xstart, y);
                xstart = next_x(f, xstart - grad);
                y = f(xstart);
                update_mode(grad, y);
                stepold = grad;
                if (std::abs(y - yold) < eps * std::abs(yold)) return xstart;
            } break;

            case bisect:
                return bisec(f, xold, xstart);
                break;

            default:
                break;
        }
    }
}
}  // namespace DT
