///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::N1N1h2h2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[1].real(),MN[1].real(),Mh[2].real(),Mh[2].real())*N1N1h2h2
 
     (cos_t, s);
}
