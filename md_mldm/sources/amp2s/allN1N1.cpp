///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"

double DT::amp2s::N1N1Ee(double cos_t, double s){
double t =  (Me*Me) + (-s + cos_t*sqrt(s - 4* (Me*Me))*sqrt(s - 4*\
 
   (mN1*mN1)))/2. +  (mN1*mN1);
double u = -s - t + mN1*mN1 + mN1*mN1 + Me*Me + Me*Me;
return ( (gc10*gc10)* (gc8*gc8)* (( (Me*Me) + 2*Me*mN1 +  (mN1*mN1) - t)*(\
 
   (Me*Me) + 2*Me*mN1 +  (mN1*mN1) - t)))/ (( (mphich*mphich) - t)*(\
 
   (mphich*mphich) - t)) + ( (gc10*gc10)* (gc8*gc8)* (( (Me*Me) + 2*Me*mN1 + \
 
   (mN1*mN1) - u)*( (Me*Me) + 2*Me*mN1 +  (mN1*mN1) - u)))/ ((\
 
   (mphich*mphich) - u)*( (mphich*mphich) - u)) - ( (gc10*gc10)*\
 
   (gc8*gc8)*(8*mN1* (Me*Me*Me) + 2* (Me*Me*Me*Me) + (4*s - 2*(t + u))*\
 
   (mN1*mN1) - 2* (Me*Me)*(-2*s + t + u + 2* (mN1*mN1)) + Me*(-4*mN1*(t + u)\
 
   + 8* (mN1*mN1*mN1)) + 2* (mN1*mN1*mN1*mN1) -  (s*s) +  (t*t) + \
 
   (u*u)))/(2.*(-t +  (mphich*mphich))*(-u +  (mphich*mphich)));
}
double DT::amp2s::N1N1Em(double cos_t, double s){
double t = (-s +  (Me*Me) +  (MM*MM) + 2* (mN1*mN1) + cos_t*sqrt(s - 4*\
 
   (mN1*mN1))*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (MM*MM)) +  (( (MM*MM)\
 
   - s)*( (MM*MM) - s)))/s))/2.;
double u = -s - t + mN1*mN1 + mN1*mN1 + Me*Me + MM*MM;
return ( (gc10*gc10)* (gc9*gc9)*(2*Me*mN1 - t +  (Me*Me) + \
 
   (mN1*mN1))*(2*MM*mN1 - t +  (MM*MM) +  (mN1*mN1)))/ (( (mphich*mphich) -\
 
   t)*( (mphich*mphich) - t)) + ( (gc10*gc10)* (gc9*gc9)*(2*Me*mN1 - u + \
 
   (Me*Me) +  (mN1*mN1))*(2*MM*mN1 - u +  (MM*MM) +  (mN1*mN1)))/ ((\
 
   (mphich*mphich) - u)*( (mphich*mphich) - u)) + ( (gc10*gc10)*\
 
   (gc9*gc9)*(2*MM*mN1*(t + u - 2* (mN1*mN1)) - 4*s* (mN1*mN1) + 2*t*\
 
   (mN1*mN1) + 2*u* (mN1*mN1) +  (MM*MM)*(-s + t + u + 2* (mN1*mN1)) + \
 
   (Me*Me)*(-4*MM*mN1 - s + t + u - 2* (MM*MM) + 2* (mN1*mN1)) - 2*Me*(MM*s -\
 
   mN1*t - mN1*u + 2*mN1* (MM*MM) + 2* (mN1*mN1*mN1)) - 2* (mN1*mN1*mN1*mN1)\
 
   +  (s*s) -  (t*t) -  (u*u)))/(2.*(-t +  (mphich*mphich))*(-u + \
 
   (mphich*mphich)));
}
double DT::amp2s::N1N1Eta(double cos_t, double s){
double t = (-s +  (Me*Me) + 2* (mN1*mN1) +  (MTA*MTA) + cos_t*sqrt(s - 4*\
 
   (mN1*mN1))*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (MTA*MTA)) +  ((\
 
   (MTA*MTA) - s)*( (MTA*MTA) - s)))/s))/2.;
double u = -s - t + mN1*mN1 + mN1*mN1 + Me*Me + MTA*MTA;
return ( (gc10*gc10)* (gc13*gc13)*(2*Me*mN1 - t +  (Me*Me) + \
 
   (mN1*mN1))*(2*mN1*MTA - t +  (mN1*mN1) +  (MTA*MTA)))/ (( (mphich*mphich)\
 
   - t)*( (mphich*mphich) - t)) + ( (gc10*gc10)* (gc13*gc13)*(2*Me*mN1 - u + \
 
   (Me*Me) +  (mN1*mN1))*(2*mN1*MTA - u +  (mN1*mN1) +  (MTA*MTA)))/ ((\
 
   (mphich*mphich) - u)*( (mphich*mphich) - u)) + ( (gc10*gc10)*\
 
   (gc13*gc13)*(2*mN1*MTA*(t + u) - 4*MTA* (mN1*mN1*mN1) - 2*\
 
   (mN1*mN1*mN1*mN1) +  (Me*Me)*(-4*mN1*MTA - s + t + u + 2* (mN1*mN1) - 2*\
 
   (MTA*MTA)) - s* (MTA*MTA) + t* (MTA*MTA) + u* (MTA*MTA) + 2*\
 
   (mN1*mN1)*(-2*s + t + u +  (MTA*MTA)) - 2*Me*(MTA*s + 2* (mN1*mN1*mN1) +\
 
   mN1*(-t - u + 2* (MTA*MTA))) +  (s*s) -  (t*t) -  (u*u)))/(2.*(-t + \
 
   (mphich*mphich))*(-u +  (mphich*mphich)));
}
double DT::amp2s::N1N1eM(double cos_t, double s){
double t = (-s +  (Me*Me) +  (MM*MM) + 2* (mN1*mN1) + cos_t*sqrt(s - 4*\
 
   (mN1*mN1))*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (MM*MM)) +  (( (MM*MM)\
 
   - s)*( (MM*MM) - s)))/s))/2.;
double u = -s - t + mN1*mN1 + mN1*mN1 + Me*Me + MM*MM;
return ( (gc11*gc11)* (gc8*gc8)*(2*Me*mN1 - t +  (Me*Me) + \
 
   (mN1*mN1))*(2*MM*mN1 - t +  (MM*MM) +  (mN1*mN1)))/ (( (mphich*mphich) -\
 
   t)*( (mphich*mphich) - t)) + ( (gc11*gc11)* (gc8*gc8)*(2*Me*mN1 - u + \
 
   (Me*Me) +  (mN1*mN1))*(2*MM*mN1 - u +  (MM*MM) +  (mN1*mN1)))/ ((\
 
   (mphich*mphich) - u)*( (mphich*mphich) - u)) + ( (gc11*gc11)*\
 
   (gc8*gc8)*(2*MM*mN1*(t + u - 2* (mN1*mN1)) - 4*s* (mN1*mN1) + 2*t*\
 
   (mN1*mN1) + 2*u* (mN1*mN1) +  (MM*MM)*(-s + t + u + 2* (mN1*mN1)) + \
 
   (Me*Me)*(-4*MM*mN1 - s + t + u - 2* (MM*MM) + 2* (mN1*mN1)) - 2*Me*(MM*s -\
 
   mN1*t - mN1*u + 2*mN1* (MM*MM) + 2* (mN1*mN1*mN1)) - 2* (mN1*mN1*mN1*mN1)\
 
   +  (s*s) -  (t*t) -  (u*u)))/(2.*(-t +  (mphich*mphich))*(-u + \
 
   (mphich*mphich)));
}
double DT::amp2s::N1N1eTA(double cos_t, double s){
double t = (-s +  (Me*Me) + 2* (mN1*mN1) +  (MTA*MTA) + cos_t*sqrt(s - 4*\
 
   (mN1*mN1))*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (MTA*MTA)) +  ((\
 
   (MTA*MTA) - s)*( (MTA*MTA) - s)))/s))/2.;
double u = -s - t + mN1*mN1 + mN1*mN1 + Me*Me + MTA*MTA;
return ( (gc12*gc12)* (gc8*gc8)*(2*Me*mN1 - t +  (Me*Me) + \
 
   (mN1*mN1))*(2*mN1*MTA - t +  (mN1*mN1) +  (MTA*MTA)))/ (( (mphich*mphich)\
 
   - t)*( (mphich*mphich) - t)) + ( (gc12*gc12)* (gc8*gc8)*(2*Me*mN1 - u + \
 
   (Me*Me) +  (mN1*mN1))*(2*mN1*MTA - u +  (mN1*mN1) +  (MTA*MTA)))/ ((\
 
   (mphich*mphich) - u)*( (mphich*mphich) - u)) + ( (gc12*gc12)*\
 
   (gc8*gc8)*(2*mN1*MTA*(t + u) - 4*MTA* (mN1*mN1*mN1) - 2* (mN1*mN1*mN1*mN1)\
 
   +  (Me*Me)*(-4*mN1*MTA - s + t + u + 2* (mN1*mN1) - 2* (MTA*MTA)) - s*\
 
   (MTA*MTA) + t* (MTA*MTA) + u* (MTA*MTA) + 2* (mN1*mN1)*(-2*s + t + u + \
 
   (MTA*MTA)) - 2*Me*(MTA*s + 2* (mN1*mN1*mN1) + mN1*(-t - u + 2* (MTA*MTA)))\
 
   +  (s*s) -  (t*t) -  (u*u)))/(2.*(-t +  (mphich*mphich))*(-u + \
 
   (mphich*mphich)));
}
double DT::amp2s::N1N1Mm(double cos_t, double s){
double t =  (MM*MM) + (-s + cos_t*sqrt(s - 4* (MM*MM))*sqrt(s - 4*\
 
   (mN1*mN1)))/2. +  (mN1*mN1);
double u = -s - t + mN1*mN1 + mN1*mN1 + MM*MM + MM*MM;
return ( (gc11*gc11)* (gc9*gc9)* (( (MM*MM) + 2*MM*mN1 +  (mN1*mN1) - t)*(\
 
   (MM*MM) + 2*MM*mN1 +  (mN1*mN1) - t)))/ (( (mphich*mphich) - t)*(\
 
   (mphich*mphich) - t)) + ( (gc11*gc11)* (gc9*gc9)* (( (MM*MM) + 2*MM*mN1 + \
 
   (mN1*mN1) - u)*( (MM*MM) + 2*MM*mN1 +  (mN1*mN1) - u)))/ ((\
 
   (mphich*mphich) - u)*( (mphich*mphich) - u)) - ( (gc11*gc11)*\
 
   (gc9*gc9)*(8*mN1* (MM*MM*MM) + 2* (MM*MM*MM*MM) + (4*s - 2*(t + u))*\
 
   (mN1*mN1) - 2* (MM*MM)*(-2*s + t + u + 2* (mN1*mN1)) + MM*(-4*mN1*(t + u)\
 
   + 8* (mN1*mN1*mN1)) + 2* (mN1*mN1*mN1*mN1) -  (s*s) +  (t*t) + \
 
   (u*u)))/(2.*(-t +  (mphich*mphich))*(-u +  (mphich*mphich)));
}
double DT::amp2s::N1N1Mta(double cos_t, double s){
double t = (-s +  (MM*MM) + 2* (mN1*mN1) +  (MTA*MTA) + cos_t*sqrt(s - 4*\
 
   (mN1*mN1))*sqrt(( (MM*MM*MM*MM) - 2* (MM*MM)*(s +  (MTA*MTA)) +  ((\
 
   (MTA*MTA) - s)*( (MTA*MTA) - s)))/s))/2.;
double u = -s - t + mN1*mN1 + mN1*mN1 + MM*MM + MTA*MTA;
return ( (gc11*gc11)* (gc13*gc13)*(2*MM*mN1 - t +  (MM*MM) + \
 
   (mN1*mN1))*(2*mN1*MTA - t +  (mN1*mN1) +  (MTA*MTA)))/ (( (mphich*mphich)\
 
   - t)*( (mphich*mphich) - t)) + ( (gc11*gc11)* (gc13*gc13)*(2*MM*mN1 - u + \
 
   (MM*MM) +  (mN1*mN1))*(2*mN1*MTA - u +  (mN1*mN1) +  (MTA*MTA)))/ ((\
 
   (mphich*mphich) - u)*( (mphich*mphich) - u)) + ( (gc11*gc11)*\
 
   (gc13*gc13)*(2*mN1*MTA*(t + u) - 4*MTA* (mN1*mN1*mN1) - 2*\
 
   (mN1*mN1*mN1*mN1) +  (MM*MM)*(-4*mN1*MTA - s + t + u + 2* (mN1*mN1) - 2*\
 
   (MTA*MTA)) - s* (MTA*MTA) + t* (MTA*MTA) + u* (MTA*MTA) + 2*\
 
   (mN1*mN1)*(-2*s + t + u +  (MTA*MTA)) - 2*MM*(MTA*s + 2* (mN1*mN1*mN1) +\
 
   mN1*(-t - u + 2* (MTA*MTA))) +  (s*s) -  (t*t) -  (u*u)))/(2.*(-t + \
 
   (mphich*mphich))*(-u +  (mphich*mphich)));
}
double DT::amp2s::N1N1mTA(double cos_t, double s){
double t = (-s +  (MM*MM) + 2* (mN1*mN1) +  (MTA*MTA) + cos_t*sqrt(s - 4*\
 
   (mN1*mN1))*sqrt(( (MM*MM*MM*MM) - 2* (MM*MM)*(s +  (MTA*MTA)) +  ((\
 
   (MTA*MTA) - s)*( (MTA*MTA) - s)))/s))/2.;
double u = -s - t + mN1*mN1 + mN1*mN1 + MM*MM + MTA*MTA;
return ( (gc12*gc12)* (gc9*gc9)*(2*MM*mN1 - t +  (MM*MM) + \
 
   (mN1*mN1))*(2*mN1*MTA - t +  (mN1*mN1) +  (MTA*MTA)))/ (( (mphich*mphich)\
 
   - t)*( (mphich*mphich) - t)) + ( (gc12*gc12)* (gc9*gc9)*(2*MM*mN1 - u + \
 
   (MM*MM) +  (mN1*mN1))*(2*mN1*MTA - u +  (mN1*mN1) +  (MTA*MTA)))/ ((\
 
   (mphich*mphich) - u)*( (mphich*mphich) - u)) + ( (gc12*gc12)*\
 
   (gc9*gc9)*(2*mN1*MTA*(t + u) - 4*MTA* (mN1*mN1*mN1) - 2* (mN1*mN1*mN1*mN1)\
 
   +  (MM*MM)*(-4*mN1*MTA - s + t + u + 2* (mN1*mN1) - 2* (MTA*MTA)) - s*\
 
   (MTA*MTA) + t* (MTA*MTA) + u* (MTA*MTA) + 2* (mN1*mN1)*(-2*s + t + u + \
 
   (MTA*MTA)) - 2*MM*(MTA*s + 2* (mN1*mN1*mN1) + mN1*(-t - u + 2* (MTA*MTA)))\
 
   +  (s*s) -  (t*t) -  (u*u)))/(2.*(-t +  (mphich*mphich))*(-u + \
 
   (mphich*mphich)));
}
double DT::amp2s::N1N1TAta(double cos_t, double s){
double t =  (mN1*mN1) + (-s + cos_t*sqrt(s - 4* (mN1*mN1))*sqrt(s - 4*\
 
   (MTA*MTA)))/2. +  (MTA*MTA);
double u = -s - t + mN1*mN1 + mN1*mN1 + MTA*MTA + MTA*MTA;
return ( (gc12*gc12)* (gc13*gc13)* (( (mN1*mN1) + 2*mN1*MTA +  (MTA*MTA) -\
 
   t)*( (mN1*mN1) + 2*mN1*MTA +  (MTA*MTA) - t)))/ (( (mphich*mphich) - t)*(\
 
   (mphich*mphich) - t)) + ( (gc12*gc12)* (gc13*gc13)* (( (mN1*mN1) +\
 
   2*mN1*MTA +  (MTA*MTA) - u)*( (mN1*mN1) + 2*mN1*MTA +  (MTA*MTA) - u)))/\
 
   (( (mphich*mphich) - u)*( (mphich*mphich) - u)) - ( (gc12*gc12)*\
 
   (gc13*gc13)*(8*MTA* (mN1*mN1*mN1) + 2* (mN1*mN1*mN1*mN1) + (4*s - 2*(t +\
 
   u))* (MTA*MTA) - 2* (mN1*mN1)*(-2*s + t + u + 2* (MTA*MTA)) +\
 
   mN1*(-4*MTA*(t + u) + 8* (MTA*MTA*MTA)) + 2* (MTA*MTA*MTA*MTA) -  (s*s) + \
 
   (t*t) +  (u*u)))/(2.*(-t +  (mphich*mphich))*(-u +  (mphich*mphich)));
}
