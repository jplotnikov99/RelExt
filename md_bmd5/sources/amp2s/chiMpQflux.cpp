///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::chiMpQHsfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MphiQ,MH,MS)*chiMpQHs(cos_t, s);
}
double DT::chiMpQHbfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MphiQ,MH,MB)*chiMpQHb(cos_t, s);
}
double DT::chiMpQAsfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MphiQ,0,MS)*chiMpQAs(cos_t, s);
}
double DT::chiMpQAbfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MphiQ,0,MB)*chiMpQAb(cos_t, s);
}
double DT::chiMpQZsfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MphiQ,MZ,MS)*chiMpQZs(cos_t, s);
}
double DT::chiMpQZbfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MphiQ,MZ,MB)*chiMpQZb(cos_t, s);
}
double DT::chiMpQwufl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MphiQ,MW,MU)*chiMpQwu(cos_t, s);
}
double DT::chiMpQwcfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MphiQ,MW,MC)*chiMpQwc(cos_t, s);
}
double DT::chiMpQwtfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MphiQ,MW,MT)*chiMpQwt(cos_t, s);
}
double DT::chiMpQGsfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MphiQ,0,MS)*chiMpQGs(cos_t, s);
}
double DT::chiMpQGbfl(const double &cos_t, const double &s){
	return 2*2*flux(s, MchiM,MphiQ,0,MB)*chiMpQGb(cos_t, s);
}
