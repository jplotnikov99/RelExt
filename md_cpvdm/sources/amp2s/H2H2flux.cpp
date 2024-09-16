///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::H2H2hhfl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,mHsm,mHsm)*H2H2hh(cos_t, s);
}
double DT::H2H2hZfl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,mHsm,MZ)*H2H2hZ(cos_t, s);
}
double DT::H2H2ZZfl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,MZ,MZ)*H2H2ZZ(cos_t, s);
}
double DT::H2H2wWfl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,MW,MW)*H2H2wW(cos_t, s);
}
double DT::H2H2Eefl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,Me,Me)*H2H2Ee(cos_t, s);
}
double DT::H2H2Mmfl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,MM,MM)*H2H2Mm(cos_t, s);
}
double DT::H2H2TAtafl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,MTA,MTA)*H2H2TAta(cos_t, s);
}
double DT::H2H2Uufl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,MU,MU)*H2H2Uu(cos_t, s);
}
double DT::H2H2Ccfl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,MC,MC)*H2H2Cc(cos_t, s);
}
double DT::H2H2Ttfl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,MT,MT)*H2H2Tt(cos_t, s);
}
double DT::H2H2Ddfl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,MD,MD)*H2H2Dd(cos_t, s);
}
double DT::H2H2Ssfl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,MS,MS)*H2H2Ss(cos_t, s);
}
double DT::H2H2Bbfl(const double &cos_t, const double &s){
	return flux(s, mH2,mH2,MB,MB)*H2H2Bb(cos_t, s);
}
