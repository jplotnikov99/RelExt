///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

#include "mass_run.hpp"

double DT::wZH1H2(){
	 if(heaviDecays(MZ,mH1,mH2)){
		 return ( (EL*EL)*pow((- ((mH1 - mH2)*(mH1 - mH2)) +  (MZ*MZ))*(- ((mH1 +\
 
      mH2)*(mH1 + mH2)) +  (MZ*MZ)),1.5)* ((RR1x2*RR2x1 -\
 
      RR1x1*RR2x2)*(RR1x2*RR2x1 - RR1x1*RR2x2))* (( (CW*CW) +  (SW*SW))*(\
 
      (CW*CW) +  (SW*SW))))/(192.*Pi* (CW*CW)* (MZ*MZ*MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZH1H3(){
	 if(heaviDecays(MZ,mH1,mH3)){
		 return ( (EL*EL)*pow((- ((mH1 - mH3)*(mH1 - mH3)) +  (MZ*MZ))*(- ((mH1 +\
 
      mH3)*(mH1 + mH3)) +  (MZ*MZ)),1.5)* ((RR1x2*RR3x1 -\
 
      RR1x1*RR3x2)*(RR1x2*RR3x1 - RR1x1*RR3x2))* (( (CW*CW) +  (SW*SW))*(\
 
      (CW*CW) +  (SW*SW))))/(192.*Pi* (CW*CW)* (MZ*MZ*MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZH2H3(){
	 if(heaviDecays(MZ,mH2,mH3)){
		 return ( (EL*EL)*pow((- ((mH2 - mH3)*(mH2 - mH3)) +  (MZ*MZ))*(- ((mH2 +\
 
      mH3)*(mH2 + mH3)) +  (MZ*MZ)),1.5)* ((RR2x2*RR3x1 -\
 
      RR2x1*RR3x2)*(RR2x2*RR3x1 - RR2x1*RR3x2))* (( (CW*CW) +  (SW*SW))*(\
 
      (CW*CW) +  (SW*SW))))/(192.*Pi* (CW*CW)* (MZ*MZ*MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZHCHc(){
	 if(heaviDecays(MZ,mHc,mHc)){
		 return ( (EL*EL)*(-4* (mHc*mHc) +  (MZ*MZ))*sqrt(-4* (mHc*mHc)* (MZ*MZ) + \
 
      (MZ*MZ*MZ*MZ))* (( (CW*CW) -  (SW*SW))*( (CW*CW) - \
 
      (SW*SW))))/(192.*Pi* (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
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
		 return ( (CW*CW)* (EL*EL)*sqrt(-4* (MW*MW)* (MZ*MZ) + \
 
      (MZ*MZ*MZ*MZ))*(-48* (MW*MW*MW*MW*MW*MW) - 68* (MW*MW*MW*MW)* (MZ*MZ) +\
 
      16* (MW*MW)* (MZ*MZ*MZ*MZ) +  (MZ*MZ*MZ*MZ*MZ*MZ)))/(192.*Pi*\
 
      (MW*MW*MW*MW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZVEve(){
	 if(heaviDecays(MZ,Mnue,Mnue)){
		 return ( (EL*EL)*(- (Mnue*Mnue) +  (MZ*MZ))*sqrt(-4* (Mnue*Mnue)* (MZ*MZ)\
 
      +  (MZ*MZ*MZ*MZ))* (( (CW*CW) +  (SW*SW))*( (CW*CW) + \
 
      (SW*SW))))/(96.*Pi* (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZVMvm(){
	 if(heaviDecays(MZ,Mnum,Mnum)){
		 return ( (EL*EL)*(- (Mnum*Mnum) +  (MZ*MZ))*sqrt(-4* (Mnum*Mnum)* (MZ*MZ)\
 
      +  (MZ*MZ*MZ*MZ))* (( (CW*CW) +  (SW*SW))*( (CW*CW) + \
 
      (SW*SW))))/(96.*Pi* (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZVTvt(){
	 if(heaviDecays(MZ,Mnut,Mnut)){
		 return ( (EL*EL)*(- (Mnut*Mnut) +  (MZ*MZ))*sqrt(-4* (Mnut*Mnut)* (MZ*MZ)\
 
      +  (MZ*MZ*MZ*MZ))* (( (CW*CW) +  (SW*SW))*( (CW*CW) + \
 
      (SW*SW))))/(96.*Pi* (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZEe(){
	 if(heaviDecays(MZ,Me,Me)){
		 return ( (EL*EL)*sqrt(-4* (Me*Me)* (MZ*MZ) +  (MZ*MZ*MZ*MZ))*(\
 
      (CW*CW*CW*CW)*(- (Me*Me) +  (MZ*MZ)) - 2* (CW*CW)*(5* (Me*Me) + \
 
      (MZ*MZ))* (SW*SW) + (7* (Me*Me) + 5* (MZ*MZ))* (SW*SW*SW*SW)))/(96.*Pi*\
 
      (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZMm(){
	 if(heaviDecays(MZ,MM,MM)){
		 return ( (EL*EL)*sqrt(-4* (MM*MM)* (MZ*MZ) +  (MZ*MZ*MZ*MZ))*(\
 
      (CW*CW*CW*CW)*(- (MM*MM) +  (MZ*MZ)) - 2* (CW*CW)*(5* (MM*MM) + \
 
      (MZ*MZ))* (SW*SW) + (7* (MM*MM) + 5* (MZ*MZ))* (SW*SW*SW*SW)))/(96.*Pi*\
 
      (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZTAta(){
	 if(heaviDecays(MZ,MTA,MTA)){
		 return ( (EL*EL)*sqrt(-4* (MTA*MTA)* (MZ*MZ) +  (MZ*MZ*MZ*MZ))*(\
 
      (CW*CW*CW*CW)*(- (MTA*MTA) +  (MZ*MZ)) - 2* (CW*CW)*(5* (MTA*MTA) + \
 
      (MZ*MZ))* (SW*SW) + (7* (MTA*MTA) + 5* (MZ*MZ))*\
 
      (SW*SW*SW*SW)))/(96.*Pi* (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZUu(){
	 if(heaviDecays(MZ,MU,MU)){
		 return ( (EL*EL)*sqrt(-4* (MU*MU)* (MZ*MZ) +  (MZ*MZ*MZ*MZ))*(9*\
 
      (CW*CW*CW*CW)*(- (MU*MU) +  (MZ*MZ)) - 6* (CW*CW)*(11* (MU*MU) + \
 
      (MZ*MZ))* (SW*SW) + (7* (MU*MU) + 17* (MZ*MZ))*\
 
      (SW*SW*SW*SW)))/(288.*Pi* (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZCc(){
	 if(heaviDecays(MZ,MC,MC)){
		 return ( (EL*EL)*sqrt(-4* (MC*MC)* (MZ*MZ) +  (MZ*MZ*MZ*MZ))*(9*\
 
      (CW*CW*CW*CW)*(- (MC*MC) +  (MZ*MZ)) - 6* (CW*CW)*(11* (MC*MC) + \
 
      (MZ*MZ))* (SW*SW) + (7* (MC*MC) + 17* (MZ*MZ))*\
 
      (SW*SW*SW*SW)))/(288.*Pi* (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZTt(){
	 if(heaviDecays(MZ,MT,MT)){
		 return ( (EL*EL)*sqrt(-4* (MT*MT)* (MZ*MZ) +  (MZ*MZ*MZ*MZ))*(9*\
 
      (CW*CW*CW*CW)*(- (MT*MT) +  (MZ*MZ)) - 6* (CW*CW)*(11* (MT*MT) + \
 
      (MZ*MZ))* (SW*SW) + (7* (MT*MT) + 17* (MZ*MZ))*\
 
      (SW*SW*SW*SW)))/(288.*Pi* (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZDd(){
	 if(heaviDecays(MZ,MD,MD)){
		 return ( (EL*EL)*sqrt(-4* (MD*MD)* (MZ*MZ) +  (MZ*MZ*MZ*MZ))*(9*\
 
      (CW*CW*CW*CW)*(- (MD*MD) +  (MZ*MZ)) + 6* (CW*CW)*(-7* (MD*MD) + \
 
      (MZ*MZ))* (SW*SW) + (-17* (MD*MD) + 5* (MZ*MZ))*\
 
      (SW*SW*SW*SW)))/(288.*Pi* (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZSs(){
	 if(heaviDecays(MZ,MS,MS)){
		 return ( (EL*EL)*sqrt(-4* (MS*MS)* (MZ*MZ) +  (MZ*MZ*MZ*MZ))*(9*\
 
      (CW*CW*CW*CW)*(- (MS*MS) +  (MZ*MZ)) + 6* (CW*CW)*(-7* (MS*MS) + \
 
      (MZ*MZ))* (SW*SW) + (-17* (MS*MS) + 5* (MZ*MZ))*\
 
      (SW*SW*SW*SW)))/(288.*Pi* (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wZBb(){
	 if(heaviDecays(MZ,MB,MB)){
		 return ( (EL*EL)*sqrt(-4* (MB*MB)* (MZ*MZ) +  (MZ*MZ*MZ*MZ))*(9*\
 
      (CW*CW*CW*CW)*(- (MB*MB) +  (MZ*MZ)) + 6* (CW*CW)*(-7* (MB*MB) + \
 
      (MZ*MZ))* (SW*SW) + (-17* (MB*MB) + 5* (MZ*MZ))*\
 
      (SW*SW*SW*SW)))/(288.*Pi* (CW*CW)* (MZ*MZ*MZ)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wwZ(){
	 Mrun running;
	 double Q = MZ;
	 MS = running.RunM(Q, 3, running.N0);
	 MC = running.RunM(Q, 4, running.N0);
	 MB = running.RunM(Q, 5, running.N0);
	 MT = running.RunM(Q, 6, running.N0);
	 aS = running.alphaS(Q, running.NalphaS);
	 FAGS = sqrt(4*M_PI*aS); gs = FAGS; G = FAGS;
	 return ( wZH1H2() + wZH1H3() + wZH2H3() + wZHCHc() + wZhZ() + wZwW() +\
 
      wZVEve() + wZVMvm() + wZVTvt() + wZEe() + wZMm() + wZTAta() + wZUu() +\
 
      wZCc() + wZTt() + wZDd() + wZSs() + wZBb() );
}
