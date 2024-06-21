///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::chi0chi0vmvm(const double &cos_t, const double &s){
	double t = (-s + cos_t*sqrt(s)*sqrt(s - 4* (Mchi0*Mchi0)))/2. +  (Mchi0*Mchi0);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + 0*0 + 0*0;
	return (-32*token1*token3* (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t))* (token2*token2))/(9.*(-t +  (MA0*MA0))*(t -  (MS0*MS0))* (token4*token4)) + (16* (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t))* (token1*token1)* (token2*token2))/(9.* (( (MS0*MS0) - t)*( (MS0*MS0) - t))* (token4*token4)) + (16* (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t))* (token2*token2)* (token3*token3))/(9.* (( (MA0*MA0) - t)*( (MA0*MA0) - t))* (token4*token4)) - (32*token1*token3* (token2*token2)* (( (Mchi0*Mchi0) - u)*( (Mchi0*Mchi0) - u)))/(9.*(-u +  (MA0*MA0))*(u -  (MS0*MS0))* (token4*token4)) + (16* (token1*token1)* (token2*token2)* (( (Mchi0*Mchi0) - u)*( (Mchi0*Mchi0) - u)))/(9.* (token4*token4)* (( (MA0*MA0) - u)*( (MA0*MA0) - u))) + (16* (token2*token2)* (token3*token3)* (( (Mchi0*Mchi0) - u)*( (Mchi0*Mchi0) - u)))/(9.* (token4*token4)* (( (MS0*MS0) - u)*( (MS0*MS0) - u))) + (16*token1*token3* (token2*token2)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) -  (s*s) +  (t*t) +  (u*u)))/(9.*(-t +  (MA0*MA0))*(-u +  (MA0*MA0))* (token4*token4)) + (16*token1*token3* (token2*token2)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) -  (s*s) +  (t*t) +  (u*u)))/(9.*(-t +  (MS0*MS0))*(-u +  (MS0*MS0))* (token4*token4)) + (16* (token1*token1)* (token2*token2)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) -  (s*s) +  (t*t) +  (u*u)))/(9.*(-u +  (MA0*MA0))*(-t +  (MS0*MS0))* (token4*token4)) + (16* (token2*token2)* (token3*token3)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) -  (s*s) +  (t*t) +  (u*u)))/(9.*(-t +  (MA0*MA0))*(-u +  (MS0*MS0))* (token4*token4));
}
double DT::chi0CHI0HZ(const double &cos_t, const double &s){
	double t = (-s + 2* (Mchi0*Mchi0) +  (MH*MH) +  (MZ*MZ) + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(( (MH*MH*MH*MH) - 2* (MH*MH)*(s +  (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))/s))/2.;
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MH*MH + MZ*MZ;
	return (((-t +  (Mchi0*Mchi0))*(-u +  (Mchi0*Mchi0)) + (s - t - u + 6* (Mchi0*Mchi0))* (MZ*MZ) +  (MZ*MZ*MZ*MZ))* (token42*token42)* (token67*token67)* (token9*token9))/(2.* (MZ*MZ)* (token44*token44)* (token45*token45)* (token46*token46)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0ZZ(const double &cos_t, const double &s){
	double t =  (Mchi0*Mchi0) + (-s + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(s - 4* (MZ*MZ)))/2. +  (MZ*MZ);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MZ*MZ + MZ*MZ;
	return (((-t +  (Mchi0*Mchi0))*(t*(-3*s + t + u) + (7*s - 7*t + 3*u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0))* (MZ*MZ) + (-(t*(4*s + 3*t)) + (4*s + 6*t)* (Mchi0*Mchi0) - 19* (Mchi0*Mchi0*Mchi0*Mchi0))* (MZ*MZ*MZ*MZ) + 8*(t - 3* (Mchi0*Mchi0))* (MZ*MZ*MZ*MZ*MZ*MZ) - 4* (MZ*MZ*MZ*MZ*MZ*MZ*MZ*MZ) + (-u +  (Mchi0*Mchi0))* (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t)))* (token41*token41)* (token43*token43)* (token47*token47))/(2.* (MZ*MZ*MZ*MZ)* (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t))* (token44*token44)* (token49*token49)* (token50*token50)) + ( (token41*token41)* (token43*token43)* (token47*token47)*((-u +  (Mchi0*Mchi0))*(u*(-3*s + t + u) + (7*s + 3*t - 7*u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0))* (MZ*MZ) + (-(u*(4*s + 3*u)) + (4*s + 6*u)* (Mchi0*Mchi0) - 19* (Mchi0*Mchi0*Mchi0*Mchi0))* (MZ*MZ*MZ*MZ) + 8*(u - 3* (Mchi0*Mchi0))* (MZ*MZ*MZ*MZ*MZ*MZ) - 4* (MZ*MZ*MZ*MZ*MZ*MZ*MZ*MZ) + (-t +  (Mchi0*Mchi0))* (( (Mchi0*Mchi0) - u)*( (Mchi0*Mchi0) - u)*( (Mchi0*Mchi0) - u))))/(2.* (MZ*MZ*MZ*MZ)* (token44*token44)* (token49*token49)* (token50*token50)* (( (Mchi0*Mchi0) - u)*( (Mchi0*Mchi0) - u))) + ( (token41*token41)* (token43*token43)* (token47*token47)*(-32*(-s +  (Mchi0*Mchi0))* (MZ*MZ*MZ*MZ*MZ*MZ) - 2* (MZ*MZ*MZ*MZ)*(3*t*u + 6*s*(t + u) + (-20*s + t + u)* (Mchi0*Mchi0) + 15* (Mchi0*Mchi0*Mchi0*Mchi0) + 4* (s*s) - 2* (t*t) - 2* (u*u)) + (-t +  (Mchi0*Mchi0))*(-u +  (Mchi0*Mchi0))*(-2*(t + u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) -  (s*s) +  (t*t) +  (u*u)) + 2* (MZ*MZ)*(s*t*u - 3*(s + t + u)* (Mchi0*Mchi0*Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0*Mchi0*Mchi0) + (t + u)* (s*s) -  (t*t*t) +  (Mchi0*Mchi0)*(-4*t*u + s*(t + u) - 2* (s*s) + 5* (t*t) + 5* (u*u)) -  (u*u*u))))/(2.*(-t +  (Mchi0*Mchi0))*(-u +  (Mchi0*Mchi0))* (MZ*MZ*MZ*MZ)* (token44*token44)* (token49*token49)* (token50*token50));
}
double DT::chi0CHI0wW(const double &cos_t, const double &s){
	double t =  (Mchi0*Mchi0) + (-s + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(s - 4* (MW*MW)))/2. +  (MW*MW);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MW*MW + MW*MW;
	return ( (token41*token41)* (token47*token47)*((-u +  (Mchi0*Mchi0))*(6*Mchi0*MchiM*(s + t - u) + u*(-3*s + t + u) - (s + t + 3*u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) + 2*(s - t + u)* (MchiM*MchiM))* (MW*MW) + (24*Mchi0*MchiM*u - u*(4*s + 3*u) +  (Mchi0*Mchi0*Mchi0*Mchi0) + 2* (Mchi0*Mchi0)*(s + t - 10*u - 10* (MchiM*MchiM)) + 2*(s - t + u)* (MchiM*MchiM))* (MW*MW*MW*MW) + 8*(-3*Mchi0*MchiM + u)* (MW*MW*MW*MW*MW*MW) - 4* (MW*MW*MW*MW*MW*MW*MW*MW) + (t*u - (s + t + u)* (Mchi0*Mchi0) +  (Mchi0*Mchi0*Mchi0*Mchi0) + s* (MchiM*MchiM))* (( (Mchi0*Mchi0) - u)*( (Mchi0*Mchi0) - u))))/(2.* (MW*MW*MW*MW)* (token4*token4)* (token50*token50)* (( (MchiM*MchiM) - u)*( (MchiM*MchiM) - u))) + ( (token47*token47)* (token51*token51)* (token59*token59)* (token7*token7)*(-16*(s - 8*(t + u) + 16* (Mchi0*Mchi0))* (MW*MW*MW*MW*MW*MW) - 128* (MW*MW*MW*MW*MW*MW*MW*MW) +  (s*s)*( (s*s) -  ((t - u)*(t - u))) + 4*s* (MW*MW)*(2*t*u + 8*(s - t - u)* (Mchi0*Mchi0) + 8* (Mchi0*Mchi0*Mchi0*Mchi0) + 3* (t*t) + 3* (u*u)) - 4* (MW*MW*MW*MW)*(10*t*u + 8*s*(t + u) + 16*(s - 2*(t + u))* (Mchi0*Mchi0) + 32* (Mchi0*Mchi0*Mchi0*Mchi0) +  (s*s) + 11* (t*t) + 11* (u*u))))/(8.* (MW*MW*MW*MW)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (token41*token51*token59*token7*(-s +  (MZ*MZ))* (token47*token47)*(-8*(-20*Mchi0*MchiM - 5*s + t + 7*u + 4* (Mchi0*Mchi0))* (MW*MW*MW*MW*MW*MW) + 32* (MW*MW*MW*MW*MW*MW*MW*MW) + s*(-u +  (Mchi0*Mchi0))*(-4*Mchi0*MchiM*s + 4*s* (Mchi0*Mchi0) -  (s*s) +  ((t - u)*(t - u))) - 4* (MW*MW*MW*MW)*(4*s*t - 2*s*u - 2*t*u + 2*Mchi0*MchiM*(3*s + 7*t + 13*u) - 2*(6*s + 3*t + u)* (Mchi0*Mchi0) - 40*MchiM* (Mchi0*Mchi0*Mchi0) + 16* (Mchi0*Mchi0*Mchi0*Mchi0) +  (s*s) -  (t*t) - 5* (u*u)) - 2* (MW*MW)*(2*Mchi0*MchiM*s*(s - 3*(t + u)) + 12*MchiM*s* (Mchi0*Mchi0*Mchi0) + 4*(t - u)* (Mchi0*Mchi0*Mchi0*Mchi0) - t* (s*s) +  (s*s*s) +  (t*t*t) + t* (u*u) + s*(2*t*u -  (t*t) + 3* (u*u)) +  (Mchi0*Mchi0)*(2*s*(5*t - 7*u) - 2*t*u + 3* (s*s) - 3* (t*t) + 5* (u*u)) - 2* (u*u*u))))/(4.*token4*token50*(-u +  (MchiM*MchiM))* (MW*MW*MW*MW)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0VEve(const double &cos_t, const double &s){
	double t = (-s + cos_t*sqrt(s)*sqrt(s - 4* (Mchi0*Mchi0)))/2. +  (Mchi0*Mchi0);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + 0*0 + 0*0;
	return (16* (token43*token43)* (token47*token47)* (token7*token7)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) +  (t*t) +  (u*u)))/(9.* (token44*token44)* (token49*token49)* (token50*token50)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0VMvm(const double &cos_t, const double &s){
	double t = (-s + cos_t*sqrt(s)*sqrt(s - 4* (Mchi0*Mchi0)))/2. +  (Mchi0*Mchi0);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + 0*0 + 0*0;
	return (-32* (token1*token1)* (token2*token2)* (( (Mchi0*Mchi0) - u)*( (Mchi0*Mchi0) - u)))/(9.*(-u +  (MA0*MA0))*(u -  (MS0*MS0))* (token4*token4)) + (16* (token1*token1)* (token2*token2)* (( (Mchi0*Mchi0) - u)*( (Mchi0*Mchi0) - u)))/(9.* (token4*token4)* (( (MA0*MA0) - u)*( (MA0*MA0) - u))) + (16* (token1*token1)* (token2*token2)* (( (Mchi0*Mchi0) - u)*( (Mchi0*Mchi0) - u)))/(9.* (token4*token4)* (( (MS0*MS0) - u)*( (MS0*MS0) - u))) + (32*token1*token2*token43*token47*token7*(-s +  (MZ*MZ))*((s - 2*u)* (Mchi0*Mchi0) +  (Mchi0*Mchi0*Mchi0*Mchi0) +  (u*u)))/(9.*token4*token44*token49*token50*(-u +  (MA0*MA0))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (32*token1*token2*token43*token47*token7*(-s +  (MZ*MZ))*((s - 2*u)* (Mchi0*Mchi0) +  (Mchi0*Mchi0*Mchi0*Mchi0) +  (u*u)))/(9.*token4*token44*token49*token50*(-u +  (MS0*MS0))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (16* (token43*token43)* (token47*token47)* (token7*token7)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) +  (t*t) +  (u*u)))/(9.* (token44*token44)* (token49*token49)* (token50*token50)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0VTvt(const double &cos_t, const double &s){
	double t = (-s + cos_t*sqrt(s)*sqrt(s - 4* (Mchi0*Mchi0)))/2. +  (Mchi0*Mchi0);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + 0*0 + 0*0;
	return (16* (token43*token43)* (token47*token47)* (token7*token7)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) +  (t*t) +  (u*u)))/(9.* (token44*token44)* (token49*token49)* (token50*token50)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0Ee(const double &cos_t, const double &s){
	double t =  (Mchi0*Mchi0) + (-s + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(s - 4* (Me*Me)))/2. +  (Me*Me);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + Me*Me + Me*Me;
	return (4* (token1*token1)* (token13*token13)* (token14*token14)* (token47*token47)* (token59*token59)*( (cw*cw*cw*cw)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) - 2*(t + u)* (Me*Me) + 2* (Me*Me*Me*Me) +  (t*t) +  (u*u)) - 2* (cw*cw)* (sw*sw)*(2* (Mchi0*Mchi0*Mchi0*Mchi0) + (4*s - 2*(t + u))* (Me*Me) + 2* (Mchi0*Mchi0)*(s - t - u + 4* (Me*Me)) + 2* (Me*Me*Me*Me) +  (t*t) +  (u*u)) +  (sw*sw*sw*sw)*(10* (Mchi0*Mchi0*Mchi0*Mchi0) + 2*(4*s - 5*(t + u))* (Me*Me) + 2* (Mchi0*Mchi0)*(5*s - 5*t - 5*u + 8* (Me*Me)) + 10* (Me*Me*Me*Me) + 5*( (t*t) +  (u*u)))))/( (token17*token17)* (token18*token18)* (token4*token4)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0MUmu(const double &cos_t, const double &s){
	double t =  (Mchi0*Mchi0) + (-s + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(s - 4* (MMU*MMU)))/2. +  (MMU*MMU);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MMU*MMU + MMU*MMU;
	return (4* (token1*token1)* (token13*token13)* (token14*token14)* (token47*token47)* (token59*token59)*( (cw*cw*cw*cw)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) - 2*(t + u)* (MMU*MMU) + 2* (MMU*MMU*MMU*MMU) +  (t*t) +  (u*u)) - 2* (cw*cw)* (sw*sw)*(2* (Mchi0*Mchi0*Mchi0*Mchi0) + (4*s - 2*(t + u))* (MMU*MMU) + 2* (Mchi0*Mchi0)*(s - t - u + 4* (MMU*MMU)) + 2* (MMU*MMU*MMU*MMU) +  (t*t) +  (u*u)) +  (sw*sw*sw*sw)*(10* (Mchi0*Mchi0*Mchi0*Mchi0) + 2*(4*s - 5*(t + u))* (MMU*MMU) + 2* (Mchi0*Mchi0)*(5*s - 5*t - 5*u + 8* (MMU*MMU)) + 10* (MMU*MMU*MMU*MMU) + 5*( (t*t) +  (u*u)))))/( (token17*token17)* (token18*token18)* (token4*token4)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0TAta(const double &cos_t, const double &s){
	double t =  (Mchi0*Mchi0) + (-s + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(s - 4* (MTA*MTA)))/2. +  (MTA*MTA);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MTA*MTA + MTA*MTA;
	return (4* (token1*token1)* (token13*token13)* (token14*token14)* (token47*token47)* (token59*token59)*( (cw*cw*cw*cw)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) - 2*(t + u)* (MTA*MTA) + 2* (MTA*MTA*MTA*MTA) +  (t*t) +  (u*u)) - 2* (cw*cw)* (sw*sw)*(2* (Mchi0*Mchi0*Mchi0*Mchi0) + (4*s - 2*(t + u))* (MTA*MTA) + 2* (Mchi0*Mchi0)*(s - t - u + 4* (MTA*MTA)) + 2* (MTA*MTA*MTA*MTA) +  (t*t) +  (u*u)) +  (sw*sw*sw*sw)*(10* (Mchi0*Mchi0*Mchi0*Mchi0) + 2*(4*s - 5*(t + u))* (MTA*MTA) + 2* (Mchi0*Mchi0)*(5*s - 5*t - 5*u + 8* (MTA*MTA)) + 10* (MTA*MTA*MTA*MTA) + 5*( (t*t) +  (u*u)))))/( (token17*token17)* (token18*token18)* (token4*token4)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0Uu(const double &cos_t, const double &s){
	double t =  (Mchi0*Mchi0) + (-s + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(s - 4* (MU*MU)))/2. +  (MU*MU);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MU*MU + MU*MU;
	return (12* (token1*token1)* (token68*token68)* (( (Mchi0*Mchi0) +  (MU*MU) - u)*( (Mchi0*Mchi0) +  (MU*MU) - u)))/ (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u)) - (24*token1*token13*token14*token47*token56*token59*token68*(-s +  (MZ*MZ))*(-3* (cw*cw)*((s - 2*u)* (Mchi0*Mchi0) +  (Mchi0*Mchi0*Mchi0*Mchi0) +  (( (MU*MU) - u)*( (MU*MU) - u))) +  (sw*sw)*( (Mchi0*Mchi0*Mchi0*Mchi0) + (4*s - 2*u)* (MU*MU) +  (Mchi0*Mchi0)*(s - 2*u + 8* (MU*MU)) +  (MU*MU*MU*MU) +  (u*u))))/(token17*token18*token4*(-u +  (MphiQ*MphiQ))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (12* (token13*token13)* (token14*token14)* (token47*token47)* (token56*token56)* (token59*token59)*(9* (cw*cw*cw*cw)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) - 2*(t + u)* (MU*MU) + 2* (MU*MU*MU*MU) +  (t*t) +  (u*u)) - 6* (cw*cw)* (sw*sw)*(2* (Mchi0*Mchi0*Mchi0*Mchi0) + (8*s - 2*(t + u))* (MU*MU) + 2* (Mchi0*Mchi0)*(s - t - u + 8* (MU*MU)) + 2* (MU*MU*MU*MU) +  (t*t) +  (u*u)) +  (sw*sw*sw*sw)*(34* (Mchi0*Mchi0*Mchi0*Mchi0) + 2*(8*s - 17*(t + u))* (MU*MU) +  (Mchi0*Mchi0)*(34*(s - t - u) + 32* (MU*MU)) + 34* (MU*MU*MU*MU) + 17*( (t*t) +  (u*u)))))/( (token17*token17)* (token18*token18)* (token4*token4)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0Uc(const double &cos_t, const double &s){
	double t = (-s +  (MC*MC) + 2* (Mchi0*Mchi0) +  (MU*MU) + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(( (MC*MC*MC*MC) - 2* (MC*MC)*(s +  (MU*MU)) +  (( (MU*MU) - s)*( (MU*MU) - s)))/s))/2.;
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MU*MU + MC*MC;
	return (12*(-u +  (MC*MC) +  (Mchi0*Mchi0))*(-u +  (Mchi0*Mchi0) +  (MU*MU))* (token1*token1)* (token33*token33)* (token36*token36))/ (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u));
}
double DT::chi0CHI0Ut(const double &cos_t, const double &s){
	double t = (-s + 2* (Mchi0*Mchi0) +  (MT*MT) +  (MU*MU) + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(( (MT*MT*MT*MT) - 2* (MT*MT)*(s +  (MU*MU)) +  (( (MU*MU) - s)*( (MU*MU) - s)))/s))/2.;
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MU*MU + MT*MT;
	return (12*(-u +  (Mchi0*Mchi0) +  (MT*MT))*(-u +  (Mchi0*Mchi0) +  (MU*MU))* (token1*token1)* (token33*token33)* (token39*token39))/ (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u));
}
double DT::chi0CHI0uC(const double &cos_t, const double &s){
	double t = (-s +  (MC*MC) + 2* (Mchi0*Mchi0) +  (MU*MU) + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(( (MC*MC*MC*MC) - 2* (MC*MC)*(s +  (MU*MU)) +  (( (MU*MU) - s)*( (MU*MU) - s)))/s))/2.;
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MU*MU + MC*MC;
	return (12*(-t +  (MC*MC) +  (Mchi0*Mchi0))*(-t +  (Mchi0*Mchi0) +  (MU*MU))* (token3*token3)* (token33*token33)* (token36*token36))/ (( (MphiQ*MphiQ) - t)*( (MphiQ*MphiQ) - t));
}
double DT::chi0CHI0uT(const double &cos_t, const double &s){
	double t = (-s + 2* (Mchi0*Mchi0) +  (MT*MT) +  (MU*MU) + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(( (MT*MT*MT*MT) - 2* (MT*MT)*(s +  (MU*MU)) +  (( (MU*MU) - s)*( (MU*MU) - s)))/s))/2.;
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MU*MU + MT*MT;
	return (12*(-t +  (Mchi0*Mchi0) +  (MT*MT))*(-t +  (Mchi0*Mchi0) +  (MU*MU))* (token3*token3)* (token33*token33)* (token39*token39))/ (( (MphiQ*MphiQ) - t)*( (MphiQ*MphiQ) - t));
}
double DT::chi0CHI0Cc(const double &cos_t, const double &s){
	double t =  (MC*MC) + (-s + cos_t*sqrt(s - 4* (MC*MC))*sqrt(s - 4* (Mchi0*Mchi0)))/2. +  (Mchi0*Mchi0);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MC*MC + MC*MC;
	return (12* (token1*token1)* (token69*token69)* (( (MC*MC) +  (Mchi0*Mchi0) - u)*( (MC*MC) +  (Mchi0*Mchi0) - u)))/ (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u)) - (24*token1*token13*token14*token47*token56*token59*token69*(-s +  (MZ*MZ))*(-3* (cw*cw)*(-2*u* (MC*MC) +  (MC*MC*MC*MC) + (s - 2*u)* (Mchi0*Mchi0) +  (Mchi0*Mchi0*Mchi0*Mchi0) +  (u*u)) +  (sw*sw)*( (MC*MC*MC*MC) + (s - 2*u)* (Mchi0*Mchi0) +  (MC*MC)*(4*s - 2*u + 8* (Mchi0*Mchi0)) +  (Mchi0*Mchi0*Mchi0*Mchi0) +  (u*u))))/(token17*token18*token4*(-u +  (MphiQ*MphiQ))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (12* (token13*token13)* (token14*token14)* (token47*token47)* (token56*token56)* (token59*token59)*(9* (cw*cw*cw*cw)*(-2*(t + u)* (MC*MC) + 2* (MC*MC*MC*MC) + 2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) +  (t*t) +  (u*u)) - 6* (cw*cw)* (sw*sw)*(2* (MC*MC*MC*MC) + 2*(s - t - u)* (Mchi0*Mchi0) + 2* (MC*MC)*(4*s - t - u + 8* (Mchi0*Mchi0)) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) +  (t*t) +  (u*u)) +  (sw*sw*sw*sw)*(34* (MC*MC*MC*MC) + 2* (MC*MC)*(8*s - 17*(t + u) + 16* (Mchi0*Mchi0)) + 17*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) +  (t*t) +  (u*u)))))/( (token17*token17)* (token18*token18)* (token4*token4)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0Ct(const double &cos_t, const double &s){
	double t = (-s +  (MC*MC) + 2* (Mchi0*Mchi0) +  (MT*MT) + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(( (MC*MC*MC*MC) - 2* (MC*MC)*(s +  (MT*MT)) +  (( (MT*MT) - s)*( (MT*MT) - s)))/s))/2.;
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MC*MC + MT*MT;
	return (12*(-u +  (MC*MC) +  (Mchi0*Mchi0))*(-u +  (Mchi0*Mchi0) +  (MT*MT))* (token1*token1)* (token36*token36)* (token39*token39))/ (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u));
}
double DT::chi0CHI0cT(const double &cos_t, const double &s){
	double t = (-s +  (MC*MC) + 2* (Mchi0*Mchi0) +  (MT*MT) + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(( (MC*MC*MC*MC) - 2* (MC*MC)*(s +  (MT*MT)) +  (( (MT*MT) - s)*( (MT*MT) - s)))/s))/2.;
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MC*MC + MT*MT;
	return (12*(-t +  (MC*MC) +  (Mchi0*Mchi0))*(-t +  (Mchi0*Mchi0) +  (MT*MT))* (token3*token3)* (token36*token36)* (token39*token39))/ (( (MphiQ*MphiQ) - t)*( (MphiQ*MphiQ) - t));
}
double DT::chi0CHI0Tt(const double &cos_t, const double &s){
	double t =  (Mchi0*Mchi0) + (-s + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(s - 4* (MT*MT)))/2. +  (MT*MT);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MT*MT + MT*MT;
	return (12* (token1*token1)* (token70*token70)* (( (Mchi0*Mchi0) +  (MT*MT) - u)*( (Mchi0*Mchi0) +  (MT*MT) - u)))/ (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u)) - (24*token1*token13*token14*token47*token56*token59*token70*(-s +  (MZ*MZ))*(-3* (cw*cw)*((s - 2*u)* (Mchi0*Mchi0) +  (Mchi0*Mchi0*Mchi0*Mchi0) +  (( (MT*MT) - u)*( (MT*MT) - u))) +  (sw*sw)*( (Mchi0*Mchi0*Mchi0*Mchi0) + (4*s - 2*u)* (MT*MT) +  (Mchi0*Mchi0)*(s - 2*u + 8* (MT*MT)) +  (MT*MT*MT*MT) +  (u*u))))/(token17*token18*token4*(-u +  (MphiQ*MphiQ))*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (12* (token13*token13)* (token14*token14)* (token47*token47)* (token56*token56)* (token59*token59)*(9* (cw*cw*cw*cw)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) - 2*(t + u)* (MT*MT) + 2* (MT*MT*MT*MT) +  (t*t) +  (u*u)) - 6* (cw*cw)* (sw*sw)*(2* (Mchi0*Mchi0*Mchi0*Mchi0) + (8*s - 2*(t + u))* (MT*MT) + 2* (Mchi0*Mchi0)*(s - t - u + 8* (MT*MT)) + 2* (MT*MT*MT*MT) +  (t*t) +  (u*u)) +  (sw*sw*sw*sw)*(34* (Mchi0*Mchi0*Mchi0*Mchi0) + 2*(8*s - 17*(t + u))* (MT*MT) +  (Mchi0*Mchi0)*(34*(s - t - u) + 32* (MT*MT)) + 34* (MT*MT*MT*MT) + 17*( (t*t) +  (u*u)))))/( (token17*token17)* (token18*token18)* (token4*token4)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0Dd(const double &cos_t, const double &s){
	double t =  (Mchi0*Mchi0) + (-s + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(s - 4* (MD*MD)))/2. +  (MD*MD);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MD*MD + MD*MD;
	return (12* (token13*token13)* (token14*token14)* (token47*token47)* (token55*token55)* (token59*token59)*(9* (cw*cw*cw*cw)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) - 2*(t + u)* (MD*MD) + 2* (MD*MD*MD*MD) +  (t*t) +  (u*u)) + 6* (cw*cw)* (sw*sw)*(2* (Mchi0*Mchi0*Mchi0*Mchi0) - 2*(2*s + t + u)* (MD*MD) - 2* (Mchi0*Mchi0)*(-s + t + u + 4* (MD*MD)) + 2* (MD*MD*MD*MD) +  (t*t) +  (u*u)) +  (sw*sw*sw*sw)*(10* (Mchi0*Mchi0*Mchi0*Mchi0) - 2*(4*s + 5*(t + u))* (MD*MD) - 2* (Mchi0*Mchi0)*(5*(-s + t + u) + 8* (MD*MD)) + 10* (MD*MD*MD*MD) + 5*( (t*t) +  (u*u)))))/( (token17*token17)* (token18*token18)* (token4*token4)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0Ss(const double &cos_t, const double &s){
	double t =  (Mchi0*Mchi0) + (-s + cos_t*sqrt(s - 4* (Mchi0*Mchi0))*sqrt(s - 4* (MS*MS)))/2. +  (MS*MS);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MS*MS + MS*MS;
	return (12* (token13*token13)* (token14*token14)* (token47*token47)* (token55*token55)* (token59*token59)*(9* (cw*cw*cw*cw)*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) - 2*(t + u)* (MS*MS) + 2* (MS*MS*MS*MS) +  (t*t) +  (u*u)) + 6* (cw*cw)* (sw*sw)*(2* (Mchi0*Mchi0*Mchi0*Mchi0) - 2*(2*s + t + u)* (MS*MS) - 2* (Mchi0*Mchi0)*(-s + t + u + 4* (MS*MS)) + 2* (MS*MS*MS*MS) +  (t*t) +  (u*u)) +  (sw*sw*sw*sw)*(10* (Mchi0*Mchi0*Mchi0*Mchi0) - 2*(4*s + 5*(t + u))* (MS*MS) - 2* (Mchi0*Mchi0)*(5*(-s + t + u) + 8* (MS*MS)) + 10* (MS*MS*MS*MS) + 5*( (t*t) +  (u*u)))))/( (token17*token17)* (token18*token18)* (token4*token4)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
double DT::chi0CHI0Bb(const double &cos_t, const double &s){
	double t =  (MB*MB) + (-s + cos_t*sqrt(s - 4* (MB*MB))*sqrt(s - 4* (Mchi0*Mchi0)))/2. +  (Mchi0*Mchi0);
	double u = -s - t + Mchi0*Mchi0 + Mchi0*Mchi0 + MB*MB + MB*MB;
	return (12* (token13*token13)* (token14*token14)* (token47*token47)* (token55*token55)* (token59*token59)*(9* (cw*cw*cw*cw)*(-2*(t + u)* (MB*MB) + 2* (MB*MB*MB*MB) + 2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) +  (t*t) +  (u*u)) + 6* (cw*cw)* (sw*sw)*(2* (MB*MB*MB*MB) + 2*(s - t - u)* (Mchi0*Mchi0) - 2* (MB*MB)*(2*s + t + u + 4* (Mchi0*Mchi0)) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) +  (t*t) +  (u*u)) +  (sw*sw*sw*sw)*(10* (MB*MB*MB*MB) - 2* (MB*MB)*(4*s + 5*(t + u) + 8* (Mchi0*Mchi0)) + 5*(2*(s - t - u)* (Mchi0*Mchi0) + 2* (Mchi0*Mchi0*Mchi0*Mchi0) +  (t*t) +  (u*u)))))/( (token17*token17)* (token18*token18)* (token4*token4)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ))));
}
