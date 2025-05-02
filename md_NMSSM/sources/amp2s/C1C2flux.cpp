///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::C1C2hpm2hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MC[0].real(),MC[1].real(),MHm[1].real(),MHm[1].real())*C1C2hpm2hpm2(cos_t, s);
}
double DT::C1C2hpm2wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MC[0].real(),MC[1].real(),MHm[1].real(),MWm.real())*C1C2hpm2w(cos_t, s);
}
double DT::C1C2wwfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MC[0].real(),MC[1].real(),MWm.real(),MWm.real())*C1C2ww(cos_t, s);
}
