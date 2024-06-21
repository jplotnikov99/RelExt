///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"
#include "width.hpp"
#include <memory>

double DT::wwH(const double QCDaS){
	double width = 0;
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
	w->set_alphaS(QCDaS);
	std::vector<double> m2( { MH, MS0, MA0, MphiQ, MZ, MW, Me, MMU, MTA, MU, MC, MT, MD, MS, MB, MT } );
	std::vector<double> m3( { MH, MS0, MA0, MphiQ, MZ, MW, Me, MMU, MTA, MU, MC, MT, MD, MS, MB, MT } );
	std::vector<ParticleType> type1( { scalar, scalar, scalar, scalar, z_boson, w_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark, gluon } );
	std::vector<ParticleType> type2( { scalar, scalar, scalar, scalar, z_boson, w_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark, gluon } );
	std::vector<double> coupling2( {0.5*36* (lamH*lamH)* (vev*vev), 0.5* ((-lamHPL - lamHPLprime)*(-lamHPL - lamHPLprime))* (vev*vev), 0.5* ((-lamHPL + lamHPLprime)*(-lamHPL + lamHPLprime))* (vev*vev),  (lamHPQ*lamHPQ)* (vev*vev), 0.5*( (EL*EL*EL*EL)* (vev*vev)* (( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))))/(4.* (cw*cw*cw*cw)* (sw*sw*sw*sw)), ( (EL*EL*EL*EL)* (vev*vev))/(4.* (sw*sw*sw*sw)),  (ye*ye)/2.,  (ym*ym)/2.,  (ytau*ytau)/2.,  (yup*yup)/2.,  (yc*yc)/2.,  (yt*yt)/2.,  (ydo*ydo)/2.,  (ys*ys)/2.,  (yb*yb)/2., 0.5* (yt*yt)/2. } );
	for(int i = 0; i < m2.size(); i++) {
		width = width + w->partial_width(type1[i], type2[i], m2[i], m3[i], coupling2[i]);
	}
	return width;
}
