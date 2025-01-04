#pragma once
#include <cmath>
#include <iostream>

#include "../data_structures.hpp"
#include "../hyper_parameters.hpp"
#include "../utils.hpp"

namespace DT {

enum SearchMode { vanguard, bisect, descent, stop };

template <class FUNC>
double absgradient(FUNC &f, const double x, const double y) {
    double x2 = x + std::abs(x) * 1e-6;
    double y2 = f(x2);
    return (std::abs(y2) - std::abs(y)) / (x2 - x);
}

template <class FUNC>
double bisec_to_x(FUNC &f, double x1, double x2, const double eps) {
    double dx, xmid, rtb;
    double ff = f(x1);
    double fmid = f(x2);
    if (ff * fmid >= 0.) return 0.;
    rtb = ff < 0. ? (dx = x2 - x1, x1) : (dx = x1 - x2, x2);
    for (size_t i = 0; i < 100; i++) {
        fmid = f(xmid = rtb + (dx *= 0.5));
        if (fmid <= 0.) rtb = xmid;
        if (std::abs(xmid) < eps) return rtb;
    }
    return rtb;
}

template <class FUNC>
double bisec_to_y(FUNC &f, double x1, double x2, const double eps) {
    double dx, xmid, rtb;
    double ff = f(x1);
    double fmid = f(x2);
    if (ff * fmid >= 0.) return 0.;
    rtb = ff < 0. ? (dx = x2 - x1, x1) : (dx = x1 - x2, x2);
    for (size_t i = 0; i < 200; i++) {
        fmid = f(xmid = rtb + (dx *= 0.5));
        if (fmid <= 0.) rtb = xmid;
        if (std::abs(fmid) < eps) return rtb;
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
    VecDoub xv(1);
    xv[0] = x;
    if (!f.valid(xv)) x = xsave;
    return x;
}

template <class FUNC>
double FindRoot::find(FUNC &f, double xstart) {
    static const int MAXIT = 500;
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
                if (std::abs(xstart - xold) < 1e-14 * std::abs(xold))
                    return xstart;
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

            default:
                break;
        }
        if (searchmode == bisect) return bisec_to_y(f, xold, xstart, eps);
    }
    return xstart;
}

class RandomWalk {
   private:
    const double eps;
    const size_t max_steps = 400;
    bool is_good = false;
    double ynew, yold;
    VecDoub xold, cur_step;
    const VecDoub x1, x2;

   public:
    RandomWalk(VecDoub &xx1, VecDoub xx2, const double epss)
        : xold(xx1.size()), cur_step(xx1.size()), x1(xx1), x2(xx2), eps(epss) {
          };

    void random_step(VecDoub &x);

    void same_step(VecDoub &x);

    template <class FUNC>
    VecDoub walk(FUNC &f);

    ~RandomWalk() {};
};

template <class FUNC>
VecDoub RandomWalk::walk(FUNC &f) {
    size_t cur_step = 0;
    VecDoub xnew(f.get_parvals());
    ynew = f(xnew);
    do {
        yold = ynew;
        if (is_good) {
            xold = xnew;
            same_step(xnew);
        } else {
            xold = xnew;
            random_step(xnew);
        }
        ynew = f(xnew);
        if (std::abs(ynew) >= std::abs(yold)) {
            xnew = xold;
            ynew = yold;
            is_good = false;
        } else
            is_good = true;
        if ((cur_step % 100) == 0) {
            std::cout << "Current Step: " << cur_step << " Omega: " << f.get_omega()
                      << "\n";
        }
        cur_step++;
    } while (std::abs(ynew) > eps && (cur_step < max_steps));
    std::cout << "Steps taken: " << cur_step << std::endl;
    return xnew;
}

}  // namespace DT
