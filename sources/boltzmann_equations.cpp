#include "../include/boltzmann_equations.hpp"

namespace DT {

BeqInfo::BeqInfo(AnnihilationAmps &AnAmps) : dof(*new Dof), AA(AnAmps), tac(AA) {}

void BeqInfo::reset_tac_state(const bool full) { tac.clear_state(full); }

bool BeqInfo::sort_inimasses(const VecString &ch_str) {
    return tac.sort_inimasses(ch_str);
}
double BeqInfo::pre(const double &x) {
    return sqrt(M_PI / (45 * G)) * AA.MDM / (x * x) * dof.g12(AA.MDM / x);
}

double BeqInfo::T_ent(const double &ent, const double &m) {
    // assuming heff cte for the values of x (~25, ie, at FO) that are relevant
    // (and small changes in ent)
    return pow(45 * ent / (2 * M_PI * M_PI * dof.heff(m / 25)), 0.33333333);
}

double BeqInfo::ent_T(const double &x, const double &m) {
    return 2 * M_PI * M_PI * m * m * m / (x * x * x) * dof.heff(m / x) / 45;
}

double BeqInfo::yeq(const double &x) {
    double yeq = 0;
    double mtemp;
    double a = 1 / (AA.MDM * AA.MDM);
    double Tinv = x / AA.MDM;

    for (auto it : AA.bath_masses) {
        mtemp = AA.DSmasses[it]->real();
        yeq += AA.DSdof[it] * mtemp * mtemp * a * besselK2(Tinv * mtemp);
    }
    yeq *= 45 * x * x / (4 * dof.heff(1 / Tinv) * M_PI * M_PI * M_PI * M_PI);
    return yeq;
}

double BeqInfo::dlogyeq(const double x) {
    static const double h = 0.0001;
    return (log(yeq(x + h)) - log(yeq(x - h))) / (2. * h);
}

double FOCondition::operator()(const double &x) {
    return BI.pre(x) * BI.tac(x) * BI.yeq(x) * del * (del + 2) + BI.dlogyeq(x);
}

double FOAppr::operator()(const double &x) { return -BI.pre(x) * BI.tac(x); }

void FOFull::operator()(const double &x, const double &y, double &dydx) {
    dydx = BI.pre(x) * BI.tac(x) * (pow(BI.yeq(x), 2) - y * y);
}

void Beqs::set_mechanism(const size_t &m) { mech = m; }

double Beqs::pre_tac(const double &x) { return -pre(x) * tac(x); }

double Beqs::fout_condition(const double x, const double del) {
    return pre(x) * tac(x) * yeq(x) * del * (del + 2) + dlogyeq(x);
}

double Beqs::fstart(double x) {
    double dif = 0.1;               // (Y-Yeq)/Yeq at starting point
    double ent = ent_T(x, AA.MDM);  // entropy as function of T
    double d = 0.001 * ent;         // stepsize for entropy increase
    double upper, lower, dlnYeqdent;

    x = AA.MDM / T_ent(ent + d, AA.MDM);
    upper = log(yeq(x));  // logYeq for entropy = entropy + d
    x = AA.MDM / T_ent(ent - d, AA.MDM);
    lower = log(yeq(x));  // logYeq for entropy = entropy - d
    dlnYeqdent =
        (upper - lower) / (2 * d);  // this is derivative of logYeq wrt entropy
    x = AA.MDM / T_ent(ent, AA.MDM);

    // eq 6 from microlecture
    return (dlnYeqdent *
                (sqrt(6 * M_PI * M_PI * M_PI / 30 * AA.MDM * AA.MDM * AA.MDM *
                      AA.MDM / (x * x * x * x) * dof.geff(AA.MDM / x) * G) /
                 tac(x)) -
            dif * yeq(x));
}

double Beqs::operator()(const double &x, const double &y) {
    double res = 0.;
    switch (mech) {
        case 0:
            res = -tac(x) * (y * y - SQR(yeq(x)));
            break;

        case 1:
            res = tac(x) * (SQR(yeq(x)) - y * y);
            break;

        default:
            std::cout << "Wrong case in " << __func__
                      << ". Such a Boltzmann equation does not exist.\n";
            exit(1);
            break;
    }
    return res;
}

}  // namespace DT
