///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"

double DT::amp2s::H0A0hZ(double cos_t, double s){
double t = (s* (mh*mh) + s* (MH0*MH0) +  (mh*mh)* (MH0*MH0) + s* (MZ*MZ) - \
 
   (MH0*MH0)* (MZ*MZ) +  (MA0*MA0)*(s -  (mh*mh) +  (MZ*MZ)) + cos_t*s*sqrt((\
 
   (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  (( (MH0*MH0) - s)*(\
 
   (MH0*MH0) - s)))/s)*sqrt(( (mh*mh*mh*mh) - 2* (mh*mh)*(s +  (MZ*MZ)) +  ((\
 
   (MZ*MZ) - s)*( (MZ*MZ) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MA0*MA0 + mh*mh + MZ*MZ;
return ( (gc156*gc156)*(2*lam3*lam4 +  (lam3*lam3) +  (lam4*lam4) - \
 
   (lam5*lam5))*((-t +  (MA0*MA0))*(-s - t + u +  (MA0*MA0) +  (mh*mh) - \
 
   (MH0*MH0)) - (-s + 2*t + u + 2* (MA0*MA0) - 3* (mh*mh) + 3* (MH0*MH0))*\
 
   (MZ*MZ) +  (MZ*MZ*MZ*MZ))* (v*v))/((-u +  (MA0*MA0))*(-t +  (MH0*MH0))*\
 
   (MZ*MZ)) + ( (gc156*gc156)* ((lam3 + lam4 + lam5)*(lam3 + lam4 + lam5))*(\
 
   (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(t +  (MZ*MZ)) +  (( (MZ*MZ) - t)*(\
 
   (MZ*MZ) - t)))* (v*v))/( (MZ*MZ)* (( (MH0*MH0) - t)*( (MH0*MH0) - t))) + (\
 
   (gc156*gc156)* ((lam3 + lam4 - lam5)*(lam3 + lam4 - lam5))*(-2*(-s - t + u\
 
   +  (MA0*MA0) +  (mh*mh) + 7* (MH0*MH0))* (MZ*MZ) +  (MZ*MZ*MZ*MZ) +  ((\
 
   (MA0*MA0) +  (mh*mh) -  (MH0*MH0) - s - t + u)*( (MA0*MA0) +  (mh*mh) - \
 
   (MH0*MH0) - s - t + u)))* (v*v))/(4.* (MZ*MZ)* (( (MA0*MA0) - u)*(\
 
   (MA0*MA0) - u))) + (gc156*(lam3 + lam4 + lam5)*v*(-s +  (MZ*MZ))*((-t + \
 
   (MA0*MA0))*(2*gc157*lam5*v*(s -  (mh*mh)) + gc156*gc177*(-t + u + \
 
   (MA0*MA0) -  (MH0*MH0))) + (2*gc157*lam5*v*(s + t + 2*u - 3* (MA0*MA0) -\
 
   3* (mh*mh)) + gc156*gc177*(2*s - t + u - 5* (MA0*MA0) - 3* (MH0*MH0)))*\
 
   (MZ*MZ) - 2*gc157*lam5*v* (MZ*MZ*MZ*MZ)))/((-t +  (MH0*MH0))* (MZ*MZ)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (gc156*(lam3 +\
 
   lam4 - lam5)*v*(-s +  (MZ*MZ))*((2*gc157*lam5*v*(s -  (mh*mh)) +\
 
   gc156*gc177*(-t + u +  (MA0*MA0) -  (MH0*MH0)))*(-s - t + u +  (MA0*MA0) +\
 
    (mh*mh) -  (MH0*MH0)) + (gc156*gc177*(4*s + t - u - 5* (MA0*MA0) - 11*\
 
   (MH0*MH0)) + 2*gc157*lam5*v*(2*s - t + u - 3* (MA0*MA0) + 2* (mh*mh) + 3*\
 
   (MH0*MH0)))* (MZ*MZ) - 2*gc157*lam5*v* (MZ*MZ*MZ*MZ)))/(2.*(-u + \
 
   (MA0*MA0))* (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ)))) + (4* (gc157*gc157)* (lam5*lam5)* (MZ*MZ*MZ*MZ)* (v*v) - 4*\
 
   (MZ*MZ)*(gc156*gc157*gc177*lam5*v*(t - u + 3* (MA0*MA0) - 3* (MH0*MH0)) + \
 
   (gc156*gc156)* (gc177*gc177)*(-s + 2* (MA0*MA0) + 2* (MH0*MH0)) + 2*\
 
   (gc157*gc157)* (lam5*lam5)*(s +  (mh*mh))* (v*v)) +  ((gc156*gc177*(\
 
   (MA0*MA0) -  (MH0*MH0) - t + u) + 2*gc157*lam5*(- (mh*mh) +\
 
   s)*v)*(gc156*gc177*( (MA0*MA0) -  (MH0*MH0) - t + u) + 2*gc157*lam5*(-\
 
   (mh*mh) + s)*v)))/(4.* (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +\
 
    (WZ*WZ))));
}
double DT::amp2s::H0A0wW(double cos_t, double s){
double t = (-s +  (MA0*MA0) +  (MH0*MH0) + 2* (MW*MW) + cos_t*sqrt(s - 4*\
 
   (MW*MW))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  ((\
 
   (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + MW*MW + MW*MW;
return ( (gc130*gc130)* (gc143*gc143)*(-16* (MH0*MH0)* (MW*MW) +  ((-\
 
   (MA0*MA0) +  (MH0*MH0) + s + t - u)*(- (MA0*MA0) +  (MH0*MH0) + s + t -\
 
   u)))*( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(u +  (MW*MW)) +  (( (MW*MW) -\
 
   u)*( (MW*MW) - u))))/(4.* (MW*MW*MW*MW)* (( (MHch*MHch) - u)*( (MHch*MHch)\
 
   - u))) + (gc130*gc133*gc140*gc143*(-8*(-s + 2*t + 2*u +  (MA0*MA0) + 3*\
 
   (MH0*MH0))* (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) + (-t + \
 
   (MA0*MA0))*(-u +  (MA0*MA0))*(2*t*u +  (MA0*MA0*MA0*MA0) + 2*s* (MH0*MH0)\
 
   - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) - \
 
   (u*u)) +  (MW*MW*MW*MW)*(2*t*u + 9* (MA0*MA0*MA0*MA0) + (-6*s + 16*(t +\
 
   u))* (MH0*MH0) - 2* (MA0*MA0)*(5*s +  (MH0*MH0)) + 9* (MH0*MH0*MH0*MH0) + \
 
   (s*s) + 7* (t*t) + 7* (u*u)) -  (MW*MW)*(8*s*t*u + 2*\
 
   (MA0*MA0*MA0*MA0*MA0*MA0) +  (MA0*MA0*MA0*MA0)*(-4*s + 3*(t + u) + 4*\
 
   (MH0*MH0)) + 3*(t + u)* (MH0*MH0*MH0*MH0) - t* (s*s) - u* (s*s) - u* (t*t)\
 
   +  (t*t*t) - 2* (MA0*MA0)*(6*t*u + s*(t + u) + (2*s + 3*(t + u))*\
 
   (MH0*MH0) + 3* (MH0*MH0*MH0*MH0) -  (s*s) -  (t*t) -  (u*u)) - t* (u*u) +\
 
   2* (MH0*MH0)*(s*(t + u) + 2*( (t*t) +  (u*u))) +  (u*u*u))))/(2.*(-t + \
 
   (MHch*MHch))*(-u +  (MHch*MHch))* (MW*MW*MW*MW)) + ( (gc133*gc133)*\
 
   (gc140*gc140)*( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(t +  (MW*MW)) +  ((\
 
   (MW*MW) - t)*( (MW*MW) - t)))*(-16* (MH0*MH0)* (MW*MW) +  ((- (MA0*MA0) + \
 
   (MH0*MH0) + s - t + u)*(- (MA0*MA0) +  (MH0*MH0) + s - t + u))))/(4.*\
 
   (MW*MW*MW*MW)* (( (MHch*MHch) - t)*( (MHch*MHch) - t))) + ( (gc152*gc152)*\
 
   (gc156*gc156)*( (s*s)* ((t - u)*(t - u)) - 4* (MW*MW*MW*MW)*(6*t*u + 8*\
 
   (MA0*MA0*MA0*MA0) - 16*s* (MH0*MH0) - 16* (MA0*MA0)*(s +  (MH0*MH0)) + 8*\
 
   (MH0*MH0*MH0*MH0) + 8* (s*s) - 3* (t*t) - 3* (u*u)) + 4*s* (MW*MW)*(2*t*u\
 
   + 2* (MA0*MA0*MA0*MA0) - 4*s* (MH0*MH0) - 4* (MA0*MA0)*(s +  (MH0*MH0)) +\
 
   2* (MH0*MH0*MH0*MH0) + 2* (s*s) -  (t*t) -  (u*u))))/(4.* (MW*MW*MW*MW)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) +\
 
   (gc133*gc140*gc152*gc156*(-s +  (MZ*MZ))*(-(s*(t - u)*(-t +  (MA0*MA0))*(s\
 
   - t + u -  (MA0*MA0) +  (MH0*MH0))) + 8*(-2*s + t - u + 2* (MA0*MA0) + 6*\
 
   (MH0*MH0))* (MW*MW*MW*MW*MW*MW) - 2* (MW*MW*MW*MW)*(-7*s*t - s*u - 2*t*u +\
 
   4* (MA0*MA0*MA0*MA0) + (6*s + 11*t + 13*u)* (MH0*MH0) -  (MA0*MA0)*(6*s -\
 
   9*t + u + 32* (MH0*MH0)) - 4* (MH0*MH0*MH0*MH0) + 2* (s*s) + 3* (t*t) - \
 
   (u*u)) +  (MW*MW)*(2*(s - 4*t + 4*u)* (MA0*MA0*MA0*MA0) - 2*(s + t - u)*\
 
   (MH0*MH0*MH0*MH0) - 7*t* (s*s) + 3*u* (s*s) + 2* (s*s*s) - s* (t*t) - 4*u*\
 
   (t*t) + 2* (t*t*t) +  (MA0*MA0)*(15*s*t - 11*s*u + 2*t*u - 2*(8*s - 5*t +\
 
   5*u)* (MH0*MH0) - 4* (s*s) + 2* (t*t) - 4* (u*u)) + s* (u*u) + 2*t* (u*u)\
 
   +  (MH0*MH0)*(11*s*t + s*u + 2*t*u - 4* (t*t) + 2* (u*u)))))/(2.*(-t + \
 
   (MHch*MHch))* (MW*MW*MW*MW)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ)))) - (gc130*gc143*gc152*gc156*(-s +  (MZ*MZ))*(-(s*(-t + u)*(-u + \
 
   (MA0*MA0))*(s + t - u -  (MA0*MA0) +  (MH0*MH0))) + 8*(-2*s - t + u + 2*\
 
   (MA0*MA0) + 6* (MH0*MH0))* (MW*MW*MW*MW*MW*MW) - 2* (MW*MW*MW*MW)*(-(s*t)\
 
   - 7*s*u - 2*t*u + 4* (MA0*MA0*MA0*MA0) + (6*s + 13*t + 11*u)* (MH0*MH0) - \
 
   (MA0*MA0)*(6*s + t - 9*u + 32* (MH0*MH0)) - 4* (MH0*MH0*MH0*MH0) + 2*\
 
   (s*s) -  (t*t) + 3* (u*u)) +  (MW*MW)*(2*(s + 4*t - 4*u)*\
 
   (MA0*MA0*MA0*MA0) - 2*(s - t + u)* (MH0*MH0*MH0*MH0) + 3*t* (s*s) - 7*u*\
 
   (s*s) + 2* (s*s*s) + s* (t*t) + 2*u* (t*t) +  (MH0*MH0)*(s*t + 11*s*u +\
 
   2*t*u + 2* (t*t) - 4* (u*u)) - s* (u*u) - 4*t* (u*u) +  (MA0*MA0)*(-11*s*t\
 
   + 15*s*u + 2*t*u - 2*(8*s + 5*t - 5*u)* (MH0*MH0) - 4* (s*s) - 4* (t*t) +\
 
   2* (u*u)) + 2* (u*u*u))))/(2.*(-u +  (MHch*MHch))* (MW*MW*MW*MW)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::amp2s::H0A0VEve(double cos_t, double s){
double t = (-s +  (MA0*MA0) +  (MH0*MH0) + 2* (Mnue*Mnue) + cos_t*sqrt(s - 4*\
 
   (Mnue*Mnue))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) + \
 
   (( (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + Mnue*Mnue + Mnue*Mnue;
return ( (gc156*gc156)* (gc221*gc221)*(2*t*u +  (MA0*MA0*MA0*MA0) + \
 
   (MH0*MH0*MH0*MH0) - 2* (MA0*MA0)*(s +  (MH0*MH0) - 2* (Mnue*Mnue)) - 2*s*\
 
   (Mnue*Mnue) +  (MH0*MH0)*(-2*s + 4* (Mnue*Mnue)) +  (s*s) -  (t*t) - \
 
   (u*u)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::H0A0VMvm(double cos_t, double s){
double t = (-s +  (MA0*MA0) +  (MH0*MH0) + 2* (Mnum*Mnum) + cos_t*sqrt(s - 4*\
 
   (Mnum*Mnum))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) + \
 
   (( (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + Mnum*Mnum + Mnum*Mnum;
return ( (gc156*gc156)* (gc222*gc222)*(2*t*u +  (MA0*MA0*MA0*MA0) + \
 
   (MH0*MH0*MH0*MH0) - 2* (MA0*MA0)*(s +  (MH0*MH0) - 2* (Mnum*Mnum)) - 2*s*\
 
   (Mnum*Mnum) +  (MH0*MH0)*(-2*s + 4* (Mnum*Mnum)) +  (s*s) -  (t*t) - \
 
   (u*u)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::H0A0VTvt(double cos_t, double s){
double t = (-s +  (MA0*MA0) +  (MH0*MH0) + 2* (Mnut*Mnut) + cos_t*sqrt(s - 4*\
 
   (Mnut*Mnut))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) + \
 
   (( (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + Mnut*Mnut + Mnut*Mnut;
return ( (gc156*gc156)* (gc223*gc223)*(2*t*u +  (MA0*MA0*MA0*MA0) + \
 
   (MH0*MH0*MH0*MH0) - 2* (MA0*MA0)*(s +  (MH0*MH0) - 2* (Mnut*Mnut)) - 2*s*\
 
   (Mnut*Mnut) +  (MH0*MH0)*(-2*s + 4* (Mnut*Mnut)) +  (s*s) -  (t*t) - \
 
   (u*u)))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::H0A0Ee(double cos_t, double s){
double t = (-s +  (MA0*MA0) + 2* (Me*Me) +  (MH0*MH0) + cos_t*sqrt(s - 4*\
 
   (Me*Me))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  ((\
 
   (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + Me*Me + Me*Me;
return (-2*gc156*lam5*Me*v*(gc215L*gc92L*(t - u +  (MA0*MA0) -  (MH0*MH0)) +\
 
   gc215R*gc92R*(t - u +  (MA0*MA0) -  (MH0*MH0)) + gc215R*gc92L*(t - u - \
 
   (MA0*MA0) +  (MH0*MH0)) + gc215L*gc92R*(t - u -  (MA0*MA0) +  (MH0*MH0)))\
 
   +  (gc156*gc156)*(4*gc215L*gc215R* (Me*Me)*(s - 2* (MA0*MA0) - 2*\
 
   (MH0*MH0)) +  (gc215L*gc215L)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0)\
 
   +  (Me*Me)*(-2*s + 4* (MH0*MH0)) +  (MA0*MA0)*(4* (Me*Me) - 2*(s + \
 
   (MH0*MH0))) +  (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) -  (u*u)) + \
 
   (gc215R*gc215R)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) + \
 
   (Me*Me)*(-2*s + 4* (MH0*MH0)) +  (MA0*MA0)*(4* (Me*Me) - 2*(s + \
 
   (MH0*MH0))) +  (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) -  (u*u))) + \
 
   (lam5*lam5)*( (gc92L*gc92L)*(s - 2* (Me*Me)) +  (gc92R*gc92R)*(s - 2*\
 
   (Me*Me)) - 4*gc92L*gc92R* (Me*Me))* (v*v))/( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::H0A0Mm(double cos_t, double s){
double t = (-s +  (MA0*MA0) +  (MH0*MH0) + 2* (MM*MM) + cos_t*sqrt(s - 4*\
 
   (MM*MM))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  ((\
 
   (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + MM*MM + MM*MM;
return (-2*gc156*lam5*MM*v*(gc216L*gc94L*(t - u +  (MA0*MA0) -  (MH0*MH0)) +\
 
   gc216R*gc94R*(t - u +  (MA0*MA0) -  (MH0*MH0)) + gc216R*gc94L*(t - u - \
 
   (MA0*MA0) +  (MH0*MH0)) + gc216L*gc94R*(t - u -  (MA0*MA0) +  (MH0*MH0)))\
 
   +  (gc156*gc156)*(4*gc216L*gc216R*(s - 2* (MA0*MA0) - 2* (MH0*MH0))*\
 
   (MM*MM) +  (gc216L*gc216L)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) -\
 
   2* (MA0*MA0)*(s +  (MH0*MH0)) +  (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) - \
 
   (u*u)) +  (gc216R*gc216R)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) -\
 
   2* (MA0*MA0)*(s +  (MH0*MH0)) +  (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) - \
 
   (u*u))) +  (lam5*lam5)*(s* (gc94L*gc94L) + s* (gc94R*gc94R) -\
 
   4*gc94L*gc94R* (MM*MM))* (v*v) +  (MM*MM)*(2* (gc156*gc156)*(\
 
   (gc216L*gc216L) +  (gc216R*gc216R))*(-s + 2* (MA0*MA0) + 2* (MH0*MH0)) -\
 
   2*( (gc94L*gc94L) +  (gc94R*gc94R))* (lam5*lam5)* (v*v)))/( (MZ*MZ*MZ*MZ)\
 
   +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::H0A0TAta(double cos_t, double s){
double t = (-s +  (MA0*MA0) +  (MH0*MH0) + 2* (MTA*MTA) + cos_t*sqrt(s - 4*\
 
   (MTA*MTA))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  ((\
 
   (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + MTA*MTA + MTA*MTA;
return (-2*gc156*lam5*MTA*v*(gc217L*gc96L*(t - u +  (MA0*MA0) -  (MH0*MH0)) +\
 
   gc217R*gc96R*(t - u +  (MA0*MA0) -  (MH0*MH0)) + gc217R*gc96L*(t - u - \
 
   (MA0*MA0) +  (MH0*MH0)) + gc217L*gc96R*(t - u -  (MA0*MA0) +  (MH0*MH0)))\
 
   +  (gc156*gc156)*(4*gc217L*gc217R*(s - 2* (MA0*MA0) - 2* (MH0*MH0))*\
 
   (MTA*MTA) +  (gc217L*gc217L)*(2*t*u +  (MA0*MA0*MA0*MA0) + \
 
   (MH0*MH0*MH0*MH0) - 2* (MA0*MA0)*(s +  (MH0*MH0) - 2* (MTA*MTA)) - 2*s*\
 
   (MTA*MTA) +  (MH0*MH0)*(-2*s + 4* (MTA*MTA)) +  (s*s) -  (t*t) -  (u*u)) +\
 
    (gc217R*gc217R)*(2*t*u +  (MA0*MA0*MA0*MA0) +  (MH0*MH0*MH0*MH0) - 2*\
 
   (MA0*MA0)*(s +  (MH0*MH0) - 2* (MTA*MTA)) - 2*s* (MTA*MTA) + \
 
   (MH0*MH0)*(-2*s + 4* (MTA*MTA)) +  (s*s) -  (t*t) -  (u*u))) + \
 
   (lam5*lam5)*( (gc96L*gc96L)*(s - 2* (MTA*MTA)) +  (gc96R*gc96R)*(s - 2*\
 
   (MTA*MTA)) - 4*gc96L*gc96R* (MTA*MTA))* (v*v))/( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::H0A0Uu(double cos_t, double s){
double t = (-s +  (MA0*MA0) +  (MH0*MH0) + 2* (MU*MU) + cos_t*sqrt(s - 4*\
 
   (MU*MU))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  ((\
 
   (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + MU*MU + MU*MU;
return (3*(-2*gc156*lam5*MU*v*(gc114L*gc220L*(t - u +  (MA0*MA0) - \
 
   (MH0*MH0)) + gc114R*gc220R*(t - u +  (MA0*MA0) -  (MH0*MH0)) +\
 
   gc114R*gc220L*(t - u -  (MA0*MA0) +  (MH0*MH0)) + gc114L*gc220R*(t - u - \
 
   (MA0*MA0) +  (MH0*MH0))) +  (gc156*gc156)*(4*gc220L*gc220R*(s - 2*\
 
   (MA0*MA0) - 2* (MH0*MH0))* (MU*MU) +  (gc220L*gc220L)*(2*t*u + \
 
   (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) + \
 
   (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) -  (u*u)) +  (gc220R*gc220R)*(2*t*u + \
 
   (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) + \
 
   (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) -  (u*u))) +  (lam5*lam5)*(s*\
 
   (gc114L*gc114L) + s* (gc114R*gc114R) - 4*gc114L*gc114R* (MU*MU))* (v*v) + \
 
   (MU*MU)*(2* (gc156*gc156)*( (gc220L*gc220L) +  (gc220R*gc220R))*(-s + 2*\
 
   (MA0*MA0) + 2* (MH0*MH0)) - 2*( (gc114L*gc114L) +  (gc114R*gc114R))*\
 
   (lam5*lam5)* (v*v))))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ)));
}
double DT::amp2s::H0A0Cc(double cos_t, double s){
double t = (-s +  (MA0*MA0) + 2* (MC*MC) +  (MH0*MH0) + cos_t*sqrt(s - 4*\
 
   (MC*MC))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  ((\
 
   (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + MC*MC + MC*MC;
return (3*(-2*gc156*lam5*MC*v*(gc110L*gc218L*(t - u +  (MA0*MA0) - \
 
   (MH0*MH0)) + gc110R*gc218R*(t - u +  (MA0*MA0) -  (MH0*MH0)) +\
 
   gc110R*gc218L*(t - u -  (MA0*MA0) +  (MH0*MH0)) + gc110L*gc218R*(t - u - \
 
   (MA0*MA0) +  (MH0*MH0))) +  (gc156*gc156)*(4*gc218L*gc218R* (MC*MC)*(s -\
 
   2* (MA0*MA0) - 2* (MH0*MH0)) +  (gc218L*gc218L)*(2*t*u + \
 
   (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) + \
 
   (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) -  (u*u)) +  (gc218R*gc218R)*(2*t*u + \
 
   (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) + \
 
   (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) -  (u*u))) +  (lam5*lam5)*(s*\
 
   (gc110L*gc110L) + s* (gc110R*gc110R) - 4*gc110L*gc110R* (MC*MC))* (v*v) + \
 
   (MC*MC)*(2* (gc156*gc156)*( (gc218L*gc218L) +  (gc218R*gc218R))*(-s + 2*\
 
   (MA0*MA0) + 2* (MH0*MH0)) - 2*( (gc110L*gc110L) +  (gc110R*gc110R))*\
 
   (lam5*lam5)* (v*v))))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ)));
}
double DT::amp2s::H0A0Tt(double cos_t, double s){
double t = (-s +  (MA0*MA0) +  (MH0*MH0) + 2* (MT*MT) + cos_t*sqrt(s - 4*\
 
   (MT*MT))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  ((\
 
   (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + MT*MT + MT*MT;
return (3*(-2*gc156*lam5*MT*v*(gc112L*gc219L*(t - u +  (MA0*MA0) - \
 
   (MH0*MH0)) + gc112R*gc219R*(t - u +  (MA0*MA0) -  (MH0*MH0)) +\
 
   gc112R*gc219L*(t - u -  (MA0*MA0) +  (MH0*MH0)) + gc112L*gc219R*(t - u - \
 
   (MA0*MA0) +  (MH0*MH0))) +  (gc156*gc156)*(4*gc219L*gc219R*(s - 2*\
 
   (MA0*MA0) - 2* (MH0*MH0))* (MT*MT) +  (gc219L*gc219L)*(2*t*u + \
 
   (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) + \
 
   (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) -  (u*u)) +  (gc219R*gc219R)*(2*t*u + \
 
   (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) + \
 
   (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) -  (u*u))) +  (lam5*lam5)*(s*\
 
   (gc112L*gc112L) + s* (gc112R*gc112R) - 4*gc112L*gc112R* (MT*MT))* (v*v) + \
 
   (MT*MT)*(2* (gc156*gc156)*( (gc219L*gc219L) +  (gc219R*gc219R))*(-s + 2*\
 
   (MA0*MA0) + 2* (MH0*MH0)) - 2*( (gc112L*gc112L) +  (gc112R*gc112R))*\
 
   (lam5*lam5)* (v*v))))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ)));
}
double DT::amp2s::H0A0Dd(double cos_t, double s){
double t = (-s +  (MA0*MA0) + 2* (MD*MD) +  (MH0*MH0) + cos_t*sqrt(s - 4*\
 
   (MD*MD))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  ((\
 
   (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + MD*MD + MD*MD;
return (3*(-2*gc156*lam5*MD*v*(gc213L*gc79L*(t - u +  (MA0*MA0) -  (MH0*MH0))\
 
   + gc213R*gc79R*(t - u +  (MA0*MA0) -  (MH0*MH0)) + gc213R*gc79L*(t - u - \
 
   (MA0*MA0) +  (MH0*MH0)) + gc213L*gc79R*(t - u -  (MA0*MA0) +  (MH0*MH0)))\
 
   +  (gc156*gc156)*(4*gc213L*gc213R* (MD*MD)*(s - 2* (MA0*MA0) - 2*\
 
   (MH0*MH0)) +  (gc213L*gc213L)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0)\
 
   - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) - \
 
   (u*u)) +  (gc213R*gc213R)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) -\
 
   2* (MA0*MA0)*(s +  (MH0*MH0)) +  (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) - \
 
   (u*u))) +  (lam5*lam5)*(s* (gc79L*gc79L) + s* (gc79R*gc79R) -\
 
   4*gc79L*gc79R* (MD*MD))* (v*v) +  (MD*MD)*(2* (gc156*gc156)*(\
 
   (gc213L*gc213L) +  (gc213R*gc213R))*(-s + 2* (MA0*MA0) + 2* (MH0*MH0)) -\
 
   2*( (gc79L*gc79L) +  (gc79R*gc79R))* (lam5*lam5)* (v*v))))/( (MZ*MZ*MZ*MZ)\
 
   +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::H0A0Ss(double cos_t, double s){
double t = (-s +  (MA0*MA0) +  (MH0*MH0) + 2* (MS*MS) + cos_t*sqrt(s - 4*\
 
   (MS*MS))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  ((\
 
   (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + MS*MS + MS*MS;
return (3*(-2*gc156*lam5*MS*v*(gc214L*gc81L*(t - u +  (MA0*MA0) -  (MH0*MH0))\
 
   + gc214R*gc81R*(t - u +  (MA0*MA0) -  (MH0*MH0)) + gc214R*gc81L*(t - u - \
 
   (MA0*MA0) +  (MH0*MH0)) + gc214L*gc81R*(t - u -  (MA0*MA0) +  (MH0*MH0)))\
 
   +  (gc156*gc156)*(4*gc214L*gc214R*(s - 2* (MA0*MA0) - 2* (MH0*MH0))*\
 
   (MS*MS) +  (gc214L*gc214L)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) -\
 
   2* (MA0*MA0)*(s +  (MH0*MH0)) +  (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) - \
 
   (u*u)) +  (gc214R*gc214R)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) -\
 
   2* (MA0*MA0)*(s +  (MH0*MH0)) +  (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) - \
 
   (u*u))) +  (lam5*lam5)*(s* (gc81L*gc81L) + s* (gc81R*gc81R) -\
 
   4*gc81L*gc81R* (MS*MS))* (v*v) +  (MS*MS)*(2* (gc156*gc156)*(\
 
   (gc214L*gc214L) +  (gc214R*gc214R))*(-s + 2* (MA0*MA0) + 2* (MH0*MH0)) -\
 
   2*( (gc81L*gc81L) +  (gc81R*gc81R))* (lam5*lam5)* (v*v))))/( (MZ*MZ*MZ*MZ)\
 
   +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::H0A0Bb(double cos_t, double s){
double t = (-s +  (MA0*MA0) + 2* (MB*MB) +  (MH0*MH0) + cos_t*sqrt(s - 4*\
 
   (MB*MB))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  ((\
 
   (MH0*MH0) - s)*( (MH0*MH0) - s)))/s))/2.;
double u = -s - t + MH0*MH0 + MA0*MA0 + MB*MB + MB*MB;
return (3*(-2*gc156*lam5*MB*v*(gc212L*gc77L*(t - u +  (MA0*MA0) -  (MH0*MH0))\
 
   + gc212R*gc77R*(t - u +  (MA0*MA0) -  (MH0*MH0)) + gc212R*gc77L*(t - u - \
 
   (MA0*MA0) +  (MH0*MH0)) + gc212L*gc77R*(t - u -  (MA0*MA0) +  (MH0*MH0)))\
 
   +  (gc156*gc156)*(4*gc212L*gc212R* (MB*MB)*(s - 2* (MA0*MA0) - 2*\
 
   (MH0*MH0)) +  (gc212L*gc212L)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0)\
 
   - 2* (MA0*MA0)*(s +  (MH0*MH0)) +  (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) - \
 
   (u*u)) +  (gc212R*gc212R)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH0*MH0) -\
 
   2* (MA0*MA0)*(s +  (MH0*MH0)) +  (MH0*MH0*MH0*MH0) +  (s*s) -  (t*t) - \
 
   (u*u))) +  (lam5*lam5)*(s* (gc77L*gc77L) + s* (gc77R*gc77R) -\
 
   4*gc77L*gc77R* (MB*MB))* (v*v) +  (MB*MB)*(2* (gc156*gc156)*(\
 
   (gc212L*gc212L) +  (gc212R*gc212R))*(-s + 2* (MA0*MA0) + 2* (MH0*MH0)) -\
 
   2*( (gc77L*gc77L) +  (gc77R*gc77R))* (lam5*lam5)* (v*v))))/( (MZ*MZ*MZ*MZ)\
 
   +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
