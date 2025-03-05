///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"
#include "width.hpp"
#include <memory>

double DT::wwh(const double QCDaS){
	using namespace PAR;
	double width = 0;
	std::unique_ptr<Width> w = std::make_unique<Width>(mHsm);
	w->set_alphaS(QCDaS);
	std::vector<double> m2( { mHsm, mH1, mH1, mH1, mH2, mH2, mH3, mHc, MZ, MW, Me, MM, MTA, MU, MC, MT, MD, MS, MB, MT } );
	std::vector<double> m3( { mHsm, mH1, mH2, mH3, mH2, mH3, mH3, mHc, MZ, MW, Me, MM, MTA, MU, MC, MT, MD, MS, MB, MT } );
	std::vector<ParticleType> type1( { scalar, scalar, scalar, scalar, pseudoscalar, pseudoscalar, scalar, scalar, z_boson, w_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark, gluon } );
	std::vector<ParticleType> type2( { scalar, scalar, pseudoscalar, scalar, pseudoscalar, scalar, scalar, scalar, z_boson, w_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark, gluon } );
	std::vector<double> coupling2( {0.5*9* (L1*L1)* (v*v), 0.5* ((2*RR1x2*RR1x3*Timag - 2*RR1x1*RR1x3*Treal - L3* (RR1x1*RR1x1)*v - L4* (RR1x1*RR1x1)*v - L5* (RR1x1*RR1x1)*v - L3* (RR1x2*RR1x2)*v - L4* (RR1x2*RR1x2)*v + L5* (RR1x2*RR1x2)*v - L7* (RR1x3*RR1x3)*v)*(2*RR1x2*RR1x3*Timag - 2*RR1x1*RR1x3*Treal - L3* (RR1x1*RR1x1)*v - L4* (RR1x1*RR1x1)*v - L5* (RR1x1*RR1x1)*v - L3* (RR1x2*RR1x2)*v - L4* (RR1x2*RR1x2)*v + L5* (RR1x2*RR1x2)*v - L7* (RR1x3*RR1x3)*v)),  ((RR1x3*RR2x2*Timag + RR1x2*RR2x3*Timag - RR1x3*RR2x1*Treal - RR1x1*RR2x3*Treal - L3*RR1x1*RR2x1*v - L4*RR1x1*RR2x1*v - L5*RR1x1*RR2x1*v - L3*RR1x2*RR2x2*v - L4*RR1x2*RR2x2*v + L5*RR1x2*RR2x2*v - L7*RR1x3*RR2x3*v)*(RR1x3*RR2x2*Timag + RR1x2*RR2x3*Timag - RR1x3*RR2x1*Treal - RR1x1*RR2x3*Treal - L3*RR1x1*RR2x1*v - L4*RR1x1*RR2x1*v - L5*RR1x1*RR2x1*v - L3*RR1x2*RR2x2*v - L4*RR1x2*RR2x2*v + L5*RR1x2*RR2x2*v - L7*RR1x3*RR2x3*v)),  ((RR1x3*RR3x2*Timag + RR1x2*RR3x3*Timag - RR1x3*RR3x1*Treal - RR1x1*RR3x3*Treal - L3*RR1x1*RR3x1*v - L4*RR1x1*RR3x1*v - L5*RR1x1*RR3x1*v - L3*RR1x2*RR3x2*v - L4*RR1x2*RR3x2*v + L5*RR1x2*RR3x2*v - L7*RR1x3*RR3x3*v)*(RR1x3*RR3x2*Timag + RR1x2*RR3x3*Timag - RR1x3*RR3x1*Treal - RR1x1*RR3x3*Treal - L3*RR1x1*RR3x1*v - L4*RR1x1*RR3x1*v - L5*RR1x1*RR3x1*v - L3*RR1x2*RR3x2*v - L4*RR1x2*RR3x2*v + L5*RR1x2*RR3x2*v - L7*RR1x3*RR3x3*v)), 0.5* ((2*RR2x2*RR2x3*Timag - 2*RR2x1*RR2x3*Treal - L3* (RR2x1*RR2x1)*v - L4* (RR2x1*RR2x1)*v - L5* (RR2x1*RR2x1)*v - L3* (RR2x2*RR2x2)*v - L4* (RR2x2*RR2x2)*v + L5* (RR2x2*RR2x2)*v - L7* (RR2x3*RR2x3)*v)*(2*RR2x2*RR2x3*Timag - 2*RR2x1*RR2x3*Treal - L3* (RR2x1*RR2x1)*v - L4* (RR2x1*RR2x1)*v - L5* (RR2x1*RR2x1)*v - L3* (RR2x2*RR2x2)*v - L4* (RR2x2*RR2x2)*v + L5* (RR2x2*RR2x2)*v - L7* (RR2x3*RR2x3)*v)),  ((RR2x3*RR3x2*Timag + RR2x2*RR3x3*Timag - RR2x3*RR3x1*Treal - RR2x1*RR3x3*Treal - L3*RR2x1*RR3x1*v - L4*RR2x1*RR3x1*v - L5*RR2x1*RR3x1*v - L3*RR2x2*RR3x2*v - L4*RR2x2*RR3x2*v + L5*RR2x2*RR3x2*v - L7*RR2x3*RR3x3*v)*(RR2x3*RR3x2*Timag + RR2x2*RR3x3*Timag - RR2x3*RR3x1*Treal - RR2x1*RR3x3*Treal - L3*RR2x1*RR3x1*v - L4*RR2x1*RR3x1*v - L5*RR2x1*RR3x1*v - L3*RR2x2*RR3x2*v - L4*RR2x2*RR3x2*v + L5*RR2x2*RR3x2*v - L7*RR2x3*RR3x3*v)), 0.5* ((2*RR3x2*RR3x3*Timag - 2*RR3x1*RR3x3*Treal - L3* (RR3x1*RR3x1)*v - L4* (RR3x1*RR3x1)*v - L5* (RR3x1*RR3x1)*v - L3* (RR3x2*RR3x2)*v - L4* (RR3x2*RR3x2)*v + L5* (RR3x2*RR3x2)*v - L7* (RR3x3*RR3x3)*v)*(2*RR3x2*RR3x3*Timag - 2*RR3x1*RR3x3*Treal - L3* (RR3x1*RR3x1)*v - L4* (RR3x1*RR3x1)*v - L5* (RR3x1*RR3x1)*v - L3* (RR3x2*RR3x2)*v - L4* (RR3x2*RR3x2)*v + L5* (RR3x2*RR3x2)*v - L7* (RR3x3*RR3x3)*v)),  (L3*L3)* (v*v), 0.5*( (EL*EL*EL*EL)* (v*v)* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW*CW*CW)* (SW*SW*SW*SW)), ( (EL*EL*EL*EL)* (v*v))/(4.* (SW*SW*SW*SW)),  (Me*Me)/ (v*v),  (MM*MM)/ (v*v),  (MTA*MTA)/ (v*v),  (MU*MU)/ (v*v),  (MC*MC)/ (v*v),  (MT*MT)/ (v*v),  (MD*MD)/ (v*v),  (MS*MS)/ (v*v),  (MB*MB)/ (v*v), 0.5* (MT*MT)/ (v*v) } );
	for(int i = 0; i < m2.size(); i++) {
		width = width + w->partial_width(type1[i], type2[i], m2[i], m3[i], coupling2[i]);
	}
	return width;
}
