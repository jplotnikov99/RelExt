#include <iostream>
#include <cmath>
#include "utils.hpp"

namespace DT
{
    enum ParticleType
    {
        scalar = 1,
        massive_vector_boson = 10,
        massless_vector_boson = 100,
        charged_lepton = 1000,
        neutral_lepton = 10000,
        quark = 100000
    };

    class Width
    {
    private:
    public:
        Width(){};
        double partial_width(const ParticleType ptype1, const ParticleType ptype2, const ParticleType ptype3, const double M,
                     const double m1, const double m2, const double coupling);
        ~Width(){};
    };

} // namespace DT
