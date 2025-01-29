///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::S0A0VMvmfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MS0,MA0,0,0)*S0A0VMvm(cos_t, s);
}
double DT::S0A0MUmufl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MS0,MA0,MMU,MMU)*S0A0MUmu(cos_t, s);
}
