///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"
#include "width.hpp"
#include <memory>

double DT::wwH1(const double QCDaS){
	double width = 0;
	std::unique_ptr<Width> w = std::make_unique<Width>(MH1);
	w->set_alphaS(QCDaS);
	std::vector<double> m2( { MH1, MH1, MH2, MH3, MA0, MHch, MZ, MW, 0, Me, MM, MTA, MU, MC, MT, MD, MS, MB, MT } );
	std::vector<double> m3( { MH1, MH2, MH2, MH3, MA0, MHch, MZ, MW, 0, Me, MM, MTA, MU, MC, MT, MD, MS, MB, MT } );
	std::vector<ParticleType> type1( { scalar, scalar, scalar, scalar, pseudoscalar, scalar, z_boson, w_boson, massless_vector_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark, gluon } );
	std::vector<ParticleType> type2( { scalar, scalar, scalar, scalar, pseudoscalar, scalar, z_boson, w_boson, massless_vector_boson, lepton, lepton, lepton, quark, c_quark, t_quark, quark, s_quark, b_quark, gluon } );
	std::vector<double> coupling2( {0.5*(9* (MH1*MH1*MH1*MH1)* ((vs* (cos( aDM)*cos( aDM)*cos( aDM)) + v* (sin(aDM)*sin(aDM)*sin(aDM)))*(vs* (cos( aDM)*cos( aDM)*cos( aDM)) + v* (sin(aDM)*sin(aDM)*sin(aDM)))))/( (v*v)* (vs*vs)), ( (cos( aDM)*cos( aDM))* ((2* (MH1*MH1) +  (MH2*MH2))*(2* (MH1*MH1) +  (MH2*MH2)))* (sin(aDM)*sin(aDM))* ((vs*cos( aDM) - v*sin(aDM))*(vs*cos( aDM) - v*sin(aDM))))/( (v*v)* (vs*vs)), 0.5*( (cos( aDM)*cos( aDM))* ((- (MH1*MH1) - 2* (MH2*MH2))*(- (MH1*MH1) - 2* (MH2*MH2)))* (sin(aDM)*sin(aDM))* ((v*cos( aDM) + vs*sin(aDM))*(v*cos( aDM) + vs*sin(aDM))))/( (v*v)* (vs*vs)), 0.5* ((((2* (m11*m11) - 2* (MH3*MH3) + lam7* (vs*vs))*cos( aDM))/v - lam7*vs*sin(aDM))*(((2* (m11*m11) - 2* (MH3*MH3) + lam7* (vs*vs))*cos( aDM))/v - lam7*vs*sin(aDM))), 0.5* ((((2* (m11*m11) - 2* (MA0*MA0) + lam7* (vs*vs))*cos( aDM))/v - lam7*vs*sin(aDM))*(((2* (m11*m11) - 2* (MA0*MA0) + lam7* (vs*vs))*cos( aDM))/v - lam7*vs*sin(aDM))),  ((((2* (m11*m11) - 2* (MHch*MHch) + lam7* (vs*vs))*cos( aDM))/v - lam7*vs*sin(aDM))*(((2* (m11*m11) - 2* (MHch*MHch) + lam7* (vs*vs))*cos( aDM))/v - lam7*vs*sin(aDM))), 0.5*( (EL*EL*EL*EL)* (v*v)* (cos( aDM)*cos( aDM))* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW*CW*CW)* (SW*SW*SW*SW)), ( (EL*EL*EL*EL)* (v*v)* (cos( aDM)*cos( aDM)))/(4.* (SW*SW*SW*SW)), 0.5* (GH*GH), ( (Me*Me)* (cos( aDM)*cos( aDM)))/ (v*v), ( (MM*MM)* (cos( aDM)*cos( aDM)))/ (v*v), ( (MTA*MTA)* (cos( aDM)*cos( aDM)))/ (v*v), ( (MU*MU)* (cos( aDM)*cos( aDM)))/ (v*v), ( (MC*MC)* (cos( aDM)*cos( aDM)))/ (v*v), ( (MT*MT)* (cos( aDM)*cos( aDM)))/ (v*v), ( (MD*MD)* (cos( aDM)*cos( aDM)))/ (v*v), ( (MS*MS)* (cos( aDM)*cos( aDM)))/ (v*v), ( (MB*MB)* (cos( aDM)*cos( aDM)))/ (v*v), 0.5*( (MT*MT)* (cos( aDM)*cos( aDM)))/ (v*v) } );
	for(int i = 0; i < m2.size(); i++) {
		width = width + w->partial_width(type1[i], type2[i], m2[i], m3[i], coupling2[i]);
	}
	return width;
}
