///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::chiMA0Hmufl(const double &cos_t, const double &s){
	 if(heavi(s,MH,MMU)){
		 return 2*2*flux(s, MchiM,MA0,MH,MMU)*chiMA0Hmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMA0Amufl(const double &cos_t, const double &s){
	 if(heavi(s,0,MMU)){
		 return 2*2*flux(s, MchiM,MA0,0,MMU)*chiMA0Amu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMA0Zmufl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MMU)){
		 return 2*2*flux(s, MchiM,MA0,MZ,MMU)*chiMA0Zmu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chiMA0wvmfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,0)){
		 return 2*2*flux(s, MchiM,MA0,MW,0)*chiMA0wvm(cos_t, s);
	 }
	 else{ return 0; }

}
