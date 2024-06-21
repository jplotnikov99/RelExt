///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::chi0S0Hvmfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,0)){
		 return 2*2*flux(s, Mchi0,MS0,MH,0)*chi0S0Hvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0S0Zvmfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,0)){
		 return 2*2*flux(s, Mchi0,MS0,MZ,0)*chi0S0Zvm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0S0Wmufl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MMU)){
		 return 2*2*flux(s, Mchi0,MS0,MW,MMU)*chi0S0Wmu(cos_t, s);
	 }
	 else{ return 0; }

}
