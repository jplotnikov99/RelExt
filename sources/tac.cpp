#include "../include/tac.hpp"

namespace DT {

void SigvInt::set_x(const double new_x) { x = new_x; }

void SigvInt::set_lower_bound(const double new_lower) {
    lower_bound = new_lower;
}

void SigvInt::set_dsmasses(const std::vector<double> &masses) {
    polK2s.resize(masses.size());
}

double SigvInt::xsec(const double &s, const std::string &channel) {
    double m1, m2, m3, m4;
    AA.set_channel({channel}, false);
    AA.assign_masses(m1, m2, channel);
    AA.set_s(s);
    if (sqrt(s) < m1 + m2) {
        return 0.;
    }
    AA.get_channel_masses(m1, m2, m3, m4, channel);

    double f_est[10];
    for (size_t i = 0; i < 10; i++) {
        f_est[i] = AA(-1 + 0.2222222222222222 * i);
    }
    double est = simpson_est(-1, 1, f_est);
    double f[4];
    f[0] = f_est[0];
    f[1] = f_est[3];
    f[2] = f_est[6];
    f[3] = f_est[9];
    return 1 / (32 * M_PI * s) *
           sqrt(kaellen(s, m3 * m3, m4 * m4) / kaellen(s, m1 * m1, m2 * m2)) *
           h_adap_simpson38(AA, -1, 1, f, est, theta_eps);
}

double SigvInt::wij(const double &s) {
    if (sig_s.count(s) == 0) {
        AA.set_s(s);
        double f_est[10];
        for (size_t i = 0; i < 10; i++) {
            f_est[i] = AA(-1 + 0.2222222222222222 * i);
        }
        double est = simpson_est(-1, 1, f_est);
        double f[4];
        f[0] = f_est[0];
        f[1] = f_est[3];
        f[2] = f_est[6];
        f[3] = f_est[9];
        double crs = 1 / (256 * M_PI * s * sqrt(s)) *
                     h_adap_simpson38(AA, -1, 1, f, est, theta_eps);
        sig_s[s] = crs;
        return crs;
    } else {
        return sig_s.at(s);
    }
}

void SigvInt::calc_polK2() {
    double Tinv = x / AA.MDM;
    double mtemp, cur;
    size_t i = 0;
    for (auto it : AA.bath_masses) {
        mtemp = *AA.DSmasses[it];
        cur = AA.DSdof[it] * mtemp * mtemp * polK2(Tinv * mtemp);
        polK2s[i] = cur;
        i++;
    }
}

double SigvInt::lipsv(const double &s) {
    size_t i = 0;
    double num = 0.;
    double den = 0.;
    double mtemp;
    double sqs = sqrt(s);
    double Tinv = x / AA.MDM;

    if (x > 5) {
        num += Tinv * polK1(sqs * Tinv);
        for (auto it : AA.bath_masses) {
            mtemp = *AA.DSmasses[it];
            den += exp(-Tinv * (mtemp - sqs / 2)) * polK2s[i];
            i++;
        }
        den *= den;
    } else {
        // if (sqs * Tinv > 5) {
        num += Tinv * polK1(sqs * Tinv) * exp(-sqs * Tinv);
        // } else {
        //     num += Tinv * bessel::cyl_k(1, sqs * Tinv);
        // }
        for (auto it : AA.bath_masses) {
            mtemp = *AA.DSmasses[it];
            den += mtemp * mtemp * besselK2(Tinv * mtemp);
        }
        den *= den;
    }

    return num / den;
}

double SigvInt::operator()(const double &u) {
    double s = lower_bound * lower_bound + (1 - u) / u;
    return wij(s) * lipsv(s) * 1 / (u * u);
}

Tac::Tac(AnnihilationAmps &AnAmps)
    : AA(AnAmps),
      sigv(AA),
      boundaries(3 * AA.N_widths) {}

bool Tac::sort_inimasses(const VecString &ch_str) {
    double temp;
    sigv.polK2s.resize(AA.bath_masses.size());
    for (auto it : ch_str) {
        AA.set_channel({it});
        AA.assign_masses(m1, m2, it);
        AA.set_s((m1 + m2) * (m1 + m2) * 100);
        temp = AA(0.5);
        if (std::isnan(temp)) return false;
        inimap[m1 + m2].push_back(it);
    }
    return true;
}

bool Tac::beps(const double &x) {
    return (x * (sigv.lower_bound - 2 * AA.MDM) / AA.MDM <= -beps_eps);
}

double Tac::peak_relevance(const double &peakpos) {
    if (peakpos == sigv.lower_bound) return -1.;
    return -(beps_eps - 4.6051701859880) * AA.MDM /
           (peakpos - sigv.lower_bound);
}

double *Tac::peak_bounds(const double &peakpos, const double &width) {
    static double bounds[3];
    double n = 0.1;
    while (peakpos - 2 * width / n < sigv.lower_bound) {
        n *= 2;
    }

    bounds[0] = 1 / ((peakpos - 2 * width / n) * (peakpos - 2 * width / n) -
                     sigv.lower_bound * sigv.lower_bound + 1);
    bounds[1] =
        1 / (peakpos * peakpos - sigv.lower_bound * sigv.lower_bound + 1);
    bounds[2] = 1 / ((peakpos + 2 * width / n) * (peakpos + 2 * width / n) -
                     sigv.lower_bound * sigv.lower_bound + 1);

    return bounds;
}

void Tac::i_sort_boundaries() {
    double current[3];
    int l;
    for (int i = 1; i < N_relevant_peaks; i++) {
        current[0] = boundaries[3 * i];
        current[1] = boundaries[3 * i + 1];
        current[2] = boundaries[3 * i + 2];

        l = i;
        while ((l > 0) && (boundaries[3 * (l - 1) + 1] < current[1])) {
            boundaries[3 * l] = boundaries[3 * (l - 1)];
            boundaries[3 * l + 1] = boundaries[3 * (l - 1) + 1];
            boundaries[3 * l + 2] = boundaries[3 * (l - 1) + 2];

            l--;
        }
        boundaries[3 * l] = current[0];
        boundaries[3 * l + 1] = current[1];
        boundaries[3 * l + 2] = current[2];
    }
}

void Tac::check_boundaries() {
    for (size_t i = 0; i < boundaries.size() - 1; i++) {
        if (boundaries[i] < boundaries[i + 1]) {
            boundaries[i + 1] = boundaries[i];
        }
    }
}

void Tac::set_boundaries(const double &x) {
    double peak_xf;
    double *b;

    N_relevant_peaks = 0;

    for (int j = 0; j < AA.N_widths; j++) {
        peak_xf = peak_relevance(*AA.denstructures.at(2 * j));

        if (peak_xf > 0 && x < peak_xf) {
            b = peak_bounds(*AA.denstructures.at(2 * j),
                            *AA.denstructures.at(2 * j + 1));
            boundaries[3 * N_relevant_peaks] = *b;
            boundaries[3 * N_relevant_peaks + 1] = *(b + 1);
            boundaries[3 * N_relevant_peaks + 2] = *(b + 2);
            N_relevant_peaks++;
        }
    }
    i_sort_boundaries();
    check_boundaries();
}

double Tac::integrate_peaks(const double &x) {
    double res = 0.;
    double b[3];
    for (size_t i = 0; i < N_relevant_peaks; i++) {
        b[0] = boundaries[3 * i];
        b[1] = boundaries[3 * i + 1];
        b[2] = boundaries[3 * i + 2];
        double f0[4];
        simpson38_vals(sigv, b[2], b[1], f0);
        res = res + adap_simpson38(sigv, b[2], b[1], f0, peak_eps);
        simpson38_vals(sigv, b[1], b[0], f0);
        res = res + adap_simpson38(sigv, b[1], b[0], f0, peak_eps);
    }
    return res;
}

void Tac::estimate_integrate_s(const double &x, double &res, double &estimate) {
    double error;
    if (N_relevant_peaks > 0) {
        res = res + integrate_peaks(x);
        estimate += res;

        for (size_t i = 1; i < N_relevant_peaks; i++) {
            estimate += kronrod_61(sigv, boundaries[3 * i],
                                   boundaries[3 * i - 1], error);
        }

        estimate +=
            (kronrod_61(sigv, 0, boundaries[3 * N_relevant_peaks - 1], error) +
             kronrod_61(sigv, boundaries[0], 1, error));
    } else {
        double temp;
        double a = 1., b;
        size_t i, imax = 1;
        do {
            error = 0;
            temp = 0;
            b = 1.;
            for (i = 1; i < imax; i++) {
                a = (double)i * 1e-3 * b;
                temp += kronrod_61(sigv, a, b, error);
                b = a;
            }
            temp += kronrod_61(sigv, 0., a, error);
            imax++;
        } while ((error > 0.5 * std::abs(temp)) && (imax < 4));
        estimate += temp;
    }
}

void Tac::integrate_s(const double &x, double &res, double &estimate) {
    if (N_relevant_peaks > 0) {
        res += h_adap_gauss_kronrod_15(sigv, 0,
                                       boundaries[3 * N_relevant_peaks - 1],
                                       estimate, gauss_kronrod_eps) +
               h_adap_gauss_kronrod_15(sigv, boundaries[0], 1, estimate,
                                       gauss_kronrod_eps);

        for (size_t i = 1; i < N_relevant_peaks; i++) {
            res += h_adap_gauss_kronrod_15(sigv, boundaries[3 * i],
                                           boundaries[3 * i - 1], estimate,
                                           gauss_kronrod_eps);
        }
    } else {
        res +=
            h_adap_gauss_kronrod_15(sigv, 0, 1e-3, estimate, gauss_kronrod_eps);
        res +=
            h_adap_gauss_kronrod_15(sigv, 1e-3, 1, estimate, gauss_kronrod_eps);
    }
}

double Tac::operator()(const double &x) {
    double res = 0.;
    double estimate = 0.;
    sigv.set_x(x);
    sigv.calc_polK2();
    for (auto &it : inimap) {
        AA.set_channel(it.second);
        AA.assign_masses(m1, m2, it.second[0]);
        sigv.set_lower_bound(m1 + m2);
        if (beps(x)) {
            set_boundaries(x);
            estimate_integrate_s(x, res, estimate);
        }
    }
    for (auto &it : inimap) {
        AA.set_channel(it.second);
        AA.assign_masses(m1, m2, it.second[0]);
        sigv.set_lower_bound(m1 + m2);
        if (beps(x)) {
            set_boundaries(x);
            integrate_s(x, res, estimate);
        }
    }
    return res;
}

void Tac::clear_state(const bool full) {
    sigv.sig_s.clear();
    if (full) inimap.clear();
}

}  // namespace DT
