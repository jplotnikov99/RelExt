///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"
#include "width.hpp"
#include <memory>

double DT::wwH(const double QCDaS){
	using namespace PAR;
	double width = 0;
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
	w->set_alphaS(QCDaS);
	std::vector<double> m2( { MH, MChi, MChi, MPsi, 0, MZ, MW, 0, Me, MMU, MTA, MU, MC, MT, MD, MS, MB, MT } );
	std::vector<double> m3( { MH, MChi, MPsi, MPsi, 0, MZ, MW, 0, Me, MMU, MTA, MU, MC, MT, MD, MS, MB, MT } );
	std::vector<ParticleType> type1( { scalar, scalar, scalar, scalar, massless_vector_boson, z_boson, w_boson, massless_vector_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark, gluon } );
	std::vector<ParticleType> type2( { scalar, scalar, scalar, scalar, massless_vector_boson, z_boson, w_boson, massless_vector_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark, gluon } );
	std::vector<double> coupling2( {0.5*36* (lam*lam)* (vev*vev), 0.5* (vev*vev)* ((lam12* (cos( alpha)*cos( alpha)) + lam123*cos( alpha)*sin(alpha) + lam13* (sin(alpha)*sin(alpha)))*(lam12* (cos( alpha)*cos( alpha)) + lam123*cos( alpha)*sin(alpha) + lam13* (sin(alpha)*sin(alpha)))), ( (vev*vev)* ((lam123*cos( 2*alpha) + (-lam12 + lam13)*sin(2*alpha))*(lam123*cos( 2*alpha) + (-lam12 + lam13)*sin(2*alpha))))/4., 0.5* (vev*vev)* ((lam13* (cos( alpha)*cos( alpha)) - lam123*cos( alpha)*sin(alpha) + lam12* (sin(alpha)*sin(alpha)))*(lam13* (cos( alpha)*cos( alpha)) - lam123*cos( alpha)*sin(alpha) + lam12* (sin(alpha)*sin(alpha)))), 0.5* (AH*AH), 0.5*( (EL*EL*EL*EL)* (vev*vev)* (( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))))/(4.* (cw*cw*cw*cw)* (sw*sw*sw*sw)), ( (EL*EL*EL*EL)* (vev*vev))/(4.* (sw*sw*sw*sw)), 0.5* (GH*GH),  (ye*ye)/2.,  (ym*ym)/2.,  (ytau*ytau)/2.,  (yup*yup)/2.,  (yc*yc)/2.,  (yt*yt)/2.,  (ydo*ydo)/2.,  (ys*ys)/2.,  (yb*yb)/2., 0.5* (yt*yt)/2. } );
	for(int i = 0; i < m2.size(); i++) {
		width = width + w->partial_width(type1[i], type2[i], m2[i], m3[i], coupling2[i]);
	}
	return width;
}
