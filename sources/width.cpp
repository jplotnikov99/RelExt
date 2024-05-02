#include "width.hpp"

namespace DT
{
    void Width::set_alphaS(const double x)
    {
        aS = x;
    }

    double Width::Li2(const double x)
    {
        if (x > 1)
            return li2_table[200];
        if (x < -1)
            return li2_table[0];
        int i = x * 100;
        double x1 = (double)i / 100.;
        double x2 = x1 + 0.01;
        double y1 = li2_table[i + 100];
        double y2 = li2_table[i + 101];

        return linint(x, x1, x2, y1, y2);
    }

    double Width::A(const double x)
    {
        double frac = (1 - x) / (1 + x);
        return (1 + x * x) * (4 * Li2(frac) + 2 * Li2(-frac) - log(1 / frac) * (3 * log(2 / (1 + x)) + 2 * log(x))) -
               3 * x * log(4 / (1 - x * x)) - 4 * x * log(x);
    }

    double Width::Delta_phi(const double x)
    {
        double x2 = x * x;
        return A(x) / x + (3 + 34 * x2 - 13 * x2 * x2) * log((1 + x) / (1 - x)) / (16 * x * x2) + 21 / 8 - 3 / (8 * x2);
    }

    double Width::Delta_phi_mass(const double m)
    {
        double frac = m * m / (mh * mh);
        return 2 * (1 + 3 / 4. * log(1 / frac)) * (1 - 10 * frac) / (1 - 4 * frac);
    }

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
        double pre = 1 / (16 * M_PI * mh);
        double res = 1;
        m1 = ma;
        m2 = mb;
        switch (ptype1 + ptype2)
        {
        case scalar + scalar:
            if (mh < m1 + m2)
                return 0.;
            break;
        case massive_vector_boson + massive_vector_boson:
            if (mh > m1 + m2)
            {
                res *= (3 + kaellen(mh * mh, m1 * m1, m2 * m2) / (4 * m1 * m1 * m2 * m2));
            }
            else
            {
                return 0.;
            }
            break;
        case lepton + lepton:
            if (mh > m1 + m2)
            {
                res *= (mh * mh - (m1 + m2) * (m1 + m2));
            }
            else
            {
                return 0.;
            }
            break;
        case s_quark + s_quark:
            if (mh > ms_pole + ms_pole)
            {
                double a = aS / M_PI;
                double frac = m1 * m1 / (mh * mh);
                double frac_pole = ms_pole * ms_pole / (mh * mh);
                double beta = (1 - 4 * frac);
                double beta_pole = (1 - 4 * frac_pole);
                double gam_light = pre * beta * beta * coupling * mh * mh *
                                   (1 + 4 / 3. * a * (Delta_phi(sqrt(beta)) + Delta_phi_mass(m1)) + (35.94 - 3.) * a * a);
                double gam_heavy = pre * beta_pole * beta_pole * coupling * mh * mh * ms_pole * ms_pole / (m1 * m1) *
                                   (1 + 4 / 3. * a * Delta_phi(sqrt(beta_pole)));
                return 3 * (beta_pole * gam_light + 4 * ms_pole * ms_pole / (mh * mh) * gam_heavy);
            }
            else
            {
                return 0.;
            }
            break;
        case c_quark + c_quark:
            if (mh > mc_pole + mc_pole)
            {
                double a = aS / M_PI;
                double frac = m1 * m1 / (mh * mh);
                double frac_pole = mc_pole * mc_pole / (mh * mh);
                double beta = (1 - 4 * frac);
                double beta_pole = (1 - 4 * frac_pole);
                double gam_light = pre * beta * beta * coupling * mh * mh *
                                   (1 + 4 / 3. * a * (Delta_phi(sqrt(beta)) + Delta_phi_mass(m1)) + (35.94 - 4.) * a * a);
                double gam_heavy = pre * beta_pole * beta_pole * coupling * mh * mh * mc_pole * mc_pole / (m1 * m1) *
                                   (1 + 4 / 3. * a * Delta_phi(sqrt(beta_pole)));
                return 3 * (beta_pole * gam_light + 4 * mc_pole * mc_pole / (mh * mh) * gam_heavy);
            }
            else
            {
                return 0.;
            }
            break;
        case b_quark + b_quark:
            if (mh > mb_pole + mb_pole)
            {
                double a = aS / M_PI;
                double frac = m1 * m1 / (mh * mh);
                double frac_pole = mb_pole * mb_pole / (mh * mh);
                double beta = (1 - 4 * frac);
                double beta_pole = (1 - 4 * frac_pole);
                double gam_light = pre * beta * beta * coupling * mh * mh *
                                   (1 + 4 / 3. * a * (Delta_phi(sqrt(beta)) + Delta_phi_mass(m1)) + (35.94 - 5.) * a * a);
                double gam_heavy = pre * beta_pole * beta_pole * coupling * mh * mh * mb_pole * mb_pole / (m1 * m1) *
                                   (1 + 4 / 3. * a * Delta_phi(sqrt(beta_pole)));
                return 3 * (beta_pole * gam_light + 4 * mb_pole * mb_pole / (mh * mh) * gam_heavy);
            }
            else
            {
                return 0.;
            }
            break;
        case t_quark + t_quark:
            if (mh > mt_pole + mt_pole)
            {
                double a = aS / M_PI;
                double frac = m1 * m1 / (mh * mh);
                double frac_pole = mt_pole * mt_pole / (mh * mh);
                double beta = (1 - 4 * frac);
                double beta_pole = (1 - 4 * frac_pole);
                double gam_light = pre * beta * beta * coupling * mh * mh *
                                   (1 + 4 / 3. * a * (Delta_phi(sqrt(beta)) + Delta_phi_mass(m1)) + (35.94 - 6.) * a * a);
                double gam_heavy = pre * beta_pole * beta_pole * coupling * mh * mh * mt_pole * mt_pole / (m1 * m1) *
                                   (1 + 4 / 3. * a * Delta_phi(sqrt(beta_pole)));
                return 3 * (beta_pole * gam_light + 4 * mt_pole * mt_pole / (mh * mh) * gam_heavy);
            }
            else
            {
                return 0.;
            }
            break;
        case quark + quark:
            if (mh > m1 + m2)
            {
                res *= 3 * (mh * mh - (m1 + m2) * (m1 + m2));
            }
            break;
        case z_boson + z_boson:
            if (heaviDecays(mh, m1, m2))
            {
                res *= (3 + kaellen(mh * mh, m1 * m1, m2 * m2) / (4 * m1 * m1 * m2 * m2));
            }
            else if (heaviDecays(mh, m1, 0))
            {
                // times two of the literature formula since we multiply the coupling by 0.5
                double sw2 = pow(sin(thetaw), 2);
                return 6 * mh / (512 * M_PI * M_PI * M_PI * m1 * m1) * g2 * g2 * R_T(m1 * m1 / (mh * mh)) /
                       pow(cos(thetaw), 2) * (7 / 12. - 10 / 9. * sw2 + 40 / 27. * sw2 * sw2) * coupling;
            }
            else
            {
                // times two of the literature fromula since we multiply the coupling by 0.5
                Z = true;
                return mh * mh * mh / (64. * M_PI * M_PI * M_PI * m1 * m1) *
                       wz * wz * coupling * integrate_4body_gauge();
            }
            break;
        case w_boson + w_boson:
            if (heaviDecays(mh, m1, m2))
            {
                res *= (3 + kaellen(mh * mh, m1 * m1, m2 * m2) / (4. * m1 * m1 * m2 * m2));
            }
            else if (heaviDecays(mh, m1, 0))
            {
                return 3 * mh / (512 * M_PI * M_PI * M_PI * m1 * m1) * g2 * g2 * R_T(m1 * m1 / (mh * mh)) * coupling;
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
        res = res * sqrt(kaellen(1, m1 * m1 / (mh * mh), m2 * m2 / (mh * mh))) / (16 * M_PI * mh) * coupling;

        return res;
    }
} // namespace DT
