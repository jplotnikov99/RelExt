///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::wZH1H2(){
	 if(heaviDecays(MZ,mH1,mH2)){
		 return ( (gc212*gc212)*pow((- ((mH1 - mH2)*(mH1 - mH2)) +  (MZ*MZ))*(-\
 
   ((mH1 + mH2)*(mH1 + mH2)) +  (MZ*MZ)),1.5))/(48.*Pi* (MZ*MZ*MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZH1H3(){
	 if(heaviDecays(MZ,mH1,mH3)){
		 return ( (gc213*gc213)*pow((- ((mH1 - mH3)*(mH1 - mH3)) +  (MZ*MZ))*(-\
 
   ((mH1 + mH3)*(mH1 + mH3)) +  (MZ*MZ)),1.5))/(48.*Pi* (MZ*MZ*MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZH2H3(){
	 if(heaviDecays(MZ,mH2,mH3)){
		 return ( (gc214*gc214)*pow((- ((mH2 - mH3)*(mH2 - mH3)) +  (MZ*MZ))*(-\
 
   ((mH2 + mH3)*(mH2 + mH3)) +  (MZ*MZ)),1.5))/(48.*Pi* (MZ*MZ*MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZHCHc(){
	 if(heaviDecays(MZ,mHc,mHc)){
		 return ( (gc211*gc211)*(-4* (mHc*mHc) +  (MZ*MZ))*sqrt(-4* (mHc*mHc)*\
 
   (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(48.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZhZ(){
	 if(heaviDecays(MZ,mHsm,MZ)){
		 return ( (EL*EL*EL*EL)*sqrt( (mHsm*mHsm*mHsm*mHsm) - 4* (mHsm*mHsm)*\
 
   (MZ*MZ))*( (mHsm*mHsm*mHsm*mHsm) - 4* (mHsm*mHsm)* (MZ*MZ) + 12*\
 
   (MZ*MZ*MZ*MZ))* (v*v)* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*(\
 
   (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(768.*Pi* (CW*CW*CW*CW)*\
 
   (MZ*MZ*MZ*MZ*MZ*MZ*MZ)* (SW*SW*SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZwW(){
	 if(heaviDecays(MZ,MW,MW)){
		 return ( (gc205*gc205)*sqrt(-4* (MW*MW)* (MZ*MZ) +  (MZ*MZ*MZ*MZ))*(-48*\
 
   (MW*MW*MW*MW*MW*MW) - 68* (MW*MW*MW*MW)* (MZ*MZ) + 16* (MW*MW)*\
 
   (MZ*MZ*MZ*MZ) +  (MZ*MZ*MZ*MZ*MZ*MZ)))/(192.*Pi* (MW*MW*MW*MW)* (MZ*MZ*MZ))
 
   ;
	 }
	 else{ return 0; }

}
double DT::wZVEve(){
	 if(heaviDecays(MZ,Mnue,Mnue)){
		 return ( (gc282*gc282)*(- (Mnue*Mnue) +  (MZ*MZ))*sqrt(-4* (Mnue*Mnue)*\
 
   (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(24.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZVMvm(){
	 if(heaviDecays(MZ,Mnum,Mnum)){
		 return ( (gc283*gc283)*(- (Mnum*Mnum) +  (MZ*MZ))*sqrt(-4* (Mnum*Mnum)*\
 
   (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(24.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZVTvt(){
	 if(heaviDecays(MZ,Mnut,Mnut)){
		 return ( (gc284*gc284)*(- (Mnut*Mnut) +  (MZ*MZ))*sqrt(-4* (Mnut*Mnut)*\
 
   (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(24.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZEe(){
	 if(heaviDecays(MZ,Me,Me)){
		 return ((-((-6*gc276L*gc276R +  (gc276L*gc276L) +  (gc276R*gc276R))*\
 
   (Me*Me)) + ( (gc276L*gc276L) +  (gc276R*gc276R))* (MZ*MZ))*sqrt(-4*\
 
   (Me*Me)* (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(24.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZMm(){
	 if(heaviDecays(MZ,MM,MM)){
		 return ((-((-6*gc277L*gc277R +  (gc277L*gc277L) +  (gc277R*gc277R))*\
 
   (MM*MM)) + ( (gc277L*gc277L) +  (gc277R*gc277R))* (MZ*MZ))*sqrt(-4*\
 
   (MM*MM)* (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(24.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZTAta(){
	 if(heaviDecays(MZ,MTA,MTA)){
		 return ((-((-6*gc278L*gc278R +  (gc278L*gc278L) +  (gc278R*gc278R))*\
 
   (MTA*MTA)) + ( (gc278L*gc278L) +  (gc278R*gc278R))* (MZ*MZ))*sqrt(-4*\
 
   (MTA*MTA)* (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(24.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZUu(){
	 if(heaviDecays(MZ,MU,MU)){
		 return ((-((-6*gc281L*gc281R +  (gc281L*gc281L) +  (gc281R*gc281R))*\
 
   (MU*MU)) + ( (gc281L*gc281L) +  (gc281R*gc281R))* (MZ*MZ))*sqrt(-4*\
 
   (MU*MU)* (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(8.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZCc(){
	 if(heaviDecays(MZ,MC,MC)){
		 return ((-((-6*gc279L*gc279R +  (gc279L*gc279L) +  (gc279R*gc279R))*\
 
   (MC*MC)) + ( (gc279L*gc279L) +  (gc279R*gc279R))* (MZ*MZ))*sqrt(-4*\
 
   (MC*MC)* (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(8.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZTt(){
	 if(heaviDecays(MZ,MT,MT)){
		 return ((-((-6*gc280L*gc280R +  (gc280L*gc280L) +  (gc280R*gc280R))*\
 
   (MT*MT)) + ( (gc280L*gc280L) +  (gc280R*gc280R))* (MZ*MZ))*sqrt(-4*\
 
   (MT*MT)* (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(8.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZDd(){
	 if(heaviDecays(MZ,MD,MD)){
		 return ((-((-6*gc274L*gc274R +  (gc274L*gc274L) +  (gc274R*gc274R))*\
 
   (MD*MD)) + ( (gc274L*gc274L) +  (gc274R*gc274R))* (MZ*MZ))*sqrt(-4*\
 
   (MD*MD)* (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(8.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZSs(){
	 if(heaviDecays(MZ,MS,MS)){
		 return ((-((-6*gc275L*gc275R +  (gc275L*gc275L) +  (gc275R*gc275R))*\
 
   (MS*MS)) + ( (gc275L*gc275L) +  (gc275R*gc275R))* (MZ*MZ))*sqrt(-4*\
 
   (MS*MS)* (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(8.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wZBb(){
	 if(heaviDecays(MZ,MB,MB)){
		 return ((-((-6*gc273L*gc273R +  (gc273L*gc273L) +  (gc273R*gc273R))*\
 
   (MB*MB)) + ( (gc273L*gc273L) +  (gc273R*gc273R))* (MZ*MZ))*sqrt(-4*\
 
   (MB*MB)* (MZ*MZ) +  (MZ*MZ*MZ*MZ)))/(8.*Pi* (MZ*MZ*MZ));
	 }
	 else{ return 0; }

}
double DT::wwZ(){
	 return ( wZH1H2() + wZH1H3() + wZH2H3() + wZHCHc() + wZhZ() + wZwW() +\
 
   wZVEve() + wZVMvm() + wZVTvt() + wZEe() + wZMm() + wZTAta() + wZUu() +\
 
   wZCc() + wZTt() + wZDd() + wZSs() + wZBb() );
}
