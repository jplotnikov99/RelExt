///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"
#include "width.hpp"
#include <memory>

double DT::wwH2(const double QCDaS){
	using namespace PAR;
	double width = 0;
	std::unique_ptr<Width> w = std::make_unique<Width>(MH2);
	w->set_alphaS(QCDaS);
	std::vector<double> m2( { MH1, MH1, MH2, MH3, MA0, MHch, MZ, MW, Me, MM, MTA, MU, MC, MT, MD, MS, MB, MT } );
	std::vector<double> m3( { MH1, MH2, MH2, MH3, MA0, MHch, MZ, MW, Me, MM, MTA, MU, MC, MT, MD, MS, MB, MT } );
	std::vector<ParticleType> type1( { scalar, scalar, scalar, scalar, pseudoscalar, scalar, z_boson, w_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark, gluon } );
	std::vector<ParticleType> type2( { scalar, scalar, scalar, scalar, pseudoscalar, scalar, z_boson, w_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark, gluon } );
	std::vector<double> coupling2( {0.5*( (cos( aDM)*cos( aDM))* ((2* (MH1*MH1) +  (MH2*MH2))*(2* (MH1*MH1) +  (MH2*MH2)))* (sin(aDM)*sin(aDM))* ((vs*cos( aDM) - v*sin(aDM))*(vs*cos( aDM) - v*sin(aDM))))/( (v*v)* (vs*vs)), ( (cos( aDM)*cos( aDM))* ((- (MH1*MH1) - 2* (MH2*MH2))*(- (MH1*MH1) - 2* (MH2*MH2)))* (sin(aDM)*sin(aDM))* ((v*cos( aDM) + vs*sin(aDM))*(v*cos( aDM) + vs*sin(aDM))))/( (v*v)* (vs*vs)), 0.5*(9* (MH2*MH2*MH2*MH2)* ((-(v* (cos( aDM)*cos( aDM)*cos( aDM))) + vs* (sin(aDM)*sin(aDM)*sin(aDM)))*(-(v* (cos( aDM)*cos( aDM)*cos( aDM))) + vs* (sin(aDM)*sin(aDM)*sin(aDM)))))/( (v*v)* (vs*vs)), 0.5* ((-(lam8*v*vs*cos( aDM)) - 2* (m22*m22)*sin(aDM) + 2* (MH3*MH3)*sin(aDM) - lam8* (vs*vs)*sin(aDM))*(-(lam8*v*vs*cos( aDM)) - 2* (m22*m22)*sin(aDM) + 2* (MH3*MH3)*sin(aDM) - lam8* (vs*vs)*sin(aDM)))/ (v*v), 0.5* ((-(lam8*v*vs*cos( aDM)) - 2* (m22*m22)*sin(aDM) + 2* (MA0*MA0)*sin(aDM) - lam8* (vs*vs)*sin(aDM))*(-(lam8*v*vs*cos( aDM)) - 2* (m22*m22)*sin(aDM) + 2* (MA0*MA0)*sin(aDM) - lam8* (vs*vs)*sin(aDM)))/ (v*v),  ((-(lam8*v*vs*cos( aDM)) - 2* (m22*m22)*sin(aDM) + 2* (MHch*MHch)*sin(aDM) - lam8* (vs*vs)*sin(aDM))*(-(lam8*v*vs*cos( aDM)) - 2* (m22*m22)*sin(aDM) + 2* (MHch*MHch)*sin(aDM) - lam8* (vs*vs)*sin(aDM)))/ (v*v), 0.5*( (EL*EL*EL*EL)* (v*v)* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW)))* (sin(aDM)*sin(aDM)))/(4.* (CW*CW*CW*CW)* (SW*SW*SW*SW)), ( (EL*EL*EL*EL)* (v*v)* (sin(aDM)*sin(aDM)))/(4.* (SW*SW*SW*SW)), ( (Me*Me)* (sin(aDM)*sin(aDM)))/ (v*v), ( (MM*MM)* (sin(aDM)*sin(aDM)))/ (v*v), ( (MTA*MTA)* (sin(aDM)*sin(aDM)))/ (v*v), ( (MU*MU)* (sin(aDM)*sin(aDM)))/ (v*v), ( (MC*MC)* (sin(aDM)*sin(aDM)))/ (v*v), ( (MT*MT)* (sin(aDM)*sin(aDM)))/ (v*v), ( (MD*MD)* (sin(aDM)*sin(aDM)))/ (v*v), ( (MS*MS)* (sin(aDM)*sin(aDM)))/ (v*v), ( (MB*MB)* (sin(aDM)*sin(aDM)))/ (v*v), 0.5*( (MT*MT)* (sin(aDM)*sin(aDM)))/ (v*v) } );
	for(int i = 0; i < m2.size(); i++) {
		width = width + w->partial_width(type1[i], type2[i], m2[i], m3[i], coupling2[i]);
	}
	return width;
}
