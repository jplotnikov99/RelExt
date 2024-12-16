///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"
#include "mass_run.hpp"

namespace DT{
	void ModelInfo::calc_widths_and_scale(){
		std::unique_ptr<Mrun> Run = std::make_unique<Mrun>();
		double *quark_masses[4] = {&MS, &MC, &MB, &MT};
		double scale;
		scale = MH;
		Run->calc_quark_masses(scale, quark_masses, aS);
		load_parameters();
		WH = wwH(aS);
		scale = 2*MDM;
		Run->calc_quark_masses(scale, quark_masses, aS);
	}
}
