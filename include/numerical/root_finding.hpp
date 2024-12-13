#pragma once

namespace DT {
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
}  // namespace DT
