///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "tactools.hpp"
#include "EffDofmic.hpp"
#include "utils.hpp"
#include "vars.hpp"
#include "../include/declarations.hpp"

double DT::yeq(double xf) {
	double yeq = 45 * xf * xf / (4 * heff(vars::MDM / xf) * M_PI * M_PI * M_PI *\
 
  M_PI) * ( 
besselK2(xf));
	 return yeq;
}

double DT::sigv(double u, double xf, std::function<double(double, double)> f)\
 
  {
	double num, den, s;
	s = (vars::m1 + vars::m2) * (vars::m1 + vars::m2) + (1 - u) / u;
	num = xf / vars::MDM * wij(s, f) * polK1(sqrt(s) * xf / vars::MDM);
	den = pow(
		MA1 * MA1 * exp(-xf / vars::MDM * (MA1 - sqrt(s) / 2)) * polK2(xf * MA1
 
   / vars::MDM), 2);
	 return num / den * 1 / (u * u);
}
