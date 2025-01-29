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
	std::vector<double> m2( { MH, MH, MS1, MA1, MZ, MW, Me, MMU, MTA, MU, MC, MT, MD, MS, MB, MT } );
	std::vector<double> m3( { MH, MS1, MS1, MA1, MZ, MW, Me, MMU, MTA, MU, MC, MT, MD, MS, MB, MT } );
	std::vector<ParticleType> type1( { scalar, scalar, scalar, scalar, z_boson, w_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark, gluon } );
	std::vector<ParticleType> type2( { scalar, scalar, scalar, scalar, z_boson, w_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark, gluon } );
	std::vector<double> coupling2( {0.5*(9* (MH*MH*MH*MH)* ((svev* (cos( alpha)*cos( alpha)*cos( alpha)) + vev* (sin(alpha)*sin(alpha)*sin(alpha)))*(svev* (cos( alpha)*cos( alpha)*cos( alpha)) + vev* (sin(alpha)*sin(alpha)*sin(alpha)))))/( (svev*svev)* (vev*vev)), ( (cos( alpha)*cos( alpha))* ((2* (MH*MH) +  (MS1*MS1))*(2* (MH*MH) +  (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((svev*cos( alpha) - vev*sin(alpha))*(svev*cos( alpha) - vev*sin(alpha))))/( (svev*svev)* (vev*vev)), 0.5*( (cos( alpha)*cos( alpha))* ((- (MH*MH) - 2* (MS1*MS1))*(- (MH*MH) - 2* (MS1*MS1)))* (sin(alpha)*sin(alpha))* ((vev*cos( alpha) + svev*sin(alpha))*(vev*cos( alpha) + svev*sin(alpha))))/( (svev*svev)* (vev*vev)), 0.5*( (MH*MH*MH*MH)* (sin(alpha)*sin(alpha)))/ (svev*svev), 0.5*( (EL*EL*EL*EL)* (vev*vev)* (cos( alpha)*cos( alpha))* (( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))*( (cw*cw) +  (sw*sw))))/(4.* (cw*cw*cw*cw)* (sw*sw*sw*sw)), ( (EL*EL*EL*EL)* (vev*vev)* (cos( alpha)*cos( alpha)))/(4.* (sw*sw*sw*sw)), ( (ye*ye)* (cos( alpha)*cos( alpha)))/2., ( (ym*ym)* (cos( alpha)*cos( alpha)))/2., ( (ytau*ytau)* (cos( alpha)*cos( alpha)))/2., ( (yup*yup)* (cos( alpha)*cos( alpha)))/2., ( (yc*yc)* (cos( alpha)*cos( alpha)))/2., ( (yt*yt)* (cos( alpha)*cos( alpha)))/2., ( (ydo*ydo)* (cos( alpha)*cos( alpha)))/2., ( (ys*ys)* (cos( alpha)*cos( alpha)))/2., ( (yb*yb)* (cos( alpha)*cos( alpha)))/2., 0.5*( (yt*yt)* (cos( alpha)*cos( alpha)))/2. } );
	for(int i = 0; i < m2.size(); i++) {
		width = width + w->partial_width(type1[i], type2[i], m2[i], m3[i], coupling2[i]);
	}
	return width;
}
