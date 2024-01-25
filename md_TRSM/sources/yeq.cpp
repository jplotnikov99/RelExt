///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "tactools.hpp"
#include "EffDofmic.hpp"
#include "utils.hpp"
#include "vars.hpp"
#include "../include/declarations.hpp"

double DT::yeq(double xf) {
	double yeq = 45 * xf * xf / (4 * heff(vars::MDM / xf) * M_PI * M_PI * M_PI *\
 
     M_PI) * ( 
//MChi * MChi/ (vars::MDM * vars::MDM)* besselK2(MChi/ vars::MDM * xf) + 
MPsi * MPsi/ (vars::MDM * vars::MDM)* besselK2(MPsi/ vars::MDM * xf));
	if(!vars::appr)
	{
		yeq = 45 * xf * xf / (4 * heff(vars::MDM / xf) * M_PI * M_PI * M_PI *M_PI) * 
		(MChi * MChi/ (vars::MDM * vars::MDM)* std::cyl_bessel_k(2, MChi/ vars::MDM * xf));
	}
	return yeq;
}

double DT::sigv(double u, double xf, std::function<double(double, double)> f)\
 
     {
	double num, den, s;
	s = (vars::m1 + vars::m2) * (vars::m1 + vars::m2) + (1 - u) / u;
	num = xf / vars::MDM * wij(s, f) * polK1(sqrt(s) * xf / vars::MDM);
	den = pow(
	//	MChi * MChi * exp(-xf / vars::MDM * (MChi - sqrt(s) / 2)) * polK2(xf * MChi
 //
    //  / vars::MDM) + 
		MPsi * MPsi * exp(-xf / vars::MDM * (MPsi - sqrt(s) / 2)) * polK2(xf * MPsi
 
      / vars::MDM), 2);
	if(!vars::appr){
		num = xf / vars::MDM * wij(s, f) * std::cyl_bessel_k(1, sqrt(s) * xf / vars::MDM);
		den = pow(
		MChi * MChi * std::cyl_bessel_k(2, xf * MChi / vars::MDM), 2); 

	}
	return num / den * 1 / (u * u);
}
