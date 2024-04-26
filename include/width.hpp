#include <iostream>
#include <cmath>
#include "utils.hpp"

namespace DT
{
    enum ParticleType
    {
        scalar = 1,
        massive_vector_boson = 2,
        massless_vector_boson = 4,
        lepton = 8,
        quark = 16,
        w_boson = -1,
        z_boson = -2,
        s_quark = -4,
        c_quark = -8,
        b_quark = -16,
        t_quark = -32
    };

    class Width
    {
    private:
        const double eps = 1e-6;
        const double mh;
        const double wz = 2.4952;
        const double ww = 2.091;
        const double thetaw = 0.49169738195642276;
        const double g2 = 0.6613384415493881;
        double NF = 5;
        double aS;
        bool Z = false;
        double m1, m2;

    public:
        // formulas and expression taken from [1612.07651] and [2106.05038]
        Width(const double m) : mh(m){};
        void set_alphaS(const double x);
        double Li2(const double x);
        double R_T(const double x);
        double A(const double x);
        double Delta_phi(const double x);
        double Delta_phi_mass(const double m);
        double gamma0_gauge_bosons(const double s1, const double s2);
        void s2_evaluations(const double l, const double r, const double s1, double *f);
        double s2_integration(const double l, const double r, const double s1,
                              double *f, size_t depth = 0);
        double s1_integration(const double l, const double r, double *f, size_t depth = 0);
        double integrate_4body_gauge();
        double partial_width(const ParticleType ptype2, const ParticleType ptype3,
                             const double ma, const double mb, const double coupling);
        ~Width(){};
    };

} // namespace DT
