///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void ModelInfo::load_prtcls()
	{
		prtcls["ve,VE"] = &Mnue;
		prtcls["vm,VM"] = &Mnum;
		prtcls["vt,VT"] = &Mnut;
		prtcls["e,E"] = &Me;
		prtcls["m,M"] = &MM;
		prtcls["ta,TA"] = &MTA;
		prtcls["u,U"] = &MU;
		prtcls["c,C"] = &MC;
		prtcls["t,T"] = &MT;
		prtcls["d,D"] = &MD;
		prtcls["s,S"] = &MS;
		prtcls["b,B"] = &MB;
		prtcls["A,A"] = &ZERO;
		prtcls["Z,Z"] = &MZ;
		prtcls["W,w"] = &MW;
		prtcls["G,G"] = &ZERO;
		prtcls["h,h"] = &mHsm;
		prtcls["H1,H1"] = &mH1;
		prtcls["H2,H2"] = &mH2;
		prtcls["H3,H3"] = &mH3;
		prtcls["Hc,HC"] = &mHc;
	}
}
