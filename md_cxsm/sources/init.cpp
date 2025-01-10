///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void ModelInfo::init()
	{
		DSmasses["A1"]=&MA1;
		DSdof["A1"]=1;
		neutraldsmasses.push_back(&MA1);
		denstructures.push_back(&MH);
		denstructures.push_back(&WH);
		denstructures.push_back(&MS1);
		denstructures.push_back(&WS1);
		N_widths = 2;
	}


	void AnnihilationAmps::init()
	{
		ADDCHANNEL("A1,A1,H,H",A1A1HH, A1A1HHfl)
		ADDCHANNEL("A1,A1,H,S1",A1A1HS1, A1A1HS1fl)
		ADDCHANNEL("A1,A1,S1,S1",A1A1S1S1, A1A1S1S1fl)
		ADDCHANNEL("A1,A1,Z,Z",A1A1ZZ, A1A1ZZfl)
		ADDCHANNEL("A1,A1,w,W",A1A1wW, A1A1wWfl)
		ADDCHANNEL("A1,A1,E,e",A1A1Ee, A1A1Eefl)
		ADDCHANNEL("A1,A1,MU,mu",A1A1MUmu, A1A1MUmufl)
		ADDCHANNEL("A1,A1,TA,ta",A1A1TAta, A1A1TAtafl)
		ADDCHANNEL("A1,A1,U,u",A1A1Uu, A1A1Uufl)
		ADDCHANNEL("A1,A1,C,c",A1A1Cc, A1A1Ccfl)
		ADDCHANNEL("A1,A1,T,t",A1A1Tt, A1A1Ttfl)
		ADDCHANNEL("A1,A1,D,d",A1A1Dd, A1A1Ddfl)
		ADDCHANNEL("A1,A1,S,s",A1A1Ss, A1A1Ssfl)
		ADDCHANNEL("A1,A1,B,b",A1A1Bb, A1A1Bbfl)
	}
}
