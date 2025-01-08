#include "../include/relic_ops.hpp"

namespace DT {

OmegaGoal::OmegaGoal(ModelInfo &model, FO1DM &fo, const VecString &parss,
                     const VecString &channelss, const double goall)
    : MI(model), pars(parss), channels(channelss), goal(goall), FO(fo) {}

bool OmegaGoal::valid(VecDoub &x) {
    for (size_t i = 0; i < x.size(); i++)
        MI.change_parameter(pars[i], x[i], false);
    return MI.load_everything();
}

double OmegaGoal::get_omega() { return omega; }

VecDoub OmegaGoal::get_parvals() {
    VecDoub res(pars.size());
    for (size_t i = 0; i < pars.size(); i++) res[i] = *MI.parmap[pars[i]];
    return res;
}

double OmegaGoal::operator()(const double x) {
    if (MI.change_parameter(pars[0], x))
        omega = FO(channels);
    else
        omega = 0.;
    return omega - goal;
}

double OmegaGoal::operator()(VecDoub &x) {
    if (valid(x))
        omega = FO(channels);
    else
        omega = 0.;
    return omega - goal;
}

RelicOps::RelicOps(ModelInfo &model, const bool &appr)
    : MI(model), fo(model, appr), fast(appr) {}

void RelicOps::init_montecarlo(const size_t N_pars, const dvec1 &lower,
                               const dvec1 &upper,
                               std::unordered_map<std::string, double> best) {
    is_monte = true;
    Mc = std::make_unique<MC>(N_pars, lower, upper, best);
}

void RelicOps::generate_new_pars() {
    dvec1 new_pars = Mc->generate_new_pars();
    for (size_t i = 0; i < par_names.size(); i++) {
        MI.change_parameter(par_names[i], new_pars[i], false);
    }
    MI.load_everything();
}

void RelicOps::set_bath_procs(const VecString &b) { bath_procs = b; }

void RelicOps::set_fast(const bool f) { fast = f; }

VecString RelicOps::get_bath_procs() { return bath_procs; }

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
    /* OmegaGoal omg(MI, {par}, bath_procs, omega_target);
    FindRoot fr(par_bounds[0], par_bounds[1], omega_err, omega_target);
    fr.find(omg, *MI.parmap[par]);
    return omg.get_omega(); */
    return 0.;
}

double RelicOps::random_walk(const VecString &pars, VecDoub &x1, VecDoub &x2) {
    /* OmegaGoal omg(MI, pars, bath_procs, omega_target);
    RandomWalk RW(x1, x2, omega_err);
    VecDoub xnew(RW.walk(omg));
    omg(xnew);
    return omg.get_omega(); */
    return 0.;
}

void RelicOps::save_best_bins(const std::string &filename) {
    Mc->save_best_bins(par_names, filename);
}

}  // namespace DT