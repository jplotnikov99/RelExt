///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"
#include "utils.hpp"

double DT::amp2s::N1N1Eefl(double cos_t, double s){
	 if(utils::heavi(s,Me,Me)){
		 return utils::flux(s, mN1,mN1,Me,Me)*N1N1Ee(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1N1Emfl(double cos_t, double s){
	 if(utils::heavi(s,Me,MM)){
		 return utils::flux(s, mN1,mN1,Me,MM)*N1N1Em(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1N1Etafl(double cos_t, double s){
	 if(utils::heavi(s,Me,MTA)){
		 return utils::flux(s, mN1,mN1,Me,MTA)*N1N1Eta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1N1eMfl(double cos_t, double s){
	 if(utils::heavi(s,Me,MM)){
		 return utils::flux(s, mN1,mN1,Me,MM)*N1N1eM(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1N1eTAfl(double cos_t, double s){
	 if(utils::heavi(s,Me,MTA)){
		 return utils::flux(s, mN1,mN1,Me,MTA)*N1N1eTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1N1Mmfl(double cos_t, double s){
	 if(utils::heavi(s,MM,MM)){
		 return utils::flux(s, mN1,mN1,MM,MM)*N1N1Mm(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1N1Mtafl(double cos_t, double s){
	 if(utils::heavi(s,MM,MTA)){
		 return utils::flux(s, mN1,mN1,MM,MTA)*N1N1Mta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1N1mTAfl(double cos_t, double s){
	 if(utils::heavi(s,MM,MTA)){
		 return utils::flux(s, mN1,mN1,MM,MTA)*N1N1mTA(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1N1TAtafl(double cos_t, double s){
	 if(utils::heavi(s,MTA,MTA)){
		 return utils::flux(s, mN1,mN1,MTA,MTA)*N1N1TAta(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::amp2s::N1N1(double cos_t, double s){
	 return ( N1N1Eefl(cos_t, s) + N1N1Emfl(cos_t, s) + N1N1Etafl(cos_t, s) +\
 
   N1N1eMfl(cos_t, s) + N1N1eTAfl(cos_t, s) + N1N1Mmfl(cos_t, s) +\
 
   N1N1Mtafl(cos_t, s) + N1N1mTAfl(cos_t, s) + N1N1TAtafl(cos_t, s) );
}
