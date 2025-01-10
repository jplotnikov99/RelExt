#include "../include/beq_solver.hpp"

namespace DT {

void FO1DM::set_appr(const bool &apprr) {
    appr = apprr;
    foc.del = appr ? 1.5 : 0.1;
}

void FO1DM::set_xtoday(const double &xtodayy) { xtoday = xtodayy; }

double FO1DM::omega(const double &yield) { return 2.742e8 * BI.AA.MDM * yield; }

double FO1DM::operator()(const VecString &channels) {
    double res;
    if (!BI.tac.sort_inimasses(channels)) {
        BI.tac.clear_state(true);
        return 0.;
    }
    double xfo = bisec_to_x(foc, 4.9, 50.1, secant_eps);
    xf = xfo;
    if (xfo < 5. || xfo > 50.) {
        if (!suppress)
            std::cout << "Freeze-out temperature could not be found.\n";
        BI.tac.clear_state(true);
        return 0.;
    }
    double yfo = (1. + foc.del) * BI.yeq(xfo);
    if (appr) {
        FOAppr foa(BI);
        res = adap_gauss_kronrod_15(foa, xfo, xtoday, 1e-3);
        res = 1. / yfo - res;
        res = 1. / res;
    } else {
        FOFull fof(BI);
        Output out;
        Odeint<StepperDopr853<FOFull>> ode(yfo, xfo, xtoday, 0., 1e-6, 0.1, 0.,
                                           out, fof);
        ode.integrate();
        res = yfo;
    }
    BI.tac.clear_state(true);
    return omega(res);
}

VecDoub FO1DM::calc_contributions(const VecString &channels) {
    VecDoub res(channels.size());
    FOAppr foa(BI);
    size_t i;
    double yield;
    double sum = 0.;
    suppress = true;
    for (i = 0; i < channels.size(); i++) {
        res[i] = operator()({channels[i]});
        res[i] = res[i] == 0. ? 0. : 1. / res[i];
        sum += res[i];
    }
    for (i = 0; i < res.size(); i++) res[i] /= sum;
    suppress = false;
    return res;
}

}  // namespace DT
