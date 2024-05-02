///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"
#include "width.hpp"
#include <memory>

double DT::wwH(const double QCDaS){
	double width = 0;
	std::unique_ptr<Width> w = std::make_unique<Width>(MH);
	w->set_alphaS(QCDaS);
	std::vector<double> m2( { MH, MH, MS1, MA1, MZ, MW, Me, MMU, MTA, MU, MC, MT, MD, MS, MB } );
	std::vector<double> m3( { MH, MS1, MS1, MA1, MZ, MW, Me, MMU, MTA, MU, MC, MT, MD, MS, MB } );
	std::vector<ParticleType> type1( { scalar, scalar, scalar, scalar, z_boson, w_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark } );
	std::vector<ParticleType> type2( { scalar, scalar, scalar, scalar, z_boson, w_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark } );
	std::vector<double> coupling2( {0.5*(9* (MH*MH*MH*MH)* ((svev* (cos( alpha)*cos( alpha)*cos( alpha)) + vev* (sin(alpha)*sin(alpha)*sin(alpha)))*(svev* (cos( alpha)*cos( alpha)*cos( alpha)) + vev* (sin(alpha)*sin(alpha)*sin(alpha)))))/( (svev*svev)* (vev*vev)), ( (cos( alpha)*cos( alpha))* ((2* (MH*MH) +  (MS1*MS1))*(2* (MH*MH) +  (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((svev*cos( alpha) - vev*sin(alpha))*(svev*cos( alpha) - vev*sin(alpha))))/( (svev*svev)* (vev*vev)), 0.5*( (cos( alpha)*cos( alpha))* ((- (MH*MH) - 2* (MS1*MS1))*(- (MH*MH) - 2* (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((vev*cos( alpha) + svev*sin(alpha))*(vev*cos( alpha) + svev*sin(alpha))))/( (svev*svev)* (vev*vev)), 0.5*( (MH*MH*MH*MH)* (sin(alpha)*sin(alpha)))/ (svev*svev), 0.5*( (EL*EL*EL*EL)* (vev*vev)* (cos( alpha)*cos( alpha))* (( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))))/(4.* (cw*cw*cw*cw)* (sw*sw*sw*sw)), ( (EL*EL*EL*EL)* (vev*vev)* (cos( alpha)*cos( alpha)))/(4.* (sw*sw*sw*sw)),  (ye*ye)* (cos( alpha)*cos( alpha)),  (ym*ym)* (cos( alpha)*cos( alpha)),  (ytau*ytau)* (cos( alpha)*cos( alpha)),  (yup*yup)* (cos( alpha)*cos( alpha)),  (yc*yc)* (cos( alpha)*cos( alpha)),  (yt*yt)* (cos( alpha)*cos( alpha)),  (ydo*ydo)* (cos( alpha)*cos( alpha)),  (ys*ys)* (cos( alpha)*cos( alpha)),  (yb*yb)* (cos( alpha)*cos( alpha)) } );
	for(int i = 0; i < m2.size(); i++) {
		width = width + w->partial_width(type1[i], type2[i], m2[i], m3[i], coupling2[i]);
	}
	return width;
}
