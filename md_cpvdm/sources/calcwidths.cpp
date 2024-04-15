///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"
#include "mass_run.hpp"

namespace DT{
	void Model::calc_widths_and_scale(){
		std::unique_ptr<Mrun> Run = std::make_unique<Mrun>();
		double *quark_masses[4] = {&MS, &MC, &MB, &MT};
		double scale;
		scale = MZ;
		Run->calc_quark_masses(scale, quark_masses, aS);
		load_parameters();
		WZ = wwZ();
		scale = MW;
		Run->calc_quark_masses(scale, quark_masses, aS);
		load_parameters();
		WW = wwW();
		scale = mHsm;
		Run->calc_quark_masses(scale, quark_masses, aS);
		load_parameters();
		WHsm = wwh();
		scale = 2*MDM;
		Run->calc_quark_masses(scale, quark_masses, aS);
	}
}
