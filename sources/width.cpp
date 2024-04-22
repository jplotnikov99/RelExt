#include "width.hpp"

namespace DT
{
    double Width::partial_width(const ParticleType ptype1, const ParticleType ptype2, const ParticleType ptype3, const double M,
                                const double m1, const double m2, const double coupling)
    {
        double res = 1;
        switch (ptype1 + ptype2 + ptype3)
        {
        case scalar + scalar + scalar:
            break;
        case scalar + massive_vector_boson + massive_vector_boson:
            res = res * (3 + kaellen(M * M, m1 * m1, m2 * m2) / (4 * m1 * m1 * m2 * m2));
            break;
        case scalar + charged_lepton + charged_lepton:
            res = res * 2 * (M * M - (m1 + m2) * (m1 + m2));
            break;
        case scalar + neutral_lepton + neutral_lepton:
            res = res * 2 * (M * M - (m1 + m2) * (m1 + m2));
            break;
        case scalar + quark + quark:
            res = res * 6 * (M * M - (m1 + m2) * (m1 + m2));
            break;

        default:
            break;
        }
        res = res * sqrt(kaellen(M * M, m1 * m1, m2 * m2)) / (16 * M_PI * M * M * M) * coupling * coupling;

        return res;
    }
} // namespace DT
