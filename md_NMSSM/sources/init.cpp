///////////////////CODE GENERATED VIA MATHEMATICA///////////////////

#include "../model.hpp"
#include "general_model.hpp"

namespace DT {
void ModelInfo::init() {
    using namespace PAR;
    DSmasses["N1"] = &MN[1];
    DSmasses["N2"] = &MN[2];
    DSmasses["N3"] = &MN[3];
    DSmasses["N4"] = &MN[4];
    DSmasses["N5"] = &MN[5];
    DSmasses["C1"] = &MC[1];
    DSmasses["C2"] = &MC[2];
    DSmasses["c1"] = &MC[1];
    DSmasses["c2"] = &MC[2];
    DSdof["N4"] = 2;
    DSdof["N5"] = 2;
    DSdof["C1"] = 2;
    DSdof["C2"] = 2;
    DSdof["c1"] = 2;
    DSdof["c2"] = 2;
}

void AnnihilationAmps::init() {
    ADDCHANNEL("N1,N1,H2,H2", N1N1h2h2, N1N1h2h2fl)
}

}  // namespace DT
