///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void ModelInfo::load_prtcls()
	{
		prtcls["ve"] = &ZERO;
		prtcls["vm"] = &ZERO;
		prtcls["vt"] = &ZERO;
		prtcls["e"] = &Me;
		prtcls["mu"] = &MMU;
		prtcls["ta"] = &MTA;
		prtcls["u"] = &MU;
		prtcls["c"] = &MC;
		prtcls["t"] = &MT;
		prtcls["d"] = &MD;
		prtcls["s"] = &MS;
		prtcls["b"] = &MB;
		prtcls["A"] = &ZERO;
		prtcls["Z"] = &MZ;
		prtcls["W"] = &MW;
		prtcls["G"] = &ZERO;
		prtcls["H"] = &MH;
		prtcls["Chi"] = &MChi;
		prtcls["Psi"] = &MPsi;

		aprtcls["VE"] = &ZERO;
		aprtcls["VM"] = &ZERO;
		aprtcls["VT"] = &ZERO;
		aprtcls["E"] = &Me;
		aprtcls["MU"] = &MMU;
		aprtcls["TA"] = &MTA;
		aprtcls["U"] = &MU;
		aprtcls["C"] = &MC;
		aprtcls["T"] = &MT;
		aprtcls["D"] = &MD;
		aprtcls["S"] = &MS;
		aprtcls["B"] = &MB;
		aprtcls["w"] = &MW;
	}
}
