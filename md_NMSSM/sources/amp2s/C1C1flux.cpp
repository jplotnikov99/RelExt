///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::C1C1hpm2hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MC[0].real(),MC[0].real(),MHm[1].real(),MHm[1].real())*C1C1hpm2hpm2(cos_t, s);
}
double DT::C1C1hpm2wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MC[0].real(),MC[0].real(),MHm[1].real(),MWm.real())*C1C1hpm2w(cos_t, s);
}
double DT::C1C1wwfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MC[0].real(),MC[0].real(),MWm.real(),MWm.real())*C1C1ww(cos_t, s);
}
