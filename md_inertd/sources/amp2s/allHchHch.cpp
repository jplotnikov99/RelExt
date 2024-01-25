///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"

double DT::amp2s::HchHchWW(double cos_t, double s){
double t =  (MHch*MHch) + (-s + cos_t*sqrt(s - 4* (MHch*MHch))*sqrt(s - 4*\
 
   (MW*MW)))/2. +  (MW*MW);
double u = -s - t + MHch*MHch + MHch*MHch + MW*MW + MW*MW;
return ( (gc140*gc140)* (gc143*gc143)*(-16* (MHch*MHch)* (MW*MW) +  ((s + t -\
 
   u)*(s + t - u)))*( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(u +  (MW*MW)) +\
 
    (( (MW*MW) - u)*( (MW*MW) - u))))/(2.*(-u +  (MA0*MA0))*(u -  (MH0*MH0))*\
 
   (MW*MW*MW*MW)) + ( (gc140*gc140*gc140*gc140)*(-16* (MHch*MHch)* (MW*MW) + \
 
   ((s + t - u)*(s + t - u)))*( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(u + \
 
   (MW*MW)) +  (( (MW*MW) - u)*( (MW*MW) - u))))/(4.* (MW*MW*MW*MW)* ((\
 
   (MA0*MA0) - u)*( (MA0*MA0) - u))) + ( (gc143*gc143*gc143*gc143)*(-16*\
 
   (MHch*MHch)* (MW*MW) +  ((s + t - u)*(s + t - u)))*( (MHch*MHch*MHch*MHch)\
 
   - 2* (MHch*MHch)*(u +  (MW*MW)) +  (( (MW*MW) - u)*( (MW*MW) - u))))/(4.*\
 
   (MW*MW*MW*MW)* (( (MH0*MH0) - u)*( (MH0*MH0) - u))) + (\
 
   (gc140*gc140*gc140*gc140)*(-8*(-s + 2*(t + u) + 4* (MHch*MHch))*\
 
   (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t + \
 
   (MHch*MHch))*(-u +  (MHch*MHch))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (MHch*MHch*MHch*MHch) + (t + u)* (s*s) - (t + u)*\
 
   ((t - u)*(t - u)) - 2* (MHch*MHch)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (MHch*MHch) + 16*\
 
   (MHch*MHch*MHch*MHch) +  (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t + \
 
   (MA0*MA0))*(-u +  (MA0*MA0))* (MW*MW*MW*MW)) - ( (gc140*gc140)*\
 
   (gc143*gc143)*(-8*(-s + 2*(t + u) + 4* (MHch*MHch))* (MW*MW*MW*MW*MW*MW) +\
 
   16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t +  (MHch*MHch))*(-u +  (MHch*MHch))*(-\
 
   (s*s) +  ((t - u)*(t - u))) +  (MW*MW)*(-8*s*t*u + 8*s*\
 
   (MHch*MHch*MHch*MHch) + (t + u)* (s*s) - (t + u)* ((t - u)*(t - u)) - 2*\
 
   (MHch*MHch)*( (s*s) + 3* ((t - u)*(t - u)))) +  (MW*MW*MW*MW)*(2*t*u -\
 
   16*(s - t - u)* (MHch*MHch) + 16* (MHch*MHch*MHch*MHch) +  (s*s) + 7*\
 
   (t*t) + 7* (u*u))))/(2.*(-u +  (MA0*MA0))*(-t +  (MH0*MH0))*\
 
   (MW*MW*MW*MW)) - ( (gc140*gc140)* (gc143*gc143)*(-8*(-s + 2*(t + u) + 4*\
 
   (MHch*MHch))* (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t + \
 
   (MHch*MHch))*(-u +  (MHch*MHch))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (MHch*MHch*MHch*MHch) + (t + u)* (s*s) - (t + u)*\
 
   ((t - u)*(t - u)) - 2* (MHch*MHch)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (MHch*MHch) + 16*\
 
   (MHch*MHch*MHch*MHch) +  (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t + \
 
   (MA0*MA0))*(-u +  (MH0*MH0))* (MW*MW*MW*MW)) + (\
 
   (gc143*gc143*gc143*gc143)*(-8*(-s + 2*(t + u) + 4* (MHch*MHch))*\
 
   (MW*MW*MW*MW*MW*MW) + 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t + \
 
   (MHch*MHch))*(-u +  (MHch*MHch))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MW*MW)*(-8*s*t*u + 8*s* (MHch*MHch*MHch*MHch) + (t + u)* (s*s) - (t + u)*\
 
   ((t - u)*(t - u)) - 2* (MHch*MHch)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MW*MW*MW*MW)*(2*t*u - 16*(s - t - u)* (MHch*MHch) + 16*\
 
   (MHch*MHch*MHch*MHch) +  (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t + \
 
   (MH0*MH0))*(-u +  (MH0*MH0))* (MW*MW*MW*MW)) + ( (gc140*gc140)*\
 
   (gc143*gc143)*( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(t +  (MW*MW)) + \
 
   (( (MW*MW) - t)*( (MW*MW) - t)))*(-16* (MHch*MHch)* (MW*MW) +  ((s - t +\
 
   u)*(s - t + u))))/(2.*(-t +  (MA0*MA0))*(t -  (MH0*MH0))* (MW*MW*MW*MW)) +\
 
   ( (gc140*gc140*gc140*gc140)*( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(t + \
 
   (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))*(-16* (MHch*MHch)* (MW*MW) + \
 
   ((s - t + u)*(s - t + u))))/(4.* (MW*MW*MW*MW)* (( (MA0*MA0) - t)*(\
 
   (MA0*MA0) - t))) + ( (gc143*gc143*gc143*gc143)*( (MHch*MHch*MHch*MHch) -\
 
   2* (MHch*MHch)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))*(-16*\
 
   (MHch*MHch)* (MW*MW) +  ((s - t + u)*(s - t + u))))/(4.* (MW*MW*MW*MW)* ((\
 
   (MH0*MH0) - t)*( (MH0*MH0) - t)));
}
double DT::amp2s::HchHCHhh(double cos_t, double s){
double t =  (mh*mh) + (-s + cos_t*sqrt(s - 4* (mh*mh))*sqrt(s - 4*\
 
   (MHch*MHch)))/2. +  (MHch*MHch);
double u = -s - t + MHch*MHch + MHch*MHch + mh*mh + mh*mh;
return  (lam3*lam3) + (2* (lam3*lam3*lam3)* (v*v))/(t -  (MHch*MHch)) + (2*\
 
   (lam3*lam3*lam3)* (v*v))/(u -  (MHch*MHch)) + (2* (lam3*lam3*lam3*lam3)*\
 
   (v*v*v*v))/((-t +  (MHch*MHch))*(-u +  (MHch*MHch))) + (\
 
   (lam3*lam3*lam3*lam3)* (v*v*v*v))/ (( (MHch*MHch) - t)*( (MHch*MHch) - t))\
 
   + ( (lam3*lam3*lam3*lam3)* (v*v*v*v))/ (( (MHch*MHch) - u)*( (MHch*MHch) -\
 
   u)) + (12*lam* (lam3*lam3)*(s -  (mh*mh))* (v*v))/( (mh*mh*mh*mh) +  (s*s)\
 
   +  (mh*mh)*(-2*s +  (Wh*Wh))) + (36* (lam*lam)* (lam3*lam3)* (v*v*v*v))/(\
 
   (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh))) + (12*lam*\
 
   (lam3*lam3*lam3)*(-s +  (mh*mh))* (v*v*v*v))/((-t +  (MHch*MHch))*(\
 
   (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) + (12*lam*\
 
   (lam3*lam3*lam3)*(-s +  (mh*mh))* (v*v*v*v))/((-u +  (MHch*MHch))*(\
 
   (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh))));
}
double DT::amp2s::HchHCHhA(double cos_t, double s){
double t = (-s +  (mh*mh) + 2* (MHch*MHch) + cos_t*sqrt(s - 4*\
 
   (MHch*MHch))*sqrt( ((- (mh*mh) + s)*(- (mh*mh) + s))/s))/2.;
double u = -s - t + MHch*MHch + MHch*MHch + mh*mh + 0*0;
return -(( (gc47*gc47)* (lam3*lam3)*(-s + t + u - 3* (mh*mh) + 6*\
 
   (MHch*MHch))* (v*v))/((-t +  (MHch*MHch))*(-u +  (MHch*MHch)))) - (2*\
 
   (gc47*gc47)* (lam3*lam3)*(t +  (MHch*MHch))* (v*v))/ (( (MHch*MHch) - t)*(\
 
   (MHch*MHch) - t)) + ( (gc47*gc47)* (lam3*lam3)*(s + t - u -  (mh*mh) - 4*\
 
   (MHch*MHch))* (v*v))/ (( (MHch*MHch) - u)*( (MHch*MHch) - u));
}
double DT::amp2s::HchHCHhZ(double cos_t, double s){
double t = (-s +  (mh*mh) + 2* (MHch*MHch) +  (MZ*MZ) + cos_t*sqrt(s - 4*\
 
   (MHch*MHch))*sqrt(( (mh*mh*mh*mh) - 2* (mh*mh)*(s +  (MZ*MZ)) +  ((\
 
   (MZ*MZ) - s)*( (MZ*MZ) - s)))/s))/2.;
double u = -s - t + MHch*MHch + MHch*MHch + mh*mh + MZ*MZ;
return ( (gc159*gc159)* (lam3*lam3)*((-s - t + u +  (mh*mh))*(-t + \
 
   (MHch*MHch)) + (s - 2*t - u + 3* (mh*mh) - 5* (MHch*MHch))* (MZ*MZ) + \
 
   (MZ*MZ*MZ*MZ))* (v*v))/((-t +  (MHch*MHch))*(-u +  (MHch*MHch))* (MZ*MZ))\
 
   + ( (gc159*gc159)* (lam3*lam3)*( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(t\
 
   +  (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t)))* (v*v))/( (MZ*MZ)* ((\
 
   (MHch*MHch) - t)*( (MHch*MHch) - t))) + ( (gc159*gc159)* (lam3*lam3)*(\
 
   (mh*mh*mh*mh) - 16* (MHch*MHch)* (MZ*MZ) - 2* (mh*mh)*(s + t - u + \
 
   (MZ*MZ)) +  (( (MZ*MZ) + s + t - u)*( (MZ*MZ) + s + t - u)))* (v*v))/(4.*\
 
   (MZ*MZ)* (( (MHch*MHch) - u)*( (MHch*MHch) - u))) + (gc177*lam3*v*\
 
   (gc159*gc159)*(-s +  (MZ*MZ))*((t - u)*(s + t - u -  (mh*mh)) + (4*s + t -\
 
   u - 16* (MHch*MHch))* (MZ*MZ)))/(2.*(-u +  (MHch*MHch))* (MZ*MZ)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (gc177*lam3*v*\
 
   (gc159*gc159)*(-s +  (MZ*MZ))*(-((t - u)*(-t +  (MHch*MHch))) + (2*s - t +\
 
   u - 8* (MHch*MHch))* (MZ*MZ)))/((-t +  (MHch*MHch))* (MZ*MZ)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (gc159*gc159)*\
 
   (gc177*gc177)*(4*(s - 4* (MHch*MHch))* (MZ*MZ) +  ((t - u)*(t - u))))/(4.*\
 
   (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::amp2s::HchHCHAA(double cos_t, double s){
double t = (-s + cos_t*sqrt(s)*sqrt(s - 4* (MHch*MHch)))/2. +  (MHch*MHch);
double u = -s - t + MHch*MHch + MHch*MHch + 0*0 + 0*0;
return 16* (EL*EL*EL*EL) + (2* (EL*EL)* (gc47*gc47)*(-2*s + 3*t - u + 6*\
 
   (MHch*MHch)))/(-t +  (MHch*MHch)) + (2* (EL*EL)* (gc47*gc47)*(-2*s - t +\
 
   3*u + 6* (MHch*MHch)))/(-u +  (MHch*MHch)) + (2* (gc47*gc47*gc47*gc47)*(t\
 
   +  (MHch*MHch))*(-s + t - u + 4* (MHch*MHch)))/ (( (MHch*MHch) - t)*(\
 
   (MHch*MHch) - t)) + (2* (gc47*gc47*gc47*gc47)*(u +  (MHch*MHch))*(-s - t +\
 
   u + 4* (MHch*MHch)))/ (( (MHch*MHch) - u)*( (MHch*MHch) - u)) + (\
 
   (gc47*gc47*gc47*gc47)* ((6* (MHch*MHch) - s + t + u)*(6* (MHch*MHch) - s +\
 
   t + u)))/(2.*(-t +  (MHch*MHch))*(-u +  (MHch*MHch)));
}
double DT::amp2s::HchHCHAZ(double cos_t, double s){
double t = (-s + 2* (MHch*MHch) +  (MZ*MZ) + cos_t*sqrt(s - 4*\
 
   (MHch*MHch))*sqrt( ((- (MZ*MZ) + s)*(- (MZ*MZ) + s))/s))/2.;
double u = -s - t + MHch*MHch + MHch*MHch + 0*0 + MZ*MZ;
return (gc159*gc47* (EL*EL)*((t - u)*(-t +  (MHch*MHch)) + (-2*s + t - u + 8*\
 
   (MHch*MHch))* (MZ*MZ))*( (CW*CW) -  (SW*SW)))/(CW*SW*(-t +  (MHch*MHch))*\
 
   (MZ*MZ)) + (gc159*gc47* (EL*EL)*((s + t - u)*(-s - 2*t + 2* (MHch*MHch)) +\
 
   (3*(t + u) + 10* (MHch*MHch))* (MZ*MZ) - 3* (MZ*MZ*MZ*MZ))*( (CW*CW) - \
 
   (SW*SW)))/(2.*CW*SW*(-u +  (MHch*MHch))* (MZ*MZ)) - ( (gc159*gc159)*\
 
   (gc47*gc47)*(-s + t - u + 4* (MHch*MHch) +  (MZ*MZ))*(\
 
   (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(t +  (MZ*MZ)) +  (( (MZ*MZ) - t)*(\
 
   (MZ*MZ) - t))))/( (MZ*MZ)* (( (MHch*MHch) - t)*( (MHch*MHch) - t))) - (\
 
   (gc159*gc159)* (gc47*gc47)*(u +  (MHch*MHch))*(-16* (MHch*MHch)* (MZ*MZ) +\
 
    (( (MZ*MZ) + s + t - u)*( (MZ*MZ) + s + t - u))))/(2.* (MZ*MZ)* ((\
 
   (MHch*MHch) - u)*( (MHch*MHch) - u))) + ( (gc159*gc159)* (gc47*gc47)*((s +\
 
   t - u)*(-t +  (MHch*MHch))*(-s + t + u + 6* (MHch*MHch)) - (-4*s + 7*t +\
 
   4*u + 21* (MHch*MHch))* (MZ*MZ*MZ*MZ) + 3* (MZ*MZ*MZ*MZ*MZ*MZ) + \
 
   (MZ*MZ)*(-2*s*u - 14*(s - t - u)* (MHch*MHch) + 30* (MHch*MHch*MHch*MHch)\
 
   +  (s*s) + 5* (t*t) +  (u*u))))/(2.*(-t +  (MHch*MHch))*(-u + \
 
   (MHch*MHch))* (MZ*MZ)) + (3* (EL*EL*EL*EL)* (( (CW*CW) -  (SW*SW))*(\
 
   (CW*CW) -  (SW*SW))))/( (CW*CW)* (SW*SW));
}
double DT::amp2s::HchHCHZZ(double cos_t, double s){
double t =  (MHch*MHch) + (-s + cos_t*sqrt(s - 4* (MHch*MHch))*sqrt(s - 4*\
 
   (MZ*MZ)))/2. +  (MZ*MZ);
double u = -s - t + MHch*MHch + MHch*MHch + MZ*MZ + MZ*MZ;
return ( (gc159*gc159*gc159*gc159)*(-16* (MHch*MHch)* (MZ*MZ) +  ((s + t -\
 
   u)*(s + t - u)))*( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(u +  (MZ*MZ)) +\
 
    (( (MZ*MZ) - u)*( (MZ*MZ) - u))))/(4.* (MZ*MZ*MZ*MZ)* (( (MHch*MHch) -\
 
   u)*( (MHch*MHch) - u))) + ( (gc159*gc159*gc159*gc159)*(-8*(-s + 2*(t + u)\
 
   + 4* (MHch*MHch))* (MZ*MZ*MZ*MZ*MZ*MZ) + 16* (MZ*MZ*MZ*MZ*MZ*MZ*MZ*MZ) -\
 
   (-t +  (MHch*MHch))*(-u +  (MHch*MHch))*(- (s*s) +  ((t - u)*(t - u))) + \
 
   (MZ*MZ)*(-8*s*t*u + 8*s* (MHch*MHch*MHch*MHch) + (t + u)* (s*s) - (t + u)*\
 
   ((t - u)*(t - u)) - 2* (MHch*MHch)*( (s*s) + 3* ((t - u)*(t - u)))) + \
 
   (MZ*MZ*MZ*MZ)*(2*t*u - 16*(s - t - u)* (MHch*MHch) + 16*\
 
   (MHch*MHch*MHch*MHch) +  (s*s) + 7* (t*t) + 7* (u*u))))/(2.*(-t + \
 
   (MHch*MHch))*(-u +  (MHch*MHch))* (MZ*MZ*MZ*MZ)) + (\
 
   (gc159*gc159*gc159*gc159)*( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(t + \
 
   (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t)))*(-16* (MHch*MHch)* (MZ*MZ) + \
 
   ((s - t + u)*(s - t + u))))/(4.* (MZ*MZ*MZ*MZ)* (( (MHch*MHch) - t)*(\
 
   (MHch*MHch) - t))) + (gc177*lam3*v* (gc159*gc159)*(-s +  (mh*mh))*(s*(s +\
 
   t - u)*(-u +  (MHch*MHch)) - 2*(s + 3*t + u + 4* (MHch*MHch))*\
 
   (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*t*(t - u) + 3*s*(t +\
 
   u) - 2*(3*s + t - u)* (MHch*MHch) +  (s*s))))/(2.*(-u +  (MHch*MHch))*\
 
   (MZ*MZ*MZ*MZ)*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) +\
 
   (gc177*lam3*v* (gc159*gc159)*(-s +  (mh*mh))*(s*(s - t + u)*(-t + \
 
   (MHch*MHch)) - 2*(s + t + 3*u + 4* (MHch*MHch))* (MZ*MZ*MZ*MZ) + 8*\
 
   (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*u*(-t + u) + 3*s*(t + u) - 2*(3*s - t +\
 
   u)* (MHch*MHch) +  (s*s))))/(2.*(-t +  (MHch*MHch))* (MZ*MZ*MZ*MZ)*(\
 
   (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) + ( (gc177*gc177)*\
 
   (lam3*lam3)*(-4*s* (MZ*MZ) + 12* (MZ*MZ*MZ*MZ) +  (s*s))* (v*v))/(4.*\
 
   (MZ*MZ*MZ*MZ)*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) - (\
 
   (EL*EL)* (gc159*gc159)*(s*(s + t - u)*(-u +  (MHch*MHch)) - 2*(s + 3*t + u\
 
   + 4* (MHch*MHch))* (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) + \
 
   (MZ*MZ)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t - u)* (MHch*MHch) + \
 
   (s*s)))* (( (CW*CW) -  (SW*SW))*( (CW*CW) -  (SW*SW))))/(4.* (CW*CW)*(-u +\
 
    (MHch*MHch))* (MZ*MZ*MZ*MZ)* (SW*SW)) - ( (EL*EL)* (gc159*gc159)*(s*(s -\
 
   t + u)*(-t +  (MHch*MHch)) - 2*(s + t + 3*u + 4* (MHch*MHch))*\
 
   (MZ*MZ*MZ*MZ) + 8* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*u*(-t + u) + 3*s*(t +\
 
   u) - 2*(3*s - t + u)* (MHch*MHch) +  (s*s)))* (( (CW*CW) -  (SW*SW))*(\
 
   (CW*CW) -  (SW*SW))))/(4.* (CW*CW)*(-t +  (MHch*MHch))* (MZ*MZ*MZ*MZ)*\
 
   (SW*SW)) - (gc177*lam3*v* (EL*EL)*(-s +  (mh*mh))*(-4*s* (MZ*MZ) + 12*\
 
   (MZ*MZ*MZ*MZ) +  (s*s))* (( (CW*CW) -  (SW*SW))*( (CW*CW) - \
 
   (SW*SW))))/(4.* (CW*CW)* (MZ*MZ*MZ*MZ)* (SW*SW)*( (mh*mh*mh*mh) +  (s*s) +\
 
    (mh*mh)*(-2*s +  (Wh*Wh)))) + ( (EL*EL*EL*EL)*(-4*s* (MZ*MZ) + 12*\
 
   (MZ*MZ*MZ*MZ) +  (s*s))* (( (CW*CW) -  (SW*SW))*( (CW*CW) -  (SW*SW))*(\
 
   (CW*CW) -  (SW*SW))*( (CW*CW) -  (SW*SW))))/(16.* (CW*CW*CW*CW)*\
 
   (MZ*MZ*MZ*MZ)* (SW*SW*SW*SW));
}
double DT::amp2s::HchHCHwW(double cos_t, double s){
double t =  (MHch*MHch) + (-s + cos_t*sqrt(s - 4* (MHch*MHch))*sqrt(s - 4*\
 
   (MW*MW)))/2. +  (MW*MW);
double u = -s - t + MHch*MHch + MHch*MHch + MW*MW + MW*MW;
return -0.25*(gc134*gc47*(t - u)* (EL*EL)*(-12* (MW*MW*MW*MW) +  (s*s)))/(s*\
 
   (MW*MW*MW*MW)* (SW*SW)) - (gc130*gc140* (EL*EL)*(s*(s + t - u)*(-u + \
 
   (MHch*MHch)) - 2*(s + 3*t + u + 4* (MHch*MHch))* (MW*MW*MW*MW) + 8*\
 
   (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t -\
 
   u)* (MHch*MHch) +  (s*s))))/(4.*(-u +  (MA0*MA0))* (MW*MW*MW*MW)* (SW*SW))\
 
   + (gc133*gc143* (EL*EL)*(s*(s + t - u)*(-u +  (MHch*MHch)) - 2*(s + 3*t +\
 
   u + 4* (MHch*MHch))* (MW*MW*MW*MW) + 8* (MW*MW*MW*MW*MW*MW) + \
 
   (MW*MW)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t - u)* (MHch*MHch) + \
 
   (s*s))))/(4.*(-u +  (MH0*MH0))* (MW*MW*MW*MW)* (SW*SW)) + (\
 
   (EL*EL*EL*EL)*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s)))/(16.*\
 
   (MW*MW*MW*MW)* (SW*SW*SW*SW)) + ( (gc134*gc134)* (gc47*gc47)*( (s*s)* ((t\
 
   - u)*(t - u)) - 4*s* (MW*MW)*(8*s* (MHch*MHch) - 2* (s*s) +  ((t - u)*(t -\
 
   u))) + 4* (MW*MW*MW*MW)*(32*s* (MHch*MHch) - 8* (s*s) + 3* ((t - u)*(t -\
 
   u)))))/(4.* (MW*MW*MW*MW)* (s*s)) + (gc130*gc133*gc140*gc143*(-16*\
 
   (MHch*MHch)* (MW*MW) +  ((s + t - u)*(s + t - u)))*( (MHch*MHch*MHch*MHch)\
 
   - 2* (MHch*MHch)*(u +  (MW*MW)) +  (( (MW*MW) - u)*( (MW*MW) -\
 
   u))))/(2.*(-u +  (MA0*MA0))*(u -  (MH0*MH0))* (MW*MW*MW*MW)) + (\
 
   (gc130*gc130)* (gc140*gc140)*(-16* (MHch*MHch)* (MW*MW) +  ((s + t - u)*(s\
 
   + t - u)))*( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(u +  (MW*MW)) +  ((\
 
   (MW*MW) - u)*( (MW*MW) - u))))/(4.* (MW*MW*MW*MW)* (( (MA0*MA0) - u)*(\
 
   (MA0*MA0) - u))) + ( (gc133*gc133)* (gc143*gc143)*(-16* (MHch*MHch)*\
 
   (MW*MW) +  ((s + t - u)*(s + t - u)))*( (MHch*MHch*MHch*MHch) - 2*\
 
   (MHch*MHch)*(u +  (MW*MW)) +  (( (MW*MW) - u)*( (MW*MW) - u))))/(4.*\
 
   (MW*MW*MW*MW)* (( (MH0*MH0) - u)*( (MH0*MH0) - u))) +\
 
   (gc130*gc134*gc140*gc47*(s*(t - u)*(s + t - u)*(-u +  (MHch*MHch)) +\
 
   8*(-2*s - t + u + 8* (MHch*MHch))* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(-16*s*\
 
   (MHch*MHch*MHch*MHch) + (3*t - 7*u)* (s*s) + 2* (s*s*s) + 2*u* ((t - u)*(t\
 
   - u)) - 2* (MHch*MHch)*(s*(5*t - 13*u) + 2* (s*s) +  ((t - u)*(t - u))) +\
 
   s*( (t*t) -  (u*u))) + 2* (MW*MW*MW*MW)*(2*t*u + s*(t + 7*u) - 4*(3*t +\
 
   5*u)* (MHch*MHch) + 32* (MHch*MHch*MHch*MHch) - 2* (s*s) +  (t*t) - 3*\
 
   (u*u))))/(2.*s*(-u +  (MA0*MA0))* (MW*MW*MW*MW)) +\
 
   (gc133*gc134*gc143*gc47*(s*(s + t - u)*(-t + u)*(-u +  (MHch*MHch)) -\
 
   8*(-2*s - t + u + 8* (MHch*MHch))* (MW*MW*MW*MW*MW*MW) - 2*\
 
   (MW*MW*MW*MW)*(2*t*u + s*(t + 7*u) - 4*(3*t + 5*u)* (MHch*MHch) + 32*\
 
   (MHch*MHch*MHch*MHch) - 2* (s*s) +  (t*t) - 3* (u*u)) +  (MW*MW)*(16*s*\
 
   (MHch*MHch*MHch*MHch) + (-3*t + 7*u)* (s*s) - 2* (s*s*s) - 2*u* ((t -\
 
   u)*(t - u)) + 2* (MHch*MHch)*(s*(5*t - 13*u) + 2* (s*s) +  ((t - u)*(t -\
 
   u))) + s*(- (t*t) +  (u*u)))))/(2.*s*(-u +  (MH0*MH0))* (MW*MW*MW*MW)) +\
 
   (gc134*gc150*gc47*lam3*(t - u)*v*(-s +  (mh*mh))*(-12* (MW*MW*MW*MW) + \
 
   (s*s)))/(2.*s* (MW*MW*MW*MW)*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s + \
 
   (Wh*Wh)))) + (gc130*gc140*gc150*lam3*v*(-s +  (mh*mh))*(s*(s + t - u)*(-u\
 
   +  (MHch*MHch)) - 2*(s + 3*t + u + 4* (MHch*MHch))* (MW*MW*MW*MW) + 8*\
 
   (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t -\
 
   u)* (MHch*MHch) +  (s*s))))/(2.*(-u +  (MA0*MA0))* (MW*MW*MW*MW)*(\
 
   (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) -\
 
   (gc133*gc143*gc150*lam3*v*(-s +  (mh*mh))*(s*(s + t - u)*(-u + \
 
   (MHch*MHch)) - 2*(s + 3*t + u + 4* (MHch*MHch))* (MW*MW*MW*MW) + 8*\
 
   (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(2*t*(t - u) + 3*s*(t + u) - 2*(3*s + t -\
 
   u)* (MHch*MHch) +  (s*s))))/(2.*(-u +  (MH0*MH0))* (MW*MW*MW*MW)*(\
 
   (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) - (gc150*lam3*v*\
 
   (EL*EL)*(-s +  (mh*mh))*(-4*s* (MW*MW) + 12* (MW*MW*MW*MW) +  (s*s)))/(4.*\
 
   (MW*MW*MW*MW)* (SW*SW)*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s + \
 
   (Wh*Wh)))) + ( (gc150*gc150)* (lam3*lam3)*(-4*s* (MW*MW) + 12*\
 
   (MW*MW*MW*MW) +  (s*s))* (v*v))/(4.* (MW*MW*MW*MW)*( (mh*mh*mh*mh) + \
 
   (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) + (gc152*gc159*(t - u)* (EL*EL)*(-s +\
 
    (MZ*MZ))*(-12* (MW*MW*MW*MW) +  (s*s)))/(4.* (MW*MW*MW*MW)* (SW*SW)*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (gc152*gc152)*\
 
   (gc159*gc159)*( (s*s)* ((t - u)*(t - u)) - 4*s* (MW*MW)*(8*s* (MHch*MHch)\
 
   - 2* (s*s) +  ((t - u)*(t - u))) + 4* (MW*MW*MW*MW)*(32*s* (MHch*MHch) -\
 
   8* (s*s) + 3* ((t - u)*(t - u)))))/(4.* (MW*MW*MW*MW)*( (MZ*MZ*MZ*MZ) + \
 
   (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (gc134*gc152*gc159*gc47*(-s + \
 
   (MZ*MZ))*( (s*s)* ((t - u)*(t - u)) - 4*s* (MW*MW)*(8*s* (MHch*MHch) - 2*\
 
   (s*s) +  ((t - u)*(t - u))) + 4* (MW*MW*MW*MW)*(32*s* (MHch*MHch) - 8*\
 
   (s*s) + 3* ((t - u)*(t - u)))))/(2.*s* (MW*MW*MW*MW)*( (MZ*MZ*MZ*MZ) + \
 
   (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (gc130*gc140*gc152*gc159*(-s + \
 
   (MZ*MZ))*(s*(t - u)*(s + t - u)*(-u +  (MHch*MHch)) + 8*(-2*s - t + u + 8*\
 
   (MHch*MHch))* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(-16*s* (MHch*MHch*MHch*MHch)\
 
   + (3*t - 7*u)* (s*s) + 2* (s*s*s) + 2*u* ((t - u)*(t - u)) - 2*\
 
   (MHch*MHch)*(s*(5*t - 13*u) + 2* (s*s) +  ((t - u)*(t - u))) + s*( (t*t) -\
 
    (u*u))) + 2* (MW*MW*MW*MW)*(2*t*u + s*(t + 7*u) - 4*(3*t + 5*u)*\
 
   (MHch*MHch) + 32* (MHch*MHch*MHch*MHch) - 2* (s*s) +  (t*t) - 3*\
 
   (u*u))))/(2.*(-u +  (MA0*MA0))* (MW*MW*MW*MW)*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (gc133*gc143*gc152*gc159*(-s + \
 
   (MZ*MZ))*(s*(t - u)*(s + t - u)*(-u +  (MHch*MHch)) + 8*(-2*s - t + u + 8*\
 
   (MHch*MHch))* (MW*MW*MW*MW*MW*MW) +  (MW*MW)*(-16*s* (MHch*MHch*MHch*MHch)\
 
   + (3*t - 7*u)* (s*s) + 2* (s*s*s) + 2*u* ((t - u)*(t - u)) - 2*\
 
   (MHch*MHch)*(s*(5*t - 13*u) + 2* (s*s) +  ((t - u)*(t - u))) + s*( (t*t) -\
 
    (u*u))) + 2* (MW*MW*MW*MW)*(2*t*u + s*(t + 7*u) - 4*(3*t + 5*u)*\
 
   (MHch*MHch) + 32* (MHch*MHch*MHch*MHch) - 2* (s*s) +  (t*t) - 3*\
 
   (u*u))))/(2.*(-u +  (MH0*MH0))* (MW*MW*MW*MW)*( (MZ*MZ*MZ*MZ) +  (s*s) + \
 
   (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (gc150*gc152*gc159*lam3*(t -\
 
   u)*v*(mh*MZ*Wh*WZ + s*(s -  (MZ*MZ)) +  (mh*mh)*(-s +  (MZ*MZ)))*(-12*\
 
   (MW*MW*MW*MW) +  (s*s)))/(2.* (MW*MW*MW*MW)*( (mh*mh*mh*mh) +  (s*s) + \
 
   (mh*mh)*(-2*s +  (Wh*Wh)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
double DT::amp2s::HchHCHGG(double cos_t, double s){
return (4* (gc48*gc48)* (lam3*lam3)* (s*s)* (v*v))/( (mh*mh*mh*mh) +  (s*s) +\
 
    (mh*mh)*(-2*s +  (Wh*Wh)));
}
double DT::amp2s::HchHCHVEve(double cos_t, double s){
double t =  (MHch*MHch) + (-s + cos_t*sqrt(s - 4* (MHch*MHch))*sqrt(s - 4*\
 
   (Mnue*Mnue)))/2. +  (Mnue*Mnue);
double u = -s - t + MHch*MHch + MHch*MHch + Mnue*Mnue + Mnue*Mnue;
return ( (gc159*gc159)* (gc221*gc221)*(2*t*u - 2*s* (Mnue*Mnue) + \
 
   (MHch*MHch)*(-4*s + 8* (Mnue*Mnue)) +  (s*s) -  (t*t) -  (u*u)))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::HchHCHVMvm(double cos_t, double s){
double t =  (MHch*MHch) + (-s + cos_t*sqrt(s - 4* (MHch*MHch))*sqrt(s - 4*\
 
   (Mnum*Mnum)))/2. +  (Mnum*Mnum);
double u = -s - t + MHch*MHch + MHch*MHch + Mnum*Mnum + Mnum*Mnum;
return ( (gc159*gc159)* (gc222*gc222)*(2*t*u - 2*s* (Mnum*Mnum) + \
 
   (MHch*MHch)*(-4*s + 8* (Mnum*Mnum)) +  (s*s) -  (t*t) -  (u*u)))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::HchHCHVTvt(double cos_t, double s){
double t =  (MHch*MHch) + (-s + cos_t*sqrt(s - 4* (MHch*MHch))*sqrt(s - 4*\
 
   (Mnut*Mnut)))/2. +  (Mnut*Mnut);
double u = -s - t + MHch*MHch + MHch*MHch + Mnut*Mnut + Mnut*Mnut;
return ( (gc159*gc159)* (gc223*gc223)*(2*t*u - 2*s* (Mnut*Mnut) + \
 
   (MHch*MHch)*(-4*s + 8* (Mnut*Mnut)) +  (s*s) -  (t*t) -  (u*u)))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)));
}
double DT::amp2s::HchHCHEe(double cos_t, double s){
double t =  (Me*Me) + (-s + cos_t*sqrt(s - 4* (Me*Me))*sqrt(s - 4*\
 
   (MHch*MHch)))/2. +  (MHch*MHch);
double u = -s - t + MHch*MHch + MHch*MHch + Me*Me + Me*Me;
return (-2* (gc182*gc182)* (gc47*gc47)*(4*s* (MHch*MHch) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (8*gc182*gc47*gc93*lam3*Me*(t - u)*v*(-s + \
 
   (mh*mh)))/(s*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) + (2*\
 
   (gc93*gc93)* (lam3*lam3)*(s - 4* (Me*Me))* (v*v))/( (mh*mh*mh*mh) +  (s*s)\
 
   +  (mh*mh)*(-2*s +  (Wh*Wh))) + (2*gc159*gc182*(gc215L + gc215R)*gc47*(-s\
 
   +  (MZ*MZ))*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u))))/(s*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (\
 
   (gc159*gc159)*(4*gc215L*gc215R* (Me*Me)*(s - 4* (MHch*MHch)) + \
 
   (gc215L*gc215L)*(2*t*u - 4*s* (MHch*MHch) +  (Me*Me)*(-2*s + 8*\
 
   (MHch*MHch)) +  (s*s) -  (t*t) -  (u*u)) +  (gc215R*gc215R)*(2*t*u - 4*s*\
 
   (MHch*MHch) +  (Me*Me)*(-2*s + 8* (MHch*MHch)) +  (s*s) -  (t*t) - \
 
   (u*u))))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (4*gc159*(gc215L + gc215R)*gc93*lam3*Me*(t - u)*v*(mh*MZ*Wh*WZ + s*(s - \
 
   (MZ*MZ)) +  (mh*mh)*(-s +  (MZ*MZ))))/(( (mh*mh*mh*mh) +  (s*s) + \
 
   (mh*mh)*(-2*s +  (Wh*Wh)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
double DT::amp2s::HchHCHMm(double cos_t, double s){
double t =  (MHch*MHch) + (-s + cos_t*sqrt(s - 4* (MHch*MHch))*sqrt(s - 4*\
 
   (MM*MM)))/2. +  (MM*MM);
double u = -s - t + MHch*MHch + MHch*MHch + MM*MM + MM*MM;
return (-2* (gc183*gc183)* (gc47*gc47)*(4*s* (MHch*MHch) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (8*gc183*gc47*gc95*lam3*MM*(t - u)*v*(-s + \
 
   (mh*mh)))/(s*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) + (2*\
 
   (gc95*gc95)* (lam3*lam3)*(s - 4* (MM*MM))* (v*v))/( (mh*mh*mh*mh) +  (s*s)\
 
   +  (mh*mh)*(-2*s +  (Wh*Wh))) - (2*gc159*gc183*(gc216L + gc216R)*gc47*(-s\
 
   +  (MZ*MZ))*(-4*s* (MHch*MHch) +  (s*s) -  ((t - u)*(t - u))))/(s*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (\
 
   (gc159*gc159)*(4*gc216L*gc216R*(-s + 4* (MHch*MHch))* (MM*MM) - 2*(\
 
   (gc216L*gc216L) +  (gc216R*gc216R))*(-s + 4* (MHch*MHch))* (MM*MM) + \
 
   (gc216L*gc216L)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc216R*gc216R)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) + (4*gc159*(gc216L +\
 
   gc216R)*gc95*lam3*MM*(t - u)*v*(mh*MZ*Wh*WZ + s*(s -  (MZ*MZ)) + \
 
   (mh*mh)*(-s +  (MZ*MZ))))/(( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s + \
 
   (Wh*Wh)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::amp2s::HchHCHTAta(double cos_t, double s){
double t =  (MHch*MHch) + (-s + cos_t*sqrt(s - 4* (MHch*MHch))*sqrt(s - 4*\
 
   (MTA*MTA)))/2. +  (MTA*MTA);
double u = -s - t + MHch*MHch + MHch*MHch + MTA*MTA + MTA*MTA;
return (-2* (gc184*gc184)* (gc47*gc47)*(4*s* (MHch*MHch) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (8*gc184*gc47*gc97*lam3*MTA*(t - u)*v*(-s + \
 
   (mh*mh)))/(s*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) + (2*\
 
   (gc97*gc97)* (lam3*lam3)*(s - 4* (MTA*MTA))* (v*v))/( (mh*mh*mh*mh) + \
 
   (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh))) + (2*gc159*gc184*(gc217L +\
 
   gc217R)*gc47*(-s +  (MZ*MZ))*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t -\
 
   u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (\
 
   (gc159*gc159)*(4*gc217L*gc217R*(s - 4* (MHch*MHch))* (MTA*MTA) + \
 
   (gc217L*gc217L)*(2*t*u - 2*s* (MTA*MTA) +  (MHch*MHch)*(-4*s + 8*\
 
   (MTA*MTA)) +  (s*s) -  (t*t) -  (u*u)) +  (gc217R*gc217R)*(2*t*u - 2*s*\
 
   (MTA*MTA) +  (MHch*MHch)*(-4*s + 8* (MTA*MTA)) +  (s*s) -  (t*t) - \
 
   (u*u))))/( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (4*gc159*(gc217L + gc217R)*gc97*lam3*MTA*(t - u)*v*(mh*MZ*Wh*WZ + s*(s - \
 
   (MZ*MZ)) +  (mh*mh)*(-s +  (MZ*MZ))))/(( (mh*mh*mh*mh) +  (s*s) + \
 
   (mh*mh)*(-2*s +  (Wh*Wh)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
double DT::amp2s::HchHCHUu(double cos_t, double s){
double t =  (MHch*MHch) + (-s + cos_t*sqrt(s - 4* (MHch*MHch))*sqrt(s - 4*\
 
   (MU*MU)))/2. +  (MU*MU);
double u = -s - t + MHch*MHch + MHch*MHch + MU*MU + MU*MU;
return (-6* (gc187*gc187)* (gc47*gc47)*(4*s* (MHch*MHch) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc115*gc187*gc47*lam3*MU*(t - u)*v*(-s + \
 
   (mh*mh)))/(s*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) + (6*\
 
   (gc115*gc115)* (lam3*lam3)*(s - 4* (MU*MU))* (v*v))/( (mh*mh*mh*mh) + \
 
   (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh))) - (6*gc159*gc187*(gc220L +\
 
   gc220R)*gc47*(-s +  (MZ*MZ))*(-4*s* (MHch*MHch) +  (s*s) -  ((t - u)*(t -\
 
   u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (3*\
 
   (gc159*gc159)*(4*gc220L*gc220R*(-s + 4* (MHch*MHch))* (MU*MU) - 2*(\
 
   (gc220L*gc220L) +  (gc220R*gc220R))*(-s + 4* (MHch*MHch))* (MU*MU) + \
 
   (gc220L*gc220L)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc220R*gc220R)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (12*gc115*gc159*(gc220L + gc220R)*lam3*MU*(t - u)*v*(mh*MZ*Wh*WZ + s*(s - \
 
   (MZ*MZ)) +  (mh*mh)*(-s +  (MZ*MZ))))/(( (mh*mh*mh*mh) +  (s*s) + \
 
   (mh*mh)*(-2*s +  (Wh*Wh)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
double DT::amp2s::HchHCHCc(double cos_t, double s){
double t =  (MC*MC) + (-s + cos_t*sqrt(s - 4* (MC*MC))*sqrt(s - 4*\
 
   (MHch*MHch)))/2. +  (MHch*MHch);
double u = -s - t + MHch*MHch + MHch*MHch + MC*MC + MC*MC;
return (-6* (gc185*gc185)* (gc47*gc47)*(4*s* (MHch*MHch) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc111*gc185*gc47*lam3*MC*(t - u)*v*(-s + \
 
   (mh*mh)))/(s*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) + (6*\
 
   (gc111*gc111)* (lam3*lam3)*(s - 4* (MC*MC))* (v*v))/( (mh*mh*mh*mh) + \
 
   (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh))) - (6*gc159*gc185*(gc218L +\
 
   gc218R)*gc47*(-s +  (MZ*MZ))*(-4*s* (MHch*MHch) +  (s*s) -  ((t - u)*(t -\
 
   u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (3*\
 
   (gc159*gc159)*(4*gc218L*gc218R* (MC*MC)*(-s + 4* (MHch*MHch)) - 2*(\
 
   (gc218L*gc218L) +  (gc218R*gc218R))* (MC*MC)*(-s + 4* (MHch*MHch)) + \
 
   (gc218L*gc218L)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc218R*gc218R)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (12*gc111*gc159*(gc218L + gc218R)*lam3*MC*(t - u)*v*(mh*MZ*Wh*WZ + s*(s - \
 
   (MZ*MZ)) +  (mh*mh)*(-s +  (MZ*MZ))))/(( (mh*mh*mh*mh) +  (s*s) + \
 
   (mh*mh)*(-2*s +  (Wh*Wh)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
double DT::amp2s::HchHCHTt(double cos_t, double s){
double t =  (MHch*MHch) + (-s + cos_t*sqrt(s - 4* (MHch*MHch))*sqrt(s - 4*\
 
   (MT*MT)))/2. +  (MT*MT);
double u = -s - t + MHch*MHch + MHch*MHch + MT*MT + MT*MT;
return (-6* (gc186*gc186)* (gc47*gc47)*(4*s* (MHch*MHch) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc113*gc186*gc47*lam3*MT*(t - u)*v*(-s + \
 
   (mh*mh)))/(s*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) + (6*\
 
   (gc113*gc113)* (lam3*lam3)*(s - 4* (MT*MT))* (v*v))/( (mh*mh*mh*mh) + \
 
   (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh))) - (6*gc159*gc186*(gc219L +\
 
   gc219R)*gc47*(-s +  (MZ*MZ))*(-4*s* (MHch*MHch) +  (s*s) -  ((t - u)*(t -\
 
   u))))/(s*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (3*\
 
   (gc159*gc159)*(4*gc219L*gc219R*(-s + 4* (MHch*MHch))* (MT*MT) - 2*(\
 
   (gc219L*gc219L) +  (gc219R*gc219R))*(-s + 4* (MHch*MHch))* (MT*MT) + \
 
   (gc219L*gc219L)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc219R*gc219R)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) +\
 
   (12*gc113*gc159*(gc219L + gc219R)*lam3*MT*(t - u)*v*(mh*MZ*Wh*WZ + s*(s - \
 
   (MZ*MZ)) +  (mh*mh)*(-s +  (MZ*MZ))))/(( (mh*mh*mh*mh) +  (s*s) + \
 
   (mh*mh)*(-2*s +  (Wh*Wh)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s + \
 
   (WZ*WZ))));
}
double DT::amp2s::HchHCHDd(double cos_t, double s){
double t =  (MD*MD) + (-s + cos_t*sqrt(s - 4* (MD*MD))*sqrt(s - 4*\
 
   (MHch*MHch)))/2. +  (MHch*MHch);
double u = -s - t + MHch*MHch + MHch*MHch + MD*MD + MD*MD;
return (-6* (gc180*gc180)* (gc47*gc47)*(4*s* (MHch*MHch) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc180*gc47*gc80*lam3*MD*(t - u)*v*(-s + \
 
   (mh*mh)))/(s*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) + (6*\
 
   (gc80*gc80)* (lam3*lam3)*(s - 4* (MD*MD))* (v*v))/( (mh*mh*mh*mh) +  (s*s)\
 
   +  (mh*mh)*(-2*s +  (Wh*Wh))) - (6*gc159*gc180*(gc213L + gc213R)*gc47*(-s\
 
   +  (MZ*MZ))*(-4*s* (MHch*MHch) +  (s*s) -  ((t - u)*(t - u))))/(s*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (3*\
 
   (gc159*gc159)*(4*gc213L*gc213R* (MD*MD)*(-s + 4* (MHch*MHch)) - 2*(\
 
   (gc213L*gc213L) +  (gc213R*gc213R))* (MD*MD)*(-s + 4* (MHch*MHch)) + \
 
   (gc213L*gc213L)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc213R*gc213R)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) + (12*gc159*(gc213L +\
 
   gc213R)*gc80*lam3*MD*(t - u)*v*(mh*MZ*Wh*WZ + s*(s -  (MZ*MZ)) + \
 
   (mh*mh)*(-s +  (MZ*MZ))))/(( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s + \
 
   (Wh*Wh)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::amp2s::HchHCHSs(double cos_t, double s){
double t =  (MHch*MHch) + (-s + cos_t*sqrt(s - 4* (MHch*MHch))*sqrt(s - 4*\
 
   (MS*MS)))/2. +  (MS*MS);
double u = -s - t + MHch*MHch + MHch*MHch + MS*MS + MS*MS;
return (-6* (gc181*gc181)* (gc47*gc47)*(4*s* (MHch*MHch) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc181*gc47*gc82*lam3*MS*(t - u)*v*(-s + \
 
   (mh*mh)))/(s*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) + (6*\
 
   (gc82*gc82)* (lam3*lam3)*(s - 4* (MS*MS))* (v*v))/( (mh*mh*mh*mh) +  (s*s)\
 
   +  (mh*mh)*(-2*s +  (Wh*Wh))) - (6*gc159*gc181*(gc214L + gc214R)*gc47*(-s\
 
   +  (MZ*MZ))*(-4*s* (MHch*MHch) +  (s*s) -  ((t - u)*(t - u))))/(s*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (3*\
 
   (gc159*gc159)*(4*gc214L*gc214R*(-s + 4* (MHch*MHch))* (MS*MS) - 2*(\
 
   (gc214L*gc214L) +  (gc214R*gc214R))*(-s + 4* (MHch*MHch))* (MS*MS) + \
 
   (gc214L*gc214L)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc214R*gc214R)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) + (12*gc159*(gc214L +\
 
   gc214R)*gc82*lam3*MS*(t - u)*v*(mh*MZ*Wh*WZ + s*(s -  (MZ*MZ)) + \
 
   (mh*mh)*(-s +  (MZ*MZ))))/(( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s + \
 
   (Wh*Wh)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::amp2s::HchHCHBb(double cos_t, double s){
double t =  (MB*MB) + (-s + cos_t*sqrt(s - 4* (MB*MB))*sqrt(s - 4*\
 
   (MHch*MHch)))/2. +  (MHch*MHch);
double u = -s - t + MHch*MHch + MHch*MHch + MB*MB + MB*MB;
return (-6* (gc179*gc179)* (gc47*gc47)*(4*s* (MHch*MHch) -  (s*s) +  ((t -\
 
   u)*(t - u))))/ (s*s) - (24*gc179*gc47*gc78*lam3*MB*(t - u)*v*(-s + \
 
   (mh*mh)))/(s*( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s +  (Wh*Wh)))) + (6*\
 
   (gc78*gc78)* (lam3*lam3)*(s - 4* (MB*MB))* (v*v))/( (mh*mh*mh*mh) +  (s*s)\
 
   +  (mh*mh)*(-2*s +  (Wh*Wh))) - (6*gc159*gc179*(gc212L + gc212R)*gc47*(-s\
 
   +  (MZ*MZ))*(-4*s* (MHch*MHch) +  (s*s) -  ((t - u)*(t - u))))/(s*(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (3*\
 
   (gc159*gc159)*(4*gc212L*gc212R* (MB*MB)*(-s + 4* (MHch*MHch)) - 2*(\
 
   (gc212L*gc212L) +  (gc212R*gc212R))* (MB*MB)*(-s + 4* (MHch*MHch)) + \
 
   (gc212L*gc212L)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u))) + \
 
   (gc212R*gc212R)*(4*s* (MHch*MHch) -  (s*s) +  ((t - u)*(t - u)))))/(\
 
   (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))) + (12*gc159*(gc212L +\
 
   gc212R)*gc78*lam3*MB*(t - u)*v*(mh*MZ*Wh*WZ + s*(s -  (MZ*MZ)) + \
 
   (mh*mh)*(-s +  (MZ*MZ))))/(( (mh*mh*mh*mh) +  (s*s) +  (mh*mh)*(-2*s + \
 
   (Wh*Wh)))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
