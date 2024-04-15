///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"
#include "mass_run.hpp"

namespace DT{
	void Model::calc_widths_and_scale(){
		std::unique_ptr<Mrun> Run = std::make_unique<Mrun>();
		double *quark_masses[4] = {&MS, &MC, &MB, &MT};
		double scale;
		scale = MH;
		Run->calc_quark_masses(scale, quark_masses, aS);
		load_parameters();
		WH = wwH();
		scale = MS1;
		Run->calc_quark_masses(scale, quark_masses, aS);
		load_parameters();
		WS1 = wwS1();
		scale = 2*MDM;
		Run->calc_quark_masses(scale, quark_masses, aS);
	}
}
