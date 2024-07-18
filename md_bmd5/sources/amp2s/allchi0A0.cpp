///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::chi0A0Hvm(const double &cos_t, const double &s){
	double t = (s* (Mchi0*Mchi0) +  (MA0*MA0)*(s -  (MH*MH)) + s* (MH*MH) +  (Mchi0*Mchi0)* (MH*MH) + cos_t*s*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (Mchi0*Mchi0)) +  (( (Mchi0*Mchi0) - s)*( (Mchi0*Mchi0) - s)))/s)*sqrt( (( (MH*MH) - s)*( (MH*MH) - s))/s) -  (s*s))/(2.*s);
	double u = -s - t + Mchi0*Mchi0 + MA0*MA0 + MH*MH + 0*0;
	return ((-u +  (Mchi0*Mchi0))* (token20*token20)* (token6*token6)* (token9*token9))/(3.* (token10*token10)* (( (MA0*MA0) - u)*( (MA0*MA0) - u)));
}
double DT::chi0A0Zvm(const double &cos_t, const double &s){
	double t = (s* (Mchi0*Mchi0) +  (MA0*MA0)*(s -  (MZ*MZ)) + s* (MZ*MZ) +  (Mchi0*Mchi0)* (MZ*MZ) + cos_t*s*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (Mchi0*Mchi0)) +  (( (Mchi0*Mchi0) - s)*( (Mchi0*Mchi0) - s)))/s)*sqrt( (( (MZ*MZ) - s)*( (MZ*MZ) - s))/s) -  (s*s))/(2.*s);
	double u = -s - t + Mchi0*Mchi0 + MA0*MA0 + MZ*MZ + 0*0;
	return ((2*s*(-t +  (Mchi0*Mchi0))* (MZ*MZ) + 2*(s + t + u - 2* (Mchi0*Mchi0))* (MZ*MZ*MZ*MZ) - 2* (MZ*MZ*MZ*MZ*MZ*MZ) + (-u +  (Mchi0*Mchi0))* (s*s))* (token11*token11)* (token59*token59)* (token6*token6))/(3.* (MZ*MZ)* (s*s)* (token10*token10)* (token17*token17)* (token18*token18)* (token4*token4)) + (((-t +  (Mchi0*Mchi0))*(t*u - (s + t + u)* (MA0*MA0) +  (MA0*MA0*MA0*MA0) + s* (Mchi0*Mchi0)) + (t*(-s + t + u) + (s - 5*t - u)* (Mchi0*Mchi0) +  (MA0*MA0)*(-2*t + 6* (Mchi0*Mchi0)))* (MZ*MZ) + (-t + 2* (MA0*MA0) -  (Mchi0*Mchi0))* (MZ*MZ*MZ*MZ))* (token11*token11)* (token59*token59)* (token6*token6))/(3.* (MZ*MZ)* (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t))* (token10*token10)* (token17*token17)* (token18*token18)* (token4*token4)) + ( (token11*token11)* (token59*token59)* (token6*token6)*(4*(t -  (MA0*MA0) +  (Mchi0*Mchi0))* (MZ*MZ*MZ*MZ) -  (MZ*MZ)*(s*t + s*u + 4*t*u + 2*(s - 4*t)* (Mchi0*Mchi0) +  (MA0*MA0)*(-4*(t + u) + 8* (Mchi0*Mchi0)) -  (s*s) + 4* (t*t)) - s*( (MA0*MA0)*(-s + t + u - 2* (Mchi0*Mchi0)) + (s + t + u)* (Mchi0*Mchi0) +  (s*s) -  (t*t) -  (u*u))))/(3.*s*(-t +  (Mchi0*Mchi0))* (MZ*MZ)* (token10*token10)* (token17*token17)* (token18*token18)* (token4*token4));
}
double DT::chi0A0Wmu(const double &cos_t, const double &s){
	double t = (s* (Mchi0*Mchi0) + s* (MMU*MMU) -  (Mchi0*Mchi0)* (MMU*MMU) +  (MA0*MA0)*(s +  (MMU*MMU) -  (MW*MW)) + s* (MW*MW) +  (Mchi0*Mchi0)* (MW*MW) + cos_t*s*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (Mchi0*Mchi0)) +  (( (Mchi0*Mchi0) - s)*( (Mchi0*Mchi0) - s)))/s)*sqrt(( (MMU*MMU*MMU*MMU) - 2* (MMU*MMU)*(s +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + Mchi0*Mchi0 + MA0*MA0 + MW*MW + MMU*MMU;
	return (((-s +  (MMU*MMU))*(s*u - (s + t + u)* (MMU*MMU) +  (Mchi0*Mchi0)*(-s + 2* (MMU*MMU)) +  (MMU*MMU*MMU*MMU)) + (-2*s*t - (s + t + u)* (MMU*MMU) + 2* (Mchi0*Mchi0)*(s +  (MMU*MMU)) + 2* (MMU*MMU*MMU*MMU))* (MW*MW) + (2*(s + t + u) - 4* (Mchi0*Mchi0) -  (MMU*MMU))* (MW*MW*MW*MW) - 2* (MW*MW*MW*MW*MW*MW))* (token11*token11)* (token6*token6))/(2.* (MW*MW)* (s*s)* (token18*token18)* (token4*token4)) + (((-t +  (Mchi0*Mchi0))*(t*u - (s + t + u)* (MA0*MA0) +  (MA0*MA0*MA0*MA0) +  (MchiM*MchiM)*(s -  (MMU*MMU)) + s* (MMU*MMU) + u* (MMU*MMU) -  (MMU*MMU*MMU*MMU)) + (-t + 2* (MA0*MA0) -  (MchiM*MchiM) - 2* (MMU*MMU))* (MW*MW*MW*MW) +  (MW*MW)*(-(s*t) + t*u + (6*Mchi0*MchiM - 2*t)* (MA0*MA0) + s* (MchiM*MchiM) + t* (MchiM*MchiM) - u* (MchiM*MchiM) + 2*t* (MMU*MMU) - 6*Mchi0*MchiM*(t +  (MMU*MMU)) +  (t*t)))* (token11*token11)* (token6*token6))/(2.* (MW*MW)* (( (MchiM*MchiM) - t)*( (MchiM*MchiM) - t))* (token18*token18)* (token4*token4)) - ( (token11*token11)* (token6*token6)*(s*t* (Mchi0*Mchi0) + s*u* (Mchi0*Mchi0) - 4*Mchi0*MchiM*s* (MMU*MMU) + s*t* (MMU*MMU) + s*u* (MMU*MMU) + 2*t*u* (MMU*MMU) + s* (Mchi0*Mchi0)* (MMU*MMU) - t* (Mchi0*Mchi0)* (MMU*MMU) - 3*u* (Mchi0*Mchi0)* (MMU*MMU) +  (MA0*MA0)*(s*(-s + t + u) + (s - 3*t - u)* (MMU*MMU) +  (Mchi0*Mchi0)*(-2*s + 4* (MMU*MMU))) + 2*Mchi0*MchiM* (MMU*MMU*MMU*MMU) + s* (MMU*MMU*MMU*MMU) - t* (MMU*MMU*MMU*MMU) - u* (MMU*MMU*MMU*MMU) + 4*(-(Mchi0*MchiM) - t +  (MA0*MA0))* (MW*MW*MW*MW) + 2*Mchi0*MchiM* (s*s) -  (Mchi0*Mchi0)* (s*s) - 2* (MMU*MMU)* (s*s) +  (s*s*s) - s* (t*t) +  (MMU*MMU)* (t*t) +  (MW*MW)*(s*t + s*u + 4*t*u - 8*t* (Mchi0*Mchi0) - 3*s* (MMU*MMU) - 5*t* (MMU*MMU) - u* (MMU*MMU) + 2*Mchi0*MchiM*(s +  (MMU*MMU)) +  (MA0*MA0)*(-4*(t + u) + 8* (Mchi0*Mchi0) + 8* (MMU*MMU)) -  (s*s) + 4* (t*t)) - s* (u*u) +  (MMU*MMU)* (u*u)))/(2.*s*(-t +  (MchiM*MchiM))* (MW*MW)* (token18*token18)* (token4*token4));
}
