///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../../model.hpp"
#include "utils.hpp"

using namespace DT::PAR;

double DT::A1A1HHNLOfl(const double &cos_t, const double &s){
	return flux(s, MA1,MA1,MH,MH)*A1A1HHNLO(cos_t, s);
}
double DT::A1A1HS1NLOfl(const double &cos_t, const double &s){
	return flux(s, MA1,MA1,MH,MS1)*A1A1HS1NLO(cos_t, s);
}
double DT::A1A1S1S1NLOfl(const double &cos_t, const double &s){
	return flux(s, MA1,MA1,MS1,MS1)*A1A1S1S1NLO(cos_t, s);
}
double DT::A1A1ZZNLOfl(const double &cos_t, const double &s){
	return flux(s, MA1,MA1,MZ,MZ)*A1A1ZZNLO(cos_t, s);
}
double DT::A1A1wWNLOfl(const double &cos_t, const double &s){
	return flux(s, MA1,MA1,MW,MW)*A1A1wWNLO(cos_t, s);
}
double DT::A1A1TAtaNLOfl(const double &cos_t, const double &s){
	return flux(s, MA1,MA1,MTA,MTA)*A1A1TAtaNLO(cos_t, s);
}
double DT::A1A1TtNLOfl(const double &cos_t, const double &s){
	return flux(s, MA1,MA1,MT,MT)*A1A1TtNLO(cos_t, s);
}
double DT::A1A1BbNLOfl(const double &cos_t, const double &s){
	return flux(s, MA1,MA1,MB,MB)*A1A1BbNLO(cos_t, s);
}
