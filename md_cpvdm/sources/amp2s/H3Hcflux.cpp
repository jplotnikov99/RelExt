///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::H3HchWfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,mHsm,MW)*H3HchW(cos_t, s);
}
double DT::H3HcAWfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,0,MW)*H3HcAW(cos_t, s);
}
double DT::H3HcZWfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,MZ,MW)*H3HcZW(cos_t, s);
}
double DT::H3HcveEfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,Mnue,Me)*H3HcveE(cos_t, s);
}
double DT::H3HcvmMfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,Mnum,MM)*H3HcvmM(cos_t, s);
}
double DT::H3HcvtTAfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,Mnut,MTA)*H3HcvtTA(cos_t, s);
}
double DT::H3HcuDfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,MU,MD)*H3HcuD(cos_t, s);
}
double DT::H3HcuSfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,MU,MS)*H3HcuS(cos_t, s);
}
double DT::H3HcuBfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,MU,MB)*H3HcuB(cos_t, s);
}
double DT::H3HccDfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,MC,MD)*H3HccD(cos_t, s);
}
double DT::H3HccSfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,MC,MS)*H3HccS(cos_t, s);
}
double DT::H3HccBfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,MC,MB)*H3HccB(cos_t, s);
}
double DT::H3HctDfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,MT,MD)*H3HctD(cos_t, s);
}
double DT::H3HctSfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,MT,MS)*H3HctS(cos_t, s);
}
double DT::H3HctBfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, mH3,mHc,MT,MB)*H3HctB(cos_t, s);
}
