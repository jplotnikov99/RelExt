///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::A0pQVMufl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MA0,MphiQ,0,MU)*A0pQVMu(cos_t, s);
}
double DT::A0pQVMcfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MA0,MphiQ,0,MC)*A0pQVMc(cos_t, s);
}
double DT::A0pQVMtfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MA0,MphiQ,0,MT)*A0pQVMt(cos_t, s);
}
double DT::A0pQMUsfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MA0,MphiQ,MMU,MS)*A0pQMUs(cos_t, s);
}
double DT::A0pQMUbfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MA0,MphiQ,MMU,MB)*A0pQMUb(cos_t, s);
}
