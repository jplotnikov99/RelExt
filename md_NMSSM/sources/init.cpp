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
    ADDCHANNEL("N1,N1,Hpm1,Hpm1", N1N1Hpm1Hpm1, N1N1Hpm1Hpm1fl)
    ADDCHANNEL("N1,N1,Hpm1,Hpm2", N1N1Hpm1Hpm2, N1N1Hpm1Hpm2fl)
    ADDCHANNEL("N1,N1,Hpm2,Hpm2", N1N1Hpm2Hpm2, N1N1Hpm2Hpm2fl)
    ADDCHANNEL("N1,N1,h2,Z", N1N1h2Z, N1N1h2Zfl)
    ADDCHANNEL("N1,N1,h3,Z", N1N1h3Z, N1N1h3Zfl)
    ADDCHANNEL("N1,N1,h4,Z", N1N1h4Z, N1N1h4Zfl)
    ADDCHANNEL("N1,N1,h5,Z", N1N1h5Z, N1N1h5Zfl)
    ADDCHANNEL("N1,N1,h6,Z", N1N1h6Z, N1N1h6Zfl)
    ADDCHANNEL("N1,N1,Hpm1,W", N1N1Hpm1W, N1N1Hpm1Wfl)
    ADDCHANNEL("N1,N1,Hpm2,W", N1N1Hpm2W, N1N1Hpm2Wfl)
    ADDCHANNEL("N1,N1,Z,Z", N1N1ZZ, N1N1ZZfl)
    ADDCHANNEL("N1,N1,W,W", N1N1WW, N1N1WWfl)
    ADDCHANNEL("N1,N1,v1,v1", N1N1v1v1, N1N1v1v1fl)
    ADDCHANNEL("N1,N1,v2,v2", N1N1v2v2, N1N1v2v2fl)
    ADDCHANNEL("N1,N1,v3,v3", N1N1v3v3, N1N1v3v3fl)
    ADDCHANNEL("N1,N1,e1,e1", N1N1e1e1, N1N1e1e1fl)
    ADDCHANNEL("N1,N1,e2,e2", N1N1e2e2, N1N1e2e2fl)
    ADDCHANNEL("N1,N1,e3,e3", N1N1e3e3, N1N1e3e3fl)
    ADDCHANNEL("N1,N1,u1,u1", N1N1u1u1, N1N1u1u1fl)
    ADDCHANNEL("N1,N1,u2,u2", N1N1u2u2, N1N1u2u2fl)
    ADDCHANNEL("N1,N1,u3,u3", N1N1u3u3, N1N1u3u3fl)
    ADDCHANNEL("N1,N1,d1,d1", N1N1d1d1, N1N1d1d1fl)
    ADDCHANNEL("N1,N1,d2,d2", N1N1d2d2, N1N1d2d2fl)
    ADDCHANNEL("N1,N1,d3,d3", N1N1d3d3, N1N1d3d3fl)
}

}  // namespace DT
