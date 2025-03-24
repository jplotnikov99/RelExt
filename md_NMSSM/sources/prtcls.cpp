///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void ModelInfo::load_prtcls()
	{
		using namespace PAR;
		prtcls["H2"] = &Mh[2];
		prtcls["N1"] = &MN[1];
		prtcls["N2"] = &MN[2];
		prtcls["N3"] = &MN[3];
		prtcls["N4"] = &MN[4];
		prtcls["N5"] = &MN[5];
		prtcls["C1"] = &MC[1];
		prtcls["C2"] = &MC[2];

		aprtcls["c1"] = &MC[1];
		aprtcls["c2"] = &MC[2];
	}
}
