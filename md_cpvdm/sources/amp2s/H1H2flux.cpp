///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::H1H2hhfl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,mHsm,mHsm)*H1H2hh(cos_t, s);
}
double DT::H1H2hZfl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,mHsm,MZ)*H1H2hZ(cos_t, s);
}
double DT::H1H2ZZfl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,MZ,MZ)*H1H2ZZ(cos_t, s);
}
double DT::H1H2wWfl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,MW,MW)*H1H2wW(cos_t, s);
}
double DT::H1H2VEvefl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,Mnue,Mnue)*H1H2VEve(cos_t, s);
}
double DT::H1H2VMvmfl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,Mnum,Mnum)*H1H2VMvm(cos_t, s);
}
double DT::H1H2VTvtfl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,Mnut,Mnut)*H1H2VTvt(cos_t, s);
}
double DT::H1H2Eefl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,Me,Me)*H1H2Ee(cos_t, s);
}
double DT::H1H2Mmfl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,MM,MM)*H1H2Mm(cos_t, s);
}
double DT::H1H2TAtafl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,MTA,MTA)*H1H2TAta(cos_t, s);
}
double DT::H1H2Uufl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,MU,MU)*H1H2Uu(cos_t, s);
}
double DT::H1H2Ccfl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,MC,MC)*H1H2Cc(cos_t, s);
}
double DT::H1H2Ttfl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,MT,MT)*H1H2Tt(cos_t, s);
}
double DT::H1H2Ddfl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,MD,MD)*H1H2Dd(cos_t, s);
}
double DT::H1H2Ssfl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,MS,MS)*H1H2Ss(cos_t, s);
}
double DT::H1H2Bbfl(const double &cos_t, const double &s){
	return 2*flux(s, mH1,mH2,MB,MB)*H1H2Bb(cos_t, s);
}
