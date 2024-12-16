#include "../include/beq_solver.hpp"

namespace DT {

void FO1DM::set_appr(const bool &apprr) {
    appr = apprr;
    foc.del = appr ? 1.5 : 0.1;
}

ResError FO1DM::omega(const ResError &yield) {
    return 2.742e8 * BI.MI.MDM * yield;
}

ResError FO1DM::operator()(const vstring &channels) {
    ResError res;
    if (!BI.tac.sort_inimasses(channels)) {
        res = {0., 0.};
    }
    double xfo = bisec(foc, 4.9, 50.1, secant_eps);
    ResError yfo = {(1. + foc.del) * BI.yeq(xfo), 0.};
    if (xfo < 5. || xfo > 50.) {
        std::cout << "Freeze-out temperature could not be found.\n";
        res = {0., 0.};
    }
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

}  // namespace DT
