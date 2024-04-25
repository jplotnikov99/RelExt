#include "width.hpp"

namespace DT
{
    double Width::R_T(const double x)
    {
        return 3 * (1 - 8 * x + 20 * x * x) / sqrt(4 * x - 1) * acos((3 * x - 1) / (2 * x * sqrt(x))) -
               0.5 * (1 - x) / x * (2 - 13 * x + 47 * x * x) - 1.5 * (1 - 6 * x + 4 * x * x) * log(x);
    }

    double Width::gamma0_gauge_bosons(const double s1, const double s2)
    {
        double mh2 = mh * mh;
        double mv2 = m1 * m1;
        double lam = kaellen(1., s1 / mh2, s2 / mh2);
        if (lam < 0)
            lam = 0;
        double wv = Z ? wz : ww;
        double prop1 = 1 / ((s1 - mv2) * (s1 - mv2) + mv2 * wv * wv);
        double prop2 = 1 / ((s2 - mv2) * (s2 - mv2) + mv2 * wv * wv);
        double res = sqrt(lam) * (lam + 12 * s1 * s2 / (mh2 * mh2)) * prop1 * prop2;
        if (std::isnan(res))
            std::cout << s1 << "\t" << s2 << "\t" << sqrt(lam) << "\n";
        return res;
    }

    void Width::s2_evaluations(const double l, const double r, const double s1, double *f)
    {
        f[0] = gamma0_gauge_bosons(s1, l);
        f[1] = gamma0_gauge_bosons(s1, (2 * l + r) / 3);
        f[2] = gamma0_gauge_bosons(s1, (l + 2 * r) / 3);
        f[3] = gamma0_gauge_bosons(s1, r);
    }

    double Width::s2_integration(const double l, const double r, const double s1,
                                 double *f, size_t depth)
    {
        if (l >= r)
            return 0.;
        double I1, I2, I3, f1[4];
        double m = (r + l) / 2.;
        double h = (r - l) / 8.;
        double I = h * (f[0] + 3 * f[1] + 3 * f[2] + f[3]);
        f1[0] = gamma0_gauge_bosons(s1, m);
        f1[1] = f[2];
        f1[2] = gamma0_gauge_bosons(s1, (l + 5 * r) / 6.);
        f1[3] = f[3];
        f[3] = f1[0];
        f[2] = f[1];
        f[1] = gamma0_gauge_bosons(s1, (5 * l + r) / 6.);
        I1 = h / 2 * (f[0] + 3 * f[1] + 3 * f[2] + f[3]);
        I2 = h / 2 * (f1[0] + 3 * f1[1] + 3 * f1[2] + f1[3]);
        I3 = I1 + I2;

        if (fabs(I - I3) < eps * fabs(I3) || (depth == 18))
        {
            return I3;
        }

        return s2_integration(l, m, s1, f, depth + 1) + s2_integration(m, r, s1, f1, depth + 1);
    }

    double Width::s1_integration(const double l, const double r, double *f, size_t depth)
    {
        double I1, I2, I3, f1[4], fs2[4];
        double m = (r + l) / 2.;
        double h = (r - l) / 8.;
        double I = h * (f[0] + 3 * f[1] + 3 * f[2] + f[3]);
        double x = sqrt(m);
        s2_evaluations(x * x, (mh - x) * (mh - x), x * x, fs2);
        f1[0] = s2_integration(x * x, (mh - x) * (mh - x), x * x, fs2);
        f1[1] = f[2];
        x = sqrt((l + 5 * r) / 6.);
        s2_evaluations(x * x, (mh - x) * (mh - x), x * x, fs2);
        f1[2] = s2_integration(x * x, (mh - x) * (mh - x), x * x, fs2);
        f1[3] = f[3];
        f[3] = f1[0];
        f[2] = f[1];
        x = sqrt((5 * l + r) / 6.);
        s2_evaluations(x * x, (mh - x) * (mh - x), x * x, fs2);
        f[1] = s2_integration(x * x, (mh - x) * (mh - x), x * x, fs2);
        I1 = h / 2 * (f[0] + 3 * f[1] + 3 * f[2] + f[3]);
        I2 = h / 2 * (f1[0] + 3 * f1[1] + 3 * f1[2] + f1[3]);
        I3 = I1 + I2;

        if (fabs(I - I3) < eps * fabs(I3) || (depth == 18))
        {
            return I3;
        }

        return s1_integration(l, m, f, depth + 1) + s1_integration(m, r, f1, depth + 1);
    }

    double Width::integrate_4body_gauge()
    {
        double f[4];
        double fs2[4];
        double x = 0;
        s2_evaluations(0, mh * mh, 0, fs2);
        f[0] = s2_integration(0, mh * mh, 0, fs2);
        x = mh / sqrt(12);
        s2_evaluations(x * x, (mh - x) * (mh - x), x * x, fs2);
        f[1] = s2_integration(x * x, (mh - x) * (mh - x), x * x, fs2);
        x = mh / sqrt(6);
        s2_evaluations(x * x, (mh - x) * (mh - x), x * x, fs2);
        f[2] = s2_integration(x * x, (mh - x) * (mh - x), x * x, fs2);
        x = mh / 4.;
        f[3] = 0.;
        return 2 * s1_integration(0, mh * mh / 4, f);
    }

    double Width::partial_width(const ParticleType ptype1, const ParticleType ptype2, const double ma,
                                const double mb, const double coupling)
    {
        double res = 1;
        m1 = ma;
        m2 = mb;
        switch (ptype1 + ptype2)
        {
        case scalar + scalar:
            break;
        case massive_vector_boson + massive_vector_boson:
            res *= (3 + kaellen(mh * mh, m1 * m1, m2 * m2) / (4 * m1 * m1 * m2 * m2));
            break;
        case lepton + lepton:
            res *= 2 * (mh * mh - (m1 + m2) * (m1 + m2));
            break;
        case quark + quark:
            res *= 6 * (mh * mh - (m1 + m2) * (m1 + m2));
            break;
        case z_boson + z_boson:
            if (heaviDecays(mh, m1, m2))
            {
                res *= (3 + kaellen(mh * mh, m1 * m1, m2 * m2) / (4 * m1 * m1 * m2 * m2));
            }
            else if (heaviDecays(mh, m1, 0))
            {
                double sw2 = pow(sin(thetaw), 2);
                return 3 * mh / (512 * M_PI * M_PI * M_PI * m1 * m1) * g2 * g2 * R_T(m1 * m1 / (mh * mh)) /
                       pow(cos(thetaw), 2) * (7 / 12. - 10 / 9. * sw2 + 40 / 27. * sw2 * sw2);
            }
            else
            {
                Z = true;
                return mh * mh * mh / (128. * M_PI * M_PI * M_PI * m1 * m1) *
                       wz * wz * coupling * integrate_4body_gauge();
            }
            break;
        case w_boson + w_boson:
            if (heaviDecays(mh, m1, m2))
            {
                res *= (3 + kaellen(mh * mh, m1 * m1, m2 * m2) / (4. * m1 * m1 * m2 * m2));
            }
            else if (/* heaviDecays(mh, m1, 0) */ false)
            {
                return 3 * mh / (512 * M_PI * M_PI * M_PI * m1 * m1) * g2 * g2 * R_T(m1 * m1 / (mh * mh));
            }
            else
            {
                Z = false;
                return mh * mh * mh / (64. * M_PI * M_PI * M_PI * m1 * m1) *
                       ww * ww * coupling * integrate_4body_gauge();
            }
            break;

        default:
            break;
        }
        res = res * sqrt(kaellen(mh * mh, m1 * m1, m2 * m2)) / (16 * M_PI * mh * mh * mh) * coupling;

        return res;
    }
} // namespace DT
