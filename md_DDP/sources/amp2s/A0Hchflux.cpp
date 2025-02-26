///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::A0HchH1Wfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,MH1,MW)*A0HchH1W(cos_t, s);
}
double DT::A0HchH2Wfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,MH2,MW)*A0HchH2W(cos_t, s);
}
double DT::A0HchAWfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,0,MW)*A0HchAW(cos_t, s);
}
double DT::A0HchZWfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,MZ,MW)*A0HchZW(cos_t, s);
}
double DT::A0HchveEfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,Mnue,Me)*A0HchveE(cos_t, s);
}
double DT::A0HchvmMfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,Mnum,MM)*A0HchvmM(cos_t, s);
}
double DT::A0HchvtTAfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,Mnut,MTA)*A0HchvtTA(cos_t, s);
}
double DT::A0HchuDfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,MU,MD)*A0HchuD(cos_t, s);
}
double DT::A0HchuSfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,MU,MS)*A0HchuS(cos_t, s);
}
double DT::A0HchuBfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,MU,MB)*A0HchuB(cos_t, s);
}
double DT::A0HchcDfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,MC,MD)*A0HchcD(cos_t, s);
}
double DT::A0HchcSfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,MC,MS)*A0HchcS(cos_t, s);
}
double DT::A0HchcBfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,MC,MB)*A0HchcB(cos_t, s);
}
double DT::A0HchtDfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,MT,MD)*A0HchtD(cos_t, s);
}
double DT::A0HchtSfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,MT,MS)*A0HchtS(cos_t, s);
}
double DT::A0HchtBfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MA0,MHch,MT,MB)*A0HchtB(cos_t, s);
}
