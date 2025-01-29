///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::chiMA0Hmufl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MchiM,MA0,MH,MMU)*chiMA0Hmu(cos_t, s);
}
double DT::chiMA0Amufl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MchiM,MA0,0,MMU)*chiMA0Amu(cos_t, s);
}
double DT::chiMA0Zmufl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MchiM,MA0,MZ,MMU)*chiMA0Zmu(cos_t, s);
}
double DT::chiMA0wvmfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MchiM,MA0,MW,0)*chiMA0wvm(cos_t, s);
}
