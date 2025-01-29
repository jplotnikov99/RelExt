///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::H3HchH1Wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,MH1,MW)*H3HchH1W(cos_t, s);
}
double DT::H3HchH2Wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,MH2,MW)*H3HchH2W(cos_t, s);
}
double DT::H3HchAWfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,0,MW)*H3HchAW(cos_t, s);
}
double DT::H3HchZWfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,MZ,MW)*H3HchZW(cos_t, s);
}
double DT::H3HchveEfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,Mnue,Me)*H3HchveE(cos_t, s);
}
double DT::H3HchvmMfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,Mnum,MM)*H3HchvmM(cos_t, s);
}
double DT::H3HchvtTAfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,Mnut,MTA)*H3HchvtTA(cos_t, s);
}
double DT::H3HchuDfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,MU,MD)*H3HchuD(cos_t, s);
}
double DT::H3HchuSfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,MU,MS)*H3HchuS(cos_t, s);
}
double DT::H3HchuBfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,MU,MB)*H3HchuB(cos_t, s);
}
double DT::H3HchcDfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,MC,MD)*H3HchcD(cos_t, s);
}
double DT::H3HchcSfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,MC,MS)*H3HchcS(cos_t, s);
}
double DT::H3HchcBfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,MC,MB)*H3HchcB(cos_t, s);
}
double DT::H3HchtDfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,MT,MD)*H3HchtD(cos_t, s);
}
double DT::H3HchtSfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,MT,MS)*H3HchtS(cos_t, s);
}
double DT::H3HchtBfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MH3,MHch,MT,MB)*H3HchtB(cos_t, s);
}
