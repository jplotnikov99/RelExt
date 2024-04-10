///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void Model::init()
	{
		MZ = 91.1876;
		aEWM1 = 0.00775795;
		Gf = 0.0000116637;
		aS = 0.1172;
		mHsm = 125.09;
		mHc = 200.;
		alph1 = -0.1;
		alph2 = -0.1;
		alph3 = 0.1;
		mH1 = 100.;
		mH2 = 200.;
		m22sq = 100;
		mssq = 100;
		L2 = 0.1;
		L6 = 0.1;
		L8 = 0.1;
		MC = 1.2;
		MB = 4.23;
		MT = 172.5;
		GG = 1.21358;
		Mnue = 0.;
		Mnum = 0.;
		Mnut = 0.;
		Me = 0.;
		MM = 0.1057;
		MTA = 1.777;
		MU = 0.;
		MD = 0.;
		MS = 0.;
		WT = 2.;
		WZ = 2.4952;
		WW = 2.085;
		WHsm = 1.;
		WH1 = 0.;
		WH2 = 1.;
		WH3 = 1.;
		WHc = 1.;
		E = 2.71828;
		Pi = 3.14159;
		double EL = 0.312233;
		double ee = 0.312233;
		double gs = 1.21358;
		double G = 1.21358;
		double FAGS = 1.21358;

		particles["H1"]=&mH1;
		particles["H2"]=&mH2;
		particles["H3"]=&mH3;
		particles["Hc"]=&mHc;
		particles["HC"]=&mHc;
		dsmasses.push_back(&mH1);
		dsmasses.push_back(&mH2);
		dsmasses.push_back(&mH3);
		dsmasses.push_back(&mHc);
		dsmasses.push_back(&mHc);
		neutraldsmasses.push_back(&mH1);
		neutraldsmasses.push_back(&mH2);
		neutraldsmasses.push_back(&mH3);
		ADDCHANNEL(H1H1hh, H1H1hhfl, mH1, mH1, mHsm, mHsm)
		ADDCHANNEL(H1H1hZ, H1H1hZfl, mH1, mH1, mHsm, MZ)
		ADDCHANNEL(H1H1ZZ, H1H1ZZfl, mH1, mH1, MZ, MZ)
		ADDCHANNEL(H1H1wW, H1H1wWfl, mH1, mH1, MW, MW)
		ADDCHANNEL(H1H1Ee, H1H1Eefl, mH1, mH1, Me, Me)
		ADDCHANNEL(H1H1Mm, H1H1Mmfl, mH1, mH1, MM, MM)
		ADDCHANNEL(H1H1TAta, H1H1TAtafl, mH1, mH1, MTA, MTA)
		ADDCHANNEL(H1H1Uu, H1H1Uufl, mH1, mH1, MU, MU)
		ADDCHANNEL(H1H1Cc, H1H1Ccfl, mH1, mH1, MC, MC)
		ADDCHANNEL(H1H1Tt, H1H1Ttfl, mH1, mH1, MT, MT)
		ADDCHANNEL(H1H1Dd, H1H1Ddfl, mH1, mH1, MD, MD)
		ADDCHANNEL(H1H1Ss, H1H1Ssfl, mH1, mH1, MS, MS)
		ADDCHANNEL(H1H1Bb, H1H1Bbfl, mH1, mH1, MB, MB)
		ADDCHANNEL(H1H2hh, H1H2hhfl, mH1, mH2, mHsm, mHsm)
		ADDCHANNEL(H1H2hZ, H1H2hZfl, mH1, mH2, mHsm, MZ)
		ADDCHANNEL(H1H2ZZ, H1H2ZZfl, mH1, mH2, MZ, MZ)
		ADDCHANNEL(H1H2wW, H1H2wWfl, mH1, mH2, MW, MW)
		ADDCHANNEL(H1H2VEve, H1H2VEvefl, mH1, mH2, Mnue, Mnue)
		ADDCHANNEL(H1H2VMvm, H1H2VMvmfl, mH1, mH2, Mnum, Mnum)
		ADDCHANNEL(H1H2VTvt, H1H2VTvtfl, mH1, mH2, Mnut, Mnut)
		ADDCHANNEL(H1H2Ee, H1H2Eefl, mH1, mH2, Me, Me)
		ADDCHANNEL(H1H2Mm, H1H2Mmfl, mH1, mH2, MM, MM)
		ADDCHANNEL(H1H2TAta, H1H2TAtafl, mH1, mH2, MTA, MTA)
		ADDCHANNEL(H1H2Uu, H1H2Uufl, mH1, mH2, MU, MU)
		ADDCHANNEL(H1H2Cc, H1H2Ccfl, mH1, mH2, MC, MC)
		ADDCHANNEL(H1H2Tt, H1H2Ttfl, mH1, mH2, MT, MT)
		ADDCHANNEL(H1H2Dd, H1H2Ddfl, mH1, mH2, MD, MD)
		ADDCHANNEL(H1H2Ss, H1H2Ssfl, mH1, mH2, MS, MS)
		ADDCHANNEL(H1H2Bb, H1H2Bbfl, mH1, mH2, MB, MB)
		ADDCHANNEL(H1H3hh, H1H3hhfl, mH1, mH3, mHsm, mHsm)
		ADDCHANNEL(H1H3hZ, H1H3hZfl, mH1, mH3, mHsm, MZ)
		ADDCHANNEL(H1H3ZZ, H1H3ZZfl, mH1, mH3, MZ, MZ)
		ADDCHANNEL(H1H3wW, H1H3wWfl, mH1, mH3, MW, MW)
		ADDCHANNEL(H1H3VEve, H1H3VEvefl, mH1, mH3, Mnue, Mnue)
		ADDCHANNEL(H1H3VMvm, H1H3VMvmfl, mH1, mH3, Mnum, Mnum)
		ADDCHANNEL(H1H3VTvt, H1H3VTvtfl, mH1, mH3, Mnut, Mnut)
		ADDCHANNEL(H1H3Ee, H1H3Eefl, mH1, mH3, Me, Me)
		ADDCHANNEL(H1H3Mm, H1H3Mmfl, mH1, mH3, MM, MM)
		ADDCHANNEL(H1H3TAta, H1H3TAtafl, mH1, mH3, MTA, MTA)
		ADDCHANNEL(H1H3Uu, H1H3Uufl, mH1, mH3, MU, MU)
		ADDCHANNEL(H1H3Cc, H1H3Ccfl, mH1, mH3, MC, MC)
		ADDCHANNEL(H1H3Tt, H1H3Ttfl, mH1, mH3, MT, MT)
		ADDCHANNEL(H1H3Dd, H1H3Ddfl, mH1, mH3, MD, MD)
		ADDCHANNEL(H1H3Ss, H1H3Ssfl, mH1, mH3, MS, MS)
		ADDCHANNEL(H1H3Bb, H1H3Bbfl, mH1, mH3, MB, MB)
		ADDCHANNEL(H1HchW, H1HchWfl, mH1, mHc, mHsm, MW)
		ADDCHANNEL(H1HcAW, H1HcAWfl, mH1, mHc, ZERO, MW)
		ADDCHANNEL(H1HcZW, H1HcZWfl, mH1, mHc, MZ, MW)
		ADDCHANNEL(H1HcveE, H1HcveEfl, mH1, mHc, Mnue, Me)
		ADDCHANNEL(H1HcvmM, H1HcvmMfl, mH1, mHc, Mnum, MM)
		ADDCHANNEL(H1HcvtTA, H1HcvtTAfl, mH1, mHc, Mnut, MTA)
		ADDCHANNEL(H1HcuD, H1HcuDfl, mH1, mHc, MU, MD)
		ADDCHANNEL(H1HcuS, H1HcuSfl, mH1, mHc, MU, MS)
		ADDCHANNEL(H1HcuB, H1HcuBfl, mH1, mHc, MU, MB)
		ADDCHANNEL(H1HccD, H1HccDfl, mH1, mHc, MC, MD)
		ADDCHANNEL(H1HccS, H1HccSfl, mH1, mHc, MC, MS)
		ADDCHANNEL(H1HccB, H1HccBfl, mH1, mHc, MC, MB)
		ADDCHANNEL(H1HctD, H1HctDfl, mH1, mHc, MT, MD)
		ADDCHANNEL(H1HctS, H1HctSfl, mH1, mHc, MT, MS)
		ADDCHANNEL(H1HctB, H1HctBfl, mH1, mHc, MT, MB)
		ADDCHANNEL(H2H2hh, H2H2hhfl, mH2, mH2, mHsm, mHsm)
		ADDCHANNEL(H2H2hZ, H2H2hZfl, mH2, mH2, mHsm, MZ)
		ADDCHANNEL(H2H2ZZ, H2H2ZZfl, mH2, mH2, MZ, MZ)
		ADDCHANNEL(H2H2wW, H2H2wWfl, mH2, mH2, MW, MW)
		ADDCHANNEL(H2H2Ee, H2H2Eefl, mH2, mH2, Me, Me)
		ADDCHANNEL(H2H2Mm, H2H2Mmfl, mH2, mH2, MM, MM)
		ADDCHANNEL(H2H2TAta, H2H2TAtafl, mH2, mH2, MTA, MTA)
		ADDCHANNEL(H2H2Uu, H2H2Uufl, mH2, mH2, MU, MU)
		ADDCHANNEL(H2H2Cc, H2H2Ccfl, mH2, mH2, MC, MC)
		ADDCHANNEL(H2H2Tt, H2H2Ttfl, mH2, mH2, MT, MT)
		ADDCHANNEL(H2H2Dd, H2H2Ddfl, mH2, mH2, MD, MD)
		ADDCHANNEL(H2H2Ss, H2H2Ssfl, mH2, mH2, MS, MS)
		ADDCHANNEL(H2H2Bb, H2H2Bbfl, mH2, mH2, MB, MB)
		ADDCHANNEL(H2H3hh, H2H3hhfl, mH2, mH3, mHsm, mHsm)
		ADDCHANNEL(H2H3hZ, H2H3hZfl, mH2, mH3, mHsm, MZ)
		ADDCHANNEL(H2H3ZZ, H2H3ZZfl, mH2, mH3, MZ, MZ)
		ADDCHANNEL(H2H3wW, H2H3wWfl, mH2, mH3, MW, MW)
		ADDCHANNEL(H2H3VEve, H2H3VEvefl, mH2, mH3, Mnue, Mnue)
		ADDCHANNEL(H2H3VMvm, H2H3VMvmfl, mH2, mH3, Mnum, Mnum)
		ADDCHANNEL(H2H3VTvt, H2H3VTvtfl, mH2, mH3, Mnut, Mnut)
		ADDCHANNEL(H2H3Ee, H2H3Eefl, mH2, mH3, Me, Me)
		ADDCHANNEL(H2H3Mm, H2H3Mmfl, mH2, mH3, MM, MM)
		ADDCHANNEL(H2H3TAta, H2H3TAtafl, mH2, mH3, MTA, MTA)
		ADDCHANNEL(H2H3Uu, H2H3Uufl, mH2, mH3, MU, MU)
		ADDCHANNEL(H2H3Cc, H2H3Ccfl, mH2, mH3, MC, MC)
		ADDCHANNEL(H2H3Tt, H2H3Ttfl, mH2, mH3, MT, MT)
		ADDCHANNEL(H2H3Dd, H2H3Ddfl, mH2, mH3, MD, MD)
		ADDCHANNEL(H2H3Ss, H2H3Ssfl, mH2, mH3, MS, MS)
		ADDCHANNEL(H2H3Bb, H2H3Bbfl, mH2, mH3, MB, MB)
		ADDCHANNEL(H2HchW, H2HchWfl, mH2, mHc, mHsm, MW)
		ADDCHANNEL(H2HcAW, H2HcAWfl, mH2, mHc, ZERO, MW)
		ADDCHANNEL(H2HcZW, H2HcZWfl, mH2, mHc, MZ, MW)
		ADDCHANNEL(H2HcveE, H2HcveEfl, mH2, mHc, Mnue, Me)
		ADDCHANNEL(H2HcvmM, H2HcvmMfl, mH2, mHc, Mnum, MM)
		ADDCHANNEL(H2HcvtTA, H2HcvtTAfl, mH2, mHc, Mnut, MTA)
		ADDCHANNEL(H2HcuD, H2HcuDfl, mH2, mHc, MU, MD)
		ADDCHANNEL(H2HcuS, H2HcuSfl, mH2, mHc, MU, MS)
		ADDCHANNEL(H2HcuB, H2HcuBfl, mH2, mHc, MU, MB)
		ADDCHANNEL(H2HccD, H2HccDfl, mH2, mHc, MC, MD)
		ADDCHANNEL(H2HccS, H2HccSfl, mH2, mHc, MC, MS)
		ADDCHANNEL(H2HccB, H2HccBfl, mH2, mHc, MC, MB)
		ADDCHANNEL(H2HctD, H2HctDfl, mH2, mHc, MT, MD)
		ADDCHANNEL(H2HctS, H2HctSfl, mH2, mHc, MT, MS)
		ADDCHANNEL(H2HctB, H2HctBfl, mH2, mHc, MT, MB)
		ADDCHANNEL(H3H3hh, H3H3hhfl, mH3, mH3, mHsm, mHsm)
		ADDCHANNEL(H3H3hZ, H3H3hZfl, mH3, mH3, mHsm, MZ)
		ADDCHANNEL(H3H3ZZ, H3H3ZZfl, mH3, mH3, MZ, MZ)
		ADDCHANNEL(H3H3wW, H3H3wWfl, mH3, mH3, MW, MW)
		ADDCHANNEL(H3H3Ee, H3H3Eefl, mH3, mH3, Me, Me)
		ADDCHANNEL(H3H3Mm, H3H3Mmfl, mH3, mH3, MM, MM)
		ADDCHANNEL(H3H3TAta, H3H3TAtafl, mH3, mH3, MTA, MTA)
		ADDCHANNEL(H3H3Uu, H3H3Uufl, mH3, mH3, MU, MU)
		ADDCHANNEL(H3H3Cc, H3H3Ccfl, mH3, mH3, MC, MC)
		ADDCHANNEL(H3H3Tt, H3H3Ttfl, mH3, mH3, MT, MT)
		ADDCHANNEL(H3H3Dd, H3H3Ddfl, mH3, mH3, MD, MD)
		ADDCHANNEL(H3H3Ss, H3H3Ssfl, mH3, mH3, MS, MS)
		ADDCHANNEL(H3H3Bb, H3H3Bbfl, mH3, mH3, MB, MB)
		ADDCHANNEL(H3HchW, H3HchWfl, mH3, mHc, mHsm, MW)
		ADDCHANNEL(H3HcAW, H3HcAWfl, mH3, mHc, ZERO, MW)
		ADDCHANNEL(H3HcZW, H3HcZWfl, mH3, mHc, MZ, MW)
		ADDCHANNEL(H3HcveE, H3HcveEfl, mH3, mHc, Mnue, Me)
		ADDCHANNEL(H3HcvmM, H3HcvmMfl, mH3, mHc, Mnum, MM)
		ADDCHANNEL(H3HcvtTA, H3HcvtTAfl, mH3, mHc, Mnut, MTA)
		ADDCHANNEL(H3HcuD, H3HcuDfl, mH3, mHc, MU, MD)
		ADDCHANNEL(H3HcuS, H3HcuSfl, mH3, mHc, MU, MS)
		ADDCHANNEL(H3HcuB, H3HcuBfl, mH3, mHc, MU, MB)
		ADDCHANNEL(H3HccD, H3HccDfl, mH3, mHc, MC, MD)
		ADDCHANNEL(H3HccS, H3HccSfl, mH3, mHc, MC, MS)
		ADDCHANNEL(H3HccB, H3HccBfl, mH3, mHc, MC, MB)
		ADDCHANNEL(H3HctD, H3HctDfl, mH3, mHc, MT, MD)
		ADDCHANNEL(H3HctS, H3HctSfl, mH3, mHc, MT, MS)
		ADDCHANNEL(H3HctB, H3HctBfl, mH3, mHc, MT, MB)
		ADDCHANNEL(HcHcWW, HcHcWWfl, mHc, mHc, MW, MW)
		ADDCHANNEL(HcHChh, HcHChhfl, mHc, mHc, mHsm, mHsm)
		ADDCHANNEL(HcHChA, HcHChAfl, mHc, mHc, mHsm, ZERO)
		ADDCHANNEL(HcHChZ, HcHChZfl, mHc, mHc, mHsm, MZ)
		ADDCHANNEL(HcHCAA, HcHCAAfl, mHc, mHc, ZERO, ZERO)
		ADDCHANNEL(HcHCAZ, HcHCAZfl, mHc, mHc, ZERO, MZ)
		ADDCHANNEL(HcHCZZ, HcHCZZfl, mHc, mHc, MZ, MZ)
		ADDCHANNEL(HcHCwW, HcHCwWfl, mHc, mHc, MW, MW)
		ADDCHANNEL(HcHCVEve, HcHCVEvefl, mHc, mHc, Mnue, Mnue)
		ADDCHANNEL(HcHCVMvm, HcHCVMvmfl, mHc, mHc, Mnum, Mnum)
		ADDCHANNEL(HcHCVTvt, HcHCVTvtfl, mHc, mHc, Mnut, Mnut)
		ADDCHANNEL(HcHCEe, HcHCEefl, mHc, mHc, Me, Me)
		ADDCHANNEL(HcHCMm, HcHCMmfl, mHc, mHc, MM, MM)
		ADDCHANNEL(HcHCTAta, HcHCTAtafl, mHc, mHc, MTA, MTA)
		ADDCHANNEL(HcHCUu, HcHCUufl, mHc, mHc, MU, MU)
		ADDCHANNEL(HcHCCc, HcHCCcfl, mHc, mHc, MC, MC)
		ADDCHANNEL(HcHCTt, HcHCTtfl, mHc, mHc, MT, MT)
		ADDCHANNEL(HcHCDd, HcHCDdfl, mHc, mHc, MD, MD)
		ADDCHANNEL(HcHCSs, HcHCSsfl, mHc, mHc, MS, MS)
		ADDCHANNEL(HcHCBb, HcHCBbfl, mHc, mHc, MB, MB)
		denstructures.push_back(&MZ);
		denstructures.push_back(&WZ);
		denstructures.push_back(&MW);
		denstructures.push_back(&WW);
		denstructures.push_back(&mHsm);
		denstructures.push_back(&WHsm);
		N_widths = 3;
	}
}
