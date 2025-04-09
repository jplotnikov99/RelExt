///////////////////CODE GENERATED VIA MATHEMATICA///////////////////

#include "../model.hpp"
#include "general_model.hpp"

namespace DT {
void ModelInfo::init() {
    using namespace PAR;
    DSmasses["N1"] = &MN[0];
    DSmasses["N2"] = &MN[1];
    DSmasses["N3"] = &MN[2];
    DSmasses["N4"] = &MN[3];
    DSmasses["N5"] = &MN[4];
    DSmasses["C2"] = &MC[1];
    DSmasses["c2"] = &MC[1];
    DSdof["N1"] = 2;
    DSdof["N2"] = 2;
    DSdof["N3"] = 2;
    DSdof["N4"] = 2;
    DSdof["N5"] = 2;
    DSdof["C1"] = 2;
    DSdof["C2"] = 2;
    DSdof["c1"] = 2;
    DSdof["c2"] = 2;
    N_widths = 0;
}

void AnnihilationAmps::init() {
    ADDCHANNEL("N1,N1,h2,h2", N1N1h2h2, N1N1h2h2fl)
    ADDCHANNEL("N1,N1,h2,h3", N1N1h2h3, N1N1h2h3fl)
    ADDCHANNEL("N1,N1,h2,h4", N1N1h2h4, N1N1h2h4fl)
    ADDCHANNEL("N1,N1,h2,h5", N1N1h2h5, N1N1h2h5fl)
    ADDCHANNEL("N1,N1,h2,h6", N1N1h2h6, N1N1h2h6fl)
    ADDCHANNEL("N1,N1,h3,h3", N1N1h3h3, N1N1h3h3fl)
    ADDCHANNEL("N1,N1,h3,h4", N1N1h3h4, N1N1h3h4fl)
    ADDCHANNEL("N1,N1,h3,h5", N1N1h3h5, N1N1h3h5fl)
    ADDCHANNEL("N1,N1,h3,h6", N1N1h3h6, N1N1h3h6fl)
    ADDCHANNEL("N1,N1,h4,h4", N1N1h4h4, N1N1h4h4fl)
    ADDCHANNEL("N1,N1,h4,h5", N1N1h4h5, N1N1h4h5fl)
    ADDCHANNEL("N1,N1,h4,h6", N1N1h4h6, N1N1h4h6fl)
    ADDCHANNEL("N1,N1,h5,h5", N1N1h5h5, N1N1h5h5fl)
    ADDCHANNEL("N1,N1,h5,h6", N1N1h5h6, N1N1h5h6fl)
    ADDCHANNEL("N1,N1,h6,h6", N1N1h6h6, N1N1h6h6fl)
}

}  // namespace DT
