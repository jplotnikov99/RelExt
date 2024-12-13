#pragma once
#include <limits>

#include "Dopr853_consts.hpp"
#include "ODE_base.hpp"
namespace DT {
template <class D>
class StepperDopr853 : public StepperBase {
   private:
    double sk;
    ResError k2, k3, k4, k5, k6, k7, k8, k9, k10;
    ResError rcont1, rcont2, rcont3, rcont4, rcont5, rcont6, rcont7, rcont8;
    double yerr2;
    ResError dydxnew;

   public:
    typedef D Dtype;
    StepperDopr853(ResError &yy, ResError &dydxx, double &xx,
                   const double atoll, const double rtoll, const bool dens)
        : StepperBase(yy, dydxx, xx, atoll, rtoll, dens) {
        EPS = std::numeric_limits<double>::epsilon();
    }
    void step(const double htry, D &derivs);
    void dy(const double h, D &derivs);
    void prepare_dense(const double h, D &derivs);
    ResError dense_out(const double x, const double h);
    double error(const double h);
    Controller con;

    ~StepperDopr853() {};
};

template <class D>
void StepperDopr853<D>::step(const double htry, D &derivs) {
    double h = htry;
    double err;
    while (true) {
        dy(h, derivs);
        err = error(h);
        if (con.success(err, h)) break;
        if (std::abs(h) <= std::abs(x) * EPS) {
            std::cout << "Stepsize underflow in StepperDopr853\n";
            exit(1);
        }
    }
    derivs(x + h, yout, dydxnew);
    if (dense) prepare_dense(h, derivs);
    dydx = dydxnew;
    y = yout;
    xold = x;
    x += (hdid = h);
    hnext = con.hnext;
}

template <class D>
void StepperDopr853<D>::dy(const double h, D &derivs) {
    ResError ytemp;
    int i;
    ytemp = y + h * a21 * dydx;
    derivs(x + c2 * h, ytemp, k2);
    ytemp = y + h * (a31 * dydx + a32 * k2);
    derivs(x + c3 * h, ytemp, k3);
    ytemp = y + h * (a41 * dydx + a43 * k3);
    derivs(x + c4 * h, ytemp, k4);
    ytemp = y + h * (a51 * dydx + a53 * k3 + a54 * k4);
    derivs(x + c5 * h, ytemp, k5);
    ytemp = y + h * (a61 * dydx + a64 * k4 + a65 * k5);
    derivs(x + c6 * h, ytemp, k6);
    ytemp = y + h * (a71 * dydx + a74 * k4 + a75 * k5 + a76 * k6);
    derivs(x + c7 * h, ytemp, k7);
    ytemp = y + h * (a81 * dydx + a84 * k4 + a85 * k5 + a86 * k6 + a87 * k7);
    derivs(x + c8 * h, ytemp, k8);
    ytemp = y + h * (a91 * dydx + a94 * k4 + a95 * k5 + a96 * k6 + a97 * k7 +
                     a98 * k8);
    derivs(x + c9 * h, ytemp, k9);
    ytemp = y + h * (a101 * dydx + a104 * k4 + a105 * k5 + a106 * k6 +
                     a107 * k7 + a108 * k8 + a109 * k9);
    derivs(x + c10 * h, ytemp, k10);
    ytemp = y + h * (a111 * dydx + a114 * k4 + a115 * k5 + a116 * k6 +
                     a117 * k7 + a118 * k8 + a119 * k9 + a1110 * k10);
    derivs(x + c11 * h, ytemp, k2);
    double xph = x + h;
    ytemp =
        y + h * (a121 * dydx + a124 * k4 + a125 * k5 + a126 * k6 + a127 * k7 +
                 a128 * k8 + a129 * k9 + a1210 * k10 + a1211 * k2);
    derivs(xph, ytemp, k3);
    k4 = b1 * dydx + b6 * k6 + b7 * k7 + b8 * k8 + b9 * k9 + b10 * k10 +
         b11 * k2 + b12 * k3;
    yout = y + h * k4;
    yerr = k4.res - bhh1 * dydx.res - bhh2 * k9.res - bhh3 * k3.res;
    yerr2 = er1 * dydx.res + er6 * k6.res + er7 * k7.res + er8 * k8.res +
            er9 * k9.res + er10 * k10.res + er11 * k2.res + er12 * k3.res;
}

template <class D>
void StepperDopr853<D>::prepare_dense(const double h, D &derivs) {
    int i;
    ResError ydiff, bspl;
    ResError ytemp;
    rcont1 = y;
    ydiff = yout - y;
    rcont2 = ydiff;
    bspl = h * dydx - ydiff;
    rcont3 = bspl;
    rcont4 = ydiff - h * dydxnew - bspl;
    rcont5 = d41 * dydx + d46 * k6 + d47 * k7 + d48 * k8 + d49 * k9 +
             d410 * k10 + d411 * k2 + d412 * k3;
    rcont6 = d51 * dydx + d56 * k6 + d57 * k7 + d58 * k8 + d59 * k9 +
             d510 * k10 + d511 * k2 + d512 * k3;
    rcont7 = d61 * dydx + d66 * k6 + d67 * k7 + d68 * k8 + d69 * k9 +
             d610 * k10 + d611 * k2 + d612 * k3;
    rcont8 = d71 * dydx + d76 * k6 + d77 * k7 + d78 * k8 + d79 * k9 +
             d710 * k10 + d711 * k2 + d712 * k3;
    ytemp = y + h * (a141 * dydx + a147 * k7 + a148 * k8 + a149 * k9 +
                     a1410 * k10 + a1411 * k2 + a1412 * k3 + a1413 * dydxnew);
    derivs(x + c14 * h, ytemp, k10);
    ytemp = y + h * (a151 * dydx + a156 * k6 + a157 * k7 + a158 * k8 +
                     a1511 * k2 + a1512 * k3 + a1513 * dydxnew + a1514 * k10);
    derivs(x + c15 * h, ytemp, k2);
    ytemp = y + h * (a161 * dydx + a166 * k6 + a167 * k7 + a168 * k8 +
                     a169 * k9 + a1613 * dydxnew + a1614 * k10 + a1615 * k2);
    derivs(x + c16 * h, ytemp, k3);
    rcont5 = h * (rcont5 + d413 * dydxnew + d414 * k10 + d415 * k2 + d416 * k3);
    rcont6 = h * (rcont6 + d513 * dydxnew + d514 * k10 + d515 * k2 + d516 * k3);
    rcont7 = h * (rcont7 + d613 * dydxnew + d614 * k10 + d615 * k2 + d616 * k3);
    rcont8 = h * (rcont8 + d713 * dydxnew + d714 * k10 + d715 * k2 + d716 * k3);
}

template <class D>
ResError StepperDopr853<D>::dense_out(const double x, const double h) {
    double s = (x - xold) / h;
    double s1 = 1.0 - s;
    return rcont1 +
           s * (rcont2 +
                s1 * (rcont3 +
                      s * (rcont4 +
                           s1 * (rcont5 +
                                 s * (rcont6 + s1 * (rcont7 + s * rcont8))))));
}
template <class D>
double StepperDopr853<D>::error(const double h) {
    double err = 0.0, err2 = 0.0, deno;
    sk = atol + rtol * MAX(std::abs(y.res), std::abs(yout.res));
    err2 += SQR(yerr / sk);
    err += SQR(yerr2 / sk);
    deno = err + 0.01 * err2;
    if (deno <= 0.0) deno = 1.0;
    return abs(h) * err * sqrt(1.0 / deno);
}
}  // namespace DT
