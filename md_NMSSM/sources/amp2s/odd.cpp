#include "utils.hpp"
#include "../../model.hpp"

double DT::lambda_d_o(){
		using namespace PAR;
	std::complex<double> res(0,0);
	std::complex<double> I(0,1);
		res += ( ((CTW*g2 + g1*STW)*(CTW*g2 + g1*STW))*(std::conj(ZN[0][2])*ZN[0][2] - std::conj(ZN[0][3])*ZN[0][3]))/(16.* (MZ*MZ));
	return res.real();
}
double DT::lambda_u_o(){
		using namespace PAR;
	std::complex<double> res(0,0);
	std::complex<double> I(0,1);
		res += -((CTW*g2 + g1*STW)*(PhiUL*(3*CTW*g2 - g1*STW)*std::conj(PhiUL) + 4*g1*PhiUR*STW*std::conj(PhiUR))*(std::conj(ZN[0][2])*ZN[0][2] - std::conj(ZN[0][3])*ZN[0][3]))/(48.* (MZ*MZ));
	return res.real();
}
