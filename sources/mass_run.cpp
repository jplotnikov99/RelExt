#include "mass_run.hpp"

namespace DT
{

    double Mrun::B(size_t order, int NF)
    {
        double B0 = 33. - 2. * NF;
        switch (order)
        {
        case 0:
            return B0;
            break;
        case 1:
            return 6.0 * (153.0 - 19.0 * NF) / (B0 * B0);
            break;
        case 2:
            return 13.5 *
                   (2857.0 - 559.2222222222222 * NF + 12.037037037037036 * NF * NF) /
                   (B0 * B0 * B0);
            break;
        default:
            std::cout << "This B function order does not exist.\n";
            exit(1);
        }
    }

    double Mrun::als(size_t order, int NF, double x, double xlb)
    {
        double logx = log(x * x / (xlb * xlb));
        double llogx = log(logx);
        double als1 = 12. * M_PI / (B(0, NF) * logx);
        switch (order)
        {
        case 1:
            return als1;
        case 2:
            return als1 * (1. - B(1, NF) * llogx / logx);
        case 3:
            return als1 * ((1. - B(1, NF) * llogx / logx) + (pow(B(1, NF), 2) * (llogx * llogx - llogx - 1) + B(2, NF)) / (logx * logx));
        default:
            std::cout << "this loop order does not exist in xitla" << std::endl;
            exit(1);
        }
    }

    double Mrun::XX(size_t order, int NF)
    {
        double AA = 12. * M_PI / B(0, NF);
        switch (order)
        {
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

    double Mrun::xit(double a, double b, double x)
    {
        return a / 2. * (1. + sqrt(1. - 4. * b * log(x)));
    }

    double Mrun::xit2(double a, double b, double c, double x)
    {
        return a / 2. * (1. + sqrt(1. - 4. * b * log(x) * (1 - (a * b * (pow(log(x), 2) - log(x) - 1) + c / b) / x / log(x))));
    }

    double Mrun::xitla(int no, double alp, int isc, double scale)
    {
        double dy, x, xx, y;
        double Q = amz;
        if (isc != 0)
        {
            Q = scale;
        }
        int NF = 5;
        double xlb = Q * exp(-XX(0, NF) / alp / 2.);

        if (no == 1)
        {
            return xlb;
        }
        double a = XX(0, NF) / alp;
        double b = XX(1, NF) * alp;
        double c = XX(2, NF) * alp;
        do
        {
            x = log(Q * Q / (xlb * xlb));
            if (no == 2)
            {
                xx = xit(a, b, x);
                xlb = Q * exp(-xx / 2.);
                y = als(2, NF, Q, xlb);
            }
            else
            {
                xx = xit2(a, b, c, x);
                xlb = Q * exp(-xx / 2.);
                y = als(3, NF, Q, xlb);
            }
            dy = fabs((y - alp) / alp);

        } while (dy >= acc);

        return xlb;
    }

    double Mrun::xiter(double q, double xlb1, int NF1, double xlb, int NF2)
    {
        double x, y1, y2, dy;
        double xlb2 = xlb;
        double alp = als(2, NF1, q, xlb1);
        double a = XX(0, NF2) / alp;
        double b = XX(1, NF2) * alp;
        do
        {
            x = log(q * q / (xlb2 * xlb2));
            x = xit(a, b, x);
            xlb2 = q * exp(-x / 2.);
            y1 = als(2, NF1, q, xlb1);
            y2 = als(2, NF2, q, xlb2);
            dy = fabs((y2 - y1) / y1);
        } while (dy >= acc);
        return xlb2;
    }

    double Mrun::xiter3(double q, double xlb1, int NF1, double xlb, int NF2)
    {
        double x, y1, y2, dy;
        double xlb2 = xlb;
        double alp = als(3, NF1, q, xlb1);
        double delta = 7. * pow(alp, 2) / (M_PI * M_PI) / 24.;
        alp = NF1 < NF2 ? alp * (1 + delta) : alp / (1 + delta);
        double a = XX(0, NF2) / alp;
        double b = XX(1, NF2) * alp;
        double c = XX(2, NF2) * alp;

        do
        {
            x = log(q * q / (xlb2 * xlb2));
            x = xit2(a, b, c, x);
            xlb2 = q * exp(-x / 2.);
            y1 = alp;
            y2 = als(3, NF2, q, xlb2);
            dy = fabs((y2 - y1) / y1);
        } while (dy >= acc);
        return xlb2;
    }

    void Mrun::alsini(size_t no)
    {
        std::vector<double> xlb = {0, 0, 0, 0, 0, 0};

        switch (no)
        {
        case 3:
            xlb.at(2) = lambda;
            xlb.at(3) = xlb.at(2) * pow(xlb.at(2) / amc, 2. / 25.);
            xlb.at(4) = xlb.at(3) * pow(xlb.at(3) / amb, 2. / 23.);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt0, 2. / 21.);
            break;
        case 4:
            xlb.at(3) = lambda;
            xlb.at(4) = xlb.at(3) * pow(xlb.at(3) / amb, 2. / 23.);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt0, 2. / 21.);
            break;
        case 5:
            xlb.at(4) = lambda;
            xlb.at(3) = xlb.at(4) * pow(xlb.at(4) / amb, -2. / 25.);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt0, 2. / 21.);
            break;
        case 6:
            xlb.at(5) = lambda;
            xlb.at(4) = xlb.at(5) * pow(xlb.at(5) / amt0, -2. / 23.);
            xlb.at(3) = xlb.at(4) * pow(xlb.at(4) / amb, -2. / 25.);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.);
            break;
        default:
            std::cout << "Wrong case call in alsini.";
            exit(1);
            break;
        }

        vxlb1 = xlb;

        switch (no)
        {
        case 3:
            xlb.at(2) = lambda;
            xlb.at(3) = xlb.at(2) * pow(xlb.at(2) / amc, 2. / 25.) * pow(2. * log(amc / xlb.at(2)), -107. / 1875.);
            xlb.at(3) = xiter(amc, xlb.at(2), 3, xlb.at(3), 4);
            xlb.at(4) = xlb.at(3) * pow(xlb.at(3) / amb, 2. / 23.) * pow(2. * log(amb / xlb.at(3)), -963. / 13225.);
            xlb.at(4) = xiter(amb, xlb.at(3), 4, xlb.at(4), 5);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt0, 2. / 21.) * pow(2. * log(amt0 / xlb.at(4)), -321. / 3381.);
            xlb.at(5) = xiter(amt0, xlb.at(4), 5, xlb.at(5), 6);
            break;
        case 4:
            xlb.at(3) = lambda;
            xlb.at(4) = xlb.at(3) * pow(xlb.at(3) / amb, 2. / 23.) * pow(2. * log(amb / xlb.at(3)), -963. / 13225.);
            xlb.at(4) = xiter(amb, xlb.at(3), 4, xlb.at(4), 5);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.) * pow(2. * log(amc / xlb.at(3)), 107. / 2025.);
            xlb.at(2) = xiter(amc, xlb.at(3), 4, xlb.at(2), 3);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt0, 2. / 21.) * pow(2. * log(amt0 / xlb.at(4)), -321. / 3381.);
            xlb.at(5) = xiter(amt0, xlb.at(4), 5, xlb.at(5), 6);
            break;
        case 5:
            xlb.at(4) = lambda;
            xlb.at(3) = xlb.at(4) * pow(xlb.at(4) / amb, -2. / 25.) * pow(2. * log(amb / xlb.at(4)), 963. / 14375.);
            xlb.at(3) = xiter(amb, xlb.at(4), 5, xlb.at(3), 4);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.) * pow(2. * log(amc / xlb.at(3)), 107. / 2025.);
            xlb.at(2) = xiter(amc, xlb.at(3), 4, xlb.at(2), 3);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt0, 2. / 21.) * pow(2. * log(amt0 / xlb.at(4)), -321. / 3381.);
            xlb.at(5) = xiter(amt0, xlb.at(4), 5, xlb.at(5), 6);
            break;
        case 6:
            xlb.at(5) = lambda;
            xlb.at(4) = xlb.at(5) * pow(xlb.at(5) / amt0, -2. / 23.) * pow(2. * log(amt0 / xlb.at(5)), 321. / 3703.);
            xlb.at(4) = xiter(amt0, xlb.at(5), 6, xlb.at(4), 5);
            xlb.at(3) = xlb.at(4) * pow(xlb.at(4) / amb, -2. / 25.) * pow(2. * log(amb / xlb.at(4)), 963. / 14375.);
            xlb.at(3) = xiter(amb, xlb.at(4), 5, xlb.at(3), 4);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.) * pow(2. * log(amc / xlb.at(3)), 107. / 2025.);
            xlb.at(2) = xiter(amc, xlb.at(3), 4, xlb.at(2), 3);
            break;
        default:
            std::cout << "Wrong case call in alsini.";
            exit(1);
            break;
        }

        vxlb2 = xlb;

        switch (no)
        {
        case 3:
            xlb.at(2) = lambda;
            xlb.at(3) = xlb.at(2) * pow(xlb.at(2) / amc, 2. / 25.) * pow(2. * log(amc / xlb.at(2)), -107. / 1875.);
            xlb.at(3) = xiter3(amc, xlb.at(2), 3, xlb.at(3), 4);
            xlb.at(4) = xlb.at(3) * pow(xlb.at(3) / amb, 2. / 23.) * pow(2. * log(amb / xlb.at(3)), -963. / 13225.);
            xlb.at(4) = xiter3(amb, xlb.at(3), 4, xlb.at(4), 5);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt0, 2. / 21.) * pow(2. * log(amt0 / xlb.at(4)), -321. / 3381.);
            xlb.at(5) = xiter3(amt0, xlb.at(4), 5, xlb.at(5), 6);
            break;
        case 4:
            xlb.at(3) = lambda;
            xlb.at(4) = xlb.at(3) * pow(xlb.at(3) / amb, 2. / 23.) * pow(2. * log(amb / xlb.at(3)), -963. / 13225.);
            xlb.at(4) = xiter3(amb, xlb.at(3), 4, xlb.at(4), 5);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.) * pow(2. * log(amc / xlb.at(3)), 107. / 2025.);
            xlb.at(2) = xiter3(amc, xlb.at(3), 4, xlb.at(2), 3);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt0, 2. / 21.) * pow(2. * log(amt0 / xlb.at(4)), -321. / 3381.);
            xlb.at(5) = xiter3(amt0, xlb.at(4), 5, xlb.at(5), 6);
            break;
        case 5:
            xlb.at(4) = lambda;
            xlb.at(3) = xlb.at(4) * pow(xlb.at(4) / amb, -2. / 25.) * pow(2. * log(amb / xlb.at(4)), 963. / 14375.);
            xlb.at(3) = xiter3(amb, xlb.at(4), 5, xlb.at(3), 4);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.) * pow(2. * log(amc / xlb.at(3)), 107. / 2025.);
            xlb.at(2) = xiter3(amc, xlb.at(3), 4, xlb.at(2), 3);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt0, 2. / 21.) * pow(2. * log(amt0 / xlb.at(4)), -321. / 3381.);
            xlb.at(5) = xiter3(amt0, xlb.at(4), 5, xlb.at(5), 6);
            break;
        case 6:
            xlb.at(5) = lambda;
            xlb.at(4) = xlb.at(5) * pow(xlb.at(5) / amt0, -2. / 23.) * pow(2. * log(amt0 / xlb.at(5)), 321. / 3703.);
            xlb.at(4) = xiter3(amt0, xlb.at(5), 6, xlb.at(4), 5);
            xlb.at(3) = xlb.at(4) * pow(xlb.at(4) / amb, -2. / 25.) * pow(2. * log(amb / xlb.at(4)), 963. / 14375.);
            xlb.at(3) = xiter3(amb, xlb.at(4), 5, xlb.at(3), 4);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.) * pow(2. * log(amc / xlb.at(3)), 107. / 2025.);
            xlb.at(2) = xiter3(amc, xlb.at(3), 4, xlb.at(2), 3);
            break;
        default:
            std::cout << "Wrong case call in alsini.";
            exit(1);
            break;
        }

        vxlb3 = xlb;
    }

    double Mrun::alphaS(double Q, int N)
    {
        std::vector<double> xlb = {0, 0, 0, 0, 0, 0};
        int NF;
        if (Q < amc)
        {
            NF = 3;
        }
        else if (Q <= amb)
        {
            NF = 4;
        }
        // else if (Q <= amt) // this is how we think it should be
        else if (Q <= amt0) // this is how it is in the fortran code
        {
            NF = 5;
        }
        else
        {
            NF = 6;
        }

        if (N == 1)
        {
            for (int i = 0; i < 6; ++i)
            {
                xlb[i] = vxlb1[i];
            }
            return als(1, NF, Q, xlb[NF - 1]);
        }
        else if (N == 2)
        {
            for (int i = 0; i < 6; ++i)
            {
                xlb[i] = vxlb2[i];
            }
            return als(2, NF, Q, xlb[NF - 1]);
        }
        else
        {
            for (int i = 0; i < 6; ++i)
            {
                xlb[i] = vxlb3[i];
            }
            return als(3, NF, Q, xlb[NF - 1]);
        }
    }

    double Mrun::TRAN(double X, double XK, double XK2)
    {
        return 1.0 + 4.0 / 3.0 * alphaS(X, 3) / M_PI + XK * pow(alphaS(X, 3) / M_PI, 2) + XK2 * pow(alphaS(X, 3) / M_PI, 3);
    }

    double Mrun::NB(size_t order, int NF)
    {
        double NB0 = (33. - 2. * NF) / 12.0;
        switch (order)
        {
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

    double Mrun::G(size_t order, int NF)
    {
        switch (order)
        {
        case 1:
            return (202. / 3. - 20. / 9. * NF) / 16.;
            break;
        case 2:
            return (1249. - (2216. / 27. + 160. / 3. * ZETA3) * NF - 140. / 81. * NF * NF) / 64.;
            break;
        default:
            std::cout << "This G function order does not exist.\n";
            exit(1);
        }
    }

    double Mrun::C(size_t order, int NF)
    {
        double C1 = G(1, NF) / NB(0, NF) - NB(1, NF) * 1.0 / (NB(0, NF) * NB(0, NF));
        switch (order)
        {
        case 1:
            return C1;
            break;
        case 2:
            return (C1 * C1 + G(2, NF) / NB(0, NF) + NB(1, NF) * NB(1, NF) * 1.0 / (NB(0, NF) * NB(0, NF) * NB(0, NF)) - NB(1, NF) * G(1, NF) / (NB(0, NF) * NB(0, NF)) - NB(2, NF) * 1.0 / (NB(0, NF) * NB(0, NF))) / 2.0;
            break;
        default:
            std::cout << "This C function order does not exist.\n";
            exit(1);
        }
    }

    double Mrun::CQ(double X, int NF)
    {
        double G0 = 1.0;
        return pow(2.0 * NB(0, NF) * X, G0 / NB(0, NF)) * (1.0 + LOOP2 * C(1, NF) * X + LOOP3 * C(2, NF) * X * X);
    }

    double Mrun::RunM(double q, int NF0, size_t no, int iif)
    {
        double AM[NN], YMSB[NN];
        double XMSB, XMHAT, Q0, XKFAC;
        int NF = NF0;
        double QQS = 2.0;
        double QQC = 3.0;
        acc = 1e-8;

        AM[0] = 0.0;
        AM[1] = 0.0;
        AM[2] = amsb;
        AM[3] = amc;
        AM[4] = amb;
        AM[5] = amt;
        AM[6] = 100 * amt;
        AM[7] = 200 * amt;

        double XK = 16.11;
        for (int I = 1; I < NF; ++I)
        {
            XK = XK - 1.0414 * (1.0 - AM[I - 1] / AM[NF - 1]);
        }
        double XK2 = 0.65269 * (NF - 1) * (NF - 1) - 29.7010 * (NF - 1) + 239.2966;
        if (NF >= 4)
        {
            XMSB = AM[NF - 1] / TRAN(AM[NF - 1], XK, XK2);
            XMHAT = XMSB / CQ(alphaS(AM[NF - 1], 3) / M_PI, NF);
        }
        else
        {
            XMSB = 0.0;
            XMHAT = 0.0;
        }

        YMSB[0] = 0.0;
        YMSB[1] = 0.0;
        YMSB[2] = amsb;

        if (NF == 3)
        {
            if (QQS < amc)
            {
                YMSB[3] = YMSB[2] * CQ(alphaS(AM[3], 3) / M_PI, 3) / CQ(alphaS(QQS, 3) / M_PI, 3);
            }
            else
            {
                YMSB[3] = amsb * CQ(alphaS(AM[3], 3) / M_PI, 4) / CQ(alphaS(QQS, 3) / M_PI, 4);
                YMSB[2] = YMSB[3];
            }
            YMSB[4] = YMSB[3] * CQ(alphaS(AM[4], 3) / M_PI, 4) / CQ(alphaS(AM[3], 3) / M_PI, 4);
            YMSB[5] = YMSB[4] * CQ(alphaS(AM[5], 3) / M_PI, 5) / CQ(alphaS(AM[4], 3) / M_PI, 5);
            YMSB[6] = YMSB[5] * CQ(alphaS(AM[6], 3) / M_PI, 6) / CQ(alphaS(AM[5], 3) / M_PI, 6);
            YMSB[7] = YMSB[6] * CQ(alphaS(AM[7], 3) / M_PI, 7) / CQ(alphaS(AM[6], 3) / M_PI, 7);
        }
        else if (NF == 4)
        {
            YMSB[3] = amcb * CQ(alphaS(AM[3], 3) / M_PI, 4) / CQ(alphaS(QQC, 3) / M_PI, 4);
            YMSB[2] = YMSB[3] * CQ(alphaS(QQS, 3) / M_PI, 3) / CQ(alphaS(AM[3], 3) / M_PI, 3);
            YMSB[4] = YMSB[3] * CQ(alphaS(AM[4], 3) / M_PI, 4) / CQ(alphaS(AM[3], 3) / M_PI, 4);
            YMSB[5] = YMSB[4] * CQ(alphaS(AM[5], 3) / M_PI, 5) / CQ(alphaS(AM[4], 3) / M_PI, 5);
            YMSB[6] = YMSB[5] * CQ(alphaS(AM[6], 3) / M_PI, 6) / CQ(alphaS(AM[5], 3) / M_PI, 6);
            YMSB[7] = YMSB[6] * CQ(alphaS(AM[7], 3) / M_PI, 7) / CQ(alphaS(AM[6], 3) / M_PI, 7);
        }
        else if (NF == 5)
        {
            YMSB[4] = XMSB;
            YMSB[3] = YMSB[4] * CQ(alphaS(AM[3], 3) / M_PI, 4) / CQ(alphaS(AM[4], 3) / M_PI, 4);
            YMSB[2] = YMSB[3] * CQ(alphaS(QQS, 3) / M_PI, 3) / CQ(alphaS(AM[3], 3) / M_PI, 3);
            YMSB[5] = YMSB[4] * CQ(alphaS(AM[5], 3) / M_PI, 5) / CQ(alphaS(AM[4], 3) / M_PI, 5);
            YMSB[6] = YMSB[5] * CQ(alphaS(AM[6], 3) / M_PI, 6) / CQ(alphaS(AM[5], 3) / M_PI, 6);
            YMSB[7] = YMSB[6] * CQ(alphaS(AM[7], 3) / M_PI, 7) / CQ(alphaS(AM[6], 3) / M_PI, 7);
        }
        else if (NF == 6)
        {
            YMSB[5] = XMSB;
            YMSB[4] = YMSB[5] * CQ(alphaS(AM[4], 3) / M_PI, 5) / CQ(alphaS(AM[5], 3) / M_PI, 5);
            YMSB[3] = YMSB[4] * CQ(alphaS(AM[3], 3) / M_PI, 4) / CQ(alphaS(AM[4], 3) / M_PI, 4);
            YMSB[2] = YMSB[3] * CQ(alphaS(QQS, 3) / M_PI, 3) / CQ(alphaS(AM[3], 3) / M_PI, 3);
            YMSB[6] = YMSB[5] * CQ(alphaS(AM[6], 3) / M_PI, 6) / CQ(alphaS(AM[5], 3) / M_PI, 6);
            YMSB[7] = YMSB[6] * CQ(alphaS(AM[7], 3) / M_PI, 7) / CQ(alphaS(AM[6], 3) / M_PI, 7);
        }
        else if (NF == 7)
        {
            YMSB[6] = XMSB;
            YMSB[5] = YMSB[6] * CQ(alphaS(AM[5], 3) / M_PI, 6) / CQ(alphaS(AM[6], 3) / M_PI, 6);
            YMSB[4] = YMSB[5] * CQ(alphaS(AM[4], 3) / M_PI, 5) / CQ(alphaS(AM[5], 3) / M_PI, 5);
            YMSB[3] = YMSB[4] * CQ(alphaS(AM[3], 3) / M_PI, 4) / CQ(alphaS(AM[4], 3) / M_PI, 4);
            YMSB[2] = YMSB[3] * CQ(alphaS(QQS, 3) / M_PI, 3) / CQ(alphaS(AM[3], 3) / M_PI, 3);
            YMSB[7] = YMSB[6] * CQ(alphaS(AM[7], 3) / M_PI, 7) / CQ(alphaS(AM[6], 3) / M_PI, 7);
        }
        else if (NF == 8)
        {
            YMSB[7] = XMSB;
            YMSB[6] = YMSB[7] * CQ(alphaS(AM[6], 3) / M_PI, 7) / CQ(alphaS(AM[7], 3) / M_PI, 7);
            YMSB[5] = YMSB[6] * CQ(alphaS(AM[5], 3) / M_PI, 6) / CQ(alphaS(AM[6], 3) / M_PI, 6);
            YMSB[4] = YMSB[5] * CQ(alphaS(AM[4], 3) / M_PI, 5) / CQ(alphaS(AM[5], 3) / M_PI, 5);
            YMSB[3] = YMSB[4] * CQ(alphaS(AM[3], 3) / M_PI, 4) / CQ(alphaS(AM[4], 3) / M_PI, 4);
            YMSB[2] = YMSB[3] * CQ(alphaS(QQS, 3) / M_PI, 3) / CQ(alphaS(AM[3], 3) / M_PI, 3);
        }

        if (iif == 0)
        {
            if (q < amc)
            {
                no = 3;
                Q0 = QQS;
            }
            else if (q <= amb)
            {
                no = 4;
                Q0 = amc;
            }
            else if (q <= amt)
            {
                no = 5;
                Q0 = amb;
            }
            else
            {
                no = 6;
                Q0 = amt;
            }
        }
        else
        {
            YMSB[2] = amsb;
            no = NF0;
            if (no == 3)
            {
                Q0 = QQS;
            }
            if (no == 4)
            {
                Q0 = amc;
            }
            if (no == 5)
            {
                Q0 = amb;
            }
            if (no == 6)
            {
                Q0 = amt;
            }
        }

        if (NNLO == 1 && NF > 3)
        {
            XKFAC = TRAN(AM[NF - 1], 0.0, 0.0) / TRAN(AM[NF - 1], XK, XK2);
        }
        else
        {
            XKFAC = 1.0;
        }

        return YMSB[no - 1] * CQ(alphaS(q, 3) / M_PI, no) / CQ(alphaS(Q0, 3) / M_PI, no);
    }

    Mrun::Mrun()
    {
        amsb = ams;
        lambda = xitla(nloop, alsmz, 0, amz);
        N0 = 5;
        NalphaS = 3;
        alsini(N0);
    }

    void Mrun::calc_quark_masses(const double q, double *masses[], double &aS)
    {
        *masses[0] = RunM(q, 3, N0, 0);
        *masses[1] = RunM(q, 4, N0, 0);
        *masses[2] = RunM(q, 5, N0, 1);
        *masses[3] = RunM(q, 6, N0, 1);
        aS = alphaS(q, NalphaS);
    }

} // namespace DT