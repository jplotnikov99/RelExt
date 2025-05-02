///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::C2C2hpm2hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MC[1].real(),MC[1].real(),MHm[1].real(),MHm[1].real())*C2C2hpm2hpm2(cos_t, s);
}
double DT::C2C2hpm2wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MC[1].real(),MC[1].real(),MHm[1].real(),MWm.real())*C2C2hpm2w(cos_t, s);
}
double DT::C2C2wwfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MC[1].real(),MC[1].real(),MWm.real(),MWm.real())*C2C2ww(cos_t, s);
}
