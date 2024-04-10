///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

#include "mass_run.hpp"

double DT::whhh(){
	 if(heaviDecays(mHsm,mHsm,mHsm)){
		 return 0.5*(-9*sqrt(3)*mHsm* (L1*L1)* (v*v))/(16.*Pi*sqrt(-\
 
   (mHsm*mHsm*mHsm*mHsm)));
	 }
	 else{ return 0; }

}
double DT::whH1H1(){
	 if(heaviDecays(mHsm,mH1,mH1)){
		 return 0.5*(sqrt(-4* (mH1*mH1)* (mHsm*mHsm) +  (mHsm*mHsm*mHsm*mHsm))*\
 
   ((-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 + L5)*\
 
   (RR1x1*RR1x1)*v + (L3 + L4 - L5)* (RR1x2*RR1x2)*v + L7*\
 
   (RR1x3*RR1x3)*v)*(-2*RR1x2*RR1x3*Timag + 2*RR1x1*RR1x3*Treal + (L3 + L4 +\
 
   L5)* (RR1x1*RR1x1)*v + (L3 + L4 - L5)* (RR1x2*RR1x2)*v + L7*\
 
   (RR1x3*RR1x3)*v)))/(16.*Pi* (mHsm*mHsm*mHsm));
	 }
	 else{ return 0; }

}
double DT::whH1H2(){
	 if(heaviDecays(mHsm,mH1,mH2)){
		 return (sqrt((- ((mH1 - mH2)*(mH1 - mH2)) +  (mHsm*mHsm))*(- ((mH1 +\
 
   mH2)*(mH1 + mH2)) +  (mHsm*mHsm)))* ((-(RR1x2*RR2x3*Timag) +\
 
   RR1x1*RR2x3*Treal + (L3 + L4 + L5)*RR1x1*RR2x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) + RR2x1*Treal +\
 
   L7*RR2x3*v))*(-(RR1x2*RR2x3*Timag) + RR1x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR2x1*v + (L3 + L4 - L5)*RR1x2*RR2x2*v + RR1x3*(-(RR2x2*Timag) +\
 
   RR2x1*Treal + L7*RR2x3*v))))/(16.*Pi* (mHsm*mHsm*mHsm));
	 }
	 else{ return 0; }

}
double DT::whH1H3(){
	 if(heaviDecays(mHsm,mH1,mH3)){
		 return (sqrt((- ((mH1 - mH3)*(mH1 - mH3)) +  (mHsm*mHsm))*(- ((mH1 +\
 
   mH3)*(mH1 + mH3)) +  (mHsm*mHsm)))* ((-(RR1x2*RR3x3*Timag) +\
 
   RR1x1*RR3x3*Treal + (L3 + L4 + L5)*RR1x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR1x2*RR3x3*Timag) + RR1x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR1x1*RR3x1*v + (L3 + L4 - L5)*RR1x2*RR3x2*v + RR1x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(16.*Pi* (mHsm*mHsm*mHsm));
	 }
	 else{ return 0; }

}
double DT::whH2H2(){
	 if(heaviDecays(mHsm,mH2,mH2)){
		 return 0.5*(sqrt(-4* (mH2*mH2)* (mHsm*mHsm) +  (mHsm*mHsm*mHsm*mHsm))*\
 
   ((-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 + L5)*\
 
   (RR2x1*RR2x1)*v + (L3 + L4 - L5)* (RR2x2*RR2x2)*v + L7*\
 
   (RR2x3*RR2x3)*v)*(-2*RR2x2*RR2x3*Timag + 2*RR2x1*RR2x3*Treal + (L3 + L4 +\
 
   L5)* (RR2x1*RR2x1)*v + (L3 + L4 - L5)* (RR2x2*RR2x2)*v + L7*\
 
   (RR2x3*RR2x3)*v)))/(16.*Pi* (mHsm*mHsm*mHsm));
	 }
	 else{ return 0; }

}
double DT::whH2H3(){
	 if(heaviDecays(mHsm,mH2,mH3)){
		 return (sqrt((- ((mH2 - mH3)*(mH2 - mH3)) +  (mHsm*mHsm))*(- ((mH2 +\
 
   mH3)*(mH2 + mH3)) +  (mHsm*mHsm)))* ((-(RR2x2*RR3x3*Timag) +\
 
   RR2x1*RR3x3*Treal + (L3 + L4 + L5)*RR2x1*RR3x1*v + (L3 + L4 -\
 
   L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) + RR3x1*Treal +\
 
   L7*RR3x3*v))*(-(RR2x2*RR3x3*Timag) + RR2x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)*RR2x1*RR3x1*v + (L3 + L4 - L5)*RR2x2*RR3x2*v + RR2x3*(-(RR3x2*Timag) +\
 
   RR3x1*Treal + L7*RR3x3*v))))/(16.*Pi* (mHsm*mHsm*mHsm));
	 }
	 else{ return 0; }

}
double DT::whH3H3(){
	 if(heaviDecays(mHsm,mH3,mH3)){
		 return 0.5*(sqrt(-4* (mH3*mH3)* (mHsm*mHsm) +  (mHsm*mHsm*mHsm*mHsm))*\
 
   ((-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 + L5)*\
 
   (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)*(-2*RR3x2*RR3x3*Timag + 2*RR3x1*RR3x3*Treal + (L3 + L4 +\
 
   L5)* (RR3x1*RR3x1)*v + (L3 + L4 - L5)* (RR3x2*RR3x2)*v + L7*\
 
   (RR3x3*RR3x3)*v)))/(16.*Pi* (mHsm*mHsm*mHsm));
	 }
	 else{ return 0; }

}
double DT::whHCHc(){
	 if(heaviDecays(mHsm,mHc,mHc)){
		 return ( (L3*L3)*sqrt(-4* (mHc*mHc)* (mHsm*mHsm) + \
 
   (mHsm*mHsm*mHsm*mHsm))* (v*v))/(16.*Pi* (mHsm*mHsm*mHsm));
	 }
	 else{ return 0; }

}
double DT::whZZ(){
	 if(heaviDecays(mHsm,MZ,MZ)){
		 return 0.5*( (EL*EL*EL*EL)*sqrt( (mHsm*mHsm*mHsm*mHsm) - 4* (mHsm*mHsm)*\
 
   (MZ*MZ))*( (mHsm*mHsm*mHsm*mHsm) - 4* (mHsm*mHsm)* (MZ*MZ) + 12*\
 
   (MZ*MZ*MZ*MZ))* (v*v)* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*(\
 
   (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(256.*Pi* (CW*CW*CW*CW)*\
 
   (mHsm*mHsm*mHsm)* (MZ*MZ*MZ*MZ)* (SW*SW*SW*SW));
	 }
	 else{ return 0; }

}
double DT::whwW(){
	 if(heaviDecays(mHsm,MW,MW)){
		 return ( (EL*EL*EL*EL)*sqrt( (mHsm*mHsm*mHsm*mHsm) - 4* (mHsm*mHsm)*\
 
   (MW*MW))*( (mHsm*mHsm*mHsm*mHsm) - 4* (mHsm*mHsm)* (MW*MW) + 12*\
 
   (MW*MW*MW*MW))* (v*v))/(256.*Pi* (mHsm*mHsm*mHsm)* (MW*MW*MW*MW)*\
 
   (SW*SW*SW*SW));
	 }
	 else{ return 0; }

}
double DT::whEe(){
	 if(heaviDecays(mHsm,Me,Me)){
		 return ( (Me*Me)*(-4* (Me*Me) +  (mHsm*mHsm))*sqrt(-4* (Me*Me)*\
 
   (mHsm*mHsm) +  (mHsm*mHsm*mHsm*mHsm)))/(8.*Pi* (mHsm*mHsm*mHsm)* (v*v));
	 }
	 else{ return 0; }

}
double DT::whMm(){
	 if(heaviDecays(mHsm,MM,MM)){
		 return (( (mHsm*mHsm) - 4* (MM*MM))* (MM*MM)*sqrt( (mHsm*mHsm*mHsm*mHsm) -\
 
   4* (mHsm*mHsm)* (MM*MM)))/(8.*Pi* (mHsm*mHsm*mHsm)* (v*v));
	 }
	 else{ return 0; }

}
double DT::whTAta(){
	 if(heaviDecays(mHsm,MTA,MTA)){
		 return (( (mHsm*mHsm) - 4* (MTA*MTA))* (MTA*MTA)*sqrt(\
 
   (mHsm*mHsm*mHsm*mHsm) - 4* (mHsm*mHsm)* (MTA*MTA)))/(8.*Pi*\
 
   (mHsm*mHsm*mHsm)* (v*v));
	 }
	 else{ return 0; }

}
double DT::whUu(){
	 if(heaviDecays(mHsm,MU,MU)){
		 return (3*( (mHsm*mHsm) - 4* (MU*MU))* (MU*MU)*sqrt( (mHsm*mHsm*mHsm*mHsm)\
 
   - 4* (mHsm*mHsm)* (MU*MU)))/(8.*Pi* (mHsm*mHsm*mHsm)* (v*v));
	 }
	 else{ return 0; }

}
double DT::whCc(){
	 if(heaviDecays(mHsm,MC,MC)){
		 return (3* (MC*MC)*(-4* (MC*MC) +  (mHsm*mHsm))*sqrt(-4* (MC*MC)*\
 
   (mHsm*mHsm) +  (mHsm*mHsm*mHsm*mHsm)))/(8.*Pi* (mHsm*mHsm*mHsm)* (v*v));
	 }
	 else{ return 0; }

}
double DT::whTt(){
	 if(heaviDecays(mHsm,MT,MT)){
		 return (3*( (mHsm*mHsm) - 4* (MT*MT))* (MT*MT)*sqrt( (mHsm*mHsm*mHsm*mHsm)\
 
   - 4* (mHsm*mHsm)* (MT*MT)))/(8.*Pi* (mHsm*mHsm*mHsm)* (v*v));
	 }
	 else{ return 0; }

}
double DT::whDd(){
	 if(heaviDecays(mHsm,MD,MD)){
		 return (3* (MD*MD)*(-4* (MD*MD) +  (mHsm*mHsm))*sqrt(-4* (MD*MD)*\
 
   (mHsm*mHsm) +  (mHsm*mHsm*mHsm*mHsm)))/(8.*Pi* (mHsm*mHsm*mHsm)* (v*v));
	 }
	 else{ return 0; }

}
double DT::whSs(){
	 if(heaviDecays(mHsm,MS,MS)){
		 return (3*( (mHsm*mHsm) - 4* (MS*MS))* (MS*MS)*sqrt( (mHsm*mHsm*mHsm*mHsm)\
 
   - 4* (mHsm*mHsm)* (MS*MS)))/(8.*Pi* (mHsm*mHsm*mHsm)* (v*v));
	 }
	 else{ return 0; }

}
double DT::whBb(){
	 if(heaviDecays(mHsm,MB,MB)){
		 return (3* (MB*MB)*(-4* (MB*MB) +  (mHsm*mHsm))*sqrt(-4* (MB*MB)*\
 
   (mHsm*mHsm) +  (mHsm*mHsm*mHsm*mHsm)))/(8.*Pi* (mHsm*mHsm*mHsm)* (v*v));
	 }
	 else{ return 0; }

}
double DT::wwh(){
	 Mrun running;
	 double Q = mHsm;
	 MS = running.RunM(Q, 3, running.N0);
	 MC = running.RunM(Q, 4, running.N0);
	 MB = running.RunM(Q, 5, running.N0);
	 MT = running.RunM(Q, 6, running.N0);
	 aS = running.alphaS(Q, running.NalphaS);
	 FAGS = sqrt(4*M_PI*aS); gs = FAGS; G = FAGS;
	 return ( whhh() + whH1H1() + whH1H2() + whH1H3() + whH2H2() + whH2H3() +\
 
   whH3H3() + whHCHc() + whZZ() + whwW() + whEe() + whMm() + whTAta() +\
 
   whUu() + whCc() + whTt() + whDd() + whSs() + whBb() );
}
