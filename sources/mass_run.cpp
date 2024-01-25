#include "mass_run.hpp"

namespace DT
{
    Mrun::Mrun()
    {
        lambda = xitla(nloop, alsmz);
    }

    double Mrun::B(size_t order, const int NF)
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
        double als2 = 12. * M_PI / (B(0, NF) * logx) * (1. - B(1, NF) * llogx / logx);
        if (order == 2)
        {
            return als2;
        }
        else if (order == 3)
        {
            return als2 + (pow(B(1, NF), 2) * (llogx * llogx - llogx - 1) + B(2, NF)) / (logx * logx);
        }
        std::cout << "This ALS function order does not exist.\n";
        exit(1);
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

    double Mrun::xitla(int no, double alp)
    {
        double dy, x, xx, y;
        double mz = 91.1876;
        int NF = 5;
        double xlb = mz * exp(-XX(0, NF) / alp / 2.);
        if (no == 1)
        {
            return xlb;
        }
        double a = XX(0, NF) / alp;
        double b = XX(1, NF) * alp;
        double c = XX(2, NF) * alp;
        do
        {
            x = log(mz * mz / (xlb * xlb));
            if (no == 2)
            {
                xx = xit(a, b, x);
                xlb = mz * exp(-xx / 2.);
                y = als(2, NF, mz, xlb);
            }
            else
            {
                xx = xit2(a, b, c, x);
                xlb = mz * exp(-xx / 2.);
                y = als(3, NF, mz, xlb);
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
        } while (dy > acc);
        return xlb2;
    }

    double Mrun::xiter3(double q, double xlb1, int NF1, double xlb, int NF2)
    {
        double x, y1, y2, dy;
        double xlb2 = xlb;
        double alp = als(3, NF1, q, xlb1);
        double delta = delta = 7. * pow(alp, 2) / (M_PI * M_PI) / 24.;
        alp = NF1 > NF2 ? alp * (1 + delta) : alp / (1 + delta);
        double a = XX(0, NF2) / alp;
        double b = XX(1, NF2) * alp;
        double c = XX(2, NF2) * alp;

        do
        {
            x = log(q * q / (xlb2 * xlb2));
            x = xit2(a, b, c, x);
            xlb2 = q * exp(-x / 2.);
            y1 = alp;
            y2 = als(3, NF2, 1, xlb2);
            dy = fabs((y2 - y1) / y1);
        } while (dy > acc);
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
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt, 2. / 21.);
            break;
        case 4:
            xlb.at(3) = lambda;
            xlb.at(4) = xlb.at(3) * pow(xlb.at(3) / amb, 2. / 23.);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt, 2. / 21.);
            break;
        case 5:
            xlb.at(4) = lambda;
            xlb.at(3) = xlb.at(4) * pow(xlb.at(4) / amb, -2. / 25.);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt, 2. / 21.);
            break;
        case 6:
            xlb.at(5) = lambda;
            xlb.at(4) = xlb.at(5) * pow(xlb.at(5) / amt, -2. / 23.);
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
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt, 2. / 21.) * pow(2. * log(amt / xlb.at(4)), -321. / 3381.);
            xlb.at(5) = xiter(amt, xlb.at(4), 5, xlb.at(5), 6);
            break;
        case 4:
            xlb.at(3) = lambda;
            xlb.at(4) = xlb.at(3) * pow(xlb.at(3) / amb, 2. / 23.) * pow(2. * log(amb / xlb.at(3)), -963. / 13225.);
            xlb.at(4) = xiter(amb, xlb.at(3), 4, xlb.at(4), 5);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.) * pow(2. * log(amc / xlb.at(3)), 107. / 2025.);
            xlb.at(2) = xiter(amc, xlb.at(3), 4, xlb.at(2), 3);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt, 2. / 21.) * pow(2. * log(amt / xlb.at(4)), -321. / 3381.);
            xlb.at(5) = xiter(amt, xlb.at(4), 5, xlb.at(5), 6);
            break;
        case 5:
            xlb.at(4) = lambda;
            xlb.at(3) = xlb.at(4) * pow(xlb.at(4) / amb, -2. / 25.) * pow(2. * log(amb / xlb.at(4)), 963. / 14375.);
            xlb.at(3) = xiter(amb, xlb.at(4), 5, xlb.at(3), 4);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.) * pow(2. * log(amc / xlb.at(3)), 107. / 2025.);
            xlb.at(2) = xiter(amc, xlb.at(3), 4, xlb.at(2), 3);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt, 2. / 21.) * pow(2. * log(amt / xlb.at(4)), -321. / 3381.);
            xlb.at(5) = xiter(amt, xlb.at(4), 5, xlb.at(5), 6);
            break;
        case 6:
            xlb.at(5) = lambda;
            xlb.at(4) = xlb.at(5) * pow(xlb.at(5) / amt, -2. / 23.) * pow(2. * log(amt / xlb.at(5)), 321. / 3703.);
            xlb.at(4) = xiter(amt, xlb.at(5), 6, xlb.at(4), 5);
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
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt, 2. / 21.) * pow(2. * log(amt / xlb.at(4)), -321. / 3381.);
            xlb.at(5) = xiter3(amt, xlb.at(4), 5, xlb.at(5), 6);
            break;
        case 4:
            xlb.at(3) = lambda;
            xlb.at(4) = xlb.at(3) * pow(xlb.at(3) / amb, 2. / 23.) * pow(2. * log(amb / xlb.at(3)), -963. / 13225.);
            xlb.at(4) = xiter3(amb, xlb.at(3), 4, xlb.at(4), 5);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.) * pow(2. * log(amc / xlb.at(3)), 107. / 2025.);
            xlb.at(2) = xiter3(amc, xlb.at(3), 4, xlb.at(2), 3);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt, 2. / 21.) * pow(2. * log(amt / xlb.at(4)), -321. / 3381.);
            xlb.at(5) = xiter3(amt, xlb.at(4), 5, xlb.at(5), 6);
            break;
        case 5:
            xlb.at(4) = lambda;
            xlb.at(3) = xlb.at(4) * pow(xlb.at(4) / amb, -2. / 25.) * pow(2. * log(amb / xlb.at(4)), 963. / 14375.);
            xlb.at(3) = xiter3(amb, xlb.at(4), 5, xlb.at(3), 4);
            xlb.at(2) = xlb.at(3) * pow(xlb.at(3) / amc, -2. / 27.) * pow(2. * log(amc / xlb.at(3)), 107. / 2025.);
            xlb.at(2) = xiter3(amc, xlb.at(3), 4, xlb.at(2), 3);
            xlb.at(5) = xlb.at(4) * pow(xlb.at(4) / amt, 2. / 21.) * pow(2. * log(amt / xlb.at(4)), -321. / 3381.);
            xlb.at(5) = xiter3(amt, xlb.at(4), 5, xlb.at(5), 6);
            break;
        case 6:
            xlb.at(5) = lambda;
            xlb.at(4) = xlb.at(5) * pow(xlb.at(5) / amt, -2. / 23.) * pow(2. * log(amt / xlb.at(5)), 321. / 3703.);
            xlb.at(4) = xiter3(amt, xlb.at(5), 6, xlb.at(4), 5);
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
} // namespace DT
