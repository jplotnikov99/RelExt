///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::HcHcWWfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,MW,MW)*HcHcWW(cos_t, s);
}
double DT::HcHChhfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,mHsm,mHsm)*HcHChh(cos_t, s);
}
double DT::HcHChAfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,mHsm,0)*HcHChA(cos_t, s);
}
double DT::HcHChZfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,mHsm,MZ)*HcHChZ(cos_t, s);
}
double DT::HcHCAAfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,0,0)*HcHCAA(cos_t, s);
}
double DT::HcHCAZfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,0,MZ)*HcHCAZ(cos_t, s);
}
double DT::HcHCZZfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,MZ,MZ)*HcHCZZ(cos_t, s);
}
double DT::HcHCwWfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,MW,MW)*HcHCwW(cos_t, s);
}
double DT::HcHCVEvefl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,Mnue,Mnue)*HcHCVEve(cos_t, s);
}
double DT::HcHCVMvmfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,Mnum,Mnum)*HcHCVMvm(cos_t, s);
}
double DT::HcHCVTvtfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,Mnut,Mnut)*HcHCVTvt(cos_t, s);
}
double DT::HcHCEefl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,Me,Me)*HcHCEe(cos_t, s);
}
double DT::HcHCMmfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,MM,MM)*HcHCMm(cos_t, s);
}
double DT::HcHCTAtafl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,MTA,MTA)*HcHCTAta(cos_t, s);
}
double DT::HcHCUufl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,MU,MU)*HcHCUu(cos_t, s);
}
double DT::HcHCCcfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,MC,MC)*HcHCCc(cos_t, s);
}
double DT::HcHCTtfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,MT,MT)*HcHCTt(cos_t, s);
}
double DT::HcHCDdfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,MD,MD)*HcHCDd(cos_t, s);
}
double DT::HcHCSsfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,MS,MS)*HcHCSs(cos_t, s);
}
double DT::HcHCBbfl(const double &cos_t, const double &s){
	return 2*flux(s, mHc,mHc,MB,MB)*HcHCBb(cos_t, s);
}
