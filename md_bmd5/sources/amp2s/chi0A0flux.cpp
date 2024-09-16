///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::chi0A0Hvmfl(const double &cos_t, const double &s){
	return 2*2*flux(s, Mchi0,MA0,MH,0)*chi0A0Hvm(cos_t, s);
}
double DT::chi0A0Zvmfl(const double &cos_t, const double &s){
	return 2*2*flux(s, Mchi0,MA0,MZ,0)*chi0A0Zvm(cos_t, s);
}
double DT::chi0A0Wmufl(const double &cos_t, const double &s){
	return 2*2*flux(s, Mchi0,MA0,MW,MMU)*chi0A0Wmu(cos_t, s);
}
