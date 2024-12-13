#include "../include/numerical/ODE_base.hpp"

namespace DT {
size_t Output::get_count() { return count; }

int Output::get_kmax() { return kmax; }

bool Output::get_dense() { return dense; }

void Output::init(const double xlo, const double xhi) {
    if (kmax == -1) return;
    ysave.resize(kmax);
    if (dense) {
        x1 = xlo;
        x2 = xhi;
        xout = x1;
        dxout = (x2 - x1) / (double)nsave;
    }
}

void Output::resize() {
    int kold = kmax;
    kmax *= 2;
    VecDoub tempx(xsave);
    xsave.resize(kmax);
    for (size_t i = 0; i < kold; i++) xsave[i] = tempx[i];
    VecDoub tempy(ysave);
    ysave.resize(kmax);
    for (size_t j = 0; j < kold; j++) ysave[j] = tempy[j];
}

void Output::save(const double x, double &y) {
    if (kmax <= 0) return;
    if (count == kmax) resize();
    ysave[count] = y;
    xsave[count] = x;
    count++;
}

bool Controller::success(const double err, double &h) {
    static const double beta = 0.04, alpha = 0.2 - beta * 0.75, safe = 0.9,
                        minscale = 0.2, maxscale = 10.;
    double scale;
    if (err <= 1.) {
        if (err == 0.)
            scale = maxscale;
        else {
            scale = safe * pow(err, -alpha) * std::pow(errold, beta);
            if (scale < minscale) scale = minscale;
            if (scale > maxscale) scale = maxscale;
        }
        if (reject)
            hnext = h * MIN(scale, 1.);
        else
            hnext = h * scale;
        errold = MAX(err, 1e-4);
        reject = false;
        return true;
    } else {
        scale = MAX(safe * std::pow(err, -alpha), minscale);
        h *= scale;
        reject = true;
        return false;
    }
}
}  // namespace DT
