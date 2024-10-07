#include "../include/mass_run.hpp"

namespace DT {
Mrun::Mrun() {
    lambda = xitla(alsmz, 0, amz);
    alsini();
}

double Mrun::B(const size_t order, const int NF) {
    double B0 = 33. - 2. * NF;
    switch (order) {
        case 0:
            return B0;
            break;
        case 1:
            return 6.0 * (153.0 - 19.0 * NF) / (B0 * B0);
            break;
        case 2:
            return 13.5 *
                   (2857.0 - 559.2222222222222 * NF +
                    12.037037037037036 * NF * NF) /
                   (B0 * B0 * B0);
            break;
        default:
            std::cout << "This B function order does not exist.\n";
            exit(1);
    }
}

double Mrun::als(const int NF, const double x, const double xlb) {
    double logx = log(x * x / (xlb * xlb));
    double llogx = log(logx);
    double als1 = 12. * M_PI / (B(0, NF) * logx);
    return als1 * ((1. - B(1, NF) * llogx / logx) +
                   (pow(B(1, NF), 2) * (llogx * llogx - llogx - 1) + B(2, NF)) /
                       (logx * logx));
}

double Mrun::XX(const size_t order, const int NF) {
    double AA = 12. * M_PI / B(0, NF);
    switch (order) {
        case 0:
            return AA;
            break;
        case 1:
            return B(1, NF) / AA;
            break;
        case 2:
            return B(2, NF) / AA;
            break;
        default:
            std::cout << "This XX function order does not exist.\n";
            exit(1);
    }
}

double Mrun::xit2(const double a, const double b, const double c,
                  const double x) {
    return a / 2. *
           (1. +
            sqrt(1. - 4. * b * log(x) *
                          (1 - (a * b * (pow(log(x), 2) - log(x) - 1) + c / b) /
                                   x / log(x))));
}

double Mrun::xitla(const double alp, const int isc, const double scale) {
    double dy, x, xx, y;
    double Q = amz;
    if (isc != 0) {
        Q = scale;
    }
    static const int NF = 5;
    double xlb = Q * exp(-XX(0, NF) / alp / 2.);
    const double a = XX(0, NF) / alp;
    const double b = XX(1, NF) * alp;
    const double c = XX(2, NF) * alp;
    do {
        x = log(Q * Q / (xlb * xlb));
        xx = xit2(a, b, c, x);
        xlb = Q * exp(-xx / 2.);
        y = als(NF, Q, xlb);
        dy = fabs((y - alp) / alp);
    } while (dy >= acc);
    return xlb;
}

double Mrun::xiter3(const double q, const double xlb1, const int NF1,
                    const double xlb, const int NF2) {
    double x, y1, y2, dy;
    double xlb2 = xlb;
    double alp = als(NF1, q, xlb1);
    const double delta = 7. * pow(alp, 2) / (M_PI * M_PI) / 24.;
    alp = NF1 < NF2 ? alp * (1 + delta) : alp / (1 + delta);
    const double a = XX(0, NF2) / alp;
    const double b = XX(1, NF2) * alp;
    const double c = XX(2, NF2) * alp;
    do {
        x = log(q * q / (xlb2 * xlb2));
        x = xit2(a, b, c, x);
        xlb2 = q * exp(-x / 2.);
        y1 = alp;
        y2 = als(NF2, q, xlb2);
        dy = fabs((y2 - y1) / y1);
    } while (dy >= acc);
    return xlb2;
}

void Mrun::alsini() {
    std::vector<double> xlb = {0, 0, 0, 0, 0, 0};
    xlb.at(4) = lambda;
    xlb.at(3) = xlb.at(4) * pow(xlb.at(4) / amb, -2. / 25.) *
                pow(2. * log(amb / xlb.at(4)), 963. / 14375.);
    xlb.at(3) = xiter3(amb, xlb.at(4), 5, xlb.at(3), 4);
    xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.) *
                pow(2. * log(amc / xlb.at(3)), 107. / 2025.);
    xlb.at(2) = xiter3(amc, xlb.at(3), 4, xlb.at(2), 3);
    xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt0, 2. / 21.) *
                pow(2. * log(amt0 / xlb.at(4)), -321. / 3381.);
    xlb.at(5) = xiter3(amt0, xlb.at(4), 5, xlb.at(5), 6);
    vxlb3 = xlb;
}

double Mrun::alphaS(const double Q) {
    std::vector<double> xlb = {0, 0, 0, 0, 0, 0};
    int NF;
    if (Q < amc) {
        NF = 3;
    } else if (Q <= amb) {
        NF = 4;
    } else if (Q <= amt0) {
        NF = 5;
    } else {
        NF = 6;
    }

    for (int i = 0; i < 6; ++i) {
        xlb[i] = vxlb3[i];
    }
    return als(NF, Q, xlb[NF - 1]);
}

double Mrun::TRAN(const double X, const double XK, const double XK2) {
    return 1.0 + 4.0 / 3.0 * alphaS(X) / M_PI + XK * pow(alphaS(X) / M_PI, 2) +
           XK2 * pow(alphaS(X) / M_PI, 3);
}

double Mrun::NB(const size_t order, const int NF) {
    const double NB0 = (33. - 2. * NF) / 12.0;
    switch (order) {
        case 0:
            return NB0;
            break;
        case 1:
            return (102. - 38. / 3. * NF) / 16.;
            break;
        case 2:
            return (2857. / 2. - 5033. / 18. * NF + 325. / 54. * NF * NF) / 64.;
            break;
        default:
            std::cout << "This NB function order does not exist.\n";
            exit(1);
    }
}

double Mrun::G(const size_t order, const int NF) {
    switch (order) {
        case 1:
            return (202. / 3. - 20. / 9. * NF) / 16.;
            break;
        case 2:
            return (1249. - (2216. / 27. + 160. / 3. * ZETA3) * NF -
                    140. / 81. * NF * NF) /
                   64.;
            break;
        default:
            std::cout << "This G function order does not exist.\n";
            exit(1);
    }
}

double Mrun::C(const size_t order, const int NF) {
    const double C1 =
        G(1, NF) / NB(0, NF) - NB(1, NF) * 1.0 / (NB(0, NF) * NB(0, NF));
    switch (order) {
        case 1:
            return C1;
            break;
        case 2:
            return (C1 * C1 + G(2, NF) / NB(0, NF) +
                    NB(1, NF) * NB(1, NF) * 1.0 /
                        (NB(0, NF) * NB(0, NF) * NB(0, NF)) -
                    NB(1, NF) * G(1, NF) / (NB(0, NF) * NB(0, NF)) -
                    NB(2, NF) * 1.0 / (NB(0, NF) * NB(0, NF))) /
                   2.0;
            break;
        default:
            std::cout << "This C function order does not exist.\n";
            exit(1);
    }
}

double Mrun::CQ(const double X, const int NF) {
    static const double G0 = 1.0;
    return pow(2.0 * NB(0, NF) * X, G0 / NB(0, NF)) *
           (1.0 + LOOP2 * C(1, NF) * X + LOOP3 * C(2, NF) * X * X);
}

double Mrun::RunM(const double q, const int NF0, const int iif) {
    double AM[NN], YMSB[NN];
    double XMSB, XMHAT, Q0, XKFAC;
    int NF = NF0;
    int no;
    static const double QQS = 2.0;
    static const double QQC = 3.0;
    acc = 1e-8;

    AM[0] = 0.0;
    AM[1] = 0.0;
    AM[2] = ams;
    AM[3] = amc;
    AM[4] = amb;
    AM[5] = amt;

    double XK = 16.11;
    for (int I = 1; I < NF; ++I) {
        XK = XK - 1.0414 * (1.0 - AM[I - 1] / AM[NF - 1]);
    }
    double XK2 = 0.65269 * (NF - 1) * (NF - 1) - 29.7010 * (NF - 1) + 239.2966;
    if (NF >= 4) {
        XMSB = AM[NF - 1] / TRAN(AM[NF - 1], XK, XK2);
        XMHAT = XMSB / CQ(alphaS(AM[NF - 1]) / M_PI, NF);
    } else {
        XMSB = 0.0;
        XMHAT = 0.0;
    }

    YMSB[0] = 0.0;
    YMSB[1] = 0.0;
    YMSB[2] = ams;

    if (NF == 3) {
        if (QQS < amc) {
            YMSB[3] = YMSB[2] * CQ(alphaS(AM[3]) / M_PI, 3) /
                      CQ(alphaS(QQS) / M_PI, 3);
        } else {
            YMSB[3] =
                ams * CQ(alphaS(AM[3]) / M_PI, 4) / CQ(alphaS(QQS) / M_PI, 4);
            YMSB[2] = YMSB[3];
        }
        YMSB[4] =
            YMSB[3] * CQ(alphaS(AM[4]) / M_PI, 4) / CQ(alphaS(AM[3]) / M_PI, 4);
        YMSB[5] =
            YMSB[4] * CQ(alphaS(AM[5]) / M_PI, 5) / CQ(alphaS(AM[4]) / M_PI, 5);
    } else if (NF == 4) {
        YMSB[3] =
            amcb * CQ(alphaS(AM[3]) / M_PI, 4) / CQ(alphaS(QQC) / M_PI, 4);
        YMSB[2] =
            YMSB[3] * CQ(alphaS(QQS) / M_PI, 3) / CQ(alphaS(AM[3]) / M_PI, 3);
        YMSB[4] =
            YMSB[3] * CQ(alphaS(AM[4]) / M_PI, 4) / CQ(alphaS(AM[3]) / M_PI, 4);
        YMSB[5] =
            YMSB[4] * CQ(alphaS(AM[5]) / M_PI, 5) / CQ(alphaS(AM[4]) / M_PI, 5);
    } else if (NF == 5) {
        YMSB[4] = XMSB;
        YMSB[3] =
            YMSB[4] * CQ(alphaS(AM[3]) / M_PI, 4) / CQ(alphaS(AM[4]) / M_PI, 4);
        YMSB[2] =
            YMSB[3] * CQ(alphaS(QQS) / M_PI, 3) / CQ(alphaS(AM[3]) / M_PI, 3);
        YMSB[5] =
            YMSB[4] * CQ(alphaS(AM[5]) / M_PI, 5) / CQ(alphaS(AM[4]) / M_PI, 5);
    } else if (NF == 6) {
        YMSB[5] = XMSB;
        YMSB[4] =
            YMSB[5] * CQ(alphaS(AM[4]) / M_PI, 5) / CQ(alphaS(AM[5]) / M_PI, 5);
        YMSB[3] =
            YMSB[4] * CQ(alphaS(AM[3]) / M_PI, 4) / CQ(alphaS(AM[4]) / M_PI, 4);
        YMSB[2] =
            YMSB[3] * CQ(alphaS(QQS) / M_PI, 3) / CQ(alphaS(AM[3]) / M_PI, 3);
    }

    if (iif == 0) {
        if (q < amc) {
            no = 3;
            Q0 = QQS;
        } else if (q <= amb) {
            no = 4;
            Q0 = amc;
        } else if (q <= amt) {
            no = 5;
            Q0 = amb;
        } else {
            no = 6;
            Q0 = amt;
        }
    } else {
        YMSB[2] = ams;
        no = NF0;
        if (no == 3) {
            Q0 = QQS;
        }
        if (no == 4) {
            Q0 = amc;
        }
        if (no == 5) {
            Q0 = amb;
        }
        if (no == 6) {
            Q0 = amt;
        }
    }

    if (NNLO == 1 && NF > 3) {
        XKFAC = TRAN(AM[NF - 1], 0.0, 0.0) / TRAN(AM[NF - 1], XK, XK2);
    } else {
        XKFAC = 1.0;
    }

    return YMSB[no - 1] * CQ(alphaS(q) / M_PI, no) / CQ(alphaS(Q0) / M_PI, no);
}

double Mrun::delQCD(const double NF, const double aS) {
    double a = aS / M_PI;
    return sqrt(1 + a * 5.6667 + (35.94 - NF) * a * a);
}

void Mrun::calc_quark_masses(const double q, double *masses[], double &aS) {
    aS = alphaS(q);
    *masses[0] = RunM(q, 3, 0);
    *masses[1] = RunM(q, 4, 0);
    *masses[2] = RunM(q, 5, 1);
    *masses[3] = RunM(q, 6, 1);
}

}  // namespace DT