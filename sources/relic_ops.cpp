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
}  // namespace DT