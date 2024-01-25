///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../amp2s/allamp2s.hpp"
#include "../../include/declarations.hpp"

double DT::amp2s::H0HchhW(double cos_t, double s){
double t = (s* (MH0*MH0) +  (mh*mh)*(s +  (MH0*MH0) -  (MHch*MHch)) + s*\
 
   (MHch*MHch) + s* (MW*MW) -  (MH0*MH0)* (MW*MW) +  (MHch*MHch)* (MW*MW) +\
 
   cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s +  (MHch*MHch)) +  ((\
 
   (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (mh*mh*mh*mh) - 2*\
 
   (mh*mh)*(s +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + mh*mh + MW*MW;
return (lam3*(lam3 + lam4 + lam5)* (gc143*gc143)*((-t +  (MHch*MHch))*(-s - t\
 
   + u +  (mh*mh) -  (MH0*MH0) +  (MHch*MHch)) + (s - 2*t - u + 3* (mh*mh) -\
 
   3* (MH0*MH0) - 2* (MHch*MHch))* (MW*MW) +  (MW*MW*MW*MW))* (v*v))/((-t + \
 
   (MH0*MH0))*(-u +  (MHch*MHch))* (MW*MW)) + ( (gc143*gc143)* ((lam3 + lam4\
 
   + lam5)*(lam3 + lam4 + lam5))*( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(t\
 
   +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))* (v*v))/( (MW*MW)* ((\
 
   (MH0*MH0) - t)*( (MH0*MH0) - t))) + ( (gc143*gc143)* (lam3*lam3)*(-2*(-s -\
 
   t + u +  (mh*mh) + 7* (MH0*MH0) +  (MHch*MHch))* (MW*MW) +  (MW*MW*MW*MW)\
 
   +  (( (mh*mh) -  (MH0*MH0) +  (MHch*MHch) - s - t + u)*( (mh*mh) - \
 
   (MH0*MH0) +  (MHch*MHch) - s - t + u)))* (v*v))/(4.* (MW*MW)* ((\
 
   (MHch*MHch) - u)*( (MHch*MHch) - u))) - (gc143*(lam3 + lam4 + lam5)*v*(-s\
 
   +  (MW*MW))*((-(gc142*(lam4 + lam5)*v*(-s +  (mh*mh))) + gc143*gc150*(t -\
 
   u +  (MH0*MH0) -  (MHch*MHch)))*(-t +  (MHch*MHch)) + (-(gc142*(lam4 +\
 
   lam5)*v*(-s - t - 2*u + 3* (mh*mh) + 3* (MHch*MHch))) + gc143*gc150*(-2*s\
 
   + t - u + 3* (MH0*MH0) + 5* (MHch*MHch)))* (MW*MW) - gc142*(lam4 +\
 
   lam5)*v* (MW*MW*MW*MW)))/((-t +  (MH0*MH0))* (MW*MW)*( (MW*MW*MW*MW) + \
 
   (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (gc143*lam3*v*(-s +  (MW*MW))*((-s\
 
   - t + u +  (mh*mh) -  (MH0*MH0) +  (MHch*MHch))*(gc142*(lam4 + lam5)*v*(-s\
 
   +  (mh*mh)) + gc143*gc150*(-t + u -  (MH0*MH0) +  (MHch*MHch))) -\
 
   (gc142*(lam4 + lam5)*v*(2*s - t + u + 2* (mh*mh) + 3* (MH0*MH0) - 3*\
 
   (MHch*MHch)) + gc143*gc150*(-4*s - t + u + 11* (MH0*MH0) + 5*\
 
   (MHch*MHch)))* (MW*MW) + gc142*(lam4 + lam5)*v* (MW*MW*MW*MW)))/(2.*(-u + \
 
   (MHch*MHch))* (MW*MW)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s + \
 
   (WW*WW)))) + ( (gc142*gc142)* ((lam4 + lam5)*(lam4 + lam5))*\
 
   (MW*MW*MW*MW)* (v*v) - 2* (MW*MW)*(gc142*gc143*gc150*(lam4 + lam5)*v*(-t +\
 
   u + 3* (MH0*MH0) - 3* (MHch*MHch)) + 2* (gc143*gc143)* (gc150*gc150)*(-s +\
 
   2* (MH0*MH0) + 2* (MHch*MHch)) +  (gc142*gc142)* ((lam4 + lam5)*(lam4 +\
 
   lam5))*(s +  (mh*mh))* (v*v)) +  ((gc143*gc150*( (MH0*MH0) -  (MHch*MHch)\
 
   + t - u) - gc142*(lam4 + lam5)*( (mh*mh) - s)*v)*(gc143*gc150*( (MH0*MH0)\
 
   -  (MHch*MHch) + t - u) - gc142*(lam4 + lam5)*( (mh*mh) - s)*v)))/(4.*\
 
   (MW*MW)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::amp2s::H0HchAW(double cos_t, double s){
double t = (s* (MHch*MHch) +  (MH0*MH0)*(s -  (MW*MW)) + s* (MW*MW) + \
 
   (MHch*MHch)* (MW*MW) + cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s\
 
   +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt( ((\
 
   (MW*MW) - s)*( (MW*MW) - s))/s) -  (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + 0*0 + MW*MW;
return (gc143*gc47* (EL*EL)*(-((s + t - u +  (MH0*MH0) -  (MHch*MHch))*(-s -\
 
   2*t + 2* (MHch*MHch))) - (3*(t + u) + 9* (MH0*MH0) +  (MHch*MHch))*\
 
   (MW*MW) + 3* (MW*MW*MW*MW)))/(4.*SW*(-u +  (MHch*MHch))* (MW*MW)) + (3*\
 
   (EL*EL*EL*EL))/(4.* (SW*SW)) - ( (gc143*gc143)* (gc47*gc47)*(u + \
 
   (MHch*MHch))*(-2*(-s - t + u + 7* (MH0*MH0) +  (MHch*MHch))* (MW*MW) + \
 
   (MW*MW*MW*MW) +  (( (MH0*MH0) -  (MHch*MHch) + s + t - u)*( (MH0*MH0) - \
 
   (MHch*MHch) + s + t - u))))/(2.* (MW*MW)* (( (MHch*MHch) - u)*(\
 
   (MHch*MHch) - u))) - ( (EL*EL)*(-s +  (MW*MW))*(gc134*gc143*s*(t - u + \
 
   (MH0*MH0) -  (MHch*MHch)) + (6*gc139*(lam4 + lam5)*v + gc134*gc143*(-11*t\
 
   + 11*u - 3* (MH0*MH0) + 3* (MHch*MHch)))* (MW*MW)))/(4.*SW* (MW*MW)*(\
 
   (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (gc143*gc47*(-s + \
 
   (MW*MW))*((3*gc139*(lam4 + lam5)*v + 10*gc134*gc143*(-2*s - t + u + 6*\
 
   (MH0*MH0) + 2* (MHch*MHch)))* (MW*MW*MW*MW) +  (MW*MW)*(-(gc139*(lam4 +\
 
   lam5)*v*(3*(t + u) + 9* (MH0*MH0) +  (MHch*MHch))) + 2*gc134*gc143*(6*\
 
   (MH0*MH0*MH0*MH0) + (2*s - 8*t - 7*u)* (MHch*MHch) +  (MH0*MH0)*(-14*s -\
 
   25*t - 8*u + 45* (MHch*MHch)) - 3* (MHch*MHch*MHch*MHch) + 3*(t*u + 2*s*(t\
 
   + u) +  (t*t) - 2* (u*u)))) - (s + t - u +  (MH0*MH0) - \
 
   (MHch*MHch))*(gc139*(lam4 + lam5)*v*(-s - 2*t + 2* (MHch*MHch)) +\
 
   2*gc134*gc143*(-(s*t) + s*u - t*u + 3*(2*s + t)* (MHch*MHch) + \
 
   (MH0*MH0)*(2*s - 2*t - u + 3* (MHch*MHch)) - 3* (MHch*MHch*MHch*MHch) - 2*\
 
   (s*s) +  (u*u)))))/(4.*(-u +  (MHch*MHch))* (MW*MW)*( (MW*MW*MW*MW) + \
 
   (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (4* (gc134*gc134)*\
 
   (gc143*gc143)*(-s + 2* (MH0*MH0) + 2* (MHch*MHch))* (MW*MW*MW*MW) +\
 
   gc134*gc143*s*(gc139*(lam4 + lam5)*v*(t - u +  (MH0*MH0) -  (MHch*MHch)) +\
 
   2*gc134*gc143*(2*t*u + 2* (MH0*MH0*MH0*MH0) + (-4*s - t + u)* (MHch*MHch)\
 
   -  (MH0*MH0)*(4*s - t + u + 4* (MHch*MHch)) + 2* (MHch*MHch*MHch*MHch) +\
 
   2* (s*s) -  (t*t) -  (u*u))) +  (MW*MW)*(-(gc134*gc139*gc143*(lam4 +\
 
   lam5)*v*(11*(t - u) + 3* (MH0*MH0) - 3* (MHch*MHch))) - 2* (gc134*gc134)*\
 
   (gc143*gc143)*(10*t*u + 10* (MH0*MH0*MH0*MH0) + (-16*s + t - u)*\
 
   (MHch*MHch) -  (MH0*MH0)*(16*s + t - u + 20* (MHch*MHch)) + 10*\
 
   (MHch*MHch*MHch*MHch) + 8* (s*s) - 5* (t*t) - 5* (u*u)) + 3*\
 
   (gc139*gc139)* ((lam4 + lam5)*(lam4 + lam5))* (v*v)))/(4.* (MW*MW)*(\
 
   (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::amp2s::H0HchZW(double cos_t, double s){
double t = (s* (MHch*MHch) + s* (MW*MW) +  (MHch*MHch)* (MW*MW) + s* (MZ*MZ)\
 
   -  (MHch*MHch)* (MZ*MZ) +  (MH0*MH0)*(s -  (MW*MW) +  (MZ*MZ)) +\
 
   cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s +  (MHch*MHch)) +  ((\
 
   (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MW*MW*MW*MW) - 2*\
 
   (MW*MW)*(s +  (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + MZ*MZ + MW*MW;
return -0.25*(gc143*gc159* (EL*EL)*( (MW*MW*MW*MW)*(-u +  (MHch*MHch) + 3*\
 
   (MZ*MZ)) + (s + t - u +  (MH0*MH0) -  (MHch*MHch) -  (MZ*MZ))*(s*(-u + \
 
   (MHch*MHch)) + (s + 2*t + u - 3* (MHch*MHch))* (MZ*MZ) -  (MZ*MZ*MZ*MZ)) +\
 
    (MW*MW)*((-u +  (MHch*MHch))*(-2*s + t - u - 3* (MH0*MH0) + 3*\
 
   (MHch*MHch)) - (3*t + u + 9* (MH0*MH0) + 3* (MHch*MHch))* (MZ*MZ) + 4*\
 
   (MZ*MZ*MZ*MZ))))/(CW*(-u +  (MHch*MHch))* (MW*MW)* (MZ*MZ)) + (\
 
   (EL*EL*EL*EL)*( (MW*MW*MW*MW) - 2* (MW*MW)*(s - 5* (MZ*MZ)) +  (( (MZ*MZ)\
 
   - s)*( (MZ*MZ) - s))))/(16.* (CW*CW)* (MW*MW)* (MZ*MZ)) + ( (gc140*gc140)*\
 
   (gc156*gc156)*( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(t +  (MW*MW)) + \
 
   (( (MW*MW) - t)*( (MW*MW) - t)))*( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(-s +\
 
   t - u +  (MHch*MHch) +  (MW*MW) + 7* (MZ*MZ)) +  (( (MHch*MHch) +  (MW*MW)\
 
   -  (MZ*MZ) - s + t - u)*( (MHch*MHch) +  (MW*MW) -  (MZ*MZ) - s + t -\
 
   u))))/(4.* (MW*MW)* (MZ*MZ)* (( (MA0*MA0) - t)*( (MA0*MA0) - t))) + (\
 
   (gc143*gc143)* (gc159*gc159)*( (MW*MW*MW*MW) - 2* (MW*MW)*(-s - t + u + 7*\
 
   (MH0*MH0) +  (MHch*MHch) +  (MZ*MZ)) +  (( (MH0*MH0) -  (MHch*MHch) - \
 
   (MZ*MZ) + s + t - u)*( (MH0*MH0) -  (MHch*MHch) -  (MZ*MZ) + s + t -\
 
   u)))*( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(u +  (MZ*MZ)) +  (( (MZ*MZ)\
 
   - u)*( (MZ*MZ) - u))))/(4.* (MW*MW)* (MZ*MZ)* (( (MHch*MHch) - u)*(\
 
   (MHch*MHch) - u))) + (gc140*gc156* (EL*EL)*( (MW*MW*MW*MW*MW*MW) - \
 
   (MW*MW*MW*MW)*(2*s + 3*u +  (MH0*MH0) - 4* (MHch*MHch) - 4* (MZ*MZ)) + (-t\
 
   +  (MHch*MHch))*(s*(s - t + u +  (MH0*MH0) -  (MHch*MHch)) + (-2*s - t + u\
 
   - 3* (MH0*MH0) + 3* (MHch*MHch))* (MZ*MZ) +  (MZ*MZ*MZ*MZ)) + \
 
   (MW*MW)*(s*t + 3*s*u - t*u +  (MH0*MH0)*(s + t + 2*u - 3* (MHch*MHch)) -\
 
   5*s* (MHch*MHch) + 2*t* (MHch*MHch) - 5*u* (MHch*MHch) + 3*\
 
   (MHch*MHch*MHch*MHch) - (t + 3*u + 9* (MH0*MH0) + 3* (MHch*MHch))* (MZ*MZ)\
 
   + 3* (MZ*MZ*MZ*MZ) +  (s*s) -  (t*t) + 2* (u*u))))/(4.*CW*(-t + \
 
   (MA0*MA0))* (MW*MW)* (MZ*MZ)) + (gc140*gc143*gc156*gc159*(\
 
   (MW*MW*MW*MW*MW*MW)*(u -  (MHch*MHch) - 3* (MZ*MZ)) +  (MW*MW*MW*MW)*((-u\
 
   +  (MHch*MHch))*(t + 2*u + 4* (MH0*MH0) +  (MHch*MHch)) + (-4*s + 7*t +\
 
   8*u + 12* (MH0*MH0) + 5* (MHch*MHch))* (MZ*MZ) - 10* (MZ*MZ*MZ*MZ)) - (-t\
 
   +  (MHch*MHch))*(-((2*t + u + 4* (MH0*MH0) +  (MHch*MHch))* (MZ*MZ*MZ*MZ))\
 
   +  (MZ*MZ*MZ*MZ*MZ*MZ) + (-u +  (MHch*MHch))*(2*t*u +  (MH0*MH0*MH0*MH0) -\
 
   2*s* (MHch*MHch) - 2* (MH0*MH0)*(-s +  (MHch*MHch)) + \
 
   (MHch*MHch*MHch*MHch) +  (s*s) -  (t*t) -  (u*u)) +  (MZ*MZ)*(4*s*u + 3*\
 
   (MH0*MH0*MH0*MH0) +  (MH0*MH0)*(2*s + 4*t - 2* (MHch*MHch)) + 2*(s + t -\
 
   3*u)* (MHch*MHch) -  (MHch*MHch*MHch*MHch) -  (s*s) +  (t*t) -  (u*u))) + \
 
   (MW*MW)*((-4*s + 8*t + 7*u + 12* (MH0*MH0) + 5* (MHch*MHch))*\
 
   (MZ*MZ*MZ*MZ) - 3* (MZ*MZ*MZ*MZ*MZ*MZ) + (-u +  (MHch*MHch))*(-4*s*t - 3*\
 
   (MH0*MH0*MH0*MH0) - 2*(s - 3*t + u)* (MHch*MHch) + 2* (MH0*MH0)*(-s - 2*u\
 
   +  (MHch*MHch)) +  (MHch*MHch*MHch*MHch) +  (s*s) +  (t*t) -  (u*u)) - \
 
   (MZ*MZ)*(9* (MH0*MH0*MH0*MH0) + 2*(-5*s + t + u)* (MHch*MHch) + 6*\
 
   (MH0*MH0)*(-s + 2*(t + u) +  (MHch*MHch)) + 11* (MHch*MHch*MHch*MHch) + \
 
   (s*s) + 5* (t*t) + 5* (u*u)))))/(2.*(-t +  (MA0*MA0))*(-u +  (MHch*MHch))*\
 
   (MW*MW)* (MZ*MZ)) + ( (EL*EL)*(-s +  (MW*MW))*(gc169*(lam4 + lam5)*v*(\
 
   (MW*MW*MW*MW) + 2* (MW*MW)*(-s + 5* (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ)\
 
   - s))) + 2*gc143*gc152*(2* (MH0*MH0)*( (MW*MW) -  (MZ*MZ))*(-s +  (MW*MW)\
 
   +  (MZ*MZ)) - 2* (MHch*MHch)*( (MW*MW) -  (MZ*MZ))*(-s +  (MW*MW) + \
 
   (MZ*MZ)) - (t - u)*( (MW*MW*MW*MW) + 10* (MW*MW)* (MZ*MZ) +  (MZ*MZ*MZ*MZ)\
 
   -  (s*s)))))/(8.*CW* (MW*MW)* (MZ*MZ)*( (MW*MW*MW*MW) +  (s*s) + \
 
   (MW*MW)*(-2*s +  (WW*WW)))) - (gc143*gc159*(-s +  (MW*MW))*(\
 
   (MW*MW*MW*MW)*((-u +  (MHch*MHch))*(gc169*(lam4 + lam5)*v +\
 
   2*gc143*gc152*(-4*s - t + u + 10* (MH0*MH0) + 6* (MHch*MHch))) +\
 
   (3*gc169*(lam4 + lam5)*v + 10*gc143*gc152*(-2*s - t + u + 6* (MH0*MH0) +\
 
   2* (MHch*MHch)))* (MZ*MZ)) +  (MW*MW)*(4*(gc169*(lam4 + lam5)*v +\
 
   2*gc143*gc152*(-2*s - t + u + 5* (MH0*MH0) + 3* (MHch*MHch)))*\
 
   (MZ*MZ*MZ*MZ) +  (MZ*MZ)*(-(gc169*(lam4 + lam5)*v*(3*t + u + 9* (MH0*MH0)\
 
   + 3* (MHch*MHch))) + 2*gc143*gc152*(6*s*t + 6*s*u + 2*t*u + 6*\
 
   (MH0*MH0*MH0*MH0) + (2*s - 7*t - 5*u)* (MHch*MHch) +  (MH0*MH0)*(-14*s -\
 
   25*t - 11*u + 48* (MHch*MHch)) - 6* (MHch*MHch*MHch*MHch) + 3* (t*t) - 5*\
 
   (u*u))) + (-u +  (MHch*MHch))*(-(gc169*(lam4 + lam5)*v*(2*s - t + u + 3*\
 
   (MH0*MH0) - 3* (MHch*MHch))) + 2*gc143*gc152*(2*t*u + 2* (MH0*MH0*MH0*MH0)\
 
   - 3*(2*s - t + u)* (MHch*MHch) -  (MH0*MH0)*(10*s + 3*t - 3*u + 4*\
 
   (MHch*MHch)) + 2* (MHch*MHch*MHch*MHch) + 4* (s*s) -  (t*t) -  (u*u)))) -\
 
   (s + t - u +  (MH0*MH0) -  (MHch*MHch) -  (MZ*MZ))*(-(s*(2*gc143*gc152*(t\
 
   - u) + gc169*(lam4 + lam5)*v)*(-u +  (MHch*MHch))) + (gc169*(lam4 +\
 
   lam5)*v - 2*gc143*gc152*(-2*s - t + u + 2* (MH0*MH0) + 6* (MHch*MHch)))*\
 
   (MZ*MZ*MZ*MZ) +  (MZ*MZ)*(gc169*(lam4 + lam5)*v*(-s - 2*t - u + 3*\
 
   (MHch*MHch)) + 2*gc143*gc152*(-(s*t) + s*u - t*u + (6*s + 3*t - u)*\
 
   (MHch*MHch) + 2* (MH0*MH0)*(s - t +  (MHch*MHch)) - 2*\
 
   (MHch*MHch*MHch*MHch) - 2* (s*s) +  (u*u))))))/(4.*(-u +  (MHch*MHch))*\
 
   (MW*MW)* (MZ*MZ)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) +\
 
   (gc140*gc156*(-s +  (MW*MW))*((gc169*(lam4 + lam5)*v + 2*gc143*gc152*(-2*s\
 
   + t - u + 2* (MH0*MH0) + 6* (MHch*MHch)))* (MW*MW*MW*MW*MW*MW) - (-t + \
 
   (MHch*MHch))*(-(s*(2*gc143*gc152*(t - u) + gc169*(lam4 + lam5)*v)*(s - t +\
 
   u +  (MH0*MH0) -  (MHch*MHch))) + (-(gc169*(lam4 + lam5)*v) +\
 
   2*gc143*gc152*(-4*s + t - u + 10* (MH0*MH0) + 6* (MHch*MHch)))*\
 
   (MZ*MZ*MZ*MZ) +  (MZ*MZ)*(gc169*(lam4 + lam5)*v*(2*s + t - u + 3*\
 
   (MH0*MH0) - 3* (MHch*MHch)) + 2*gc143*gc152*(2*t*u + 2* (MH0*MH0*MH0*MH0)\
 
   - 3*(2*s + t - u)* (MHch*MHch) -  (MH0*MH0)*(10*s - 3*t + 3*u + 4*\
 
   (MHch*MHch)) + 2* (MHch*MHch*MHch*MHch) + 4* (s*s) -  (t*t) -  (u*u)))) - \
 
   (MW*MW*MW*MW)*(gc169*(lam4 + lam5)*v*(2*s + 3*u +  (MH0*MH0) - 4*\
 
   (MHch*MHch)) + 4*(-(gc169*(lam4 + lam5)*v) + 2*gc143*gc152*(-2*s + t - u +\
 
   5* (MH0*MH0) + 3* (MHch*MHch)))* (MZ*MZ) + 2*gc143*gc152*(4*s*t - 4*s*u +\
 
   t*u + 2* (MH0*MH0*MH0*MH0) + 2*(7*s - 4*t + 5*u)* (MHch*MHch) + \
 
   (MH0*MH0)*(2*s - t - u + 6* (MHch*MHch)) - 8* (MHch*MHch*MHch*MHch) - 4*\
 
   (s*s) -  (u*u))) +  (MW*MW)*((3*gc169*(lam4 + lam5)*v -\
 
   10*gc143*gc152*(-2*s + t - u + 6* (MH0*MH0) + 2* (MHch*MHch)))*\
 
   (MZ*MZ*MZ*MZ) + gc169*(lam4 + lam5)*v*(s*t + 3*s*u - t*u +  (MH0*MH0)*(s +\
 
   t + 2*u - 3* (MHch*MHch)) + (-5*s + 2*t - 5*u)* (MHch*MHch) + 3*\
 
   (MHch*MHch*MHch*MHch) +  (s*s) -  (t*t) + 2* (u*u)) + 2*gc143*gc152*(2*\
 
   (MH0*MH0*MH0*MH0)*(s - u +  (MHch*MHch)) + (-8*s + 3*t - 5*u)*\
 
   (MHch*MHch*MHch*MHch) + 2* (MHch*MHch*MHch*MHch*MHch*MHch) + 3*t* (s*s) -\
 
   3*u* (s*s) +  (MHch*MHch)*(3*u*(-t + u) + s*(-9*t + 11*u) + 8* (s*s)) - 2*\
 
   (s*s*s) + s* (t*t) + 2*u* (t*t) -  (t*t*t) +  (MH0*MH0)*(t*u - s*(t + u) +\
 
   (6*s - 3*t + 7*u)* (MHch*MHch) - 4* (MHch*MHch*MHch*MHch) +  (t*t) - 2*\
 
   (u*u)) - s* (u*u) - t* (u*u)) -  (MZ*MZ)*(gc169*(lam4 + lam5)*v*(t + 3*u +\
 
   9* (MH0*MH0) + 3* (MHch*MHch)) + 2*gc143*gc152*(6*s*t + 6*s*u + 2*t*u + 6*\
 
   (MH0*MH0*MH0*MH0) + (2*s - 5*t - 7*u)* (MHch*MHch) +  (MH0*MH0)*(-14*s -\
 
   11*t - 25*u + 48* (MHch*MHch)) - 6* (MHch*MHch*MHch*MHch) - 5* (t*t) + 3*\
 
   (u*u))))))/(4.*(-t +  (MA0*MA0))* (MW*MW)* (MZ*MZ)*( (MW*MW*MW*MW) + \
 
   (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (-16* (gc143*gc143)*\
 
   (gc152*gc152)*(-s + 2* (MH0*MH0) + 2* (MHch*MHch))* (MW*MW*MW*MW*MW*MW) + \
 
   (MW*MW*MW*MW)*(4*gc143*gc152*gc169*(lam4 + lam5)*v*(-t + u + 2* (MH0*MH0)\
 
   - 2* (MHch*MHch)) + 16* (gc143*gc143)* (gc152*gc152)*(-s + 2* (MH0*MH0) +\
 
   2* (MHch*MHch))* (MZ*MZ) - 4* (gc143*gc143)* (gc152*gc152)*(2*t*u + 4*\
 
   (MH0*MH0*MH0*MH0) - 4*(4*s - t + u)* (MHch*MHch) - 4* (MH0*MH0)*(4*s + t -\
 
   u + 2* (MHch*MHch)) + 4* (MHch*MHch*MHch*MHch) + 8* (s*s) -  (t*t) - \
 
   (u*u)) +  (gc169*gc169)* ((lam4 + lam5)*(lam4 + lam5))* (v*v)) + 2*\
 
   (MW*MW)*(8* (gc143*gc143)* (gc152*gc152)*(-s + 2* (MH0*MH0) + 2*\
 
   (MHch*MHch))* (MZ*MZ*MZ*MZ) + s*(-4*gc143*gc152*gc169*(lam4 + lam5)*v*(\
 
   (MH0*MH0) -  (MHch*MHch)) + 4* (gc143*gc143)* (gc152*gc152)*(2*t*u + 2*\
 
   (MH0*MH0*MH0*MH0) - 2*(2*s - t + u)* (MHch*MHch) - 2* (MH0*MH0)*(2*s + t -\
 
   u + 2* (MHch*MHch)) + 2* (MHch*MHch*MHch*MHch) + 2* (s*s) -  (t*t) - \
 
   (u*u)) -  (gc169*gc169)* ((lam4 + lam5)*(lam4 + lam5))* (v*v)) + \
 
   (MZ*MZ)*(-20*gc143*gc152*gc169*(lam4 + lam5)*(t - u)*v - 4* (gc143*gc143)*\
 
   (gc152*gc152)*(10*t*u + 12* (MH0*MH0*MH0*MH0) - 16*s* (MHch*MHch) - 8*\
 
   (MH0*MH0)*(2*s + 3* (MHch*MHch)) + 12* (MHch*MHch*MHch*MHch) + 8* (s*s) -\
 
   5* (t*t) - 5* (u*u)) + 5* (gc169*gc169)* ((lam4 + lam5)*(lam4 + lam5))*\
 
   (v*v))) + (s -  (MZ*MZ))*(16* (gc143*gc143)* (gc152*gc152)*(-s + 2*\
 
   (MH0*MH0) + 2* (MHch*MHch))* (MZ*MZ*MZ*MZ) + \
 
   (MZ*MZ)*(4*gc143*gc152*gc169*(lam4 + lam5)*v*(t - u + 2* (MH0*MH0) - 2*\
 
   (MHch*MHch)) + 4* (gc143*gc143)* (gc152*gc152)*(2*t*u + 4*\
 
   (MH0*MH0*MH0*MH0) - 4*(2*s + t - u)* (MHch*MHch) - 4* (MH0*MH0)*(2*s - t +\
 
   u + 2* (MHch*MHch)) + 4* (MHch*MHch*MHch*MHch) + 4* (s*s) -  (t*t) - \
 
   (u*u)) -  (gc169*gc169)* ((lam4 + lam5)*(lam4 + lam5))* (v*v)) + s*\
 
   ((2*gc143*gc152*(t - u) + gc169*(lam4 + lam5)*v)*(2*gc143*gc152*(t - u) +\
 
   gc169*(lam4 + lam5)*v))))/(16.* (MW*MW)* (MZ*MZ)*( (MW*MW*MW*MW) +  (s*s)\
 
   +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::amp2s::H0HchveE(double cos_t, double s){
double t = (s* (MH0*MH0) + s* (MHch*MHch) +  (Me*Me)*(s -  (MH0*MH0) + \
 
   (MHch*MHch)) + s* (Mnue*Mnue) +  (MH0*MH0)* (Mnue*Mnue) -  (MHch*MHch)*\
 
   (Mnue*Mnue) + cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s + \
 
   (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt((\
 
   (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (Mnue*Mnue)) +  (( (Mnue*Mnue) - s)*(\
 
   (Mnue*Mnue) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + Mnue*Mnue + Me*Me;
return (4*gc116R*gc143*gc188*(lam4 + lam5)*Me*v*(-t + u +  (MH0*MH0) - \
 
   (MHch*MHch)) + 4* (gc143*gc143)* (gc188*gc188)*(2*t*u +  (MH0*MH0*MH0*MH0)\
 
   - 2*s* (MHch*MHch) +  (Me*Me)*(-s + 2* (MH0*MH0) + 2* (MHch*MHch)) + \
 
   (MHch*MHch*MHch*MHch) - 2* (MH0*MH0)*(s +  (MHch*MHch) -  (Mnue*Mnue)) -\
 
   s* (Mnue*Mnue) + 2* (MHch*MHch)* (Mnue*Mnue) +  (s*s) -  (t*t) -  (u*u)) -\
 
    (gc116R*gc116R)* ((lam4 + lam5)*(lam4 + lam5))*(-s +  (Me*Me) + \
 
   (Mnue*Mnue))* (v*v))/(4.*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s + \
 
   (WW*WW))));
}
double DT::amp2s::H0HchvmM(double cos_t, double s){
double t = (s* (MHch*MHch) + s* (MM*MM) +  (MHch*MHch)* (MM*MM) + s*\
 
   (Mnum*Mnum) -  (MHch*MHch)* (Mnum*Mnum) +  (MH0*MH0)*(s -  (MM*MM) + \
 
   (Mnum*Mnum)) + cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s + \
 
   (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt((\
 
   (MM*MM*MM*MM) - 2* (MM*MM)*(s +  (Mnum*Mnum)) +  (( (Mnum*Mnum) - s)*(\
 
   (Mnum*Mnum) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + Mnum*Mnum + MM*MM;
return (4*gc117R*gc143*gc189*(lam4 + lam5)*MM*v*(-t + u +  (MH0*MH0) - \
 
   (MHch*MHch)) + 4* (gc143*gc143)* (gc189*gc189)*(2*t*u +  (MH0*MH0*MH0*MH0)\
 
   +  (MHch*MHch*MHch*MHch) - 2* (MH0*MH0)*(s +  (MHch*MHch) -  (Mnum*Mnum))\
 
   - s* (Mnum*Mnum) + 2* (MHch*MHch)*(-s +  (Mnum*Mnum)) +  (s*s) -  (t*t) - \
 
   (u*u)) -  (gc117R*gc117R)* ((lam4 + lam5)*(lam4 + lam5))*(-s + \
 
   (Mnum*Mnum))* (v*v) +  (MM*MM)*(4* (gc143*gc143)* (gc189*gc189)*(-s + 2*\
 
   (MH0*MH0) + 2* (MHch*MHch)) -  (gc117R*gc117R)* ((lam4 + lam5)*(lam4 +\
 
   lam5))* (v*v)))/(4.*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))))
 
   ;
}
double DT::amp2s::H0HchvtTA(double cos_t, double s){
double t = (s* (MHch*MHch) + s* (Mnut*Mnut) -  (MHch*MHch)* (Mnut*Mnut) + \
 
   (MH0*MH0)*(s +  (Mnut*Mnut) -  (MTA*MTA)) + s* (MTA*MTA) +  (MHch*MHch)*\
 
   (MTA*MTA) + cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s + \
 
   (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt((\
 
   (Mnut*Mnut*Mnut*Mnut) - 2* (Mnut*Mnut)*(s +  (MTA*MTA)) +  (( (MTA*MTA) -\
 
   s)*( (MTA*MTA) - s)))/s) -  (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + Mnut*Mnut + MTA*MTA;
return (4*gc118R*gc143*gc190*(lam4 + lam5)*MTA*v*(-t + u +  (MH0*MH0) - \
 
   (MHch*MHch)) + 4* (gc143*gc143)* (gc190*gc190)*(2*t*u +  (MH0*MH0*MH0*MH0)\
 
   +  (MHch*MHch*MHch*MHch) - s* (Mnut*Mnut) - 2* (MH0*MH0)*(s +  (MHch*MHch)\
 
   -  (Mnut*Mnut) -  (MTA*MTA)) - s* (MTA*MTA) + 2* (MHch*MHch)*(-s + \
 
   (Mnut*Mnut) +  (MTA*MTA)) +  (s*s) -  (t*t) -  (u*u)) -  (gc118R*gc118R)*\
 
   ((lam4 + lam5)*(lam4 + lam5))*(-s +  (Mnut*Mnut) +  (MTA*MTA))*\
 
   (v*v))/(4.*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::amp2s::H0HchuD(double cos_t, double s){
double t = (s* (MH0*MH0) + s* (MHch*MHch) +  (MD*MD)*(s -  (MH0*MH0) + \
 
   (MHch*MHch)) + s* (MU*MU) +  (MH0*MH0)* (MU*MU) -  (MHch*MHch)* (MU*MU) +\
 
   cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s +  (MHch*MHch)) +  ((\
 
   (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MD*MD*MD*MD) - 2*\
 
   (MD*MD)*(s +  (MU*MU)) +  (( (MU*MU) - s)*( (MU*MU) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + MU*MU + MD*MD;
return (12*gc143*gc198*(lam4 + lam5)*v*(gc108R*MD*(-t + u +  (MH0*MH0) - \
 
   (MHch*MHch)) + gc108L*MU*(-t + u -  (MH0*MH0) +  (MHch*MHch))) + 12*\
 
   (gc143*gc143)* (gc198*gc198)*(2*t*u +  (MH0*MH0*MH0*MH0) - 2*s*\
 
   (MHch*MHch) +  (MD*MD)*(-s + 2* (MH0*MH0) + 2* (MHch*MHch)) + \
 
   (MHch*MHch*MHch*MHch) - 2* (MH0*MH0)*(s +  (MHch*MHch) -  (MU*MU)) - s*\
 
   (MU*MU) + 2* (MHch*MHch)* (MU*MU) +  (s*s) -  (t*t) -  (u*u)) - 3* ((lam4\
 
   + lam5)*(lam4 + lam5))*(4*gc108L*gc108R*MD*MU +  (gc108L*gc108L)*(-s + \
 
   (MD*MD) +  (MU*MU)) +  (gc108R*gc108R)*(-s +  (MD*MD) +  (MU*MU)))*\
 
   (v*v))/(4.*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::amp2s::H0HchuS(double cos_t, double s){
double t = (s* (MHch*MHch) + s* (MS*MS) +  (MHch*MHch)* (MS*MS) + s* (MU*MU)\
 
   -  (MHch*MHch)* (MU*MU) +  (MH0*MH0)*(s -  (MS*MS) +  (MU*MU)) +\
 
   cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s +  (MHch*MHch)) +  ((\
 
   (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MS*MS*MS*MS) - 2*\
 
   (MS*MS)*(s +  (MU*MU)) +  (( (MU*MU) - s)*( (MU*MU) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + MU*MU + MS*MS;
return (12*gc143*gc199*(lam4 + lam5)*v*(gc109R*MS*(-t + u +  (MH0*MH0) - \
 
   (MHch*MHch)) + gc109L*MU*(-t + u -  (MH0*MH0) +  (MHch*MHch))) + 12*\
 
   (gc143*gc143)* (gc199*gc199)*(2*t*u +  (MH0*MH0*MH0*MH0) + \
 
   (MHch*MHch*MHch*MHch) - s* (MS*MS) - 2* (MH0*MH0)*(s +  (MHch*MHch) - \
 
   (MS*MS) -  (MU*MU)) - s* (MU*MU) + 2* (MHch*MHch)*(-s +  (MS*MS) + \
 
   (MU*MU)) +  (s*s) -  (t*t) -  (u*u)) - 3* ((lam4 + lam5)*(lam4 +\
 
   lam5))*(4*gc109L*gc109R*MS*MU +  (gc109L*gc109L)*(-s +  (MS*MS) + \
 
   (MU*MU)) +  (gc109R*gc109R)*(-s +  (MS*MS) +  (MU*MU)))* (v*v))/(4.*(\
 
   (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::amp2s::H0HchuB(double cos_t, double s){
double t = (s* (MH0*MH0) + s* (MHch*MHch) +  (MB*MB)*(s -  (MH0*MH0) + \
 
   (MHch*MHch)) + s* (MU*MU) +  (MH0*MH0)* (MU*MU) -  (MHch*MHch)* (MU*MU) +\
 
   cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s +  (MHch*MHch)) +  ((\
 
   (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MB*MB*MB*MB) - 2*\
 
   (MB*MB)*(s +  (MU*MU)) +  (( (MU*MU) - s)*( (MU*MU) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + MU*MU + MB*MB;
return (12*gc143*gc197*(lam4 + lam5)*v*(gc107R*MB*(-t + u +  (MH0*MH0) - \
 
   (MHch*MHch)) + gc107L*MU*(-t + u -  (MH0*MH0) +  (MHch*MHch))) + 12*\
 
   (gc143*gc143)* (gc197*gc197)*(2*t*u +  (MH0*MH0*MH0*MH0) - 2*s*\
 
   (MHch*MHch) +  (MB*MB)*(-s + 2* (MH0*MH0) + 2* (MHch*MHch)) + \
 
   (MHch*MHch*MHch*MHch) - 2* (MH0*MH0)*(s +  (MHch*MHch) -  (MU*MU)) - s*\
 
   (MU*MU) + 2* (MHch*MHch)* (MU*MU) +  (s*s) -  (t*t) -  (u*u)) - 3* ((lam4\
 
   + lam5)*(lam4 + lam5))*(4*gc107L*gc107R*MB*MU +  (gc107L*gc107L)*(-s + \
 
   (MB*MB) +  (MU*MU)) +  (gc107R*gc107R)*(-s +  (MB*MB) +  (MU*MU)))*\
 
   (v*v))/(4.*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::amp2s::H0HchcD(double cos_t, double s){
double t = (s* (MD*MD) + s* (MH0*MH0) -  (MD*MD)* (MH0*MH0) +  (MC*MC)*(s + \
 
   (MH0*MH0) -  (MHch*MHch)) + s* (MHch*MHch) +  (MD*MD)* (MHch*MHch) +\
 
   cos_t*s*sqrt(( (MC*MC*MC*MC) - 2* (MC*MC)*(s +  (MD*MD)) +  (( (MD*MD) -\
 
   s)*( (MD*MD) - s)))/s)*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s + \
 
   (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + MC*MC + MD*MD;
return (-3*(4*gc143*gc192*(lam4 + lam5)*v*(gc102L*MC*(t - u +  (MH0*MH0) - \
 
   (MHch*MHch)) + gc102R*MD*(t - u -  (MH0*MH0) +  (MHch*MHch))) - 4*\
 
   (gc143*gc143)* (gc192*gc192)*(2*t*u - 2*s* (MH0*MH0) +  (MH0*MH0*MH0*MH0)\
 
   - 2*s* (MHch*MHch) - 2* (MH0*MH0)* (MHch*MHch) +  (MC*MC)*(-s + 2*\
 
   (MH0*MH0) + 2* (MHch*MHch)) +  (MD*MD)*(-s + 2* (MH0*MH0) + 2*\
 
   (MHch*MHch)) +  (MHch*MHch*MHch*MHch) +  (s*s) -  (t*t) -  (u*u)) + \
 
   ((lam4 + lam5)*(lam4 + lam5))*(4*gc102L*gc102R*MC*MD + \
 
   (gc102L*gc102L)*(-s +  (MC*MC) +  (MD*MD)) +  (gc102R*gc102R)*(-s + \
 
   (MC*MC) +  (MD*MD)))* (v*v)))/(4.*( (MW*MW*MW*MW) +  (s*s) + \
 
   (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::amp2s::H0HchcS(double cos_t, double s){
double t = (s* (MH0*MH0) +  (MC*MC)*(s +  (MH0*MH0) -  (MHch*MHch)) + s*\
 
   (MHch*MHch) + s* (MS*MS) -  (MH0*MH0)* (MS*MS) +  (MHch*MHch)* (MS*MS) +\
 
   cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s +  (MHch*MHch)) +  ((\
 
   (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MC*MC*MC*MC) - 2*\
 
   (MC*MC)*(s +  (MS*MS)) +  (( (MS*MS) - s)*( (MS*MS) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + MC*MC + MS*MS;
return (-3*(4*gc143*gc193*(lam4 + lam5)*v*(gc103L*MC*(t - u +  (MH0*MH0) - \
 
   (MHch*MHch)) + gc103R*MS*(t - u -  (MH0*MH0) +  (MHch*MHch))) - 4*\
 
   (gc143*gc143)* (gc193*gc193)*(2*t*u +  (MH0*MH0*MH0*MH0) - 2*s*\
 
   (MHch*MHch) +  (MC*MC)*(-s + 2* (MH0*MH0) + 2* (MHch*MHch)) + \
 
   (MHch*MHch*MHch*MHch) - 2* (MH0*MH0)*(s +  (MHch*MHch) -  (MS*MS)) - s*\
 
   (MS*MS) + 2* (MHch*MHch)* (MS*MS) +  (s*s) -  (t*t) -  (u*u)) +  ((lam4 +\
 
   lam5)*(lam4 + lam5))*(4*gc103L*gc103R*MC*MS +  (gc103L*gc103L)*(-s + \
 
   (MC*MC) +  (MS*MS)) +  (gc103R*gc103R)*(-s +  (MC*MC) +  (MS*MS)))*\
 
   (v*v)))/(4.*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::amp2s::H0HchcB(double cos_t, double s){
double t = (s* (MC*MC) + s* (MH0*MH0) +  (MC*MC)* (MH0*MH0) + s* (MHch*MHch)\
 
   -  (MC*MC)* (MHch*MHch) +  (MB*MB)*(s -  (MH0*MH0) +  (MHch*MHch)) +\
 
   cos_t*s*sqrt(( (MB*MB*MB*MB) - 2* (MB*MB)*(s +  (MC*MC)) +  (( (MC*MC) -\
 
   s)*( (MC*MC) - s)))/s)*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s + \
 
   (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + MC*MC + MB*MB;
return (12*gc143*gc191*(lam4 + lam5)*v*(gc101R*MB*(-t + u +  (MH0*MH0) - \
 
   (MHch*MHch)) + gc101L*MC*(-t + u -  (MH0*MH0) +  (MHch*MHch))) + 12*\
 
   (gc143*gc143)* (gc191*gc191)*(2*t*u - 2*s* (MH0*MH0) +  (MH0*MH0*MH0*MH0)\
 
   - 2*s* (MHch*MHch) - 2* (MH0*MH0)* (MHch*MHch) +  (MB*MB)*(-s + 2*\
 
   (MH0*MH0) + 2* (MHch*MHch)) +  (MC*MC)*(-s + 2* (MH0*MH0) + 2*\
 
   (MHch*MHch)) +  (MHch*MHch*MHch*MHch) +  (s*s) -  (t*t) -  (u*u)) - 3*\
 
   ((lam4 + lam5)*(lam4 + lam5))*(4*gc101L*gc101R*MB*MC + \
 
   (gc101L*gc101L)*(-s +  (MB*MB) +  (MC*MC)) +  (gc101R*gc101R)*(-s + \
 
   (MB*MB) +  (MC*MC)))* (v*v))/(4.*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s\
 
   +  (WW*WW))));
}
double DT::amp2s::H0HchtD(double cos_t, double s){
double t = (s* (MH0*MH0) + s* (MHch*MHch) +  (MD*MD)*(s -  (MH0*MH0) + \
 
   (MHch*MHch)) + s* (MT*MT) +  (MH0*MH0)* (MT*MT) -  (MHch*MHch)* (MT*MT) +\
 
   cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s +  (MHch*MHch)) +  ((\
 
   (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MD*MD*MD*MD) - 2*\
 
   (MD*MD)*(s +  (MT*MT)) +  (( (MT*MT) - s)*( (MT*MT) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + MT*MT + MD*MD;
return (12*gc143*gc195*(lam4 + lam5)*v*(gc105R*MD*(-t + u +  (MH0*MH0) - \
 
   (MHch*MHch)) + gc105L*MT*(-t + u -  (MH0*MH0) +  (MHch*MHch))) + 12*\
 
   (gc143*gc143)* (gc195*gc195)*(2*t*u +  (MH0*MH0*MH0*MH0) - 2*s*\
 
   (MHch*MHch) +  (MD*MD)*(-s + 2* (MH0*MH0) + 2* (MHch*MHch)) + \
 
   (MHch*MHch*MHch*MHch) - 2* (MH0*MH0)*(s +  (MHch*MHch) -  (MT*MT)) - s*\
 
   (MT*MT) + 2* (MHch*MHch)* (MT*MT) +  (s*s) -  (t*t) -  (u*u)) - 3* ((lam4\
 
   + lam5)*(lam4 + lam5))*(4*gc105L*gc105R*MD*MT +  (gc105L*gc105L)*(-s + \
 
   (MD*MD) +  (MT*MT)) +  (gc105R*gc105R)*(-s +  (MD*MD) +  (MT*MT)))*\
 
   (v*v))/(4.*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::amp2s::H0HchtS(double cos_t, double s){
double t = (s* (MHch*MHch) + s* (MS*MS) +  (MHch*MHch)* (MS*MS) + s* (MT*MT)\
 
   -  (MHch*MHch)* (MT*MT) +  (MH0*MH0)*(s -  (MS*MS) +  (MT*MT)) +\
 
   cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s +  (MHch*MHch)) +  ((\
 
   (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MS*MS*MS*MS) - 2*\
 
   (MS*MS)*(s +  (MT*MT)) +  (( (MT*MT) - s)*( (MT*MT) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + MT*MT + MS*MS;
return (12*gc143*gc196*(lam4 + lam5)*v*(gc106R*MS*(-t + u +  (MH0*MH0) - \
 
   (MHch*MHch)) + gc106L*MT*(-t + u -  (MH0*MH0) +  (MHch*MHch))) + 12*\
 
   (gc143*gc143)* (gc196*gc196)*(2*t*u +  (MH0*MH0*MH0*MH0) + \
 
   (MHch*MHch*MHch*MHch) - s* (MS*MS) - 2* (MH0*MH0)*(s +  (MHch*MHch) - \
 
   (MS*MS) -  (MT*MT)) - s* (MT*MT) + 2* (MHch*MHch)*(-s +  (MS*MS) + \
 
   (MT*MT)) +  (s*s) -  (t*t) -  (u*u)) - 3* ((lam4 + lam5)*(lam4 +\
 
   lam5))*(4*gc106L*gc106R*MS*MT +  (gc106L*gc106L)*(-s +  (MS*MS) + \
 
   (MT*MT)) +  (gc106R*gc106R)*(-s +  (MS*MS) +  (MT*MT)))* (v*v))/(4.*(\
 
   (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::amp2s::H0HchtB(double cos_t, double s){
double t = (s* (MH0*MH0) + s* (MHch*MHch) +  (MB*MB)*(s -  (MH0*MH0) + \
 
   (MHch*MHch)) + s* (MT*MT) +  (MH0*MH0)* (MT*MT) -  (MHch*MHch)* (MT*MT) +\
 
   cos_t*s*sqrt(( (MH0*MH0*MH0*MH0) - 2* (MH0*MH0)*(s +  (MHch*MHch)) +  ((\
 
   (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MB*MB*MB*MB) - 2*\
 
   (MB*MB)*(s +  (MT*MT)) +  (( (MT*MT) - s)*( (MT*MT) - s)))/s) - \
 
   (s*s))/(2.*s);
double u = -s - t + MH0*MH0 + MHch*MHch + MT*MT + MB*MB;
return (12*gc143*gc194*(lam4 + lam5)*v*(gc104R*MB*(-t + u +  (MH0*MH0) - \
 
   (MHch*MHch)) + gc104L*MT*(-t + u -  (MH0*MH0) +  (MHch*MHch))) + 12*\
 
   (gc143*gc143)* (gc194*gc194)*(2*t*u +  (MH0*MH0*MH0*MH0) - 2*s*\
 
   (MHch*MHch) +  (MB*MB)*(-s + 2* (MH0*MH0) + 2* (MHch*MHch)) + \
 
   (MHch*MHch*MHch*MHch) - 2* (MH0*MH0)*(s +  (MHch*MHch) -  (MT*MT)) - s*\
 
   (MT*MT) + 2* (MHch*MHch)* (MT*MT) +  (s*s) -  (t*t) -  (u*u)) - 3* ((lam4\
 
   + lam5)*(lam4 + lam5))*(4*gc104L*gc104R*MB*MT +  (gc104L*gc104L)*(-s + \
 
   (MB*MB) +  (MT*MT)) +  (gc104R*gc104R)*(-s +  (MB*MB) +  (MT*MT)))*\
 
   (v*v))/(4.*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
