#include "montecarlo.hpp"

namespace DT {
double MC::sigmoid(const double x) { return 2 / (1 + exp(-abs(x))) - 1; }

void MC::set_weight(const dvec1 &pars, const double x) {
    size_t j;

    // index = ceil((xi-x0)*Nb/(xf-xi)) - 1
    for (size_t i = 0; i < N_pars; i++) {
        j = std::ceil((pars.at(i) - lbounds[i]) * (double)N_bins /
                      (ubounds[i] - lbounds[i])) -
            1;
        weights[i][j] = weights[i][j] + x;
    }
}

dvec1 MC::new_pars() {
    double tot = 0., rand = 0.;
    size_t bin;
    avec1 p;
    dvec1 res;

    for (size_t i = 0; i < N_pars; i++) {
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
        res[i] = 3.;
    }
    return res;
}
}  // namespace DT
