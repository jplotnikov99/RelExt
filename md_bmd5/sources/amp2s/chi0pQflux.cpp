///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::chi0pQHufl(const double &cos_t, const double &s){
	 if(heavi(s,MH,MU)){
		 return 2*2*flux(s, Mchi0,MphiQ,MH,MU)*chi0pQHu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQHcfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,MC)){
		 return 2*2*flux(s, Mchi0,MphiQ,MH,MC)*chi0pQHc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQHtfl(const double &cos_t, const double &s){
	 if(heavi(s,MH,MT)){
		 return 2*2*flux(s, Mchi0,MphiQ,MH,MT)*chi0pQHt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQAufl(const double &cos_t, const double &s){
	 if(heavi(s,0,MU)){
		 return 2*2*flux(s, Mchi0,MphiQ,0,MU)*chi0pQAu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQAcfl(const double &cos_t, const double &s){
	 if(heavi(s,0,MC)){
		 return 2*2*flux(s, Mchi0,MphiQ,0,MC)*chi0pQAc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQAtfl(const double &cos_t, const double &s){
	 if(heavi(s,0,MT)){
		 return 2*2*flux(s, Mchi0,MphiQ,0,MT)*chi0pQAt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQZufl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MU)){
		 return 2*2*flux(s, Mchi0,MphiQ,MZ,MU)*chi0pQZu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQZcfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MC)){
		 return 2*2*flux(s, Mchi0,MphiQ,MZ,MC)*chi0pQZc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQZtfl(const double &cos_t, const double &s){
	 if(heavi(s,MZ,MT)){
		 return 2*2*flux(s, Mchi0,MphiQ,MZ,MT)*chi0pQZt(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQWdfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MD)){
		 return 2*2*flux(s, Mchi0,MphiQ,MW,MD)*chi0pQWd(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQWsfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MS)){
		 return 2*2*flux(s, Mchi0,MphiQ,MW,MS)*chi0pQWs(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQWbfl(const double &cos_t, const double &s){
	 if(heavi(s,MW,MB)){
		 return 2*2*flux(s, Mchi0,MphiQ,MW,MB)*chi0pQWb(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQGufl(const double &cos_t, const double &s){
	 if(heavi(s,0,MU)){
		 return 2*2*flux(s, Mchi0,MphiQ,0,MU)*chi0pQGu(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQGcfl(const double &cos_t, const double &s){
	 if(heavi(s,0,MC)){
		 return 2*2*flux(s, Mchi0,MphiQ,0,MC)*chi0pQGc(cos_t, s);
	 }
	 else{ return 0; }

}
double DT::chi0pQGtfl(const double &cos_t, const double &s){
	 if(heavi(s,0,MT)){
		 return 2*2*flux(s, Mchi0,MphiQ,0,MT)*chi0pQGt(cos_t, s);
	 }
	 else{ return 0; }

}
