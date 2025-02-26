///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::chiMS0Hmufl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MS0,MH,MMU)*chiMS0Hmu(cos_t, s);
}
double DT::chiMS0Amufl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MS0,0,MMU)*chiMS0Amu(cos_t, s);
}
double DT::chiMS0Zmufl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MS0,MZ,MMU)*chiMS0Zmu(cos_t, s);
}
double DT::chiMS0wvmfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MS0,MW,0)*chiMS0wvm(cos_t, s);
}
