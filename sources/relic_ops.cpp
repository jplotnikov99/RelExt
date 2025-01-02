#include "../include/relic_ops.hpp"

namespace DT {

OmegaGoal::OmegaGoal(ModelInfo &model, const std::string &parr,
                     const vstring &channelss, const double goall,
                     const bool fast)
    : MI(model),
      par(parr),
      channels(channelss),
      goal(goall),
      fo(model, fast, xtoday_FO) {}

bool OmegaGoal::valid(const double x) { return MI.change_parameter(par, x); }

double OmegaGoal::get_omega() { return omega; }

double OmegaGoal::operator()(const double x) {
    MI.change_parameter(par, x);
    omega = fo(channels);
    return omega - goal;
}

RelicOps::RelicOps(ModelInfo &model, const bool &appr)
    : MI(model), fo(model, appr, xtoday_FO), fast(appr) {}

void RelicOps::init_montecarlo(const size_t N_pars, const dvec1 &lower,
                               const dvec1 &upper,
                               std::unordered_map<std::string, double> best) {
    is_monte = true;
    Mc = std::make_unique<MC>(N_pars, lower, upper, best);
}

void RelicOps::generate_new_pars() {
    dvec1 new_pars = Mc->generate_new_pars();
    for (size_t i = 0; i < par_names.size(); i++) {
        MI.change_parameter(par_names[i], new_pars[i]);
    }
}

void RelicOps::set_bath_procs(const vstring &b) { bath_procs = b; }

void RelicOps::set_fast(const bool f) { fast = f; }

vstring RelicOps::get_bath_procs() { return bath_procs; }

void RelicOps::set_mechanism(const size_t mech) { mechanism = mech; }

void RelicOps::set_omega_target(const double om) { omega_target = om; }

void RelicOps::set_omega_err(const double err) { omega_err = err; }

void RelicOps::set_par_bounds(const double a, const double b) {
    par_bounds[0] = a;
    par_bounds[1] = b;
}

void RelicOps::set_par_bounds(const std::string par, const double a,
                              const double b) {
    par_names.push_back(par);
    bounds.push_back(std::make_pair(a, b));
}

double RelicOps::calc_omega(const double yield) {
    return 2.742e8 * MI.MDM * yield;
}

double RelicOps::CalcRelic() {
    double x, xtoday, del;
    bool appr;
    double y = 0.;
    switch (mechanism) {
        case 0:
            omega = fo(bath_procs);
            break;
        case 1:
            x = x_reheating;
            y = 0;
            xtoday = xtoday_FI;
            appr = false;
            break;

        default:
            std::cout << "This mechanism ID is not valid. Please set the "
                         "mechanism to 0 or 1.\n";
            break;
    }

    if (is_monte) {
        dvec1 par_vals;
        for (size_t i = 0; i < par_names.size(); i++)
            par_vals.push_back(*MI.parmap[par_names[i]]);
        double w = omega > 0.12 ? pow(0.12 / omega, 2) : pow(omega / 0.12, 2);
        Mc->set_weight(par_vals, w);
    }
    return omega;
}

double RelicOps::get_last_relic() { return omega; }

dvec1 RelicOps::calc_channel_contributions(double contrib) {
    if (contrib > 1 || contrib < 0) contrib = 0.01;
    dvec1 res;
    double om;
    double sum = 0.;
    fo.set_appr(true);
    for (auto it : bath_procs) {
        om = fo({it});
        res.push_back(1 / om);
        sum += 1 / om;
    }
    for (auto &it : res) {
        it /= sum;
        if (it < contrib) it = 0;
    }
    fo.set_appr(fast);
    return res;
}

double RelicOps::find_par(const std::string &par) {
    OmegaGoal omg(MI, par, bath_procs, omega_target);
    FindRoot fr(par_bounds[0], par_bounds[1], omega_err, omega_target);
    fr.find(omg, *MI.parmap[par]);
    return omg.get_omega();
}

double RelicOps::random_step(const size_t par_i) {
    int sign;
    double rate;
    double val = *MI.parmap[par_names[par_i]];
    double b1 = bounds[par_i].first;
    double b2 = bounds[par_i].second;
    sign = (int)generate_random(0, 2);
    sign = (sign == 0) ? 1 : -1;
    rate = generate_random(0, random_walk_rate);
    val = val * (1 + (double)sign * rate);
    if (val < b1) val = b1 * (1 - 0.01);
    if (val > b2) val = b2 * (1 - 0.01);
    MI.change_parameter(par_names[par_i], val, false);
    return (double)sign * rate;
}

void RelicOps::same_step(const size_t par_i, const double step) {
    double val = *MI.parmap[par_names[par_i]];
    double b1 = bounds[par_i].first;
    double b2 = bounds[par_i].second;
    val = val * (1 + step);
    if (val < b1) val = b1 * (1 - 0.01);
    if (val > b2) val = b2 * (1 - 0.01);
    MI.change_parameter(par_names[par_i], val, false);
}

double RelicOps::random_walk() {
    const size_t max_steps = 400;
    size_t cur_steps = 0;
    bool is_step_good = false;
    double om1, om2;
    double saved_vals[par_names.size()];
    double current_step[par_names.size()];
    om1 = CalcRelic();
    if (om1 == 0.) return 0.;
    do {
        om2 = om1;
        if (is_step_good) {
            for (size_t i = 0; i < par_names.size(); i++) {
                saved_vals[i] = *MI.parmap[par_names[i]];
                same_step(i, current_step[i]);
            }
        } else {
            for (size_t i = 0; i < par_names.size(); i++) {
                saved_vals[i] = *MI.parmap[par_names[i]];
                current_step[i] = random_step(i);
            }
        }
        if (!MI.load_everything()) {
            is_step_good = false;
        } else {
            om1 = CalcRelic();
            if (fabs(om1 - omega_target) >= fabs(om2 - omega_target) ||
                om1 == 0.) {
                for (size_t i = 0; i < par_names.size(); i++) {
                    MI.change_parameter(par_names[i], saved_vals[i], false);
                }
                is_step_good = false;
                om1 = om2;
            } else {
                is_step_good = true;
            }
        }
        if ((cur_steps % 100) == 0) {
            std::cout << "Current Step: " << cur_steps << " Omega: " << om1
                      << "\n";
        }
        cur_steps++;
    } while (fabs(om1 - omega_target) > omega_err && (cur_steps < max_steps));
    std::cout << "Steps taken: " << cur_steps << std::endl;
    MI.load_everything();
    return CalcRelic();
}

void RelicOps::save_best_bins(const std::string &filename) {
    Mc->save_best_bins(par_names, filename);
}

}  // namespace DT