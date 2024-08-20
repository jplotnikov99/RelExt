#include "montecarlo.hpp"

namespace DT {

Average operator+(const Average &a, const double b) {
    Average res;
    res.val = (a.val * a.N + b) / (a.N + 1);
    res.N = a.N + 1;
    return res;
}

double MC::sigmoid(const double x) { return 2 / (1 + exp(-std::abs(x))) - 1; }

void MC::set_weight(const dvec1 &pars, const double x) {
    size_t j;

    // index = ceil((xi-x0)*Nb/(xf-xi)) - 1
    for (size_t i = 0; i < N_pars; i++) {
        j = ceil((pars.at(i) - lbounds[i]) * (double)N_bins /
                 (ubounds[i] - lbounds[i])) -
            1;
        weights[i][j] = weights[i][j] + sigmoid(x);
    }
    points++;
}

dvec1 MC::generate_new_pars() {
    double tot = 0., rand = 0.;
    size_t bin;
    avec1 p;
    dvec1 res;
    if (points >= begin) {
        std::cout << points << "\n";
        for (size_t i = 0; i < N_pars; i++) {
            tot = 0.;
            p = weights[i];
            for (auto it : p) tot += it.val;
            for (auto &it : p) it.val /= tot;
            for (size_t j = 1; j < p.size(); j++) p[j].val += p[j - 1].val;
            rand = generate_random(0., 1.);
            for (size_t j = 0; j < p.size(); j++) {
                if (rand < p[j].val) {
                    bin = j;
                    break;
                }
            }
            tot = (ubounds[i] - lbounds[i]) / (double)N_bins;
            res.push_back(
                generate_random(lbounds[i] + tot * (double)bin,
                                lbounds[i] + tot * ((double)bin + 1.)));
        }
    } else {
        for (size_t i = 0; i < N_pars; i++) {
            res.push_back(generate_random(lbounds[i], ubounds[i]));
        }
    }
    if(points == 9999)
        print_grid();

    return res;
}

void MC::print_grid_row(const size_t i) {
    for (auto it : weights.at(i)) {
        std::cout << it.val << "\t";
    }
    std::cout << "\n";
}

void MC::print_grid() {
    for (size_t j = 0; j < N_pars; j++) print_grid_row(j);
}
}  // namespace DT
