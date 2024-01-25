///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"

double DT::amp2s::N1phichhE(double cos_t, double s){
double t = (s* (mH*mH) + s* (mN1*mN1) +  (mH*mH)* (mN1*mN1) + s*\
 
   (mphich*mphich) -  (mH*mH)* (mphich*mphich) +  (Me*Me)*(s -  (mN1*mN1) + \
 
   (mphich*mphich)) + cos_t*s*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s + \
 
   (mH*mH)) +  (( (mH*mH) - s)*( (mH*mH) - s)))/s)*sqrt(( (mN1*mN1*mN1*mN1) -\
 
   2* (mN1*mN1)*(s +  (mphich*mphich)) +  (( (mphich*mphich) - s)*(\
 
   (mphich*mphich) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mN1*mN1 + mphich*mphich + mH*mH + Me*Me;
return (-2*gc20*lam3*v* (gc10*gc10)*(3*mN1* (Me*Me) + 2* (Me*Me*Me) + mN1*(s\
 
   -  (mH*mH)) + Me*(-t - 2*u +  (mH*mH) + 3* (mN1*mN1))))/((-s + \
 
   (Me*Me))*(-u +  (mphich*mphich))) + ( (gc10*gc10)* (gc20*gc20)*(4*mN1*\
 
   (Me*Me*Me) + 4* (Me*Me*Me*Me) - 2*Me*mN1*(-2*s +  (mH*mH)) - \
 
   (mH*mH*mH*mH) +  (mH*mH)*(s + t + u - 2* (mN1*mN1)) + s*(-t +  (mN1*mN1))\
 
   +  (Me*Me)*(-3*t - 4*u + 2* (mH*mH) + 7* (mN1*mN1))))/ (( (Me*Me) - s)*(\
 
   (Me*Me) - s)) + ( (gc10*gc10)* (lam3*lam3)*(2*Me*mN1 - u +  (Me*Me) + \
 
   (mN1*mN1))* (v*v))/ (( (mphich*mphich) - u)*( (mphich*mphich) - u));
}
double DT::amp2s::N1phichhM(double cos_t, double s){
double t = (s* (MM*MM) + s* (mN1*mN1) -  (MM*MM)* (mN1*mN1) +  (mH*mH)*(s + \
 
   (mN1*mN1) -  (mphich*mphich)) + s* (mphich*mphich) +  (MM*MM)*\
 
   (mphich*mphich) + cos_t*s*sqrt(( (mH*mH*mH*mH) - 2* (mH*mH)*(s +  (MM*MM))\
 
   +  (( (MM*MM) - s)*( (MM*MM) - s)))/s)*sqrt(( (mN1*mN1*mN1*mN1) - 2*\
 
   (mN1*mN1)*(s +  (mphich*mphich)) +  (( (mphich*mphich) - s)*(\
 
   (mphich*mphich) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mN1*mN1 + mphich*mphich + mH*mH + MM*MM;
return (-2*gc21*lam3*v* (gc11*gc11)*(mN1*s + (MM - mN1)* (mH*mH) + 3*mN1*\
 
   (MM*MM) + 2* (MM*MM*MM) + MM*(-t - 2*u + 3* (mN1*mN1))))/((-s + \
 
   (MM*MM))*(-u +  (mphich*mphich))) + ( (gc11*gc11)* (gc21*gc21)*(4*MM*mN1*s\
 
   -  (mH*mH*mH*mH) + 4*mN1* (MM*MM*MM) + 4* (MM*MM*MM*MM) + \
 
   (mH*mH)*(-2*MM*mN1 + s + t + u + 2* (MM*MM) - 2* (mN1*mN1)) + s*(-t + \
 
   (mN1*mN1)) +  (MM*MM)*(-3*t - 4*u + 7* (mN1*mN1))))/ (( (MM*MM) - s)*(\
 
   (MM*MM) - s)) + ( (gc11*gc11)* (lam3*lam3)*(2*MM*mN1 - u +  (MM*MM) + \
 
   (mN1*mN1))* (v*v))/ (( (mphich*mphich) - u)*( (mphich*mphich) - u));
}
double DT::amp2s::N1phichhTA(double cos_t, double s){
double t = (s* (mN1*mN1) +  (mH*mH)*(s +  (mN1*mN1) -  (mphich*mphich)) + s*\
 
   (mphich*mphich) + s* (MTA*MTA) -  (mN1*mN1)* (MTA*MTA) +  (mphich*mphich)*\
 
   (MTA*MTA) + cos_t*s*sqrt(( (mN1*mN1*mN1*mN1) - 2* (mN1*mN1)*(s + \
 
   (mphich*mphich)) +  (( (mphich*mphich) - s)*( (mphich*mphich) -\
 
   s)))/s)*sqrt(( (mH*mH*mH*mH) - 2* (mH*mH)*(s +  (MTA*MTA)) +  (( (MTA*MTA)\
 
   - s)*( (MTA*MTA) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mN1*mN1 + mphich*mphich + mH*mH + MTA*MTA;
return (-2*gc22*lam3*v* (gc12*gc12)*(mN1*s - MTA*t - 2*MTA*u + (-mN1 + MTA)*\
 
   (mH*mH) + 3*MTA* (mN1*mN1) + 3*mN1* (MTA*MTA) + 2* (MTA*MTA*MTA)))/((-u + \
 
   (mphich*mphich))*(-s +  (MTA*MTA))) + ( (gc12*gc12)* (gc22*gc22)*(-(s*t) -\
 
    (mH*mH*mH*mH) - 3*t* (MTA*MTA) - 4*u* (MTA*MTA) + 4*mN1*MTA*(s + \
 
   (MTA*MTA)) +  (mH*mH)*(-2*mN1*MTA + s + t + u - 2* (mN1*mN1) + 2*\
 
   (MTA*MTA)) +  (mN1*mN1)*(s + 7* (MTA*MTA)) + 4* (MTA*MTA*MTA*MTA)))/ ((\
 
   (MTA*MTA) - s)*( (MTA*MTA) - s)) + ( (gc12*gc12)* (lam3*lam3)*(2*mN1*MTA -\
 
   u +  (mN1*mN1) +  (MTA*MTA))* (v*v))/ (( (mphich*mphich) - u)*(\
 
   (mphich*mphich) - u));
}
double DT::amp2s::N1phichAE(double cos_t, double s){
double t = ( (Me*Me)*(s -  (mN1*mN1) +  (mphich*mphich)) + s*(-s +  (mN1*mN1)\
 
   +  (mphich*mphich) + cos_t*sqrt( (( (Me*Me) - s)*( (Me*Me) - s))/s)*sqrt((\
 
   (mN1*mN1*mN1*mN1) - 2* (mN1*mN1)*(s +  (mphich*mphich)) +  ((\
 
   (mphich*mphich) - s)*( (mphich*mphich) - s)))/s)))/(2.*s);
double u = -s - t + mN1*mN1 + mphich*mphich + 0*0 + Me*Me;
return (-2* (gc10*gc10)* (gc48*gc48)*(2*Me*mN1*s + 2*mN1* (Me*Me*Me) + 2*\
 
   (Me*Me*Me*Me) + s*(t -  (mN1*mN1)) +  (Me*Me)*(-3*t - 2*u + 5*\
 
   (mN1*mN1))))/ (( (Me*Me) - s)*( (Me*Me) - s)) - (2* (gc10*gc10)*\
 
   (gc7*gc7)*(2*Me*mN1 - u +  (Me*Me) +  (mN1*mN1))*(u +  (mphich*mphich)))/\
 
   (( (mphich*mphich) - u)*( (mphich*mphich) - u)) - (2*gc48*gc7*\
 
   (gc10*gc10)*(s*u + 2*t*u + 6*mN1* (Me*Me*Me) + 3* (Me*Me*Me*Me) + s*\
 
   (mphich*mphich) - t* (mphich*mphich) - 3*u* (mphich*mphich) + \
 
   (Me*Me)*(-3*t - 4*u + 3* (mN1*mN1) + 2* (mphich*mphich)) + 2*Me*mN1*(-s -\
 
   2*t - u + 3* (mphich*mphich)) +  (mN1*mN1)*(-3*t - u + 4* (mphich*mphich))\
 
   -  (s*s) +  (t*t) +  (u*u)))/((-s +  (Me*Me))*(-u +  (mphich*mphich)));
}
double DT::amp2s::N1phichAM(double cos_t, double s){
double t = ( (MM*MM)*(s -  (mN1*mN1) +  (mphich*mphich)) + s*(-s +  (mN1*mN1)\
 
   +  (mphich*mphich) + cos_t*sqrt( (( (MM*MM) - s)*( (MM*MM) - s))/s)*sqrt((\
 
   (mN1*mN1*mN1*mN1) - 2* (mN1*mN1)*(s +  (mphich*mphich)) +  ((\
 
   (mphich*mphich) - s)*( (mphich*mphich) - s)))/s)))/(2.*s);
double u = -s - t + mN1*mN1 + mphich*mphich + 0*0 + MM*MM;
return (-2* (gc11*gc11)* (gc49*gc49)*(2*MM*mN1*s + 2*mN1* (MM*MM*MM) + 2*\
 
   (MM*MM*MM*MM) + s*(t -  (mN1*mN1)) +  (MM*MM)*(-3*t - 2*u + 5*\
 
   (mN1*mN1))))/ (( (MM*MM) - s)*( (MM*MM) - s)) - (2* (gc11*gc11)*\
 
   (gc7*gc7)*(2*MM*mN1 - u +  (MM*MM) +  (mN1*mN1))*(u +  (mphich*mphich)))/\
 
   (( (mphich*mphich) - u)*( (mphich*mphich) - u)) - (2*gc49*gc7*\
 
   (gc11*gc11)*(s*u + 2*t*u + 6*mN1* (MM*MM*MM) + 3* (MM*MM*MM*MM) + s*\
 
   (mphich*mphich) - t* (mphich*mphich) - 3*u* (mphich*mphich) + \
 
   (MM*MM)*(-3*t - 4*u + 3* (mN1*mN1) + 2* (mphich*mphich)) + 2*MM*mN1*(-s -\
 
   2*t - u + 3* (mphich*mphich)) +  (mN1*mN1)*(-3*t - u + 4* (mphich*mphich))\
 
   -  (s*s) +  (t*t) +  (u*u)))/((-s +  (MM*MM))*(-u +  (mphich*mphich)));
}
double DT::amp2s::N1phichATA(double cos_t, double s){
double t = (s* (mphich*mphich) +  (mN1*mN1)*(s -  (MTA*MTA)) + s* (MTA*MTA) +\
 
    (mphich*mphich)* (MTA*MTA) + cos_t*s*sqrt(( (mN1*mN1*mN1*mN1) - 2*\
 
   (mN1*mN1)*(s +  (mphich*mphich)) +  (( (mphich*mphich) - s)*(\
 
   (mphich*mphich) - s)))/s)*sqrt( (( (MTA*MTA) - s)*( (MTA*MTA) - s))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + mN1*mN1 + mphich*mphich + 0*0 + MTA*MTA;
return (-2* (gc12*gc12)* (gc50*gc50)*(s*t - (3*t + 2*u)* (MTA*MTA) +\
 
   2*mN1*MTA*(s +  (MTA*MTA)) +  (mN1*mN1)*(-s + 5* (MTA*MTA)) + 2*\
 
   (MTA*MTA*MTA*MTA)))/ (( (MTA*MTA) - s)*( (MTA*MTA) - s)) - (2*\
 
   (gc12*gc12)* (gc7*gc7)*(u +  (mphich*mphich))*(2*mN1*MTA - u +  (mN1*mN1)\
 
   +  (MTA*MTA)))/ (( (mphich*mphich) - u)*( (mphich*mphich) - u)) -\
 
   (2*gc50*gc7* (gc12*gc12)*(s*u + 2*t*u - 3*t* (MTA*MTA) - 4*u* (MTA*MTA) + \
 
   (mphich*mphich)*(s - t - 3*u + 2* (MTA*MTA)) + 2*mN1*MTA*(-s - 2*t - u +\
 
   3* (mphich*mphich) + 3* (MTA*MTA)) +  (mN1*mN1)*(-3*t - u + 4*\
 
   (mphich*mphich) + 3* (MTA*MTA)) + 3* (MTA*MTA*MTA*MTA) -  (s*s) +  (t*t) +\
 
    (u*u)))/((-u +  (mphich*mphich))*(-s +  (MTA*MTA)));
}
double DT::amp2s::N1phichZE(double cos_t, double s){
double t = (s* (mN1*mN1) + s* (mphich*mphich) +  (Me*Me)*(s -  (mN1*mN1) + \
 
   (mphich*mphich)) + s* (MZ*MZ) +  (mN1*mN1)* (MZ*MZ) -  (mphich*mphich)*\
 
   (MZ*MZ) + cos_t*s*sqrt(( (mN1*mN1*mN1*mN1) - 2* (mN1*mN1)*(s + \
 
   (mphich*mphich)) +  (( (mphich*mphich) - s)*( (mphich*mphich) -\
 
   s)))/s)*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (MZ*MZ)) +  (( (MZ*MZ) -\
 
   s)*( (MZ*MZ) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mN1*mN1 + mphich*mphich + MZ*MZ + Me*Me;
return ( (gc10*gc10)*(2*( (gc81L*gc81L)*(Me*mN1*s + mN1* (Me*Me*Me) + \
 
   (Me*Me*Me*Me) + s*(-t +  (mN1*mN1)) +  (Me*Me)*(-u +  (mN1*mN1))) + \
 
   (gc81R*gc81R)*(Me*mN1*s + mN1* (Me*Me*Me) +  (Me*Me*Me*Me) + s*(-t + \
 
   (mN1*mN1)) +  (Me*Me)*(-u +  (mN1*mN1))) - 6*gc81L*gc81R*Me*(mN1*s + mN1*\
 
   (Me*Me) +  (Me*Me*Me) + Me*(-t - u + 2* (mN1*mN1))))* (MZ*MZ) -\
 
   2*(6*gc81L*gc81R* (Me*Me) +  (gc81L*gc81L)*(2*Me*mN1 - s - t - u + \
 
   (Me*Me) + 2* (mN1*mN1)) +  (gc81R*gc81R)*(2*Me*mN1 - s - t - u +  (Me*Me)\
 
   + 2* (mN1*mN1)))* (MZ*MZ*MZ*MZ) - 2*( (gc81L*gc81L) +  (gc81R*gc81R))*\
 
   (MZ*MZ*MZ*MZ*MZ*MZ) + ( (gc81L*gc81L) +  (gc81R*gc81R))*(2*Me*mN1 - u + \
 
   (Me*Me) +  (mN1*mN1))* (( (Me*Me) - s)*( (Me*Me) - s))))/(2.* (MZ*MZ)* ((\
 
   (Me*Me) - s)*( (Me*Me) - s))) + ( (gc10*gc10)* (gc39*gc39)*(2*Me*mN1 - u +\
 
    (Me*Me) +  (mN1*mN1))*( (mphich*mphich*mphich*mphich) - 2*\
 
   (mphich*mphich)*(u +  (MZ*MZ)) +  (( (MZ*MZ) - u)*( (MZ*MZ) - u))))/(\
 
   (MZ*MZ)* (( (mphich*mphich) - u)*( (mphich*mphich) - u))) - (gc39*(gc81L +\
 
   gc81R)* (gc10*gc10)*((-s +  (Me*Me))*(2*Me*mN1 - u +  (Me*Me) + \
 
   (mN1*mN1))*(-u +  (mphich*mphich)) + (2*Me*mN1 + s - t - u + 2* (Me*Me))*\
 
   (MZ*MZ*MZ*MZ) +  (MZ*MZ)*(s*u + 2*t*u + 6*mN1* (Me*Me*Me) + 3*\
 
   (Me*Me*Me*Me) + s* (mphich*mphich) - t* (mphich*mphich) - 3*u*\
 
   (mphich*mphich) +  (Me*Me)*(-3*t - 4*u + 3* (mN1*mN1) + 2*\
 
   (mphich*mphich)) + 2*Me*mN1*(-s - 2*t - u + 3* (mphich*mphich)) + \
 
   (mN1*mN1)*(-3*t - u + 4* (mphich*mphich)) -  (s*s) +  (t*t) + \
 
   (u*u))))/((-s +  (Me*Me))*(-u +  (mphich*mphich))* (MZ*MZ));
}
double DT::amp2s::N1phichZM(double cos_t, double s){
double t = (s* (mN1*mN1) + s* (mphich*mphich) +  (MM*MM)*(s -  (mN1*mN1) + \
 
   (mphich*mphich)) + s* (MZ*MZ) +  (mN1*mN1)* (MZ*MZ) -  (mphich*mphich)*\
 
   (MZ*MZ) + cos_t*s*sqrt(( (mN1*mN1*mN1*mN1) - 2* (mN1*mN1)*(s + \
 
   (mphich*mphich)) +  (( (mphich*mphich) - s)*( (mphich*mphich) -\
 
   s)))/s)*sqrt(( (MM*MM*MM*MM) - 2* (MM*MM)*(s +  (MZ*MZ)) +  (( (MZ*MZ) -\
 
   s)*( (MZ*MZ) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mN1*mN1 + mphich*mphich + MZ*MZ + MM*MM;
return ( (gc11*gc11)*(-12*gc82L*gc82R*MM* (MZ*MZ)*(mN1*s + mN1* (MM*MM) + \
 
   (MM*MM*MM) + MM*(-t - u + 2* (mN1*mN1) +  (MZ*MZ))) + \
 
   (gc82L*gc82L)*(2*mN1* (MM*MM*MM*MM*MM) +  (MM*MM*MM*MM*MM*MM) - 2*s*t*\
 
   (MZ*MZ) + 2*mN1* (MM*MM*MM)*(-2*s +  (MZ*MZ)) +  (MM*MM*MM*MM)*(-2*s - u +\
 
    (mN1*mN1) + 2* (MZ*MZ)) + 2*s* (MZ*MZ*MZ*MZ) + 2*t* (MZ*MZ*MZ*MZ) + 2*u*\
 
   (MZ*MZ*MZ*MZ) - 2* (MZ*MZ*MZ*MZ*MZ*MZ) - u* (s*s) +  (mN1*mN1)*(2*s*\
 
   (MZ*MZ) - 4* (MZ*MZ*MZ*MZ) +  (s*s)) + 2*MM*mN1*(s* (MZ*MZ) - 2*\
 
   (MZ*MZ*MZ*MZ) +  (s*s)) +  (MM*MM)*(2*s*u - 2*u* (MZ*MZ) + 2*\
 
   (mN1*mN1)*(-s +  (MZ*MZ)) - 2* (MZ*MZ*MZ*MZ) +  (s*s))) + \
 
   (gc82R*gc82R)*(2*mN1* (MM*MM*MM*MM*MM) +  (MM*MM*MM*MM*MM*MM) - 2*s*t*\
 
   (MZ*MZ) + 2*mN1* (MM*MM*MM)*(-2*s +  (MZ*MZ)) +  (MM*MM*MM*MM)*(-2*s - u +\
 
    (mN1*mN1) + 2* (MZ*MZ)) + 2*s* (MZ*MZ*MZ*MZ) + 2*t* (MZ*MZ*MZ*MZ) + 2*u*\
 
   (MZ*MZ*MZ*MZ) - 2* (MZ*MZ*MZ*MZ*MZ*MZ) - u* (s*s) +  (mN1*mN1)*(2*s*\
 
   (MZ*MZ) - 4* (MZ*MZ*MZ*MZ) +  (s*s)) + 2*MM*mN1*(s* (MZ*MZ) - 2*\
 
   (MZ*MZ*MZ*MZ) +  (s*s)) +  (MM*MM)*(2*s*u - 2*u* (MZ*MZ) + 2*\
 
   (mN1*mN1)*(-s +  (MZ*MZ)) - 2* (MZ*MZ*MZ*MZ) +  (s*s)))))/(2.* (MZ*MZ)* ((\
 
   (MM*MM) - s)*( (MM*MM) - s))) + ( (gc11*gc11)* (gc39*gc39)*(2*MM*mN1 - u +\
 
    (MM*MM) +  (mN1*mN1))*( (mphich*mphich*mphich*mphich) - 2*\
 
   (mphich*mphich)*(u +  (MZ*MZ)) +  (( (MZ*MZ) - u)*( (MZ*MZ) - u))))/(\
 
   (MZ*MZ)* (( (mphich*mphich) - u)*( (mphich*mphich) - u))) + (gc39*(gc82L +\
 
   gc82R)* (gc11*gc11)*((2*MM*mN1*s +  (MM*MM)*(-t +  (mN1*mN1)) + s*(-u + \
 
   (mN1*mN1)))*(-u +  (mphich*mphich)) +  (MM*MM*MM*MM)*(u -  (mphich*mphich)\
 
   - 3* (MZ*MZ)) + (-2*MM*mN1 - s + t + u +  (MM*MM))* (MZ*MZ*MZ*MZ) - \
 
   (MM*MM)*(-((-2*MM*mN1 + s + t + u - 2* (mN1*mN1))*(-u +  (mphich*mphich)))\
 
   + (6*MM*mN1 - 2*s - 4*t - 5*u + 6* (mN1*mN1) + 5* (mphich*mphich))*\
 
   (MZ*MZ) + 3* (MZ*MZ*MZ*MZ)) +  (MZ*MZ)*(-(s*u) - 2*t*u +  (mN1*mN1)*(3*t +\
 
   u - 4* (mphich*mphich)) + 2*MM*mN1*(s + 2*t + u - 3* (mphich*mphich)) - s*\
 
   (mphich*mphich) + t* (mphich*mphich) + 3*u* (mphich*mphich) + \
 
   (MM*MM)*(-2*s - t - u + 3* (mN1*mN1) + 3* (mphich*mphich)) +  (s*s) - \
 
   (t*t) -  (u*u))))/((-s +  (MM*MM))*(-u +  (mphich*mphich))* (MZ*MZ));
}
double DT::amp2s::N1phichZTA(double cos_t, double s){
double t = (s* (mphich*mphich) + s* (MTA*MTA) +  (mphich*mphich)* (MTA*MTA) +\
 
   s* (MZ*MZ) -  (mphich*mphich)* (MZ*MZ) +  (mN1*mN1)*(s -  (MTA*MTA) + \
 
   (MZ*MZ)) + cos_t*s*sqrt(( (mN1*mN1*mN1*mN1) - 2* (mN1*mN1)*(s + \
 
   (mphich*mphich)) +  (( (mphich*mphich) - s)*( (mphich*mphich) -\
 
   s)))/s)*sqrt(( (MTA*MTA*MTA*MTA) - 2* (MTA*MTA)*(s +  (MZ*MZ)) +  ((\
 
   (MZ*MZ) - s)*( (MZ*MZ) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mN1*mN1 + mphich*mphich + MZ*MZ + MTA*MTA;
return ( (gc12*gc12)*(2*(-6*gc83L*gc83R*MTA*(2*MTA* (mN1*mN1) + mN1*(s + \
 
   (MTA*MTA)) + MTA*(-t - u +  (MTA*MTA))) +  (gc83L*gc83L)*(-(s*t) - u*\
 
   (MTA*MTA) + mN1*MTA*(s +  (MTA*MTA)) +  (mN1*mN1)*(s +  (MTA*MTA)) + \
 
   (MTA*MTA*MTA*MTA)) +  (gc83R*gc83R)*(-(s*t) - u* (MTA*MTA) + mN1*MTA*(s + \
 
   (MTA*MTA)) +  (mN1*mN1)*(s +  (MTA*MTA)) +  (MTA*MTA*MTA*MTA)))* (MZ*MZ) -\
 
   2*(6*gc83L*gc83R* (MTA*MTA) +  (gc83L*gc83L)*(2*mN1*MTA - s - t - u + 2*\
 
   (mN1*mN1) +  (MTA*MTA)) +  (gc83R*gc83R)*(2*mN1*MTA - s - t - u + 2*\
 
   (mN1*mN1) +  (MTA*MTA)))* (MZ*MZ*MZ*MZ) - 2*( (gc83L*gc83L) + \
 
   (gc83R*gc83R))* (MZ*MZ*MZ*MZ*MZ*MZ) + ( (gc83L*gc83L) + \
 
   (gc83R*gc83R))*(2*mN1*MTA - u +  (mN1*mN1) +  (MTA*MTA))* (( (MTA*MTA) -\
 
   s)*( (MTA*MTA) - s))))/(2.* (MZ*MZ)* (( (MTA*MTA) - s)*( (MTA*MTA) - s)))\
 
   + ( (gc12*gc12)* (gc39*gc39)*(2*mN1*MTA - u +  (mN1*mN1) +  (MTA*MTA))*(\
 
   (mphich*mphich*mphich*mphich) - 2* (mphich*mphich)*(u +  (MZ*MZ)) +  ((\
 
   (MZ*MZ) - u)*( (MZ*MZ) - u))))/( (MZ*MZ)* (( (mphich*mphich) - u)*(\
 
   (mphich*mphich) - u))) - (gc39*(gc83L + gc83R)* (gc12*gc12)*((-u + \
 
   (mphich*mphich))*(-s +  (MTA*MTA))*(2*mN1*MTA - u +  (mN1*mN1) + \
 
   (MTA*MTA)) + (2*mN1*MTA + s - t - u + 2* (MTA*MTA))* (MZ*MZ*MZ*MZ) + \
 
   (MZ*MZ)*(s*u + 2*t*u - 3*t* (MTA*MTA) - 4*u* (MTA*MTA) + \
 
   (mphich*mphich)*(s - t - 3*u + 2* (MTA*MTA)) + 2*mN1*MTA*(-s - 2*t - u +\
 
   3* (mphich*mphich) + 3* (MTA*MTA)) +  (mN1*mN1)*(-3*t - u + 4*\
 
   (mphich*mphich) + 3* (MTA*MTA)) + 3* (MTA*MTA*MTA*MTA) -  (s*s) +  (t*t) +\
 
    (u*u))))/((-u +  (mphich*mphich))*(-s +  (MTA*MTA))* (MZ*MZ));
}
double DT::amp2s::N1phichWVE(double cos_t, double s){
double t = (s* (Mnue*Mnue) + s* (mphich*mphich) +  (Mnue*Mnue)*\
 
   (mphich*mphich) + s* (MW*MW) -  (mphich*mphich)* (MW*MW) +  (mN1*mN1)*(s -\
 
    (Mnue*Mnue) +  (MW*MW)) + cos_t*s*sqrt(( (mN1*mN1*mN1*mN1) - 2*\
 
   (mN1*mN1)*(s +  (mphich*mphich)) +  (( (mphich*mphich) - s)*(\
 
   (mphich*mphich) - s)))/s)*sqrt(( (Mnue*Mnue*Mnue*Mnue) - 2* (Mnue*Mnue)*(s\
 
   +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mN1*mN1 + mphich*mphich + MW*MW + Mnue*Mnue;
return ( (gc10*gc10)* (gc66*gc66)*((-s +  (Mnue*Mnue))*(s*u +  (Me*Me)*(t - \
 
   (mN1*mN1)) - s* (Mnue*Mnue) - t* (Mnue*Mnue) - u* (Mnue*Mnue) +\
 
   2*Me*mN1*(-s +  (Mnue*Mnue)) +  (mN1*mN1)*(-s + 2* (Mnue*Mnue)) + \
 
   (Mnue*Mnue*Mnue*Mnue)) + (-2*s*t + (s + t - u)* (Me*Me) - s* (Mnue*Mnue) -\
 
   t* (Mnue*Mnue) - u* (Mnue*Mnue) + 2*Me*mN1*(s +  (Mnue*Mnue)) + 2*\
 
   (mN1*mN1)*(s +  (Mnue*Mnue)) + 2* (Mnue*Mnue*Mnue*Mnue))* (MW*MW) -\
 
   (4*Me*mN1 - 2*s - 2*t - 2*u +  (Me*Me) + 4* (mN1*mN1) +  (Mnue*Mnue))*\
 
   (MW*MW*MW*MW) - 2* (MW*MW*MW*MW*MW*MW)))/(2.* (MW*MW)* (( (Me*Me) - s)*(\
 
   (Me*Me) - s)));
}
double DT::amp2s::N1phichWVM(double cos_t, double s){
double t = (s* (Mnum*Mnum) + s* (mphich*mphich) +  (Mnum*Mnum)*\
 
   (mphich*mphich) + s* (MW*MW) -  (mphich*mphich)* (MW*MW) +  (mN1*mN1)*(s -\
 
    (Mnum*Mnum) +  (MW*MW)) + cos_t*s*sqrt(( (mN1*mN1*mN1*mN1) - 2*\
 
   (mN1*mN1)*(s +  (mphich*mphich)) +  (( (mphich*mphich) - s)*(\
 
   (mphich*mphich) - s)))/s)*sqrt(( (Mnum*Mnum*Mnum*Mnum) - 2* (Mnum*Mnum)*(s\
 
   +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mN1*mN1 + mphich*mphich + MW*MW + Mnum*Mnum;
return ( (gc11*gc11)* (gc67*gc67)*((-s +  (Mnum*Mnum))*(s*u +  (MM*MM)*(t - \
 
   (mN1*mN1)) - s* (Mnum*Mnum) - t* (Mnum*Mnum) - u* (Mnum*Mnum) +\
 
   2*MM*mN1*(-s +  (Mnum*Mnum)) +  (mN1*mN1)*(-s + 2* (Mnum*Mnum)) + \
 
   (Mnum*Mnum*Mnum*Mnum)) + (-2*s*t + (s + t - u)* (MM*MM) - s* (Mnum*Mnum) -\
 
   t* (Mnum*Mnum) - u* (Mnum*Mnum) + 2*MM*mN1*(s +  (Mnum*Mnum)) + 2*\
 
   (mN1*mN1)*(s +  (Mnum*Mnum)) + 2* (Mnum*Mnum*Mnum*Mnum))* (MW*MW) -\
 
   (4*MM*mN1 - 2*s - 2*t - 2*u +  (MM*MM) + 4* (mN1*mN1) +  (Mnum*Mnum))*\
 
   (MW*MW*MW*MW) - 2* (MW*MW*MW*MW*MW*MW)))/(2.* (MW*MW)* (( (MM*MM) - s)*(\
 
   (MM*MM) - s)));
}
double DT::amp2s::N1phichWVT(double cos_t, double s){
double t = (s* (Mnut*Mnut) + s* (mphich*mphich) +  (Mnut*Mnut)*\
 
   (mphich*mphich) + s* (MW*MW) -  (mphich*mphich)* (MW*MW) +  (mN1*mN1)*(s -\
 
    (Mnut*Mnut) +  (MW*MW)) + cos_t*s*sqrt(( (mN1*mN1*mN1*mN1) - 2*\
 
   (mN1*mN1)*(s +  (mphich*mphich)) +  (( (mphich*mphich) - s)*(\
 
   (mphich*mphich) - s)))/s)*sqrt(( (Mnut*Mnut*Mnut*Mnut) - 2* (Mnut*Mnut)*(s\
 
   +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + mN1*mN1 + mphich*mphich + MW*MW + Mnut*Mnut;
return ( (gc12*gc12)* (gc68*gc68)*((-s +  (Mnut*Mnut))*(s*u - (s + t + u)*\
 
   (Mnut*Mnut) + 2*mN1*MTA*(-s +  (Mnut*Mnut)) +  (Mnut*Mnut*Mnut*Mnut) + \
 
   (mN1*mN1)*(-s + 2* (Mnut*Mnut) -  (MTA*MTA)) + t* (MTA*MTA)) + (-2*s*t -\
 
   (s + t + u)* (Mnut*Mnut) + 2*mN1*MTA*(s +  (Mnut*Mnut)) + 2* (mN1*mN1)*(s\
 
   +  (Mnut*Mnut)) + 2* (Mnut*Mnut*Mnut*Mnut) + s* (MTA*MTA) + t* (MTA*MTA) -\
 
   u* (MTA*MTA))* (MW*MW) - (4*mN1*MTA - 2*s - 2*t - 2*u + 4* (mN1*mN1) + \
 
   (Mnut*Mnut) +  (MTA*MTA))* (MW*MW*MW*MW) - 2* (MW*MW*MW*MW*MW*MW)))/(2.*\
 
   (MW*MW)* (( (MTA*MTA) - s)*( (MTA*MTA) - s)));
}
