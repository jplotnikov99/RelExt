///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::ChiChiHHfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,MH,MH)*ChiChiHH(cos_t, s);
}
double DT::ChiChiAAfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,0,0)*ChiChiAA(cos_t, s);
}
double DT::ChiChiZZfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,MZ,MZ)*ChiChiZZ(cos_t, s);
}
double DT::ChiChiwWfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,MW,MW)*ChiChiwW(cos_t, s);
}
double DT::ChiChiGGfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,0,0)*ChiChiGG(cos_t, s);
}
double DT::ChiChiEefl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,Me,Me)*ChiChiEe(cos_t, s);
}
double DT::ChiChiMUmufl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,MMU,MMU)*ChiChiMUmu(cos_t, s);
}
double DT::ChiChiTAtafl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,MTA,MTA)*ChiChiTAta(cos_t, s);
}
double DT::ChiChiUufl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,MU,MU)*ChiChiUu(cos_t, s);
}
double DT::ChiChiCcfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,MC,MC)*ChiChiCc(cos_t, s);
}
double DT::ChiChiTtfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,MT,MT)*ChiChiTt(cos_t, s);
}
double DT::ChiChiDdfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,MD,MD)*ChiChiDd(cos_t, s);
}
double DT::ChiChiSsfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,MS,MS)*ChiChiSs(cos_t, s);
}
double DT::ChiChiBbfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MChi,MChi,MB,MB)*ChiChiBb(cos_t, s);
}
