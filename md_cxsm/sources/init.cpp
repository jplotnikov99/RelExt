///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void Model::init()
	{
		aEWM1 = 127.9;
		Gf = 0.0000116637;
		aS = 0.1184;
		ymdo = 0.00504;
		ymup = 0.00255;
		yms = 0.101;
		ymc = 1.27;
		ymb = 4.7;
		ymt = 172;
		yme = 0.000511;
		ymm = 0.10566;
		ymtau = 1.777;
		cabi = 0.227736;
		MW = 79.8244;
		svev = 100;
		alpha = 0.;
		MA1 = 100;
		MS1 = 100;
		MH = 125.09;
		GG = 1.21978;
		MZ = 91.1876;
		Me = 0.000511;
		MMU = 0.10566;
		MTA = 1.777;
		MU = 0.00255;
		MC = 1.27;
		MT = 172;
		MD = 0.00504;
		MS = 0.101;
		MB = 4.7;
		WZ = 2.4952;
		WW = 2.085;
		WT = 1.50834;
		WH = 0.00407;
		WS1 = 0;
		WA1 = 0;
		E = 2.71828;
		Pi = 3.14159;
		double EL = 0.312233;
		double ee = 0.312233;
		double gs = 1.21358;
		double G = 1.21358;
		double FAGS = 1.21358;

		particles["A1"]=&MA1;
		dsmasses.push_back(&MA1);
		neutraldsmasses.push_back(&MA1);
		ADDCHANNEL(A1A1HH, A1A1HHfl, MA1, MA1, MH, MH)
		ADDCHANNEL(A1A1HS1, A1A1HS1fl, MA1, MA1, MH, MS1)
		ADDCHANNEL(A1A1S1S1, A1A1S1S1fl, MA1, MA1, MS1, MS1)
		ADDCHANNEL(A1A1ZZ, A1A1ZZfl, MA1, MA1, MZ, MZ)
		ADDCHANNEL(A1A1wW, A1A1wWfl, MA1, MA1, MW, MW)
		ADDCHANNEL(A1A1Ee, A1A1Eefl, MA1, MA1, Me, Me)
		ADDCHANNEL(A1A1MUmu, A1A1MUmufl, MA1, MA1, MMU, MMU)
		ADDCHANNEL(A1A1TAta, A1A1TAtafl, MA1, MA1, MTA, MTA)
		ADDCHANNEL(A1A1Uu, A1A1Uufl, MA1, MA1, MU, MU)
		ADDCHANNEL(A1A1Cc, A1A1Ccfl, MA1, MA1, MC, MC)
		ADDCHANNEL(A1A1Tt, A1A1Ttfl, MA1, MA1, MT, MT)
		ADDCHANNEL(A1A1Dd, A1A1Ddfl, MA1, MA1, MD, MD)
		ADDCHANNEL(A1A1Ss, A1A1Ssfl, MA1, MA1, MS, MS)
		ADDCHANNEL(A1A1Bb, A1A1Bbfl, MA1, MA1, MB, MB)
		denstructures.push_back(&MH);
		denstructures.push_back(&WH);
		denstructures.push_back(&MS1);
		denstructures.push_back(&WS1);
		N_widths = 2;
	}
}
