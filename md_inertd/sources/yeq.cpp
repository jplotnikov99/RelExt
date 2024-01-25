///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "tactools.hpp"
#include "EffDofmic.hpp"
#include "utils.hpp"
#include "vars.hpp"
#include "../include/declarations.hpp"

double DT::tactools::yeq(double xf) {
	double yeq = 45 * xf * xf / (4 * dof::heff(vars::MDM / xf) * M_PI * M_PI *\
 
  M_PI * M_PI) * ( 
MH0 * MH0/ (vars::MDM * vars::MDM)* utils::besselK2(MH0/ vars::MDM * xf) + 
MA0 * MA0/ (vars::MDM * vars::MDM)* utils::besselK2(MA0/ vars::MDM * xf) + 
MHch * MHch/ (vars::MDM * vars::MDM)* utils::besselK2(MHch/ vars::MDM * xf) + 
MHch * MHch/ (vars::MDM * vars::MDM)* utils::besselK2(MHch/ vars::MDM * xf));
	 return yeq;
}

double DT::tactools::sigv(double u, double xf, std::function<double(double,\
 
  double)> f) {
	double num, den, s;
	s = (vars::m1 + vars::m2) * (vars::m1 + vars::m2) + (1 - u) / u;
	num = xf / vars::MDM * wij(s, f) * utils::polK1(sqrt(s) * xf / vars::MDM);
	den = pow(
		MH0 * MH0 * exp(-xf / vars::MDM * (MH0 - sqrt(s) / 2)) * utils::polK2(xf * 
 
  MH0 / vars::MDM) + 
		MA0 * MA0 * exp(-xf / vars::MDM * (MA0 - sqrt(s) / 2)) * utils::polK2(xf * 
 
  MA0 / vars::MDM) + 
		MHch * MHch * exp(-xf / vars::MDM * (MHch
 
   - sqrt(s) / 2)) * utils::polK2(xf * MHch / vars::MDM) + 
		MHch * MHch * exp(-xf / vars::MDM * (MHch
 
   - sqrt(s) / 2)) * utils::polK2(xf * MHch / vars::MDM), 2);
	 return num / den * 1 / (u * u);
}
