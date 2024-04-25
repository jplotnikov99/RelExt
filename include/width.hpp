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
        bool Z = false;
        double m1, m2;

    public:
        Width(const double m) : mh(m){};
        double R_T(const double x);
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
