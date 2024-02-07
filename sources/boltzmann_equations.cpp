#include "boltzmann_equations.hpp"

namespace DT
{
    Beqs::Beqs(std::shared_ptr<Dof> degrees_of_freedom, std::shared_ptr<Model> model)
    {
        dof = degrees_of_freedom;
        mod = model;
        tac = std::make_unique<Tac>(mod);
    }

    void Beqs::clear_tac_maps()
    {
        tac->tac_x.clear();
        tac->sig_s.clear();
        tac->inimap.clear();
    }

    void Beqs::sort_inimasses(const std::vector<std::string> &ch_str)
    {
        tac->sort_inimasses(ch_str);
    }

    double Beqs::pre(const double &x)
    {
        return sqrt(M_PI / (45 * G)) * mod->MDM / (x * x);
    }

    double Beqs::T_ent(const double &ent)
    {
        // assuming heff cte for the values of x (~25, ie, at FO) that are relevant (and small changes in ent)
        return pow(45 * ent / (2 * M_PI * M_PI * dof->heff(mod->MDM / 25)), 0.33333333);
    }

    double Beqs::ent_T(const double &x)
    {
        return 2 * M_PI * M_PI * mod->MDM * mod->MDM * mod->MDM / (x * x * x) * dof->heff(mod->MDM / x) / 45;
    }

    double Beqs::fstart(double x, const std::vector<std::string> &ch_str)
    {
        double dif = 0.5;       // (Y-Yeq)/Yeq at starting point
        double ent = ent_T(x);  // entropy as function of T
        double d = 0.001 * ent; // stepsize for entropy increase
        double upper, lower, dlnYeqdent;

        x = mod->MDM / T_ent(ent + d);
        upper = log(mod->yeq(x)); // logYeq for entropy = entropy + d
        x = mod->MDM / T_ent(ent - d);
        lower = log(mod->yeq(x));               // logYeq for entropy = entropy - d
        dlnYeqdent = (upper - lower) / (2 * d); // this is derivative of logYeq wrt entropy
        x = mod->MDM / T_ent(ent);

        // eq 6 from microlecture
        return (dlnYeqdent * (sqrt(6 * M_PI * M_PI * M_PI / 30 * mod->MDM * mod->MDM * mod->MDM * mod->MDM / (x * x * x * x) * dof->geff(mod->MDM / x) * G) / tac->tac(x, ch_str)) - dif * mod->yeq(x));
    }

    double Beqs::beq_FO(const double &x, const double &y, const std::vector<std::string> &ch_str)
    {
        return -pre(x) * dof->g12(mod->MDM / x) * tac->tac(x, ch_str) * (y * y - mod->yeq(x) * mod->yeq(x));
    }

} // namespace DT
