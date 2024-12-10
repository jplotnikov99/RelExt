///////////////////CODE GENERATED VIA MATHEMATICA///////////////////

#include "../model.hpp"
#include "general_model.hpp"

namespace DT {
void ModelInfo::init() {
    DSmasses["H1"] = &mH1;
    DSmasses["H2"] = &mH2;
    DSmasses["H3"] = &mH3;
    DSmasses["Hc"] = &mHc;
    DSmasses["HC"] = &mHc;
    DSdof["H1"] = 1;
    DSdof["H2"] = 1;
    DSdof["H3"] = 1;
    DSdof["Hc"] = 1;
    DSdof["HC"] = 1;
    neutraldsmasses.push_back(&mH1);
    neutraldsmasses.push_back(&mH2);
    neutraldsmasses.push_back(&mH3);
    ADDCHANNELINFO(H1H1hh, H1H1hhfl, mH1, mH1, mHsm, mHsm)
    ADDCHANNELINFO(H1H1hZ, H1H1hZfl, mH1, mH1, mHsm, MZ)
    ADDCHANNELINFO(H1H1ZZ, H1H1ZZfl, mH1, mH1, MZ, MZ)
    ADDCHANNELINFO(H1H1wW, H1H1wWfl, mH1, mH1, MW, MW)
    ADDCHANNELINFO(H1H1Ee, H1H1Eefl, mH1, mH1, Me, Me)
    ADDCHANNELINFO(H1H1Mm, H1H1Mmfl, mH1, mH1, MM, MM)
    ADDCHANNELINFO(H1H1TAta, H1H1TAtafl, mH1, mH1, MTA, MTA)
    ADDCHANNELINFO(H1H1Uu, H1H1Uufl, mH1, mH1, MU, MU)
    ADDCHANNELINFO(H1H1Cc, H1H1Ccfl, mH1, mH1, MC, MC)
    ADDCHANNELINFO(H1H1Tt, H1H1Ttfl, mH1, mH1, MT, MT)
    ADDCHANNELINFO(H1H1Dd, H1H1Ddfl, mH1, mH1, MD, MD)
    ADDCHANNELINFO(H1H1Ss, H1H1Ssfl, mH1, mH1, MS, MS)
    ADDCHANNELINFO(H1H1Bb, H1H1Bbfl, mH1, mH1, MB, MB)
    ADDCHANNELINFO(H1H2hh, H1H2hhfl, mH1, mH2, mHsm, mHsm)
    ADDCHANNELINFO(H1H2hZ, H1H2hZfl, mH1, mH2, mHsm, MZ)
    ADDCHANNELINFO(H1H2ZZ, H1H2ZZfl, mH1, mH2, MZ, MZ)
    ADDCHANNELINFO(H1H2wW, H1H2wWfl, mH1, mH2, MW, MW)
    ADDCHANNELINFO(H1H2VEve, H1H2VEvefl, mH1, mH2, Mnue, Mnue)
    ADDCHANNELINFO(H1H2VMvm, H1H2VMvmfl, mH1, mH2, Mnum, Mnum)
    ADDCHANNELINFO(H1H2VTvt, H1H2VTvtfl, mH1, mH2, Mnut, Mnut)
    ADDCHANNELINFO(H1H2Ee, H1H2Eefl, mH1, mH2, Me, Me)
    ADDCHANNELINFO(H1H2Mm, H1H2Mmfl, mH1, mH2, MM, MM)
    ADDCHANNELINFO(H1H2TAta, H1H2TAtafl, mH1, mH2, MTA, MTA)
    ADDCHANNELINFO(H1H2Uu, H1H2Uufl, mH1, mH2, MU, MU)
    ADDCHANNELINFO(H1H2Cc, H1H2Ccfl, mH1, mH2, MC, MC)
    ADDCHANNELINFO(H1H2Tt, H1H2Ttfl, mH1, mH2, MT, MT)
    ADDCHANNELINFO(H1H2Dd, H1H2Ddfl, mH1, mH2, MD, MD)
    ADDCHANNELINFO(H1H2Ss, H1H2Ssfl, mH1, mH2, MS, MS)
    ADDCHANNELINFO(H1H2Bb, H1H2Bbfl, mH1, mH2, MB, MB)
    ADDCHANNELINFO(H1H3hh, H1H3hhfl, mH1, mH3, mHsm, mHsm)
    ADDCHANNELINFO(H1H3hZ, H1H3hZfl, mH1, mH3, mHsm, MZ)
    ADDCHANNELINFO(H1H3ZZ, H1H3ZZfl, mH1, mH3, MZ, MZ)
    ADDCHANNELINFO(H1H3wW, H1H3wWfl, mH1, mH3, MW, MW)
    ADDCHANNELINFO(H1H3VEve, H1H3VEvefl, mH1, mH3, Mnue, Mnue)
    ADDCHANNELINFO(H1H3VMvm, H1H3VMvmfl, mH1, mH3, Mnum, Mnum)
    ADDCHANNELINFO(H1H3VTvt, H1H3VTvtfl, mH1, mH3, Mnut, Mnut)
    ADDCHANNELINFO(H1H3Ee, H1H3Eefl, mH1, mH3, Me, Me)
    ADDCHANNELINFO(H1H3Mm, H1H3Mmfl, mH1, mH3, MM, MM)
    ADDCHANNELINFO(H1H3TAta, H1H3TAtafl, mH1, mH3, MTA, MTA)
    ADDCHANNELINFO(H1H3Uu, H1H3Uufl, mH1, mH3, MU, MU)
    ADDCHANNELINFO(H1H3Cc, H1H3Ccfl, mH1, mH3, MC, MC)
    ADDCHANNELINFO(H1H3Tt, H1H3Ttfl, mH1, mH3, MT, MT)
    ADDCHANNELINFO(H1H3Dd, H1H3Ddfl, mH1, mH3, MD, MD)
    ADDCHANNELINFO(H1H3Ss, H1H3Ssfl, mH1, mH3, MS, MS)
    ADDCHANNELINFO(H1H3Bb, H1H3Bbfl, mH1, mH3, MB, MB)
    ADDCHANNELINFO(H1HchW, H1HchWfl, mH1, mHc, mHsm, MW)
    ADDCHANNELINFO(H1HcAW, H1HcAWfl, mH1, mHc, ZERO, MW)
    ADDCHANNELINFO(H1HcZW, H1HcZWfl, mH1, mHc, MZ, MW)
    ADDCHANNELINFO(H1HcveE, H1HcveEfl, mH1, mHc, Mnue, Me)
    ADDCHANNELINFO(H1HcvmM, H1HcvmMfl, mH1, mHc, Mnum, MM)
    ADDCHANNELINFO(H1HcvtTA, H1HcvtTAfl, mH1, mHc, Mnut, MTA)
    ADDCHANNELINFO(H1HcuD, H1HcuDfl, mH1, mHc, MU, MD)
    ADDCHANNELINFO(H1HcuS, H1HcuSfl, mH1, mHc, MU, MS)
    ADDCHANNELINFO(H1HcuB, H1HcuBfl, mH1, mHc, MU, MB)
    ADDCHANNELINFO(H1HccD, H1HccDfl, mH1, mHc, MC, MD)
    ADDCHANNELINFO(H1HccS, H1HccSfl, mH1, mHc, MC, MS)
    ADDCHANNELINFO(H1HccB, H1HccBfl, mH1, mHc, MC, MB)
    ADDCHANNELINFO(H1HctD, H1HctDfl, mH1, mHc, MT, MD)
    ADDCHANNELINFO(H1HctS, H1HctSfl, mH1, mHc, MT, MS)
    ADDCHANNELINFO(H1HctB, H1HctBfl, mH1, mHc, MT, MB)
    ADDCHANNELINFO(H2H2hh, H2H2hhfl, mH2, mH2, mHsm, mHsm)
    ADDCHANNELINFO(H2H2hZ, H2H2hZfl, mH2, mH2, mHsm, MZ)
    ADDCHANNELINFO(H2H2ZZ, H2H2ZZfl, mH2, mH2, MZ, MZ)
    ADDCHANNELINFO(H2H2wW, H2H2wWfl, mH2, mH2, MW, MW)
    ADDCHANNELINFO(H2H2Ee, H2H2Eefl, mH2, mH2, Me, Me)
    ADDCHANNELINFO(H2H2Mm, H2H2Mmfl, mH2, mH2, MM, MM)
    ADDCHANNELINFO(H2H2TAta, H2H2TAtafl, mH2, mH2, MTA, MTA)
    ADDCHANNELINFO(H2H2Uu, H2H2Uufl, mH2, mH2, MU, MU)
    ADDCHANNELINFO(H2H2Cc, H2H2Ccfl, mH2, mH2, MC, MC)
    ADDCHANNELINFO(H2H2Tt, H2H2Ttfl, mH2, mH2, MT, MT)
    ADDCHANNELINFO(H2H2Dd, H2H2Ddfl, mH2, mH2, MD, MD)
    ADDCHANNELINFO(H2H2Ss, H2H2Ssfl, mH2, mH2, MS, MS)
    ADDCHANNELINFO(H2H2Bb, H2H2Bbfl, mH2, mH2, MB, MB)
    ADDCHANNELINFO(H2H3hh, H2H3hhfl, mH2, mH3, mHsm, mHsm)
    ADDCHANNELINFO(H2H3hZ, H2H3hZfl, mH2, mH3, mHsm, MZ)
    ADDCHANNELINFO(H2H3ZZ, H2H3ZZfl, mH2, mH3, MZ, MZ)
    ADDCHANNELINFO(H2H3wW, H2H3wWfl, mH2, mH3, MW, MW)
    ADDCHANNELINFO(H2H3VEve, H2H3VEvefl, mH2, mH3, Mnue, Mnue)
    ADDCHANNELINFO(H2H3VMvm, H2H3VMvmfl, mH2, mH3, Mnum, Mnum)
    ADDCHANNELINFO(H2H3VTvt, H2H3VTvtfl, mH2, mH3, Mnut, Mnut)
    ADDCHANNELINFO(H2H3Ee, H2H3Eefl, mH2, mH3, Me, Me)
    ADDCHANNELINFO(H2H3Mm, H2H3Mmfl, mH2, mH3, MM, MM)
    ADDCHANNELINFO(H2H3TAta, H2H3TAtafl, mH2, mH3, MTA, MTA)
    ADDCHANNELINFO(H2H3Uu, H2H3Uufl, mH2, mH3, MU, MU)
    ADDCHANNELINFO(H2H3Cc, H2H3Ccfl, mH2, mH3, MC, MC)
    ADDCHANNELINFO(H2H3Tt, H2H3Ttfl, mH2, mH3, MT, MT)
    ADDCHANNELINFO(H2H3Dd, H2H3Ddfl, mH2, mH3, MD, MD)
    ADDCHANNELINFO(H2H3Ss, H2H3Ssfl, mH2, mH3, MS, MS)
    ADDCHANNELINFO(H2H3Bb, H2H3Bbfl, mH2, mH3, MB, MB)
    ADDCHANNELINFO(H2HchW, H2HchWfl, mH2, mHc, mHsm, MW)
    ADDCHANNELINFO(H2HcAW, H2HcAWfl, mH2, mHc, ZERO, MW)
    ADDCHANNELINFO(H2HcZW, H2HcZWfl, mH2, mHc, MZ, MW)
    ADDCHANNELINFO(H2HcveE, H2HcveEfl, mH2, mHc, Mnue, Me)
    ADDCHANNELINFO(H2HcvmM, H2HcvmMfl, mH2, mHc, Mnum, MM)
    ADDCHANNELINFO(H2HcvtTA, H2HcvtTAfl, mH2, mHc, Mnut, MTA)
    ADDCHANNELINFO(H2HcuD, H2HcuDfl, mH2, mHc, MU, MD)
    ADDCHANNELINFO(H2HcuS, H2HcuSfl, mH2, mHc, MU, MS)
    ADDCHANNELINFO(H2HcuB, H2HcuBfl, mH2, mHc, MU, MB)
    ADDCHANNELINFO(H2HccD, H2HccDfl, mH2, mHc, MC, MD)
    ADDCHANNELINFO(H2HccS, H2HccSfl, mH2, mHc, MC, MS)
    ADDCHANNELINFO(H2HccB, H2HccBfl, mH2, mHc, MC, MB)
    ADDCHANNELINFO(H2HctD, H2HctDfl, mH2, mHc, MT, MD)
    ADDCHANNELINFO(H2HctS, H2HctSfl, mH2, mHc, MT, MS)
    ADDCHANNELINFO(H2HctB, H2HctBfl, mH2, mHc, MT, MB)
    ADDCHANNELINFO(H3H3hh, H3H3hhfl, mH3, mH3, mHsm, mHsm)
    ADDCHANNELINFO(H3H3hZ, H3H3hZfl, mH3, mH3, mHsm, MZ)
    ADDCHANNELINFO(H3H3ZZ, H3H3ZZfl, mH3, mH3, MZ, MZ)
    ADDCHANNELINFO(H3H3wW, H3H3wWfl, mH3, mH3, MW, MW)
    ADDCHANNELINFO(H3H3Ee, H3H3Eefl, mH3, mH3, Me, Me)
    ADDCHANNELINFO(H3H3Mm, H3H3Mmfl, mH3, mH3, MM, MM)
    ADDCHANNELINFO(H3H3TAta, H3H3TAtafl, mH3, mH3, MTA, MTA)
    ADDCHANNELINFO(H3H3Uu, H3H3Uufl, mH3, mH3, MU, MU)
    ADDCHANNELINFO(H3H3Cc, H3H3Ccfl, mH3, mH3, MC, MC)
    ADDCHANNELINFO(H3H3Tt, H3H3Ttfl, mH3, mH3, MT, MT)
    ADDCHANNELINFO(H3H3Dd, H3H3Ddfl, mH3, mH3, MD, MD)
    ADDCHANNELINFO(H3H3Ss, H3H3Ssfl, mH3, mH3, MS, MS)
    ADDCHANNELINFO(H3H3Bb, H3H3Bbfl, mH3, mH3, MB, MB)
    ADDCHANNELINFO(H3HchW, H3HchWfl, mH3, mHc, mHsm, MW)
    ADDCHANNELINFO(H3HcAW, H3HcAWfl, mH3, mHc, ZERO, MW)
    ADDCHANNELINFO(H3HcZW, H3HcZWfl, mH3, mHc, MZ, MW)
    ADDCHANNELINFO(H3HcveE, H3HcveEfl, mH3, mHc, Mnue, Me)
    ADDCHANNELINFO(H3HcvmM, H3HcvmMfl, mH3, mHc, Mnum, MM)
    ADDCHANNELINFO(H3HcvtTA, H3HcvtTAfl, mH3, mHc, Mnut, MTA)
    ADDCHANNELINFO(H3HcuD, H3HcuDfl, mH3, mHc, MU, MD)
    ADDCHANNELINFO(H3HcuS, H3HcuSfl, mH3, mHc, MU, MS)
    ADDCHANNELINFO(H3HcuB, H3HcuBfl, mH3, mHc, MU, MB)
    ADDCHANNELINFO(H3HccD, H3HccDfl, mH3, mHc, MC, MD)
    ADDCHANNELINFO(H3HccS, H3HccSfl, mH3, mHc, MC, MS)
    ADDCHANNELINFO(H3HccB, H3HccBfl, mH3, mHc, MC, MB)
    ADDCHANNELINFO(H3HctD, H3HctDfl, mH3, mHc, MT, MD)
    ADDCHANNELINFO(H3HctS, H3HctSfl, mH3, mHc, MT, MS)
    ADDCHANNELINFO(H3HctB, H3HctBfl, mH3, mHc, MT, MB)
    ADDCHANNELINFO(HcHcWW, HcHcWWfl, mHc, mHc, MW, MW)
    ADDCHANNELINFO(HcHChh, HcHChhfl, mHc, mHc, mHsm, mHsm)
    ADDCHANNELINFO(HcHChA, HcHChAfl, mHc, mHc, mHsm, ZERO)
    ADDCHANNELINFO(HcHChZ, HcHChZfl, mHc, mHc, mHsm, MZ)
    ADDCHANNELINFO(HcHCAA, HcHCAAfl, mHc, mHc, ZERO, ZERO)
    ADDCHANNELINFO(HcHCAZ, HcHCAZfl, mHc, mHc, ZERO, MZ)
    ADDCHANNELINFO(HcHCZZ, HcHCZZfl, mHc, mHc, MZ, MZ)
    ADDCHANNELINFO(HcHCwW, HcHCwWfl, mHc, mHc, MW, MW)
    ADDCHANNELINFO(HcHCVEve, HcHCVEvefl, mHc, mHc, Mnue, Mnue)
    ADDCHANNELINFO(HcHCVMvm, HcHCVMvmfl, mHc, mHc, Mnum, Mnum)
    ADDCHANNELINFO(HcHCVTvt, HcHCVTvtfl, mHc, mHc, Mnut, Mnut)
    ADDCHANNELINFO(HcHCEe, HcHCEefl, mHc, mHc, Me, Me)
    ADDCHANNELINFO(HcHCMm, HcHCMmfl, mHc, mHc, MM, MM)
    ADDCHANNELINFO(HcHCTAta, HcHCTAtafl, mHc, mHc, MTA, MTA)
    ADDCHANNELINFO(HcHCUu, HcHCUufl, mHc, mHc, MU, MU)
    ADDCHANNELINFO(HcHCCc, HcHCCcfl, mHc, mHc, MC, MC)
    ADDCHANNELINFO(HcHCTt, HcHCTtfl, mHc, mHc, MT, MT)
    ADDCHANNELINFO(HcHCDd, HcHCDdfl, mHc, mHc, MD, MD)
    ADDCHANNELINFO(HcHCSs, HcHCSsfl, mHc, mHc, MS, MS)
    ADDCHANNELINFO(HcHCBb, HcHCBbfl, mHc, mHc, MB, MB)
    denstructures.push_back(&MZ);
    denstructures.push_back(&WZ);
    denstructures.push_back(&MW);
    denstructures.push_back(&WW);
    denstructures.push_back(&mHsm);
    denstructures.push_back(&WHsm);
    N_widths = 3;
}

void Model::init() {
    ADDCHANNEL(H1H1hh, H1H1hhfl)
    ADDCHANNEL(H1H1hZ, H1H1hZfl)
    ADDCHANNEL(H1H1ZZ, H1H1ZZfl)
    ADDCHANNEL(H1H1wW, H1H1wWfl)
    ADDCHANNEL(H1H1Ee, H1H1Eefl)
    ADDCHANNEL(H1H1Mm, H1H1Mmfl)
    ADDCHANNEL(H1H1TAta, H1H1TAtafl)
    ADDCHANNEL(H1H1Uu, H1H1Uufl)
    ADDCHANNEL(H1H1Cc, H1H1Ccfl)
    ADDCHANNEL(H1H1Tt, H1H1Ttfl)
    ADDCHANNEL(H1H1Dd, H1H1Ddfl)
    ADDCHANNEL(H1H1Ss, H1H1Ssfl)
    ADDCHANNEL(H1H1Bb, H1H1Bbfl)
    ADDCHANNEL(H1H2hh, H1H2hhfl)
    ADDCHANNEL(H1H2hZ, H1H2hZfl)
    ADDCHANNEL(H1H2ZZ, H1H2ZZfl)
    ADDCHANNEL(H1H2wW, H1H2wWfl)
    ADDCHANNEL(H1H2VEve, H1H2VEvefl)
    ADDCHANNEL(H1H2VMvm, H1H2VMvmfl)
    ADDCHANNEL(H1H2VTvt, H1H2VTvtfl)
    ADDCHANNEL(H1H2Ee, H1H2Eefl)
    ADDCHANNEL(H1H2Mm, H1H2Mmfl)
    ADDCHANNEL(H1H2TAta, H1H2TAtafl)
    ADDCHANNEL(H1H2Uu, H1H2Uufl)
    ADDCHANNEL(H1H2Cc, H1H2Ccfl)
    ADDCHANNEL(H1H2Tt, H1H2Ttfl)
    ADDCHANNEL(H1H2Dd, H1H2Ddfl)
    ADDCHANNEL(H1H2Ss, H1H2Ssfl)
    ADDCHANNEL(H1H2Bb, H1H2Bbfl)
    ADDCHANNEL(H1H3hh, H1H3hhfl)
    ADDCHANNEL(H1H3hZ, H1H3hZfl)
    ADDCHANNEL(H1H3ZZ, H1H3ZZfl)
    ADDCHANNEL(H1H3wW, H1H3wWfl)
    ADDCHANNEL(H1H3VEve, H1H3VEvefl)
    ADDCHANNEL(H1H3VMvm, H1H3VMvmfl)
    ADDCHANNEL(H1H3VTvt, H1H3VTvtfl)
    ADDCHANNEL(H1H3Ee, H1H3Eefl)
    ADDCHANNEL(H1H3Mm, H1H3Mmfl)
    ADDCHANNEL(H1H3TAta, H1H3TAtafl)
    ADDCHANNEL(H1H3Uu, H1H3Uufl)
    ADDCHANNEL(H1H3Cc, H1H3Ccfl)
    ADDCHANNEL(H1H3Tt, H1H3Ttfl)
    ADDCHANNEL(H1H3Dd, H1H3Ddfl)
    ADDCHANNEL(H1H3Ss, H1H3Ssfl)
    ADDCHANNEL(H1H3Bb, H1H3Bbfl)
    ADDCHANNEL(H1HchW, H1HchWfl)
    ADDCHANNEL(H1HcAW, H1HcAWfl)
    ADDCHANNEL(H1HcZW, H1HcZWfl)
    ADDCHANNEL(H1HcveE, H1HcveEfl)
    ADDCHANNEL(H1HcvmM, H1HcvmMfl)
    ADDCHANNEL(H1HcvtTA, H1HcvtTAfl)
    ADDCHANNEL(H1HcuD, H1HcuDfl)
    ADDCHANNEL(H1HcuS, H1HcuSfl)
    ADDCHANNEL(H1HcuB, H1HcuBfl)
    ADDCHANNEL(H1HccD, H1HccDfl)
    ADDCHANNEL(H1HccS, H1HccSfl)
    ADDCHANNEL(H1HccB, H1HccBfl)
    ADDCHANNEL(H1HctD, H1HctDfl)
    ADDCHANNEL(H1HctS, H1HctSfl)
    ADDCHANNEL(H1HctB, H1HctBfl)
    ADDCHANNEL(H2H2hh, H2H2hhfl)
    ADDCHANNEL(H2H2hZ, H2H2hZfl)
    ADDCHANNEL(H2H2ZZ, H2H2ZZfl)
    ADDCHANNEL(H2H2wW, H2H2wWfl)
    ADDCHANNEL(H2H2Ee, H2H2Eefl)
    ADDCHANNEL(H2H2Mm, H2H2Mmfl)
    ADDCHANNEL(H2H2TAta, H2H2TAtafl)
    ADDCHANNEL(H2H2Uu, H2H2Uufl)
    ADDCHANNEL(H2H2Cc, H2H2Ccfl)
    ADDCHANNEL(H2H2Tt, H2H2Ttfl)
    ADDCHANNEL(H2H2Dd, H2H2Ddfl)
    ADDCHANNEL(H2H2Ss, H2H2Ssfl)
    ADDCHANNEL(H2H2Bb, H2H2Bbfl)
    ADDCHANNEL(H2H3hh, H2H3hhfl)
    ADDCHANNEL(H2H3hZ, H2H3hZfl)
    ADDCHANNEL(H2H3ZZ, H2H3ZZfl)
    ADDCHANNEL(H2H3wW, H2H3wWfl)
    ADDCHANNEL(H2H3VEve, H2H3VEvefl)
    ADDCHANNEL(H2H3VMvm, H2H3VMvmfl)
    ADDCHANNEL(H2H3VTvt, H2H3VTvtfl)
    ADDCHANNEL(H2H3Ee, H2H3Eefl)
    ADDCHANNEL(H2H3Mm, H2H3Mmfl)
    ADDCHANNEL(H2H3TAta, H2H3TAtafl)
    ADDCHANNEL(H2H3Uu, H2H3Uufl)
    ADDCHANNEL(H2H3Cc, H2H3Ccfl)
    ADDCHANNEL(H2H3Tt, H2H3Ttfl)
    ADDCHANNEL(H2H3Dd, H2H3Ddfl)
    ADDCHANNEL(H2H3Ss, H2H3Ssfl)
    ADDCHANNEL(H2H3Bb, H2H3Bbfl)
    ADDCHANNEL(H2HchW, H2HchWfl)
    ADDCHANNEL(H2HcAW, H2HcAWfl)
    ADDCHANNEL(H2HcZW, H2HcZWfl)
    ADDCHANNEL(H2HcveE, H2HcveEfl)
    ADDCHANNEL(H2HcvmM, H2HcvmMfl)
    ADDCHANNEL(H2HcvtTA, H2HcvtTAfl)
    ADDCHANNEL(H2HcuD, H2HcuDfl)
    ADDCHANNEL(H2HcuS, H2HcuSfl)
    ADDCHANNEL(H2HcuB, H2HcuBfl)
    ADDCHANNEL(H2HccD, H2HccDfl)
    ADDCHANNEL(H2HccS, H2HccSfl)
    ADDCHANNEL(H2HccB, H2HccBfl)
    ADDCHANNEL(H2HctD, H2HctDfl)
    ADDCHANNEL(H2HctS, H2HctSfl)
    ADDCHANNEL(H2HctB, H2HctBfl)
    ADDCHANNEL(H3H3hh, H3H3hhfl)
    ADDCHANNEL(H3H3hZ, H3H3hZfl)
    ADDCHANNEL(H3H3ZZ, H3H3ZZfl)
    ADDCHANNEL(H3H3wW, H3H3wWfl)
    ADDCHANNEL(H3H3Ee, H3H3Eefl)
    ADDCHANNEL(H3H3Mm, H3H3Mmfl)
    ADDCHANNEL(H3H3TAta, H3H3TAtafl)
    ADDCHANNEL(H3H3Uu, H3H3Uufl)
    ADDCHANNEL(H3H3Cc, H3H3Ccfl)
    ADDCHANNEL(H3H3Tt, H3H3Ttfl)
    ADDCHANNEL(H3H3Dd, H3H3Ddfl)
    ADDCHANNEL(H3H3Ss, H3H3Ssfl)
    ADDCHANNEL(H3H3Bb, H3H3Bbfl)
    ADDCHANNEL(H3HchW, H3HchWfl)
    ADDCHANNEL(H3HcAW, H3HcAWfl)
    ADDCHANNEL(H3HcZW, H3HcZWfl)
    ADDCHANNEL(H3HcveE, H3HcveEfl)
    ADDCHANNEL(H3HcvmM, H3HcvmMfl)
    ADDCHANNEL(H3HcvtTA, H3HcvtTAfl)
    ADDCHANNEL(H3HcuD, H3HcuDfl)
    ADDCHANNEL(H3HcuS, H3HcuSfl)
    ADDCHANNEL(H3HcuB, H3HcuBfl)
    ADDCHANNEL(H3HccD, H3HccDfl)
    ADDCHANNEL(H3HccS, H3HccSfl)
    ADDCHANNEL(H3HccB, H3HccBfl)
    ADDCHANNEL(H3HctD, H3HctDfl)
    ADDCHANNEL(H3HctS, H3HctSfl)
    ADDCHANNEL(H3HctB, H3HctBfl)
    ADDCHANNEL(HcHcWW, HcHcWWfl)
    ADDCHANNEL(HcHChh, HcHChhfl)
    ADDCHANNEL(HcHChA, HcHChAfl)
    ADDCHANNEL(HcHChZ, HcHChZfl)
    ADDCHANNEL(HcHCAA, HcHCAAfl)
    ADDCHANNEL(HcHCAZ, HcHCAZfl)
    ADDCHANNEL(HcHCZZ, HcHCZZfl)
    ADDCHANNEL(HcHCwW, HcHCwWfl)
    ADDCHANNEL(HcHCVEve, HcHCVEvefl)
    ADDCHANNEL(HcHCVMvm, HcHCVMvmfl)
    ADDCHANNEL(HcHCVTvt, HcHCVTvtfl)
    ADDCHANNEL(HcHCEe, HcHCEefl)
    ADDCHANNEL(HcHCMm, HcHCMmfl)
    ADDCHANNEL(HcHCTAta, HcHCTAtafl)
    ADDCHANNEL(HcHCUu, HcHCUufl)
    ADDCHANNEL(HcHCCc, HcHCCcfl)
    ADDCHANNEL(HcHCTt, HcHCTtfl)
    ADDCHANNEL(HcHCDd, HcHCDdfl)
    ADDCHANNEL(HcHCSs, HcHCSsfl)
    ADDCHANNEL(HcHCBb, HcHCBbfl)
}
}  // namespace DT
