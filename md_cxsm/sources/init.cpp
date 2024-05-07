///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void Model::init()
	{
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
