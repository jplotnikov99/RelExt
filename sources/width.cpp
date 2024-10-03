#include "width.hpp"

namespace DT {
void Width::set_alphaS(const double x) { aS = x; }

double Width::Li2(const double x) {
    if (x > 1) return li2_table[200];
    if (x < -1) return li2_table[0];
    int i = x * 100;
    double x1 = (double)i / 100.;
    double x2 = x1 + 0.01;
    double y1 = li2_table[i + 100];
    double y2 = li2_table[i + 101];

    return linint(x, x1, x2, y1, y2);
}

double Width::A(const double x) {
    double frac = (1 - x) / (1 + x);
    return (1 + x * x) * (4 * Li2(frac) + 2 * Li2(-frac) -
                          log(1 / frac) * (3 * log(2 / (1 + x)) + 2 * log(x))) -
           3 * x * log(4 / (1. - x * x)) - 4. * x * log(x);
}

double Width::Delta_phi(const double x) {
    double x2 = x * x;
    if (is_pseudo) {
        return A(x) / x +
               (19 + 2 * x2 + 3 * x2 * x2) * log((1 + x) / (1 - x)) / (16 * x) +
               21. / 8. - 3. / (8. * x2);
    } else {
        return A(x) / x +
               (3 + 34 * x2 - 13 * x2 * x2) * log((1 + x) / (1 - x)) /
                   (16 * x * x2) +
               21. / 8. - 3. / (8. * x2);
    }
}

double Width::Delta_phi_mass(const double m) {
    double frac = m * m / (mh * mh);
    return 2 * (1 + 3 / 4. * log(1 / frac)) * (1 - 10 * frac) / (1 - 4 * frac);
}

double Width::gam_light(const double m, const double NF) {
    double a = aS / M_PI;
    double delt = is_pseudo ? 3.83 - 2. * log(mh / mt_pole) +
                                  4. / 6. * pow(log(m / mh), 2)
                            : 1.57 - 4. / 3. * log(mh / mt_pole) +
                                  4. / 9. * pow(log(m / mh), 2);
    return mh * mh *
           (1 + 17 / 3. * a +
            (35.9399611978 - 1.35865070894 * NF + delt) * a * a +
            (164.14 - 25.77 * NF + 0.259 * NF * NF) * a * a * a +
            (39.34 - 220.9 * NF + 9.685 * NF * NF - 0.0205 * NF * NF * NF) * a *
                a * a * a);
}

double Width::gam_heavy(const double m_pole) {
    double a = aS / M_PI;
    int p = is_pseudo ? 1 : 3;
    double beta = 1 - 4 * m_pole * m_pole / (mh * mh);
    return pow(sqrt(beta), p) * mh * mh * m_pole * m_pole / (m1 * m1) *
           (1 + 4 / 3. * a * Delta_phi(sqrt(beta)));
}

double Width::R_T(const double x) {
    return 3 * (1 - 8 * x + 20 * x * x) / sqrt(4 * x - 1) *
               acos((3 * x - 1) / (2 * x * sqrt(x))) -
           0.5 * (1 - x) / x * (2 - 13 * x + 47 * x * x) -
           1.5 * (1 - 6 * x + 4 * x * x) * log(x);
}

double Width::gamma0_gauge_bosons(const double s1, const double s2) {
    double mh2 = mh * mh;
    double mv2 = m1 * m1;
    double lam = kaellen(1., s1 / mh2, s2 / mh2);
    if (lam < 0) lam = 0;
    double wv = Z ? wz : ww;
    double prop1 = 1 / ((s1 - mv2) * (s1 - mv2) + mv2 * wv * wv);
    double prop2 = 1 / ((s2 - mv2) * (s2 - mv2) + mv2 * wv * wv);
    double res = sqrt(lam) * (lam + 12 * s1 * s2 / (mh2 * mh2)) * prop1 * prop2;
    return res;
}

void Width::s2_evaluations(const double l, const double r, const double s1,
                           double *f) {
    f[0] = gamma0_gauge_bosons(s1, l);
    f[1] = gamma0_gauge_bosons(s1, (2 * l + r) / 3);
    f[2] = gamma0_gauge_bosons(s1, (l + 2 * r) / 3);
    f[3] = gamma0_gauge_bosons(s1, r);
}

double Width::s2_integration(const double l, const double r, const double s1,
                             double *f, size_t depth) {
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

    if (fabs(I - I3) < eps * fabs(I3) || (depth == 18)) {
        return I3;
    }

    return s2_integration(l, m, s1, f, depth + 1) +
           s2_integration(m, r, s1, f1, depth + 1);
}

double Width::s1_integration(const double l, const double r, double *f,
                             size_t depth) {
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

    if (fabs(I - I3) < eps * fabs(I3) || (depth == 18)) {
        return I3;
    }

    return s1_integration(l, m, f, depth + 1) +
           s1_integration(m, r, f1, depth + 1);
}

double Width::integrate_4body_gauge() {
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

double Width::partial_width(const ParticleType ptype1,
                            const ParticleType ptype2, const double ma,
                            const double mb, const double coupling) {
    double pre = 1 / (16 * M_PI * mh);
    double res = 1;
    m1 = ma;
    m2 = mb;
    switch (ptype1 + ptype2) {
        case scalar + scalar:
            if (mh < m1 + m2) return 0.;
            break;
        case pseudoscalar + scalar:
            if (mh < m1 + m2) return 0.;
            break;
        case pseudoscalar + pseudoscalar:
            if (mh < m1 + m2) return 0.;
            break;
        case massive_vector_boson + massive_vector_boson:
            if (mh > m1 + m2) {
                res *= (3 + kaellen(mh * mh, m1 * m1, m2 * m2) /
                                (4 * m1 * m1 * m2 * m2));
            } else {
                return 0.;
            }
            break;
        case massive_vector_boson + scalar:
            if (mh > m1 + m2) {
                res *=
                    mh * mh / 4. *
                    sqrt(kaellen(1, m1 * m1 / (mh * mh), m2 * m2 / (mh * mh))) *
                    pow(kaellen(mh * mh, m1 * m1, m2 * m2), 0.5);
            } else {
                return 0.;
            }
        case massive_vector_boson + pseudoscalar:
            if (mh > m1 + m2) {
                res *=
                    mh * mh / 4. *
                    sqrt(kaellen(1, m1 * m1 / (mh * mh), m2 * m2 / (mh * mh))) *
                    pow(kaellen(mh * mh, m1 * m1, m2 * m2), 0.5);
            } else {
                return 0.;
            }
        case lepton + lepton:
            if (mh > m1 + m2) {
                res *= is_pseudo ? 2 * mh * mh
                                 : 2 * (mh * mh - (m1 + m2) * (m1 + m2));
            } else {
                return 0.;
            }
            break;
        case s_quark + s_quark:
            if (mh > ms_pole + ms_pole) {
                double beta_pole = (1 - 4 * ms_pole * ms_pole / (mh * mh));
                double gamL = pre * coupling * gam_light(m1, 3.);
                double gamH = pre * coupling * gam_heavy(ms_pole);
                return 6 * (beta_pole * gamL +
                            4 * ms_pole * ms_pole / (mh * mh) * gamH);
            } else {
                return 0.;
            }
            break;
        case c_quark + c_quark:
            if (mh > mc_pole + mc_pole) {
                double beta_pole = (1 - 4 * mc_pole * mc_pole / (mh * mh));
                double gamL = pre * coupling * gam_light(m1, 4.);
                double gamH = pre * coupling * gam_heavy(mc_pole);
                return 6 * (beta_pole * gamL +
                            4 * mc_pole * mc_pole / (mh * mh) * gamH);
            } else {
                return 0.;
            }
            break;
        case b_quark + b_quark:
            if (mh > mb_pole + mb_pole) {
                double beta_pole = (1 - 4 * mb_pole * mb_pole / (mh * mh));
                double gamL = pre * coupling * gam_light(m1, 5.);
                double gamH = pre * coupling * gam_heavy(mb_pole);
                return 6 * (beta_pole * gamL +
                            4 * mb_pole * mb_pole / (mh * mh) * gamH);
            } else {
                return 0.;
            }
            break;
        case t_quark + t_quark:
            if (mh > mt_pole + mt_pole) {
                double beta_pole = (1 - 4 * mt_pole * mt_pole / (mh * mh));
                double gamL = pre * coupling * gam_light(m1, 6.);
                double gamH = pre * coupling * gam_heavy(mt_pole);
                return 6 * (beta_pole * gamL +
                            4 * mt_pole * mt_pole / (mh * mh) * gamH);
            } else {
                return 0.;
            }
            break;
        case quark + quark:
            if (mh > m1 + m2) {
                res *= 6 * (mh * mh - (m1 + m2) * (m1 + m2));
            }
            break;
        case z_boson + z_boson:
            if (heaviDecays(mh, m1, m2)) {
                res *= (3 + kaellen(mh * mh, m1 * m1, m2 * m2) /
                                (4 * m1 * m1 * m2 * m2));
            } else if (heaviDecays(mh, m1, 0)) {
                // times two of the literature formula since we multiply the
                // coupling by 0.5
                double sw2 = pow(sin(thetaw), 2);
                return 6 * mh / (512 * M_PI * M_PI * M_PI * m1 * m1) * g2 * g2 *
                       R_T(m1 * m1 / (mh * mh)) / pow(cos(thetaw), 2) *
                       (7 / 12. - 10 / 9. * sw2 + 40 / 27. * sw2 * sw2) *
                       coupling;
            } else {
                // times two of the literature fromula since we multiply the
                // coupling by 0.5
                Z = true;
                return mh * mh * mh / (64. * M_PI * M_PI * M_PI * m1 * m1) *
                       wz * wz * coupling * integrate_4body_gauge();
            }
            break;
        case w_boson + w_boson:
            if (heaviDecays(mh, m1, m2)) {
                res *= (3 + kaellen(mh * mh, m1 * m1, m2 * m2) /
                                (4. * m1 * m1 * m2 * m2));
            } else if (heaviDecays(mh, m1, 0)) {
                return 3 * mh / (512 * M_PI * M_PI * M_PI * m1 * m1) * g2 * g2 *
                       R_T(m1 * m1 / (mh * mh)) * coupling;
            } else {
                Z = false;
                return mh * mh * mh / (64. * M_PI * M_PI * M_PI * m1 * m1) *
                       ww * ww * coupling * integrate_4body_gauge();
            }
            break;
        case gluon + gluon: {
            // TODO: Pseudoscalar case
            const double tau = 4 * mt_pole * mt_pole / (mh * mh);
            double AQ2;
            if (tau < 1) {
                if (is_pseudo) {
                    const double logt = log(1 / (1 + sqrt(1 - tau)));
                    AQ2 = tau * tau * 1 / 16. * (M_PI * M_PI + logt * logt) *
                          (M_PI * M_PI + logt * logt);
                } else {
                    const double logt =
                        log((2 * sqrt(1 - tau) - tau + 2) / tau);
                    const double var = (tau - 1);
                    AQ2 = 9 / 64. * tau * tau *
                          (pow(M_PI * M_PI * var - 4, 2) +
                           var * logt * logt *
                               (2 * M_PI * M_PI * var + 8 + var * logt * logt));
                }
            } else {
                if (is_pseudo) {
                    const double AQ = tau * pow(asin(1 / sqrt(tau)), 2);
                    AQ2 = AQ * AQ;
                } else {
                    const double AQ =
                        3 / 2. * tau *
                        (1 + (1 - tau) * pow(asin(1 / sqrt(tau)), 2));
                    AQ2 = AQ * AQ;
                }
            }
            double a = aS / M_PI;
            double lt = log(mh * mh / (mt_pole * mt_pole));
            return is_pseudo
                       ? mh / (8 * M_PI * M_PI * M_PI) * coupling * mt_pole *
                             mt_pole / (m1 * m1) * (aS * aS) / tau * AQ2 *
                             (1 + 22.7329 * a + (171.52 + 5 * lt) * a * a)
                       : 2 * mh / (18 * M_PI * M_PI * M_PI) * (aS * aS) / tau *
                             AQ2 * coupling * mt_pole * mt_pole / (m1 * m1) *
                             (1 + 18.675 * a + (156.8 + 5.71 * lt) * a * a +
                              (521.415 + 122.443 * lt + 10.955 * lt * lt) * a *
                                  a * a);
        } break;

        default:
            break;
    }
    res = res * pre *
          sqrt(kaellen(1, m1 * m1 / (mh * mh), m2 * m2 / (mh * mh))) * coupling;

    return res;
}
}  // namespace DT
