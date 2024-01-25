///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "tactools.hpp"
#include "EffDofmic.hpp"
#include "utils.hpp"
#include "vars.hpp"
#include "../include/declarations.hpp"

double DT::tactools::yeq(double xf) {
	double yeq = 45 * xf * xf / (4 * dof::heff(vars::MDM / xf) * M_PI * M_PI *\
 
  M_PI * M_PI) * ( 
mN1 * mN1/ (vars::MDM * vars::MDM)* utils::besselK2(mN1/ vars::MDM * xf) + 
mphich * mphich/ (vars::MDM * vars::MDM)* utils::besselK2(mphich
 
  / vars::MDM * xf) + 
mphich * mphich/ (vars::MDM * vars::MDM)* utils::besselK2(mphich
 
  / vars::MDM * xf));
	 return yeq;
}

double DT::tactools::sigv(double u, double xf, std::function<double(double,\
 
  double)> f) {
	double num, den, s;
	s = (vars::m1 + vars::m2) * (vars::m1 + vars::m2) + (1 - u) / u;
	num = xf / vars::MDM * wij(s, f) * utils::polK1(sqrt(s) * xf / vars::MDM);
	den = pow(
		mN1 * mN1 * exp(-xf / vars::MDM * (mN1 - sqrt(s) / 2)) * utils::polK2(xf * 
 
  mN1 / vars::MDM) + 
		mphich * mphich * exp(-xf / vars::MDM * (mphich
 
   - sqrt(s) / 2)) * utils::polK2(xf * mphich / vars::MDM) + 
		mphich * mphich * exp(-xf / vars::MDM * (mphich
 
   - sqrt(s) / 2)) * utils::polK2(xf * mphich / vars::MDM), 2);
	 return num / den * 1 / (u * u);
}
