///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"

double DT::amp2s::phichphichEE(double cos_t, double s){
double t =  (Me*Me) + (-s + cos_t*sqrt(s - 4* (Me*Me))*sqrt(s - 4*\
 
   (mphich*mphich)))/2. +  (mphich*mphich);
double u = -s - t + mphich*mphich + mphich*mphich + Me*Me + Me*Me;
return (-4* (gc10*gc10*gc10*gc10)*(-2*Me*mN1*s + t*u + 8*mN1* (Me*Me*Me) + 5*\
 
   (Me*Me*Me*Me) - s* (mN1*mN1) - (s + t + u)* (mphich*mphich) +  (Me*Me)*(-s\
 
   - t - u + 4* (mN1*mN1) + 2* (mphich*mphich)) + \
 
   (mphich*mphich*mphich*mphich)))/((-t +  (mN1*mN1))*(-u +  (mN1*mN1))) -\
 
   (2* (gc10*gc10*gc10*gc10)*(-(t*u) - 2*Me*mN1*(s - t + u) + 8*mN1*\
 
   (Me*Me*Me) + 3* (Me*Me*Me*Me) - s* (mN1*mN1) +  (Me*Me)*(-s + 3*t - u + 4*\
 
   (mN1*mN1) - 2* (mphich*mphich)) + (s + t + u)* (mphich*mphich) - \
 
   (mphich*mphich*mphich*mphich)))/ (( (mN1*mN1) - t)*( (mN1*mN1) - t)) - (2*\
 
   (gc10*gc10*gc10*gc10)*(-2*Me*mN1*(s + t - u) - t*u + 8*mN1* (Me*Me*Me) +\
 
   3* (Me*Me*Me*Me) - s* (mN1*mN1) +  (Me*Me)*(-s - t + 3*u + 4* (mN1*mN1) -\
 
   2* (mphich*mphich)) + (s + t + u)* (mphich*mphich) - \
 
   (mphich*mphich*mphich*mphich)))/ (( (mN1*mN1) - u)*( (mN1*mN1) - u));
}
double DT::amp2s::phichphichEM(double cos_t, double s){
double t = (-s +  (Me*Me) +  (MM*MM) + 2* (mphich*mphich) + cos_t*sqrt(s - 4*\
 
   (mphich*mphich))*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (MM*MM)) +  ((\
 
   (MM*MM) - s)*( (MM*MM) - s)))/s))/2.;
double u = -s - t + mphich*mphich + mphich*mphich + Me*Me + MM*MM;
return (-4* (gc10*gc10)* (gc11*gc11)*(-(Me*mN1*s) - MM*mN1*s + t*u + (2*MM +\
 
   mN1)* (Me*Me*Me) - s* (mN1*mN1) + Me*MM*(-s - t - u + 2* (mN1*mN1)) - s*\
 
   (mphich*mphich) - t* (mphich*mphich) - u* (mphich*mphich) + \
 
   (Me*Me)*(3*MM*mN1 +  (mN1*mN1) +  (mphich*mphich)) +  (MM*MM)*(2*Me*MM +\
 
   3*Me*mN1 + MM*mN1 +  (Me*Me) +  (mN1*mN1) +  (mphich*mphich)) + \
 
   (mphich*mphich*mphich*mphich)))/((-t +  (mN1*mN1))*(-u +  (mN1*mN1))) -\
 
   (2* (gc10*gc10)* (gc11*gc11)*(-(t*u) + 2*mN1* (MM*MM*MM) +  (MM*MM*MM*MM)\
 
   - s* (mN1*mN1) +  (MM*MM)*(-s - u +  (mN1*mN1)) + 2*Me*(mN1* (MM*MM) +\
 
   MM*(t +  (mN1*mN1)) + mN1*(t -  (mphich*mphich))) +  (Me*Me)*(4*MM*mN1 + t\
 
   + 2* (MM*MM) +  (mN1*mN1) - 2* (mphich*mphich)) + s* (mphich*mphich) + t*\
 
   (mphich*mphich) + u* (mphich*mphich) + 2*MM*mN1*(-s - u + \
 
   (mphich*mphich)) -  (mphich*mphich*mphich*mphich)))/ (( (mN1*mN1) - t)*(\
 
   (mN1*mN1) - t)) - (2* (gc10*gc10)* (gc11*gc11)*(2*MM*mN1*u - t*u + 2*mN1*\
 
   (Me*Me*Me) +  (Me*Me*Me*Me) - s* (mN1*mN1) +  (Me*Me)*(2*MM*mN1 - s - t + \
 
   (mN1*mN1)) +  (MM*MM)*(4*Me*mN1 + u + 2* (Me*Me) +  (mN1*mN1) - 2*\
 
   (mphich*mphich)) - 2*MM*mN1* (mphich*mphich) + s* (mphich*mphich) + t*\
 
   (mphich*mphich) + u* (mphich*mphich) + 2*Me*(MM*(u +  (mN1*mN1)) + mN1*(-s\
 
   - t +  (mphich*mphich))) -  (mphich*mphich*mphich*mphich)))/ (( (mN1*mN1)\
 
   - u)*( (mN1*mN1) - u));
}
double DT::amp2s::phichphichETA(double cos_t, double s){
double t = (-s +  (Me*Me) + 2* (mphich*mphich) +  (MTA*MTA) + cos_t*sqrt(s -\
 
   4* (mphich*mphich))*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (MTA*MTA)) + \
 
   (( (MTA*MTA) - s)*( (MTA*MTA) - s)))/s))/2.;
double u = -s - t + mphich*mphich + mphich*mphich + Me*Me + MTA*MTA;
return (-4* (gc10*gc10)* (gc12*gc12)*(-(mN1*MTA*s) + t*u + (mN1 + 2*MTA)*\
 
   (Me*Me*Me) - s* (mN1*mN1) +  (mphich*mphich*mphich*mphich) +  (mN1*mN1)*\
 
   (MTA*MTA) +  (mphich*mphich)*(-s - t - u +  (MTA*MTA)) + \
 
   (Me*Me)*(3*mN1*MTA +  (mN1*mN1) +  (mphich*mphich) +  (MTA*MTA)) + mN1*\
 
   (MTA*MTA*MTA) + Me*(-(mN1*s) - MTA*s - MTA*t - MTA*u + 2*MTA* (mN1*mN1) +\
 
   3*mN1* (MTA*MTA) + 2* (MTA*MTA*MTA))))/((-t +  (mN1*mN1))*(-u + \
 
   (mN1*mN1))) - (2* (gc10*gc10)* (gc12*gc12)*(-2*mN1*MTA*s - 2*mN1*MTA*u -\
 
   t*u - s* (mN1*mN1) + (2*mN1*MTA + s + t + u)* (mphich*mphich) - \
 
   (mphich*mphich*mphich*mphich) - s* (MTA*MTA) - u* (MTA*MTA) +  (mN1*mN1)*\
 
   (MTA*MTA) +  (Me*Me)*(4*mN1*MTA + t +  (mN1*mN1) - 2* (mphich*mphich) + 2*\
 
   (MTA*MTA)) + 2*Me*(MTA*t + MTA* (mN1*mN1) + mN1*(t -  (mphich*mphich) + \
 
   (MTA*MTA))) + 2*mN1* (MTA*MTA*MTA) +  (MTA*MTA*MTA*MTA)))/ (( (mN1*mN1) -\
 
   t)*( (mN1*mN1) - t)) - (2* (gc10*gc10)* (gc12*gc12)*(2*mN1*MTA*u - t*u +\
 
   2*mN1* (Me*Me*Me) +  (Me*Me*Me*Me) - s* (mN1*mN1) - \
 
   (mphich*mphich*mphich*mphich) +  (mphich*mphich)*(-2*mN1*MTA + s + t + u -\
 
   2* (MTA*MTA)) + u* (MTA*MTA) +  (mN1*mN1)* (MTA*MTA) +  (Me*Me)*(2*mN1*MTA\
 
   - s - t +  (mN1*mN1) + 2* (MTA*MTA)) + 2*Me*(MTA*u + MTA* (mN1*mN1) +\
 
   mN1*(-s - t +  (mphich*mphich) + 2* (MTA*MTA)))))/ (( (mN1*mN1) - u)*(\
 
   (mN1*mN1) - u));
}
double DT::amp2s::phichphichMM(double cos_t, double s){
double t =  (MM*MM) + (-s + cos_t*sqrt(s - 4* (MM*MM))*sqrt(s - 4*\
 
   (mphich*mphich)))/2. +  (mphich*mphich);
double u = -s - t + mphich*mphich + mphich*mphich + MM*MM + MM*MM;
return (-4* (gc11*gc11*gc11*gc11)*(-2*MM*mN1*s + t*u + 8*mN1* (MM*MM*MM) + 5*\
 
   (MM*MM*MM*MM) - s* (mN1*mN1) - (s + t + u)* (mphich*mphich) +  (MM*MM)*(-s\
 
   - t - u + 4* (mN1*mN1) + 2* (mphich*mphich)) + \
 
   (mphich*mphich*mphich*mphich)))/((-t +  (mN1*mN1))*(-u +  (mN1*mN1))) -\
 
   (2* (gc11*gc11*gc11*gc11)*(-(t*u) - 2*MM*mN1*(s - t + u) + 8*mN1*\
 
   (MM*MM*MM) + 3* (MM*MM*MM*MM) - s* (mN1*mN1) +  (MM*MM)*(-s + 3*t - u + 4*\
 
   (mN1*mN1) - 2* (mphich*mphich)) + (s + t + u)* (mphich*mphich) - \
 
   (mphich*mphich*mphich*mphich)))/ (( (mN1*mN1) - t)*( (mN1*mN1) - t)) - (2*\
 
   (gc11*gc11*gc11*gc11)*(-2*MM*mN1*(s + t - u) - t*u + 8*mN1* (MM*MM*MM) +\
 
   3* (MM*MM*MM*MM) - s* (mN1*mN1) +  (MM*MM)*(-s - t + 3*u + 4* (mN1*mN1) -\
 
   2* (mphich*mphich)) + (s + t + u)* (mphich*mphich) - \
 
   (mphich*mphich*mphich*mphich)))/ (( (mN1*mN1) - u)*( (mN1*mN1) - u));
}
double DT::amp2s::phichphichMTA(double cos_t, double s){
double t = (-s +  (MM*MM) + 2* (mphich*mphich) +  (MTA*MTA) + cos_t*sqrt(s -\
 
   4* (mphich*mphich))*sqrt(( (MM*MM*MM*MM) - 2* (MM*MM)*(s +  (MTA*MTA)) + \
 
   (( (MTA*MTA) - s)*( (MTA*MTA) - s)))/s))/2.;
double u = -s - t + mphich*mphich + mphich*mphich + MM*MM + MTA*MTA;
return (-4* (gc11*gc11)* (gc12*gc12)*(-(mN1*MTA*s) + t*u + (mN1 + 2*MTA)*\
 
   (MM*MM*MM) - s* (mN1*mN1) +  (mphich*mphich*mphich*mphich) +  (mN1*mN1)*\
 
   (MTA*MTA) +  (mphich*mphich)*(-s - t - u +  (MTA*MTA)) + \
 
   (MM*MM)*(3*mN1*MTA +  (mN1*mN1) +  (mphich*mphich) +  (MTA*MTA)) + mN1*\
 
   (MTA*MTA*MTA) + MM*(-(mN1*s) - MTA*s - MTA*t - MTA*u + 2*MTA* (mN1*mN1) +\
 
   3*mN1* (MTA*MTA) + 2* (MTA*MTA*MTA))))/((-t +  (mN1*mN1))*(-u + \
 
   (mN1*mN1))) - (2* (gc11*gc11)* (gc12*gc12)*(-2*mN1*MTA*s - 2*mN1*MTA*u -\
 
   t*u - s* (mN1*mN1) + (2*mN1*MTA + s + t + u)* (mphich*mphich) - \
 
   (mphich*mphich*mphich*mphich) - s* (MTA*MTA) - u* (MTA*MTA) +  (mN1*mN1)*\
 
   (MTA*MTA) +  (MM*MM)*(4*mN1*MTA + t +  (mN1*mN1) - 2* (mphich*mphich) + 2*\
 
   (MTA*MTA)) + 2*MM*(MTA*t + MTA* (mN1*mN1) + mN1*(t -  (mphich*mphich) + \
 
   (MTA*MTA))) + 2*mN1* (MTA*MTA*MTA) +  (MTA*MTA*MTA*MTA)))/ (( (mN1*mN1) -\
 
   t)*( (mN1*mN1) - t)) - (2* (gc11*gc11)* (gc12*gc12)*(2*mN1*MTA*u - t*u +\
 
   2*mN1* (MM*MM*MM) +  (MM*MM*MM*MM) - s* (mN1*mN1) - \
 
   (mphich*mphich*mphich*mphich) +  (mphich*mphich)*(-2*mN1*MTA + s + t + u -\
 
   2* (MTA*MTA)) + u* (MTA*MTA) +  (mN1*mN1)* (MTA*MTA) +  (MM*MM)*(2*mN1*MTA\
 
   - s - t +  (mN1*mN1) + 2* (MTA*MTA)) + 2*MM*(MTA*u + MTA* (mN1*mN1) +\
 
   mN1*(-s - t +  (mphich*mphich) + 2* (MTA*MTA)))))/ (( (mN1*mN1) - u)*(\
 
   (mN1*mN1) - u));
}
double DT::amp2s::phichphichTATA(double cos_t, double s){
double t =  (mphich*mphich) + (-s + cos_t*sqrt(s - 4* (mphich*mphich))*sqrt(s\
 
   - 4* (MTA*MTA)))/2. +  (MTA*MTA);
double u = -s - t + mphich*mphich + mphich*mphich + MTA*MTA + MTA*MTA;
return (-4* (gc12*gc12*gc12*gc12)*(t*u +  (mphich*mphich*mphich*mphich) - s*\
 
   (MTA*MTA) - t* (MTA*MTA) - u* (MTA*MTA) +  (mphich*mphich)*(-s - t - u +\
 
   2* (MTA*MTA)) +  (mN1*mN1)*(-s + 4* (MTA*MTA)) + mN1*(-2*MTA*s + 8*\
 
   (MTA*MTA*MTA)) + 5* (MTA*MTA*MTA*MTA)))/((-t +  (mN1*mN1))*(-u + \
 
   (mN1*mN1))) + (2* (gc12*gc12*gc12*gc12)*(t*u + \
 
   (mphich*mphich*mphich*mphich) +  (mN1*mN1)*(s - 4* (MTA*MTA)) +\
 
   2*mN1*MTA*(s - t + u - 4* (MTA*MTA)) + s* (MTA*MTA) - 3*t* (MTA*MTA) + u*\
 
   (MTA*MTA) +  (mphich*mphich)*(-s - t - u + 2* (MTA*MTA)) - 3*\
 
   (MTA*MTA*MTA*MTA)))/ (( (mN1*mN1) - t)*( (mN1*mN1) - t)) + (2*\
 
   (gc12*gc12*gc12*gc12)*(t*u +  (mphich*mphich*mphich*mphich) + \
 
   (mN1*mN1)*(s - 4* (MTA*MTA)) + 2*mN1*MTA*(s + t - u - 4* (MTA*MTA)) + s*\
 
   (MTA*MTA) + t* (MTA*MTA) - 3*u* (MTA*MTA) +  (mphich*mphich)*(-s - t - u +\
 
   2* (MTA*MTA)) - 3* (MTA*MTA*MTA*MTA)))/ (( (mN1*mN1) - u)*( (mN1*mN1) - u))
 
   ;
}
double DT::amp2s::phichPHICHhh(double cos_t, double s){
double t =  (mH*mH) + (-s + cos_t*sqrt(s - 4* (mH*mH))*sqrt(s - 4*\
 
   (mphich*mphich)))/2. +  (mphich*mphich);
double u = -s - t + mphich*mphich + mphich*mphich + mH*mH + mH*mH;
return  (lam3*lam3) + (2* (lam3*lam3*lam3)* (v*v))/(t -  (mphich*mphich)) +\
 
   (2* (lam3*lam3*lam3)* (v*v))/(u -  (mphich*mphich)) + (2*\
 
   (lam3*lam3*lam3*lam3)* (v*v*v*v))/((-t +  (mphich*mphich))*(-u + \
 
   (mphich*mphich))) + ( (lam3*lam3*lam3*lam3)* (v*v*v*v))/ ((\
 
   (mphich*mphich) - t)*( (mphich*mphich) - t)) + ( (lam3*lam3*lam3*lam3)*\
 
   (v*v*v*v))/ (( (mphich*mphich) - u)*( (mphich*mphich) - u)) + (12*lH*\
 
   (lam3*lam3)*(s -  (mH*mH))* (v*v))/( (mH*mH*mH*mH) +  (s*s) + \
 
   (mH*mH)*(-2*s +  (WH*WH))) + (36* (lam3*lam3)* (lH*lH)* (v*v*v*v))/(\
 
   (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH))) + (12*lH*\
 
   (lam3*lam3*lam3)*(-s +  (mH*mH))* (v*v*v*v))/((-t +  (mphich*mphich))*(\
 
   (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))) + (12*lH*\
 
   (lam3*lam3*lam3)*(-s +  (mH*mH))* (v*v*v*v))/((-u +  (mphich*mphich))*(\
 
   (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH))));
}
double DT::amp2s::phichPHICHhA(double cos_t, double s){
double t = (-s +  (mH*mH) + 2* (mphich*mphich) + cos_t*sqrt(s - 4*\
 
   (mphich*mphich))*sqrt( ((- (mH*mH) + s)*(- (mH*mH) + s))/s))/2.;
double u = -s - t + mphich*mphich + mphich*mphich + mH*mH + 0*0;
return -(( (gc7*gc7)* (lam3*lam3)*(-s + t + u - 3* (mH*mH) + 6*\
 
   (mphich*mphich))* (v*v))/((-t +  (mphich*mphich))*(-u + \
 
   (mphich*mphich)))) - (2* (gc7*gc7)* (lam3*lam3)*(t +  (mphich*mphich))*\
 
   (v*v))/ (( (mphich*mphich) - t)*( (mphich*mphich) - t)) + ( (gc7*gc7)*\
 
   (lam3*lam3)*(s + t - u -  (mH*mH) - 4* (mphich*mphich))* (v*v))/ ((\
 
   (mphich*mphich) - u)*( (mphich*mphich) - u));
}
double DT::amp2s::phichPHICHhZ(double cos_t, double s){
double t = (-s +  (mH*mH) + 2* (mphich*mphich) +  (MZ*MZ) + cos_t*sqrt(s - 4*\
 
   (mphich*mphich))*sqrt(( (mH*mH*mH*mH) - 2* (mH*mH)*(s +  (MZ*MZ)) +  ((\
 
   (MZ*MZ) - s)*( (MZ*MZ) - s)))/s))/2.;
double u = -s - t + mphich*mphich + mphich*mphich + mH*mH + MZ*MZ;
return ( (gc39*gc39)* (lam3*lam3)*((-s - t + u +  (mH*mH))*(-t + \
 
   (mphich*mphich)) + (s - 2*t - u + 3* (mH*mH) - 5* (mphich*mphich))*\
 
   (MZ*MZ) +  (MZ*MZ*MZ*MZ))* (v*v))/((-t +  (mphich*mphich))*(-u + \
 
   (mphich*mphich))* (MZ*MZ)) + ( (gc39*gc39)* (lam3*lam3)*(\
 
   (mphich*mphich*mphich*mphich) - 2* (mphich*mphich)*(t +  (MZ*MZ)) +  ((\
 
   (MZ*MZ) - t)*( (MZ*MZ) - t)))* (v*v))/( (MZ*MZ)* (( (mphich*mphich) - t)*(\
 
   (mphich*mphich) - t))) + ( (gc39*gc39)* (lam3*lam3)*( (mH*mH*mH*mH) - 16*\
 
   (mphich*mphich)* (MZ*MZ) - 2* (mH*mH)*(s + t - u +  (MZ*MZ)) +  (( (MZ*MZ)\
 
   + s + t - u)*( (MZ*MZ) + s + t - u)))* (v*v))/(4.* (MZ*MZ)* ((\
 
   (mphich*mphich) - u)*( (mphich*mphich) - u))) + (lam3* (EL*EL)*\
 
   (gc39*gc39)*(-s +  (MZ*MZ))*((t - u)*(s + t - u -  (mH*mH)) + (4*s + t - u\
 
   - 16* (mphich*mphich))* (MZ*MZ))* (v*v)* (( (CW*CW) +  (SW*SW))*( (CW*CW)\
 
   +  (SW*SW))))/(4.* (CW*CW)*(-u +  (mphich*mphich))* (MZ*MZ)* (SW*SW)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (lam3* (EL*EL)*\
 
   (gc39*gc39)*(-s +  (MZ*MZ))*(-((t - u)*(-t +  (mphich*mphich))) + (2*s - t\
 
   + u - 8* (mphich*mphich))* (MZ*MZ))* (v*v)* (( (CW*CW) +  (SW*SW))*(\
 
   (CW*CW) +  (SW*SW))))/(2.* (CW*CW)*(-t +  (mphich*mphich))* (MZ*MZ)*\
 
   (SW*SW)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (\
 
   (EL*EL*EL*EL)* (gc39*gc39)*(4*(s - 4* (mphich*mphich))* (MZ*MZ) +  ((t -\
 
   u)*(t - u)))* (v*v)* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))*(\
 
   (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(16.* (CW*CW*CW*CW)* (MZ*MZ)*\
 
   (SW*SW*SW*SW)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::amp2s::phichPHICHAA(double cos_t, double s){
double t = (-s + cos_t*sqrt(s)*sqrt(s - 4* (mphich*mphich)))/2. + \
 
   (mphich*mphich);
double u = -s - t + mphich*mphich + mphich*mphich + 0*0 + 0*0;
return 16* (EL*EL*EL*EL) + (2* (EL*EL)* (gc7*gc7)*(-2*s + 3*t - u + 6*\
 
   (mphich*mphich)))/(-t +  (mphich*mphich)) + (2* (EL*EL)* (gc7*gc7)*(-2*s -\
 
   t + 3*u + 6* (mphich*mphich)))/(-u +  (mphich*mphich)) + (2*\
 
   (gc7*gc7*gc7*gc7)*(t +  (mphich*mphich))*(-s + t - u + 4*\
 
   (mphich*mphich)))/ (( (mphich*mphich) - t)*( (mphich*mphich) - t)) + (2*\
 
   (gc7*gc7*gc7*gc7)*(u +  (mphich*mphich))*(-s - t + u + 4*\
 
   (mphich*mphich)))/ (( (mphich*mphich) - u)*( (mphich*mphich) - u)) + (\
 
   (gc7*gc7*gc7*gc7)* ((6* (mphich*mphich) - s + t + u)*(6* (mphich*mphich) -\
 
   s + t + u)))/(2.*(-t +  (mphich*mphich))*(-u +  (mphich*mphich)));
}
double DT::amp2s::phichPHICHAZ(double cos_t, double s){
double t = (-s + 2* (mphich*mphich) +  (MZ*MZ) + cos_t*sqrt(s - 4*\
 
   (mphich*mphich))*sqrt( ((- (MZ*MZ) + s)*(- (MZ*MZ) + s))/s))/2.;
double u = -s - t + mphich*mphich + mphich*mphich + 0*0 + MZ*MZ;
return (2*gc39*gc7*SW* (EL*EL)*((2*s - t + u - 8* (mphich*mphich))/(-t + \
 
   (mphich*mphich)) + (-t + u)/ (MZ*MZ)))/CW + (gc39*gc7*SW* (EL*EL)*((s +\
 
   2*t)*(s + t - u) - 3*(t + u)* (MZ*MZ) - 2* (mphich*mphich)*(s + t - u + 5*\
 
   (MZ*MZ)) + 3* (MZ*MZ*MZ*MZ)))/(CW*(-u +  (mphich*mphich))* (MZ*MZ)) + (12*\
 
   (EL*EL*EL*EL)* (SW*SW))/ (CW*CW) - ( (gc39*gc39)* (gc7*gc7)*(-s + t - u +\
 
   4* (mphich*mphich) +  (MZ*MZ))*( (mphich*mphich*mphich*mphich) - 2*\
 
   (mphich*mphich)*(t +  (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t))))/(\
 
   (MZ*MZ)* (( (mphich*mphich) - t)*( (mphich*mphich) - t))) - ( (gc39*gc39)*\
 
   (gc7*gc7)*(u +  (mphich*mphich))*(-16* (mphich*mphich)* (MZ*MZ) +  ((\
 
   (MZ*MZ) + s + t - u)*( (MZ*MZ) + s + t - u))))/(2.* (MZ*MZ)* ((\
 
   (mphich*mphich) - u)*( (mphich*mphich) - u))) + ( (gc39*gc39)*\
 
   (gc7*gc7)*((s + t - u)*(-t +  (mphich*mphich))*(-s + t + u + 6*\
 
   (mphich*mphich)) - (-4*s + 7*t + 4*u + 21* (mphich*mphich))* (MZ*MZ*MZ*MZ)\
 
   + 3* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(-2*s*u - 14*(s - t - u)*\
 
   (mphich*mphich) + 30* (mphich*mphich*mphich*mphich) +  (s*s) + 5* (t*t) + \
 
   (u*u))))/(2.*(-t +  (mphich*mphich))*(-u +  (mphich*mphich))* (MZ*MZ));
}
double DT::amp2s::phichPHICHZZ(double cos_t, double s){
double t =  (mphich*mphich) + (-s + cos_t*sqrt(s - 4* (mphich*mphich))*sqrt(s\
 
   - 4* (MZ*MZ)))/2. +  (MZ*MZ);
double u = -s - t + mphich*mphich + mphich*mphich + MZ*MZ + MZ*MZ;
return -(( (EL*EL)* (gc39*gc39)*(s*(s + t - u)*(-u +  (mphich*mphich)) - 2*(s\
 
   + 3*t + u + 4* (mphich*mphich))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) + \
 
   (MZ*MZ)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t - u)* (mphich*mphich) + \
 
   (s*s)))* (SW*SW))/( (CW*CW)*(-u +  (mphich*mphich))* (MZ*MZ*MZ*MZ))) - (\
 
   (EL*EL)* (gc39*gc39)*(s*(s - t + u)*(-t +  (mphich*mphich)) - 2*(s + t +\
 
   3*u + 4* (mphich*mphich))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) + \
 
   (MZ*MZ)*(2*u*(-t + u) + 3*s*(t + u) - 2*(3*s - t + u)* (mphich*mphich) + \
 
   (s*s)))* (SW*SW))/( (CW*CW)*(-t +  (mphich*mphich))* (MZ*MZ*MZ*MZ)) + (\
 
   (EL*EL*EL*EL)*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))*\
 
   (SW*SW*SW*SW))/( (CW*CW*CW*CW)* (MZ*MZ*MZ*MZ)) + (\
 
   (gc39*gc39*gc39*gc39)*(-16* (mphich*mphich)* (MZ*MZ) +  ((s + t - u)*(s +\
 
   t - u)))*( (mphich*mphich*mphich*mphich) - 2* (mphich*mphich)*(u + \
 
   (MZ*MZ)) +  (( (MZ*MZ) - u)*( (MZ*MZ) - u))))/(4.* (MZ*MZ*MZ*MZ)* ((\
 
   (mphich*mphich) - u)*( (mphich*mphich) - u))) + (\
 
   (gc39*gc39*gc39*gc39)*(-8*(-s + 2*(t + u) + 4* (mphich*mphich))*\
 
   (MZ*MZ*MZ*MZ*MZ*MZ) + 16* (MZ*MZ*MZ*MZ*MZ*MZ*MZ*MZ) - (-t + \
 
   (mphich*mphich))*(-u +  (mphich*mphich))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MZ*MZ)*(-8*s*t*u + 8*s* (mphich*mphich*mphich*mphich) + (t + u)* (s*s) -\
 
   (t + u)* ((t - u)*(t - u)) - 2* (mphich*mphich)*( (s*s) + 3* ((t - u)*(t -\
 
   u)))) +  (MZ*MZ*MZ*MZ)*(2*t*u - 16*(s - t - u)* (mphich*mphich) + 16*\
 
   (mphich*mphich*mphich*mphich) +  (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t + \
 
   (mphich*mphich))*(-u +  (mphich*mphich))* (MZ*MZ*MZ*MZ)) + (\
 
   (gc39*gc39*gc39*gc39)*( (mphich*mphich*mphich*mphich) - 2*\
 
   (mphich*mphich)*(t +  (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t)))*(-16*\
 
   (mphich*mphich)* (MZ*MZ) +  ((s - t + u)*(s - t + u))))/(4.*\
 
   (MZ*MZ*MZ*MZ)* (( (mphich*mphich) - t)*( (mphich*mphich) - t))) - (lam3*\
 
   (EL*EL*EL*EL)*(-s +  (mH*mH))*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) + \
 
   (s*s))* (v*v)* (( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(2.*\
 
   (CW*CW*CW*CW)* (MZ*MZ*MZ*MZ)*( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s + \
 
   (WH*WH)))) + (lam3* (EL*EL)* (gc39*gc39)*(-s +  (mH*mH))*(s*(s + t -\
 
   u)*(-u +  (mphich*mphich)) - 2*(s + 3*t + u + 4* (mphich*mphich))*\
 
   (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*t*(t - u) + 3*s*(t +\
 
   u) - 2*(3*s + t - u)* (mphich*mphich) +  (s*s)))* (v*v)* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-u +  (mphich*mphich))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)*( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s + \
 
   (WH*WH)))) + (lam3* (EL*EL)* (gc39*gc39)*(-s +  (mH*mH))*(s*(s - t +\
 
   u)*(-t +  (mphich*mphich)) - 2*(s + t + 3*u + 4* (mphich*mphich))*\
 
   (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*u*(-t + u) + 3*s*(t +\
 
   u) - 2*(3*s - t + u)* (mphich*mphich) +  (s*s)))* (v*v)* (( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))))/(4.* (CW*CW)*(-t +  (mphich*mphich))*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW)*( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s + \
 
   (WH*WH)))) + ( (EL*EL*EL*EL)* (lam3*lam3)*(-4*s* (MZ*MZ) + 12*\
 
   (MZ*MZ*MZ*MZ) +  (s*s))* (v*v*v*v)* (( (CW*CW) +  (SW*SW))*( (CW*CW) + \
 
   (SW*SW))*( (CW*CW) +  (SW*SW))*( (CW*CW) +  (SW*SW))))/(16.*\
 
   (CW*CW*CW*CW)* (MZ*MZ*MZ*MZ)* (SW*SW*SW*SW)*( (mH*mH*mH*mH) +  (s*s) + \
 
   (mH*mH)*(-2*s +  (WH*WH))));
}
double DT::amp2s::phichPHICHwW(double cos_t, double s){
double t =  (mphich*mphich) + (-s + cos_t*sqrt(s - 4* (mphich*mphich))*sqrt(s\
 
   - 4* (MW*MW)))/2. +  (MW*MW);
double u = -s - t + mphich*mphich + mphich*mphich + MW*MW + MW*MW;
return ( (gc32*gc32)* (gc7*gc7)*( (s*s)* ((t - u)*(t - u)) - 4*s*\
 
   (MW*MW)*(8*s* (mphich*mphich) - 2* (s*s) +  ((t - u)*(t - u))) + 4*\
 
   (MW*MW*MW*MW)*(32*s* (mphich*mphich) - 8* (s*s) + 3* ((t - u)*(t -\
 
   u)))))/(4.* (MW*MW*MW*MW)* (s*s)) + (gc32*gc7*lam3*(t - u)* (EL*EL)*(-s + \
 
   (mH*mH))*(-12* (MW*MW*MW*MW) +  (s*s))* (v*v))/(4.*s* (MW*MW*MW*MW)*\
 
   (SW*SW)*( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))) + (\
 
   (EL*EL*EL*EL)* (lam3*lam3)*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s))*\
 
   (v*v*v*v))/(16.* (MW*MW*MW*MW)* (SW*SW*SW*SW)*( (mH*mH*mH*mH) +  (s*s) + \
 
   (mH*mH)*(-2*s +  (WH*WH)))) + ( (gc36*gc36)* (gc39*gc39)*( (s*s)* ((t -\
 
   u)*(t - u)) - 4*s* (MW*MW)*(8*s* (mphich*mphich) - 2* (s*s) +  ((t - u)*(t\
 
   - u))) + 4* (MW*MW*MW*MW)*(32*s* (mphich*mphich) - 8* (s*s) + 3* ((t -\
 
   u)*(t - u)))))/(4.* (MW*MW*MW*MW)*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (gc32*gc36*gc39*gc7*(-s +  (MZ*MZ))*( (s*s)*\
 
   ((t - u)*(t - u)) - 4*s* (MW*MW)*(8*s* (mphich*mphich) - 2* (s*s) +  ((t -\
 
   u)*(t - u))) + 4* (MW*MW*MW*MW)*(32*s* (mphich*mphich) - 8* (s*s) + 3* ((t\
 
   - u)*(t - u)))))/(2.*s* (MW*MW*MW*MW)*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (gc36*gc39*lam3*(t - u)*\
 
   (EL*EL)*(mH*MZ*WH*WZ + s*(s -  (MZ*MZ)) +  (mH*mH)*(-s +  (MZ*MZ)))*(-12*\
 
   (MW*MW*MW*MW) +  (s*s))* (v*v))/(4.* (MW*MW*MW*MW)* (SW*SW)*(\
 
   (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))*( (MZ*MZ*MZ*MZ) + \
 
   (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::amp2s::phichPHICHVEve(double cos_t, double s){
double t =  (Mnue*Mnue) + (-s + cos_t*sqrt(s - 4* (Mnue*Mnue))*sqrt(s - 4*\
 
   (mphich*mphich)))/2. +  (mphich*mphich);
double u = -s - t + mphich*mphich + mphich*mphich + Mnue*Mnue + Mnue*Mnue;
return ( (gc39*gc39)* (gc87*gc87)*(2*t*u - 4*s* (mphich*mphich) + \
 
   (Mnue*Mnue)*(-2*s + 8* (mphich*mphich)) +  (s*s) -  (t*t) -  (u*u)))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::phichPHICHVMvm(double cos_t, double s){
double t =  (Mnum*Mnum) + (-s + cos_t*sqrt(s - 4* (Mnum*Mnum))*sqrt(s - 4*\
 
   (mphich*mphich)))/2. +  (mphich*mphich);
double u = -s - t + mphich*mphich + mphich*mphich + Mnum*Mnum + Mnum*Mnum;
return ( (gc39*gc39)* (gc88*gc88)*(2*t*u - 4*s* (mphich*mphich) + \
 
   (Mnum*Mnum)*(-2*s + 8* (mphich*mphich)) +  (s*s) -  (t*t) -  (u*u)))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::phichPHICHVTvt(double cos_t, double s){
double t =  (Mnut*Mnut) + (-s + cos_t*sqrt(s - 4* (Mnut*Mnut))*sqrt(s - 4*\
 
   (mphich*mphich)))/2. +  (mphich*mphich);
double u = -s - t + mphich*mphich + mphich*mphich + Mnut*Mnut + Mnut*Mnut;
return ( (gc39*gc39)* (gc89*gc89)*(2*t*u - 4*s* (mphich*mphich) + \
 
   (Mnut*Mnut)*(-2*s + 8* (mphich*mphich)) +  (s*s) -  (t*t) -  (u*u)))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::phichPHICHEe(double cos_t, double s){
double t =  (Me*Me) + (-s + cos_t*sqrt(s - 4* (Me*Me))*sqrt(s - 4*\
 
   (mphich*mphich)))/2. +  (mphich*mphich);
double u = -s - t + mphich*mphich + mphich*mphich + Me*Me + Me*Me;
return (2*gc10*gc48*gc7*gc8*((t - u)*(4*Me*mN1 + t - u + 4* (Me*Me)) + 4*s*\
 
   (mphich*mphich) -  (s*s)))/(s*(-t +  (mN1*mN1))) - (2* (gc10*gc10)*\
 
   (gc8*gc8)*(-(t*u) - 2*Me*mN1*(s - t + u) + 8*mN1* (Me*Me*Me) + 3*\
 
   (Me*Me*Me*Me) - s* (mN1*mN1) +  (Me*Me)*(-s + 3*t - u + 4* (mN1*mN1) - 2*\
 
   (mphich*mphich)) + (s + t + u)* (mphich*mphich) - \
 
   (mphich*mphich*mphich*mphich)))/ (( (mN1*mN1) - t)*( (mN1*mN1) - t)) - (2*\
 
   (gc48*gc48)* (gc7*gc7)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t -\
 
   u))))/ (s*s) - (8*gc20*gc48*gc7*lam3*Me*(t - u)*v*(-s +  (mH*mH)))/(s*(\
 
   (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))) -\
 
   (4*gc10*gc20*gc8*lam3*v*(mN1*s + Me*(s - t + u) - 4*mN1* (Me*Me) - 4*\
 
   (Me*Me*Me))*(-s +  (mH*mH)))/((-t +  (mN1*mN1))*( (mH*mH*mH*mH) +  (s*s) +\
 
    (mH*mH)*(-2*s +  (WH*WH)))) + (2* (gc20*gc20)* (lam3*lam3)*(s - 4*\
 
   (Me*Me))* (v*v))/( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH))) +\
 
   (gc10*gc39*gc8*(gc81L + gc81R)*(-s +  (MZ*MZ))*(-((t - u)*(4*Me*mN1 + t -\
 
   u + 4* (Me*Me))) - 4*s* (mphich*mphich) +  (s*s)))/((-t +  (mN1*mN1))*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) +\
 
   (2*gc39*gc48*gc7*(gc81L + gc81R)*(-s +  (MZ*MZ))*(4*s* (mphich*mphich) - \
 
   (s*s) +  ((t - u)*(t - u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s\
 
   +  (WZ*WZ)))) + ( (gc39*gc39)*(4*gc81L*gc81R* (Me*Me)*(s - 4*\
 
   (mphich*mphich)) +  (gc81L*gc81L)*(2*t*u - 4*s* (mphich*mphich) + \
 
   (Me*Me)*(-2*s + 8* (mphich*mphich)) +  (s*s) -  (t*t) -  (u*u)) + \
 
   (gc81R*gc81R)*(2*t*u - 4*s* (mphich*mphich) +  (Me*Me)*(-2*s + 8*\
 
   (mphich*mphich)) +  (s*s) -  (t*t) -  (u*u))))/( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))) + (4*gc20*gc39*(gc81L + gc81R)*lam3*Me*(t -\
 
   u)*v*(mH*MZ*WH*WZ + s*(s -  (MZ*MZ)) +  (mH*mH)*(-s +  (MZ*MZ))))/((\
 
   (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))*( (MZ*MZ*MZ*MZ) + \
 
   (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::amp2s::phichPHICHEm(double cos_t, double s){
double t = (-s +  (Me*Me) +  (MM*MM) + 2* (mphich*mphich) + cos_t*sqrt(s - 4*\
 
   (mphich*mphich))*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (MM*MM)) +  ((\
 
   (MM*MM) - s)*( (MM*MM) - s)))/s))/2.;
double u = -s - t + mphich*mphich + mphich*mphich + Me*Me + MM*MM;
return (-2* (gc10*gc10)* (gc9*gc9)*(-(t*u) + 2*mN1* (MM*MM*MM) + \
 
   (MM*MM*MM*MM) - s* (mN1*mN1) +  (MM*MM)*(-s - u +  (mN1*mN1)) + 2*Me*(mN1*\
 
   (MM*MM) + MM*(t +  (mN1*mN1)) + mN1*(t -  (mphich*mphich))) + \
 
   (Me*Me)*(4*MM*mN1 + t + 2* (MM*MM) +  (mN1*mN1) - 2* (mphich*mphich)) + s*\
 
   (mphich*mphich) + t* (mphich*mphich) + u* (mphich*mphich) + 2*MM*mN1*(-s -\
 
   u +  (mphich*mphich)) -  (mphich*mphich*mphich*mphich)))/ (( (mN1*mN1) -\
 
   t)*( (mN1*mN1) - t));
}
double DT::amp2s::phichPHICHEta(double cos_t, double s){
double t = (-s +  (Me*Me) + 2* (mphich*mphich) +  (MTA*MTA) + cos_t*sqrt(s -\
 
   4* (mphich*mphich))*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (MTA*MTA)) + \
 
   (( (MTA*MTA) - s)*( (MTA*MTA) - s)))/s))/2.;
double u = -s - t + mphich*mphich + mphich*mphich + Me*Me + MTA*MTA;
return (-2* (gc10*gc10)* (gc13*gc13)*(-2*mN1*MTA*s - 2*mN1*MTA*u - t*u - s*\
 
   (mN1*mN1) + (2*mN1*MTA + s + t + u)* (mphich*mphich) - \
 
   (mphich*mphich*mphich*mphich) - s* (MTA*MTA) - u* (MTA*MTA) +  (mN1*mN1)*\
 
   (MTA*MTA) +  (Me*Me)*(4*mN1*MTA + t +  (mN1*mN1) - 2* (mphich*mphich) + 2*\
 
   (MTA*MTA)) + 2*Me*(MTA*t + MTA* (mN1*mN1) + mN1*(t -  (mphich*mphich) + \
 
   (MTA*MTA))) + 2*mN1* (MTA*MTA*MTA) +  (MTA*MTA*MTA*MTA)))/ (( (mN1*mN1) -\
 
   t)*( (mN1*mN1) - t));
}
double DT::amp2s::phichPHICHeM(double cos_t, double s){
double t = (-s +  (Me*Me) +  (MM*MM) + 2* (mphich*mphich) + cos_t*sqrt(s - 4*\
 
   (mphich*mphich))*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (MM*MM)) +  ((\
 
   (MM*MM) - s)*( (MM*MM) - s)))/s))/2.;
double u = -s - t + mphich*mphich + mphich*mphich + Me*Me + MM*MM;
return (-2* (gc11*gc11)* (gc8*gc8)*(2*MM*mN1*u - t*u + 2*mN1* (Me*Me*Me) + \
 
   (Me*Me*Me*Me) - s* (mN1*mN1) +  (Me*Me)*(2*MM*mN1 - s - t +  (mN1*mN1)) + \
 
   (MM*MM)*(4*Me*mN1 + u + 2* (Me*Me) +  (mN1*mN1) - 2* (mphich*mphich)) -\
 
   2*MM*mN1* (mphich*mphich) + s* (mphich*mphich) + t* (mphich*mphich) + u*\
 
   (mphich*mphich) + 2*Me*(MM*(u +  (mN1*mN1)) + mN1*(-s - t + \
 
   (mphich*mphich))) -  (mphich*mphich*mphich*mphich)))/ (( (mN1*mN1) - u)*(\
 
   (mN1*mN1) - u));
}
double DT::amp2s::phichPHICHeTA(double cos_t, double s){
double t = (-s +  (Me*Me) + 2* (mphich*mphich) +  (MTA*MTA) + cos_t*sqrt(s -\
 
   4* (mphich*mphich))*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (MTA*MTA)) + \
 
   (( (MTA*MTA) - s)*( (MTA*MTA) - s)))/s))/2.;
double u = -s - t + mphich*mphich + mphich*mphich + Me*Me + MTA*MTA;
return (-2* (gc12*gc12)* (gc8*gc8)*(2*mN1*MTA*u - t*u + 2*mN1* (Me*Me*Me) + \
 
   (Me*Me*Me*Me) - s* (mN1*mN1) -  (mphich*mphich*mphich*mphich) + \
 
   (mphich*mphich)*(-2*mN1*MTA + s + t + u - 2* (MTA*MTA)) + u* (MTA*MTA) + \
 
   (mN1*mN1)* (MTA*MTA) +  (Me*Me)*(2*mN1*MTA - s - t +  (mN1*mN1) + 2*\
 
   (MTA*MTA)) + 2*Me*(MTA*u + MTA* (mN1*mN1) + mN1*(-s - t +  (mphich*mphich)\
 
   + 2* (MTA*MTA)))))/ (( (mN1*mN1) - u)*( (mN1*mN1) - u));
}
double DT::amp2s::phichPHICHMm(double cos_t, double s){
double t =  (MM*MM) + (-s + cos_t*sqrt(s - 4* (MM*MM))*sqrt(s - 4*\
 
   (mphich*mphich)))/2. +  (mphich*mphich);
double u = -s - t + mphich*mphich + mphich*mphich + MM*MM + MM*MM;
return (2*gc11*gc49*gc7*gc9*((t - u)*(4*MM*mN1 + t - u + 4* (MM*MM)) + 4*s*\
 
   (mphich*mphich) -  (s*s)))/(s*(-t +  (mN1*mN1))) - (2* (gc11*gc11)*\
 
   (gc9*gc9)*(-(t*u) - 2*MM*mN1*(s - t + u) + 8*mN1* (MM*MM*MM) + 3*\
 
   (MM*MM*MM*MM) - s* (mN1*mN1) +  (MM*MM)*(-s + 3*t - u + 4* (mN1*mN1) - 2*\
 
   (mphich*mphich)) + (s + t + u)* (mphich*mphich) - \
 
   (mphich*mphich*mphich*mphich)))/ (( (mN1*mN1) - t)*( (mN1*mN1) - t)) - (2*\
 
   (gc49*gc49)* (gc7*gc7)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t -\
 
   u))))/ (s*s) - (8*gc21*gc49*gc7*lam3*MM*(t - u)*v*(-s +  (mH*mH)))/(s*(\
 
   (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))) -\
 
   (4*gc11*gc21*gc9*lam3*v*(-s +  (mH*mH))*(mN1*s + MM*(s - t + u) - 4*mN1*\
 
   (MM*MM) - 4* (MM*MM*MM)))/((-t +  (mN1*mN1))*( (mH*mH*mH*mH) +  (s*s) + \
 
   (mH*mH)*(-2*s +  (WH*WH)))) + (2* (gc21*gc21)* (lam3*lam3)*(s - 4*\
 
   (MM*MM))* (v*v))/( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH))) +\
 
   (gc11*gc39*(gc82L + gc82R)*gc9*(-s +  (MZ*MZ))*(-((t - u)*(4*MM*mN1 + t -\
 
   u + 4* (MM*MM))) - 4*s* (mphich*mphich) +  (s*s)))/((-t +  (mN1*mN1))*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) -\
 
   (2*gc39*gc49*gc7*(gc82L + gc82R)*(-s +  (MZ*MZ))*(-4*s* (mphich*mphich) + \
 
   (s*s) -  ((t - u)*(t - u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s\
 
   +  (WZ*WZ)))) - ( (gc39*gc39)*(4*gc82L*gc82R* (MM*MM)*(-s + 4*\
 
   (mphich*mphich)) - 2*( (gc82L*gc82L) +  (gc82R*gc82R))* (MM*MM)*(-s + 4*\
 
   (mphich*mphich)) +  (gc82L*gc82L)*(4*s* (mphich*mphich) -  (s*s) +  ((t -\
 
   u)*(t - u))) +  (gc82R*gc82R)*(4*s* (mphich*mphich) -  (s*s) +  ((t -\
 
   u)*(t - u)))))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (4*gc21*gc39*(gc82L + gc82R)*lam3*MM*(t - u)*v*(mH*MZ*WH*WZ + s*(s - \
 
   (MZ*MZ)) +  (mH*mH)*(-s +  (MZ*MZ))))/(( (mH*mH*mH*mH) +  (s*s) + \
 
   (mH*mH)*(-2*s +  (WH*WH)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
double DT::amp2s::phichPHICHMta(double cos_t, double s){
double t = (-s +  (MM*MM) + 2* (mphich*mphich) +  (MTA*MTA) + cos_t*sqrt(s -\
 
   4* (mphich*mphich))*sqrt(( (MM*MM*MM*MM) - 2* (MM*MM)*(s +  (MTA*MTA)) + \
 
   (( (MTA*MTA) - s)*( (MTA*MTA) - s)))/s))/2.;
double u = -s - t + mphich*mphich + mphich*mphich + MM*MM + MTA*MTA;
return (-2* (gc11*gc11)* (gc13*gc13)*(-2*mN1*MTA*s - 2*mN1*MTA*u - t*u - s*\
 
   (mN1*mN1) + (2*mN1*MTA + s + t + u)* (mphich*mphich) - \
 
   (mphich*mphich*mphich*mphich) - s* (MTA*MTA) - u* (MTA*MTA) +  (mN1*mN1)*\
 
   (MTA*MTA) +  (MM*MM)*(4*mN1*MTA + t +  (mN1*mN1) - 2* (mphich*mphich) + 2*\
 
   (MTA*MTA)) + 2*MM*(MTA*t + MTA* (mN1*mN1) + mN1*(t -  (mphich*mphich) + \
 
   (MTA*MTA))) + 2*mN1* (MTA*MTA*MTA) +  (MTA*MTA*MTA*MTA)))/ (( (mN1*mN1) -\
 
   t)*( (mN1*mN1) - t));
}
double DT::amp2s::phichPHICHmTA(double cos_t, double s){
double t = (-s +  (MM*MM) + 2* (mphich*mphich) +  (MTA*MTA) + cos_t*sqrt(s -\
 
   4* (mphich*mphich))*sqrt(( (MM*MM*MM*MM) - 2* (MM*MM)*(s +  (MTA*MTA)) + \
 
   (( (MTA*MTA) - s)*( (MTA*MTA) - s)))/s))/2.;
double u = -s - t + mphich*mphich + mphich*mphich + MM*MM + MTA*MTA;
return (-2* (gc12*gc12)* (gc9*gc9)*(2*mN1*MTA*u - t*u + 2*mN1* (MM*MM*MM) + \
 
   (MM*MM*MM*MM) - s* (mN1*mN1) -  (mphich*mphich*mphich*mphich) + \
 
   (mphich*mphich)*(-2*mN1*MTA + s + t + u - 2* (MTA*MTA)) + u* (MTA*MTA) + \
 
   (mN1*mN1)* (MTA*MTA) +  (MM*MM)*(2*mN1*MTA - s - t +  (mN1*mN1) + 2*\
 
   (MTA*MTA)) + 2*MM*(MTA*u + MTA* (mN1*mN1) + mN1*(-s - t +  (mphich*mphich)\
 
   + 2* (MTA*MTA)))))/ (( (mN1*mN1) - u)*( (mN1*mN1) - u));
}
double DT::amp2s::phichPHICHTAta(double cos_t, double s){
double t =  (mphich*mphich) + (-s + cos_t*sqrt(s - 4* (mphich*mphich))*sqrt(s\
 
   - 4* (MTA*MTA)))/2. +  (MTA*MTA);
double u = -s - t + mphich*mphich + mphich*mphich + MTA*MTA + MTA*MTA;
return (2*gc12*gc13*gc50*gc7*(4*s* (mphich*mphich) + (t - u)*(4*mN1*MTA + t -\
 
   u + 4* (MTA*MTA)) -  (s*s)))/(s*(-t +  (mN1*mN1))) + (2* (gc12*gc12)*\
 
   (gc13*gc13)*(t*u +  (mphich*mphich*mphich*mphich) +  (mN1*mN1)*(s - 4*\
 
   (MTA*MTA)) + 2*mN1*MTA*(s - t + u - 4* (MTA*MTA)) + s* (MTA*MTA) - 3*t*\
 
   (MTA*MTA) + u* (MTA*MTA) +  (mphich*mphich)*(-s - t - u + 2* (MTA*MTA)) -\
 
   3* (MTA*MTA*MTA*MTA)))/ (( (mN1*mN1) - t)*( (mN1*mN1) - t)) - (2*\
 
   (gc50*gc50)* (gc7*gc7)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t -\
 
   u))))/ (s*s) - (8*gc22*gc50*gc7*lam3*MTA*(t - u)*v*(-s +  (mH*mH)))/(s*(\
 
   (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))) -\
 
   (4*gc12*gc13*gc22*lam3*v*(-s +  (mH*mH))*(mN1*(s - 4* (MTA*MTA)) + MTA*(s\
 
   - t + u - 4* (MTA*MTA))))/((-t +  (mN1*mN1))*( (mH*mH*mH*mH) +  (s*s) + \
 
   (mH*mH)*(-2*s +  (WH*WH)))) + (2* (gc22*gc22)* (lam3*lam3)*(s - 4*\
 
   (MTA*MTA))* (v*v))/( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))\
 
   + (gc12*gc13*gc39*(gc83L + gc83R)*(-s +  (MZ*MZ))*(-4*s* (mphich*mphich) -\
 
   (t - u)*(4*mN1*MTA + t - u + 4* (MTA*MTA)) +  (s*s)))/((-t +  (mN1*mN1))*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) +\
 
   (2*gc39*gc50*gc7*(gc83L + gc83R)*(-s +  (MZ*MZ))*(4*s* (mphich*mphich) - \
 
   (s*s) +  ((t - u)*(t - u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s\
 
   +  (WZ*WZ)))) + ( (gc39*gc39)*(4*gc83L*gc83R*(s - 4* (mphich*mphich))*\
 
   (MTA*MTA) +  (gc83L*gc83L)*(2*t*u - 2*s* (MTA*MTA) + \
 
   (mphich*mphich)*(-4*s + 8* (MTA*MTA)) +  (s*s) -  (t*t) -  (u*u)) + \
 
   (gc83R*gc83R)*(2*t*u - 2*s* (MTA*MTA) +  (mphich*mphich)*(-4*s + 8*\
 
   (MTA*MTA)) +  (s*s) -  (t*t) -  (u*u))))/( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ))) + (4*gc22*gc39*(gc83L + gc83R)*lam3*MTA*(t -\
 
   u)*v*(mH*MZ*WH*WZ + s*(s -  (MZ*MZ)) +  (mH*mH)*(-s +  (MZ*MZ))))/((\
 
   (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))*( (MZ*MZ*MZ*MZ) + \
 
   (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::amp2s::phichPHICHUu(double cos_t, double s){
double t =  (mphich*mphich) + (-s + cos_t*sqrt(s - 4* (mphich*mphich))*sqrt(s\
 
   - 4* (MU*MU)))/2. +  (MU*MU);
double u = -s - t + mphich*mphich + mphich*mphich + MU*MU + MU*MU;
return (-6* (gc53*gc53)* (gc7*gc7)*(4*s* (mphich*mphich) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc25*gc53*gc7*lam3*MU*(t - u)*v*(-s + \
 
   (mH*mH)))/(s*( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))) + (6*\
 
   (gc25*gc25)* (lam3*lam3)*(s - 4* (MU*MU))* (v*v))/( (mH*mH*mH*mH) +  (s*s)\
 
   +  (mH*mH)*(-2*s +  (WH*WH))) - (6*gc39*gc53*gc7*(gc86L + gc86R)*(-s + \
 
   (MZ*MZ))*(-4*s* (mphich*mphich) +  (s*s) -  ((t - u)*(t - u))))/(s*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (3*\
 
   (gc39*gc39)*(4*gc86L*gc86R*(-s + 4* (mphich*mphich))* (MU*MU) - 2*(\
 
   (gc86L*gc86L) +  (gc86R*gc86R))*(-s + 4* (mphich*mphich))* (MU*MU) + \
 
   (gc86L*gc86L)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc86R*gc86R)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (12*gc25*gc39*(gc86L + gc86R)*lam3*MU*(t - u)*v*(mH*MZ*WH*WZ + s*(s - \
 
   (MZ*MZ)) +  (mH*mH)*(-s +  (MZ*MZ))))/(( (mH*mH*mH*mH) +  (s*s) + \
 
   (mH*mH)*(-2*s +  (WH*WH)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
double DT::amp2s::phichPHICHCc(double cos_t, double s){
double t =  (MC*MC) + (-s + cos_t*sqrt(s - 4* (MC*MC))*sqrt(s - 4*\
 
   (mphich*mphich)))/2. +  (mphich*mphich);
double u = -s - t + mphich*mphich + mphich*mphich + MC*MC + MC*MC;
return (-6* (gc51*gc51)* (gc7*gc7)*(4*s* (mphich*mphich) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc23*gc51*gc7*lam3*MC*(t - u)*v*(-s + \
 
   (mH*mH)))/(s*( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))) + (6*\
 
   (gc23*gc23)* (lam3*lam3)*(s - 4* (MC*MC))* (v*v))/( (mH*mH*mH*mH) +  (s*s)\
 
   +  (mH*mH)*(-2*s +  (WH*WH))) - (6*gc39*gc51*gc7*(gc84L + gc84R)*(-s + \
 
   (MZ*MZ))*(-4*s* (mphich*mphich) +  (s*s) -  ((t - u)*(t - u))))/(s*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (3*\
 
   (gc39*gc39)*(4*gc84L*gc84R* (MC*MC)*(-s + 4* (mphich*mphich)) - 2*(\
 
   (gc84L*gc84L) +  (gc84R*gc84R))* (MC*MC)*(-s + 4* (mphich*mphich)) + \
 
   (gc84L*gc84L)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc84R*gc84R)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (12*gc23*gc39*(gc84L + gc84R)*lam3*MC*(t - u)*v*(mH*MZ*WH*WZ + s*(s - \
 
   (MZ*MZ)) +  (mH*mH)*(-s +  (MZ*MZ))))/(( (mH*mH*mH*mH) +  (s*s) + \
 
   (mH*mH)*(-2*s +  (WH*WH)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
double DT::amp2s::phichPHICHTt(double cos_t, double s){
double t =  (mphich*mphich) + (-s + cos_t*sqrt(s - 4* (mphich*mphich))*sqrt(s\
 
   - 4* (MT*MT)))/2. +  (MT*MT);
double u = -s - t + mphich*mphich + mphich*mphich + MT*MT + MT*MT;
return (-6* (gc52*gc52)* (gc7*gc7)*(4*s* (mphich*mphich) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc24*gc52*gc7*lam3*MT*(t - u)*v*(-s + \
 
   (mH*mH)))/(s*( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))) + (6*\
 
   (gc24*gc24)* (lam3*lam3)*(s - 4* (MT*MT))* (v*v))/( (mH*mH*mH*mH) +  (s*s)\
 
   +  (mH*mH)*(-2*s +  (WH*WH))) - (6*gc39*gc52*gc7*(gc85L + gc85R)*(-s + \
 
   (MZ*MZ))*(-4*s* (mphich*mphich) +  (s*s) -  ((t - u)*(t - u))))/(s*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (3*\
 
   (gc39*gc39)*(4*gc85L*gc85R*(-s + 4* (mphich*mphich))* (MT*MT) - 2*(\
 
   (gc85L*gc85L) +  (gc85R*gc85R))*(-s + 4* (mphich*mphich))* (MT*MT) + \
 
   (gc85L*gc85L)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc85R*gc85R)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (12*gc24*gc39*(gc85L + gc85R)*lam3*MT*(t - u)*v*(mH*MZ*WH*WZ + s*(s - \
 
   (MZ*MZ)) +  (mH*mH)*(-s +  (MZ*MZ))))/(( (mH*mH*mH*mH) +  (s*s) + \
 
   (mH*mH)*(-2*s +  (WH*WH)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
double DT::amp2s::phichPHICHDd(double cos_t, double s){
double t =  (MD*MD) + (-s + cos_t*sqrt(s - 4* (MD*MD))*sqrt(s - 4*\
 
   (mphich*mphich)))/2. +  (mphich*mphich);
double u = -s - t + mphich*mphich + mphich*mphich + MD*MD + MD*MD;
return (-6* (gc46*gc46)* (gc7*gc7)*(4*s* (mphich*mphich) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc18*gc46*gc7*lam3*MD*(t - u)*v*(-s + \
 
   (mH*mH)))/(s*( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))) + (6*\
 
   (gc18*gc18)* (lam3*lam3)*(s - 4* (MD*MD))* (v*v))/( (mH*mH*mH*mH) +  (s*s)\
 
   +  (mH*mH)*(-2*s +  (WH*WH))) - (6*gc39*gc46*gc7*(gc79L + gc79R)*(-s + \
 
   (MZ*MZ))*(-4*s* (mphich*mphich) +  (s*s) -  ((t - u)*(t - u))))/(s*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (3*\
 
   (gc39*gc39)*(4*gc79L*gc79R* (MD*MD)*(-s + 4* (mphich*mphich)) - 2*(\
 
   (gc79L*gc79L) +  (gc79R*gc79R))* (MD*MD)*(-s + 4* (mphich*mphich)) + \
 
   (gc79L*gc79L)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc79R*gc79R)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (12*gc18*gc39*(gc79L + gc79R)*lam3*MD*(t - u)*v*(mH*MZ*WH*WZ + s*(s - \
 
   (MZ*MZ)) +  (mH*mH)*(-s +  (MZ*MZ))))/(( (mH*mH*mH*mH) +  (s*s) + \
 
   (mH*mH)*(-2*s +  (WH*WH)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
double DT::amp2s::phichPHICHSs(double cos_t, double s){
double t =  (mphich*mphich) + (-s + cos_t*sqrt(s - 4* (mphich*mphich))*sqrt(s\
 
   - 4* (MS*MS)))/2. +  (MS*MS);
double u = -s - t + mphich*mphich + mphich*mphich + MS*MS + MS*MS;
return (-6* (gc47*gc47)* (gc7*gc7)*(4*s* (mphich*mphich) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc19*gc47*gc7*lam3*MS*(t - u)*v*(-s + \
 
   (mH*mH)))/(s*( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))) + (6*\
 
   (gc19*gc19)* (lam3*lam3)*(s - 4* (MS*MS))* (v*v))/( (mH*mH*mH*mH) +  (s*s)\
 
   +  (mH*mH)*(-2*s +  (WH*WH))) - (6*gc39*gc47*gc7*(gc80L + gc80R)*(-s + \
 
   (MZ*MZ))*(-4*s* (mphich*mphich) +  (s*s) -  ((t - u)*(t - u))))/(s*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (3*\
 
   (gc39*gc39)*(4*gc80L*gc80R*(-s + 4* (mphich*mphich))* (MS*MS) - 2*(\
 
   (gc80L*gc80L) +  (gc80R*gc80R))*(-s + 4* (mphich*mphich))* (MS*MS) + \
 
   (gc80L*gc80L)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc80R*gc80R)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (12*gc19*gc39*(gc80L + gc80R)*lam3*MS*(t - u)*v*(mH*MZ*WH*WZ + s*(s - \
 
   (MZ*MZ)) +  (mH*mH)*(-s +  (MZ*MZ))))/(( (mH*mH*mH*mH) +  (s*s) + \
 
   (mH*mH)*(-2*s +  (WH*WH)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
double DT::amp2s::phichPHICHBb(double cos_t, double s){
double t =  (MB*MB) + (-s + cos_t*sqrt(s - 4* (MB*MB))*sqrt(s - 4*\
 
   (mphich*mphich)))/2. +  (mphich*mphich);
double u = -s - t + mphich*mphich + mphich*mphich + MB*MB + MB*MB;
return (-6* (gc45*gc45)* (gc7*gc7)*(4*s* (mphich*mphich) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc17*gc45*gc7*lam3*MB*(t - u)*v*(-s + \
 
   (mH*mH)))/(s*( (mH*mH*mH*mH) +  (s*s) +  (mH*mH)*(-2*s +  (WH*WH)))) + (6*\
 
   (gc17*gc17)* (lam3*lam3)*(s - 4* (MB*MB))* (v*v))/( (mH*mH*mH*mH) +  (s*s)\
 
   +  (mH*mH)*(-2*s +  (WH*WH))) - (6*gc39*gc45*gc7*(gc78L + gc78R)*(-s + \
 
   (MZ*MZ))*(-4*s* (mphich*mphich) +  (s*s) -  ((t - u)*(t - u))))/(s*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (3*\
 
   (gc39*gc39)*(4*gc78L*gc78R* (MB*MB)*(-s + 4* (mphich*mphich)) - 2*(\
 
   (gc78L*gc78L) +  (gc78R*gc78R))* (MB*MB)*(-s + 4* (mphich*mphich)) + \
 
   (gc78L*gc78L)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc78R*gc78R)*(4*s* (mphich*mphich) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (12*gc17*gc39*(gc78L + gc78R)*lam3*MB*(t - u)*v*(mH*MZ*WH*WZ + s*(s - \
 
   (MZ*MZ)) +  (mH*mH)*(-s +  (MZ*MZ))))/(( (mH*mH*mH*mH) +  (s*s) + \
 
   (mH*mH)*(-2*s +  (WH*WH)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
