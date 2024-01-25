///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "tactools.hpp"
#include "EffDofmic.hpp"
#include "utils.hpp"
#include "vars.hpp"
#include "../include/declarations.hpp"

double DT::yeq(double xf) {
	double yeq = 45 * xf * xf / (4 * heff(vars::MDM / xf) * M_PI * M_PI *\
 
  M_PI * M_PI) * ( 
mH1 * mH1/ (vars::MDM * vars::MDM)* besselK2(mH1/ vars::MDM * xf) + 
mH2 * mH2/ (vars::MDM * vars::MDM)* besselK2(mH2/ vars::MDM * xf) + 
mH3 * mH3/ (vars::MDM * vars::MDM)* besselK2(mH3/ vars::MDM * xf) + 
mHc * mHc/ (vars::MDM * vars::MDM)* besselK2(mHc/ vars::MDM * xf) + 
mHc * mHc/ (vars::MDM * vars::MDM)* besselK2(mHc/ vars::MDM * xf));
	 return yeq;
}

double DT::sigv(double u, double xf, std::function<double(double, double)> f)\
 
  {
	double num, den, s;
	s = (vars::m1 + vars::m2) * (vars::m1 + vars::m2) + (1 - u) / u;
	num = xf / vars::MDM * wij(s, f) * polK1(sqrt(s) * xf / vars::MDM);
	den = pow(
		mH1 * mH1 * exp(-xf / vars::MDM * (mH1 - sqrt(s) / 2)) * polK2(xf * mH1
 
   / vars::MDM) + 
		mH2 * mH2 * exp(-xf / vars::MDM * (mH2 - sqrt(s) / 2)) * polK2(xf * mH2
 
   / vars::MDM) + 
		mH3 * mH3 * exp(-xf / vars::MDM * (mH3 - sqrt(s) / 2)) * polK2(xf * mH3
 
   / vars::MDM) + 
		mHc * mHc * exp(-xf / vars::MDM * (mHc - sqrt(s) / 2)) * polK2(xf * mHc
 
   / vars::MDM) + 
		mHc * mHc * exp(-xf / vars::MDM * (mHc - sqrt(s) / 2)) * polK2(xf * mHc
 
   / vars::MDM), 2);
	 return num / den * 1 / (u * u);
}
