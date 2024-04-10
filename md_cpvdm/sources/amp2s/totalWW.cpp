///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

#include "mass_run.hpp"

double DT::wWH1Hc(){
	 if(heaviDecays(MW,mH1,mHc)){
		 return ( (EL*EL)*pow((- ((mH1 - mHc)*(mH1 - mHc)) +  (MW*MW))*(- ((mH1 +\
 
   mHc)*(mH1 + mHc)) +  (MW*MW)),1.5)*( (RR1x1*RR1x1) + \
 
   (RR1x2*RR1x2)))/(192.*Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWH2Hc(){
	 if(heaviDecays(MW,mH2,mHc)){
		 return ( (EL*EL)*pow((- ((mH2 - mHc)*(mH2 - mHc)) +  (MW*MW))*(- ((mH2 +\
 
   mHc)*(mH2 + mHc)) +  (MW*MW)),1.5)*( (RR2x1*RR2x1) + \
 
   (RR2x2*RR2x2)))/(192.*Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWH3Hc(){
	 if(heaviDecays(MW,mH3,mHc)){
		 return ( (EL*EL)*pow((- ((mH3 - mHc)*(mH3 - mHc)) +  (MW*MW))*(- ((mH3 +\
 
   mHc)*(mH3 + mHc)) +  (MW*MW)),1.5)*( (RR3x1*RR3x1) + \
 
   (RR3x2*RR3x2)))/(192.*Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWhW(){
	 if(heaviDecays(MW,mHsm,MW)){
		 return ( (EL*EL*EL*EL)*sqrt( (mHsm*mHsm*mHsm*mHsm) - 4* (mHsm*mHsm)*\
 
   (MW*MW))*( (mHsm*mHsm*mHsm*mHsm) - 4* (mHsm*mHsm)* (MW*MW) + 12*\
 
   (MW*MW*MW*MW))* (v*v))/(768.*Pi* (MW*MW*MW*MW*MW*MW*MW)* (SW*SW*SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWAW(){
	 if(heaviDecays(MW,0,MW)){
		 return 0;
	 }
	 else{ return 0; }

}
double DT::wWZW(){
	 if(heaviDecays(MW,MZ,MW)){
		 return ( (CW*CW)* (EL*EL)*sqrt(-4* (MW*MW)* (MZ*MZ) + \
 
   (MZ*MZ*MZ*MZ))*(-48* (MW*MW*MW*MW*MW*MW) - 68* (MW*MW*MW*MW)* (MZ*MZ) +\
 
   16* (MW*MW)* (MZ*MZ*MZ*MZ) +  (MZ*MZ*MZ*MZ*MZ*MZ)))/(192.*Pi*\
 
   (MW*MW*MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWveE(){
	 if(heaviDecays(MW,Mnue,Me)){
		 return -0.010416666666666666*( (EL*EL)*sqrt((- ((Me - Mnue)*(Me - Mnue)) +\
 
    (MW*MW))*(- ((Me + Mnue)*(Me + Mnue)) +  (MW*MW)))*(( (Me*Me) + \
 
   (Mnue*Mnue))* (MW*MW) - 2* (MW*MW*MW*MW) +  (( (Me*Me) -  (Mnue*Mnue))*(\
 
   (Me*Me) -  (Mnue*Mnue)))))/(Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWvmM(){
	 if(heaviDecays(MW,Mnum,MM)){
		 return -0.010416666666666666*( (EL*EL)*sqrt((- ((MM - Mnum)*(MM - Mnum)) +\
 
    (MW*MW))*(- ((MM + Mnum)*(MM + Mnum)) +  (MW*MW)))*(( (MM*MM) + \
 
   (Mnum*Mnum))* (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MM*MM) -  (Mnum*Mnum))*(\
 
   (MM*MM) -  (Mnum*Mnum)))))/(Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWvtTA(){
	 if(heaviDecays(MW,Mnut,MTA)){
		 return -0.010416666666666666*( (EL*EL)*sqrt((- ((Mnut - MTA)*(Mnut - MTA))\
 
   +  (MW*MW))*(- ((Mnut + MTA)*(Mnut + MTA)) +  (MW*MW)))*(( (Mnut*Mnut) + \
 
   (MTA*MTA))* (MW*MW) - 2* (MW*MW*MW*MW) +  (( (Mnut*Mnut) -  (MTA*MTA))*(\
 
   (Mnut*Mnut) -  (MTA*MTA)))))/(Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWuD(){
	 if(heaviDecays(MW,MU,MD)){
		 return -0.03125*( (CKM1x1*CKM1x1)* (EL*EL)*sqrt((- ((MD - MU)*(MD - MU)) +\
 
    (MW*MW))*(- ((MD + MU)*(MD + MU)) +  (MW*MW)))*(( (MD*MD) +  (MU*MU))*\
 
   (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MD*MD) -  (MU*MU))*( (MD*MD) - \
 
   (MU*MU)))))/(Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWuS(){
	 if(heaviDecays(MW,MU,MS)){
		 return -0.03125*( (CKM1x2*CKM1x2)* (EL*EL)*sqrt((- ((MS - MU)*(MS - MU)) +\
 
    (MW*MW))*(- ((MS + MU)*(MS + MU)) +  (MW*MW)))*(( (MS*MS) +  (MU*MU))*\
 
   (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MS*MS) -  (MU*MU))*( (MS*MS) - \
 
   (MU*MU)))))/(Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWuB(){
	 if(heaviDecays(MW,MU,MB)){
		 return -0.03125*( (CKM1x3*CKM1x3)* (EL*EL)*sqrt((- ((MB - MU)*(MB - MU)) +\
 
    (MW*MW))*(- ((MB + MU)*(MB + MU)) +  (MW*MW)))*(( (MB*MB) +  (MU*MU))*\
 
   (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MB*MB) -  (MU*MU))*( (MB*MB) - \
 
   (MU*MU)))))/(Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWcD(){
	 if(heaviDecays(MW,MC,MD)){
		 return -0.03125*( (CKM2x1*CKM2x1)* (EL*EL)*sqrt((- ((MC - MD)*(MC - MD)) +\
 
    (MW*MW))*(- ((MC + MD)*(MC + MD)) +  (MW*MW)))*(( (MC*MC) +  (MD*MD))*\
 
   (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MC*MC) -  (MD*MD))*( (MC*MC) - \
 
   (MD*MD)))))/(Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWcS(){
	 if(heaviDecays(MW,MC,MS)){
		 return -0.03125*( (CKM2x2*CKM2x2)* (EL*EL)*sqrt((- ((MC - MS)*(MC - MS)) +\
 
    (MW*MW))*(- ((MC + MS)*(MC + MS)) +  (MW*MW)))*(( (MC*MC) +  (MS*MS))*\
 
   (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MC*MC) -  (MS*MS))*( (MC*MC) - \
 
   (MS*MS)))))/(Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWcB(){
	 if(heaviDecays(MW,MC,MB)){
		 return -0.03125*( (CKM2x3*CKM2x3)* (EL*EL)*sqrt((- ((MB - MC)*(MB - MC)) +\
 
    (MW*MW))*(- ((MB + MC)*(MB + MC)) +  (MW*MW)))*(( (MB*MB) +  (MC*MC))*\
 
   (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MB*MB) -  (MC*MC))*( (MB*MB) - \
 
   (MC*MC)))))/(Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWtD(){
	 if(heaviDecays(MW,MT,MD)){
		 return -0.03125*( (CKM3x1*CKM3x1)* (EL*EL)*sqrt((- ((MD - MT)*(MD - MT)) +\
 
    (MW*MW))*(- ((MD + MT)*(MD + MT)) +  (MW*MW)))*(( (MD*MD) +  (MT*MT))*\
 
   (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MD*MD) -  (MT*MT))*( (MD*MD) - \
 
   (MT*MT)))))/(Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWtS(){
	 if(heaviDecays(MW,MT,MS)){
		 return -0.03125*( (CKM3x2*CKM3x2)* (EL*EL)*sqrt((- ((MS - MT)*(MS - MT)) +\
 
    (MW*MW))*(- ((MS + MT)*(MS + MT)) +  (MW*MW)))*(( (MS*MS) +  (MT*MT))*\
 
   (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MS*MS) -  (MT*MT))*( (MS*MS) - \
 
   (MT*MT)))))/(Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wWtB(){
	 if(heaviDecays(MW,MT,MB)){
		 return -0.03125*( (CKM3x3*CKM3x3)* (EL*EL)*sqrt((- ((MB - MT)*(MB - MT)) +\
 
    (MW*MW))*(- ((MB + MT)*(MB + MT)) +  (MW*MW)))*(( (MB*MB) +  (MT*MT))*\
 
   (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MB*MB) -  (MT*MT))*( (MB*MB) - \
 
   (MT*MT)))))/(Pi* (MW*MW*MW*MW*MW)* (SW*SW));
	 }
	 else{ return 0; }

}
double DT::wwW(){
	 Mrun running;
	 double Q = MW;
	 MS = running.RunM(Q, 3, running.N0);
	 MC = running.RunM(Q, 4, running.N0);
	 MB = running.RunM(Q, 5, running.N0);
	 MT = running.RunM(Q, 6, running.N0);
	 aS = running.alphaS(Q, running.NalphaS);
	 FAGS = sqrt(4*M_PI*aS); gs = FAGS; G = FAGS;
	 return ( wWH1Hc() + wWH2Hc() + wWH3Hc() + wWhW() + wWAW() + wWZW() +\
 
   wWveE() + wWvmM() + wWvtTA() + wWuD() + wWuS() + wWuB() + wWcD() + wWcS()\
 
   + wWcB() + wWtD() + wWtS() + wWtB() );
}
