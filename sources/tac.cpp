#include "../include/tac.hpp"

namespace DT {

void SigvInt::set_x(const double new_x) { x = new_x; }

void SigvInt::set_lower_bound(const double new_lower) {
    lower_bound = new_lower;
}

void SigvInt::set_dsmasses(const std::vector<double> &masses){
    dsmasses = masses;
    polK2s.resize(dsmasses.size());
}

ResError SigvInt::xsec(const double &s, const std::string &channel) {
    double m1, m2, m3, m4;
    mod.set_channel(m1, m2, {channel}, false);
    mod.set_s(s);
    if (sqrt(s) < m1 + m2) {
        return {0., 0.};
    }
    mod.get_channel_masses(m1, m2, m3, m4, channel);

    double f_est[10];
    for (size_t i = 0; i < 10; i++) {
        f_est[i] = mod(-1 + 0.2222222222222222 * i).res;
    }
    double est = simpson_est(-1, 1, f_est);
    ResError f[4];
    f[0] = {f_est[0], 0.};
    f[1] = {f_est[3], 0.};
    f[2] = {f_est[6], 0.};
    f[3] = {f_est[9], 0.};
    return 1 / (32 * M_PI * s) *
           sqrt(kaellen(s, m3 * m3, m4 * m4) / kaellen(s, m1 * m1, m2 * m2)) *
           h_adap_simpson38(mod, -1, 1, f, est, theta_eps);
}

ResError SigvInt::wij(const double &s) {
    if (sig_s.count(s) == 0) {
        mod.set_s(s);
        double f_est[10];
        for (size_t i = 0; i < 10; i++) {
            f_est[i] = mod(-1 + 0.2222222222222222 * i).res;
        }
        double est = simpson_est(-1, 1, f_est);
        ResError f[4];
        f[0] = {f_est[0], 0.};
        f[1] = {f_est[3], 0.};
        f[2] = {f_est[6], 0.};
        f[3] = {f_est[9], 0.};
        ResError crs = 1 / (256 * M_PI * s * sqrt(s)) *
                       h_adap_simpson38(mod, -1, 1, f, est, theta_eps);
        sig_s[s] = crs;
        return crs;
    } else {
        return sig_s.at(s);
    }
}

void SigvInt::calc_polK2() {
    double Tinv = x / mod.MDM;
    double mtemp, cur;
    for (size_t i = 0; i < dsmasses.size(); i++) {
        mtemp = dsmasses[i];
        cur = mod.the_dof(mod.bath_masses[i]) * mtemp * mtemp *
              polK2(Tinv * mtemp);
        polK2s[i] = cur;
    }
}

double SigvInt::lipsv(const double &s) {
    double num = 0.;
    double den = 0.;
    double mtemp;
    double sqs = sqrt(s);
    double Tinv = x / mod.MDM;

    if (x > 5) {
        num += Tinv * polK1(sqs * Tinv);
        for (size_t i = 0; i < dsmasses.size(); i++) {
            mtemp = dsmasses[i];
            den += exp(-Tinv * (mtemp - sqs / 2)) * polK2s[i];
        }
        den *= den;
    } else {
        // if (sqs * Tinv > 5) {
        num += Tinv * polK1(sqs * Tinv) * exp(-sqs * Tinv);
        // } else {
        //     num += Tinv * bessel::cyl_k(1, sqs * Tinv);
        // }
        for (auto it : dsmasses) {
            mtemp = it;
            den += mtemp * mtemp * besselK2(Tinv * mtemp);
        }
        den *= den;
    }

    return num / den;
}

ResError SigvInt::operator()(const double &u) {
    double s = lower_bound * lower_bound + (1 - u) / u;
    return wij(s) * lipsv(s) * 1 / (u * u);
}

Tac::Tac(Model &model) : mod(model), sigv(mod), boundaries(3 * mod.N_widths) {}

bool Tac::sort_inimasses(const vstring &ch_str) {
    double temp;
    sigv.polK2s.resize(mod.bath_masses.size());
    for (auto it : ch_str) {
        mod.set_channel(m1, m2, {it});
        mod.set_s((m1 + m2) * (m1 + m2) * 100);
        temp = mod(0.5).res;
        if (std::isnan(temp)) return false;
        inimap[m1 + m2].push_back(it);
    }
    sigv.dsmasses.clear();
    for (auto it : mod.bath_masses) {
        sigv.dsmasses.push_back(mod.the_mass(it));
    }
    return true;
}

bool Tac::beps(const double &x) {
    return (x * (sigv.lower_bound - 2 * mod.MDM) / mod.MDM <= -beps_eps);
}

double Tac::peak_relevance(const double &peakpos) {
    if (peakpos == sigv.lower_bound) return -1.;
    return -(beps_eps - 4.6051701859880) * mod.MDM /
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

    for (int j = 0; j < mod.N_widths; j++) {
        peak_xf = peak_relevance(*mod.denstructures.at(2 * j));

        if (peak_xf > 0 && x < peak_xf) {
            b = peak_bounds(*mod.denstructures.at(2 * j),
                            *mod.denstructures.at(2 * j + 1));
            boundaries[3 * N_relevant_peaks] = *b;
            boundaries[3 * N_relevant_peaks + 1] = *(b + 1);
            boundaries[3 * N_relevant_peaks + 2] = *(b + 2);
            N_relevant_peaks++;
        }
    }
    i_sort_boundaries();
    check_boundaries();
}

ResError Tac::integrate_peaks(const double &x) {
    ResError res{0., 0.};
    double b[3];
    for (size_t i = 0; i < N_relevant_peaks; i++) {
        b[0] = boundaries[3 * i];
        b[1] = boundaries[3 * i + 1];
        b[2] = boundaries[3 * i + 2];
        ResError f0[4];
        simpson38_vals(sigv, b[2], b[1], f0);
        res = res + adap_simpson38(sigv, b[2], b[1], f0, peak_eps);
        simpson38_vals(sigv, b[1], b[0], f0);
        res = res + adap_simpson38(sigv, b[1], b[0], f0, peak_eps);
    }
    return res;
}

void Tac::estimate_integrate_s(const double &x, ResError &res,
                               ResError &estimate) {
    if (N_relevant_peaks > 0) {
        res = res + integrate_peaks(x);
        estimate = estimate + res;

        for (size_t i = 1; i < N_relevant_peaks; i++) {
            estimate = estimate + kronrod_61(sigv, boundaries[3 * i],
                                             boundaries[3 * i - 1]);
        }

        estimate = estimate +
                   (kronrod_61(sigv, 0, boundaries[3 * N_relevant_peaks - 1]) +
                    kronrod_61(sigv, boundaries[0], 1));
    } else {
        estimate = estimate + kronrod_61(sigv, 0, 1e-6);
        estimate = estimate + kronrod_61(sigv, 1e-6, 1e-3);
        estimate = estimate + kronrod_61(sigv, 1e-3, 1);
    }
}

void Tac::integrate_s(const double &x, ResError &res, double &estimate) {
    if (N_relevant_peaks > 0) {
        res = res +
              h_adap_gauss_kronrod_15(sigv, 0,
                                      boundaries[3 * N_relevant_peaks - 1],
                                      estimate, gauss_kronrod_eps) +
              h_adap_gauss_kronrod_15(sigv, boundaries[0], 1, estimate,
                                      gauss_kronrod_eps);

        for (size_t i = 1; i < N_relevant_peaks; i++) {
            res = res + h_adap_gauss_kronrod_15(sigv, boundaries[3 * i],
                                                boundaries[3 * i - 1], estimate,
                                                gauss_kronrod_eps);
        }
    } else {
        res = res + h_adap_gauss_kronrod_15(sigv, 0, 1e-3, estimate,
                                            gauss_kronrod_eps);
        res = res + h_adap_gauss_kronrod_15(sigv, 1e-3, 1, estimate,
                                            gauss_kronrod_eps);
    }
}

ResError Tac::tac(const double &x) {
    ResError res{0., 0.};
    ResError estimate = {0., 0.};
    sigv.set_x(x);
    sigv.calc_polK2();
    for (auto &it : inimap) {
        mod.set_channel(m1, m2, it.second);
        sigv.set_lower_bound(m1 + m2);
        if (beps(x)) {
            set_boundaries(x);
            estimate_integrate_s(x, res, estimate);
        }
    }
    for (auto &it : inimap) {
        mod.set_channel(m1, m2, it.second);
        sigv.set_lower_bound(m1 + m2);
        if (beps(x)) {
            set_boundaries(x);
            integrate_s(x, res, estimate.res);
        }
    }
    return res;
}

void Tac::clear_state(const bool full) {
    tac_error_reached = false;
    sigv.sig_s.clear();
    if (full) inimap.clear();
}

}  // namespace DT
