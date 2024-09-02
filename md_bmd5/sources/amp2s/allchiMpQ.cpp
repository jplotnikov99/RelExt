///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::chiMpQHs(const double &cos_t, const double &s){
	double t = (s* (MH*MH) + s* (MphiQ*MphiQ) -  (MH*MH)* (MphiQ*MphiQ) +  (MchiM*MchiM)*(s +  (MH*MH) -  (MS*MS)) + s* (MS*MS) +  (MphiQ*MphiQ)* (MS*MS) + cos_t*s*sqrt(( (MchiM*MchiM*MchiM*MchiM) - 2* (MchiM*MchiM)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)*sqrt(( (MH*MH*MH*MH) - 2* (MH*MH)*(s +  (MS*MS)) +  (( (MS*MS) - s)*( (MS*MS) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MchiM*MchiM + MphiQ*MphiQ + MH*MH + MS*MS;
	return (24*MS*token21*token23*token24*token9*(-t - 2*u + 3* (MchiM*MchiM) +  (MH*MH) + 2* (MS*MS))* (token22*token22)* (token7*token7))/((-u +  (MphiQ*MphiQ))*(-s +  (MS*MS))) + (12*(-(s*t) -  (MH*MH*MH*MH) - 3*t* (MS*MS) - 4*u* (MS*MS) +  (MH*MH)*(s + t + u + 2* (MS*MS)) +  (MchiM*MchiM)*(s - 2* (MH*MH) + 7* (MS*MS)) + 4* (MS*MS*MS*MS))* (token21*token21)* (token22*token22)* (token23*token23)* (token7*token7))/ (( (MS*MS) - s)*( (MS*MS) - s)) + (12*(-u +  (MchiM*MchiM) +  (MS*MS))* (token22*token22)* (token24*token24)* (token7*token7)* (token9*token9))/ (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u));
}
double DT::chiMpQHb(const double &cos_t, const double &s){
	double t = (s* (MchiM*MchiM) + s* (MH*MH) +  (MchiM*MchiM)* (MH*MH) + s* (MphiQ*MphiQ) -  (MH*MH)* (MphiQ*MphiQ) +  (MB*MB)*(s -  (MchiM*MchiM) +  (MphiQ*MphiQ)) + cos_t*s*sqrt(( (MB*MB*MB*MB) - 2* (MB*MB)*(s +  (MH*MH)) +  (( (MH*MH) - s)*( (MH*MH) - s)))/s)*sqrt(( (MchiM*MchiM*MchiM*MchiM) - 2* (MchiM*MchiM)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MchiM*MchiM + MphiQ*MphiQ + MH*MH + MB*MB;
	return (24*MB*token21*token24*token25*token9*(-t - 2*u + 2* (MB*MB) + 3* (MchiM*MchiM) +  (MH*MH))* (token26*token26)* (token7*token7))/((-s +  (MB*MB))*(-u +  (MphiQ*MphiQ))) + (12*(-(s*t) + 4* (MB*MB*MB*MB) +  (MchiM*MchiM)*(s - 2* (MH*MH)) + s* (MH*MH) + t* (MH*MH) + u* (MH*MH) +  (MB*MB)*(-3*t - 4*u + 7* (MchiM*MchiM) + 2* (MH*MH)) -  (MH*MH*MH*MH))* (token21*token21)* (token25*token25)* (token26*token26)* (token7*token7))/ (( (MB*MB) - s)*( (MB*MB) - s)) + (12*(-u +  (MB*MB) +  (MchiM*MchiM))* (token24*token24)* (token26*token26)* (token7*token7)* (token9*token9))/ (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u));
}
double DT::chiMpQAs(const double &cos_t, const double &s){
	double t = (s* (MphiQ*MphiQ) +  (MchiM*MchiM)*(s -  (MS*MS)) + s* (MS*MS) +  (MphiQ*MphiQ)* (MS*MS) + cos_t*s*sqrt(( (MchiM*MchiM*MchiM*MchiM) - 2* (MchiM*MchiM)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)*sqrt( (( (MS*MS) - s)*( (MS*MS) - s))/s) -  (s*s))/(2.*s);
	double u = -s - t + MchiM*MchiM + MphiQ*MphiQ + 0*0 + MS*MS;
	return (24*(-(s*t) +  (MchiM*MchiM*MchiM*MchiM) + s* (MphiQ*MphiQ) + t* (MphiQ*MphiQ) + u* (MphiQ*MphiQ) +  (MchiM*MchiM)*(-3*t - u + 2* (MphiQ*MphiQ)) -  (MphiQ*MphiQ*MphiQ*MphiQ) - (s + u +  (MchiM*MchiM))* (MS*MS) +  (MS*MS*MS*MS))* (token11*token11)* (token22*token22)* (token7*token7))/ (( (MchiM*MchiM) - t)*( (MchiM*MchiM) - t)) + (48*(t*u +  (MchiM*MchiM)*(s - 2*t + 2* (MphiQ*MphiQ) - 3* (MS*MS)) - s* (MS*MS) +  (MphiQ*MphiQ)*(-t - u + 2* (MS*MS)) +  (t*t))* (token11*token11)* (token22*token22)* (token7*token7))/(token28*(-t +  (MchiM*MchiM))*(-s +  (MS*MS))) - (24*(s*t - (3*t + 2*u)* (MS*MS) +  (MchiM*MchiM)*(-s + 5* (MS*MS)) + 2* (MS*MS*MS*MS))* (token11*token11)* (token22*token22)* (token7*token7))/( (( (MS*MS) - s)*( (MS*MS) - s))* (token28*token28)) - (24*(u +  (MphiQ*MphiQ))*(-u +  (MchiM*MchiM) +  (MS*MS))* (token11*token11)* (token22*token22)* (token27*token27))/ (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u)) + (12*token27*token7* (token11*token11)* (token22*token22)*( (MchiM*MchiM)*(s + 5*t + u - 2* (MphiQ*MphiQ)) - 5*s* (MS*MS) - t* (MS*MS) + u* (MS*MS) +  (MphiQ*MphiQ)*(-s + t - 3*u + 8* (MS*MS)) +  (s*s) -  (t*t) -  (u*u)))/((-t +  (MchiM*MchiM))*(-u +  (MphiQ*MphiQ))) - (24*token27*token7* (token11*token11)* (token22*token22)*(s*u + 2*t*u - 3*t* (MS*MS) - 4*u* (MS*MS) +  (MphiQ*MphiQ)*(s - t - 3*u + 2* (MS*MS)) +  (MchiM*MchiM)*(-3*t - u + 4* (MphiQ*MphiQ) + 3* (MS*MS)) + 3* (MS*MS*MS*MS) -  (s*s) +  (t*t) +  (u*u)))/(token28*(-u +  (MphiQ*MphiQ))*(-s +  (MS*MS)));
}
double DT::chiMpQAb(const double &cos_t, const double &s){
	double t = ( (MB*MB)*(s -  (MchiM*MchiM) +  (MphiQ*MphiQ)) + s*(-s +  (MchiM*MchiM) +  (MphiQ*MphiQ) + cos_t*sqrt( (( (MB*MB) - s)*( (MB*MB) - s))/s)*sqrt(( (MchiM*MchiM*MchiM*MchiM) - 2* (MchiM*MchiM)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)))/(2.*s);
	double u = -s - t + MchiM*MchiM + MphiQ*MphiQ + 0*0 + MB*MB;
	return (-48*( (MB*MB)*(s + 3* (MchiM*MchiM) - 2* (MphiQ*MphiQ)) + (t + u)*(-t +  (MphiQ*MphiQ)) -  (MchiM*MchiM)*(s - 2*t + 2* (MphiQ*MphiQ)))* (token11*token11)* (token26*token26)* (token7*token7))/(token28*(-s +  (MB*MB))*(-t +  (MchiM*MchiM))) + (24*(-(s*t) +  (MB*MB*MB*MB) -  (MB*MB)*(s + u +  (MchiM*MchiM)) +  (MchiM*MchiM*MchiM*MchiM) + s* (MphiQ*MphiQ) + t* (MphiQ*MphiQ) + u* (MphiQ*MphiQ) +  (MchiM*MchiM)*(-3*t - u + 2* (MphiQ*MphiQ)) -  (MphiQ*MphiQ*MphiQ*MphiQ))* (token11*token11)* (token26*token26)* (token7*token7))/ (( (MchiM*MchiM) - t)*( (MchiM*MchiM) - t)) - (24*(2* (MB*MB*MB*MB) + s*(t -  (MchiM*MchiM)) +  (MB*MB)*(-3*t - 2*u + 5* (MchiM*MchiM)))* (token11*token11)* (token26*token26)* (token7*token7))/( (( (MB*MB) - s)*( (MB*MB) - s))* (token28*token28)) - (24*(-u +  (MB*MB) +  (MchiM*MchiM))*(u +  (MphiQ*MphiQ))* (token11*token11)* (token26*token26)* (token27*token27))/ (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u)) + (12*token27*token7* (token11*token11)* (token26*token26)*( (MchiM*MchiM)*(s + 5*t + u - 2* (MphiQ*MphiQ)) - s* (MphiQ*MphiQ) + t* (MphiQ*MphiQ) - 3*u* (MphiQ*MphiQ) +  (MB*MB)*(-5*s - t + u + 8* (MphiQ*MphiQ)) +  (s*s) -  (t*t) -  (u*u)))/((-t +  (MchiM*MchiM))*(-u +  (MphiQ*MphiQ))) - (24*token27*token7* (token11*token11)* (token26*token26)*(s*u + 2*t*u + 3* (MB*MB*MB*MB) + s* (MphiQ*MphiQ) - t* (MphiQ*MphiQ) - 3*u* (MphiQ*MphiQ) +  (MB*MB)*(-3*t - 4*u + 3* (MchiM*MchiM) + 2* (MphiQ*MphiQ)) +  (MchiM*MchiM)*(-3*t - u + 4* (MphiQ*MphiQ)) -  (s*s) +  (t*t) +  (u*u)))/(token28*(-s +  (MB*MB))*(-u +  (MphiQ*MphiQ)));
}
double DT::chiMpQZs(const double &cos_t, const double &s){
	double t = (s* (MphiQ*MphiQ) + s* (MS*MS) +  (MphiQ*MphiQ)* (MS*MS) + s* (MZ*MZ) -  (MphiQ*MphiQ)* (MZ*MZ) +  (MchiM*MchiM)*(s -  (MS*MS) +  (MZ*MZ)) + cos_t*s*sqrt(( (MchiM*MchiM*MchiM*MchiM) - 2* (MchiM*MchiM)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)*sqrt(( (MS*MS*MS*MS) - 2* (MS*MS)*(s +  (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MchiM*MchiM + MphiQ*MphiQ + MZ*MZ + MS*MS;
	return (48*(9* (cw*cw*cw*cw)*( (MS*MS*MS*MS*MS*MS) - 2*s*t* (MZ*MZ) +  (MS*MS*MS*MS)*(-2*s - t - u + 2* (MZ*MZ)) + 2*s* (MZ*MZ*MZ*MZ) + 2*t* (MZ*MZ*MZ*MZ) + 2*u* (MZ*MZ*MZ*MZ) -  (MS*MS)*(-(s*(s + t + 2*u)) + (s + t + u)* (MZ*MZ) +  (MZ*MZ*MZ*MZ)) - 2* (MZ*MZ*MZ*MZ*MZ*MZ) - u* (s*s) +  (MchiM*MchiM)*(2* (MS*MS*MS*MS) + 2*s* (MZ*MZ) +  (MS*MS)*(-3*s + 2* (MZ*MZ)) - 4* (MZ*MZ*MZ*MZ) +  (s*s))) + 6* (cw*cw)*( (MS*MS*MS*MS*MS*MS) - 2*s*t* (MZ*MZ) +  (MS*MS*MS*MS)*(-2*s - t - u + 8* (MZ*MZ)) + 2*s* (MZ*MZ*MZ*MZ) + 2*t* (MZ*MZ*MZ*MZ) + 2*u* (MZ*MZ*MZ*MZ) +  (MS*MS)*(s*(s + t + 2*u) - (s + 7*(t + u))* (MZ*MZ) + 5* (MZ*MZ*MZ*MZ)) - 2* (MZ*MZ*MZ*MZ*MZ*MZ) - u* (s*s) +  (MchiM*MchiM)*(2* (MS*MS*MS*MS) + 2*s* (MZ*MZ) +  (MS*MS)*(-3*s + 14* (MZ*MZ)) - 4* (MZ*MZ*MZ*MZ) +  (s*s)))* (sw*sw) + ( (MS*MS*MS*MS*MS*MS) - 2*s*t* (MZ*MZ) +  (MS*MS*MS*MS)*(-2*s + 3*t - u + 14* (MZ*MZ)) + 2*s* (MZ*MZ*MZ*MZ) + 2*t* (MZ*MZ*MZ*MZ) + 2*u* (MZ*MZ*MZ*MZ) +  (MS*MS)*(s*(s - 3*t + 2*u) + (3*s - 9*t - 17*u)* (MZ*MZ) + 7* (MZ*MZ*MZ*MZ)) - 2* (MZ*MZ*MZ*MZ*MZ*MZ) - u* (s*s) +  (MchiM*MchiM)*(-2* (MS*MS*MS*MS) + 2*s* (MZ*MZ) +  (MS*MS)*(s + 26* (MZ*MZ)) - 4* (MZ*MZ*MZ*MZ) +  (s*s)))* (sw*sw*sw*sw))* (token11*token11)* (token13*token13)* (token14*token14)* (token22*token22)* (token29*token29))/( (MZ*MZ)* (( (MS*MS) - s)*( (MS*MS) - s))) + (12*((-t +  (MchiM*MchiM))*(t*u + s* (MchiM*MchiM) - (s + t + u)* (MphiQ*MphiQ) +  (MphiQ*MphiQ*MphiQ*MphiQ)) + (t -  (MchiM*MchiM))* (MS*MS*MS*MS) + (t*(-s + t + u - 2* (MphiQ*MphiQ)) +  (MchiM*MchiM)*(s - 5*t - u + 6* (MphiQ*MphiQ)))* (MZ*MZ) - (t +  (MchiM*MchiM) - 2* (MphiQ*MphiQ))* (MZ*MZ*MZ*MZ) -  (MS*MS)*((-t +  (MchiM*MchiM))*(-s - u +  (MchiM*MchiM)) + (-2*t + 6* (MchiM*MchiM))* (MZ*MZ) + 2* (MZ*MZ*MZ*MZ)))* (token11*token11)* (token15*token15)* (token16*token16)* (token22*token22)* (token7*token7))/( (MZ*MZ)* (( (MchiM*MchiM) - t)*( (MchiM*MchiM) - t))* (token17*token17)* (token18*token18)* (token4*token4)) + (12*(-u +  (MchiM*MchiM) +  (MS*MS))* (token11*token11)* (token13*token13)* (token18*token18)* (token22*token22)* (token30*token30)*( (MphiQ*MphiQ*MphiQ*MphiQ) - 2* (MphiQ*MphiQ)*(u +  (MZ*MZ)) +  (( (MZ*MZ) - u)*( (MZ*MZ) - u))))/( (MZ*MZ)* (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u))) + (12*token13*token15*token16*token30*token7* (token11*token11)* (token22*token22)*( (MS*MS)*(-((s + t - u)*(-u +  (MphiQ*MphiQ))) + (-5*s - t + u + 8* (MphiQ*MphiQ))* (MZ*MZ)) + (-s + t + u - 2* (MchiM*MchiM))* (MZ*MZ*MZ*MZ) +  (MZ*MZ)*(s*u - t*u +  (MchiM*MchiM)*(s + 5*t + 3*u - 4* (MphiQ*MphiQ)) - 2*(s - t + u)* (MphiQ*MphiQ) +  (s*s) -  (t*t) - 2* (u*u)) + (-u +  (MphiQ*MphiQ))*( (MchiM*MchiM)*(s + t + u - 2* (MphiQ*MphiQ)) + (-s + t + u)* (MphiQ*MphiQ) +  (s*s) -  (t*t) -  (u*u))))/(token17*token4*(-t +  (MchiM*MchiM))*(-u +  (MphiQ*MphiQ))* (MZ*MZ)) + (24*token13*token14*token15*token16*token29*token7* (token11*token11)* (token22*token22)*(3* (cw*cw)*(s*t* (MS*MS) + s*u* (MS*MS) + 2*t*u* (MS*MS) + s* (MS*MS*MS*MS) - t* (MS*MS*MS*MS) - u* (MS*MS*MS*MS) + s*t* (MZ*MZ) + s*u* (MZ*MZ) + 4*t*u* (MZ*MZ) - 3*s* (MS*MS)* (MZ*MZ) - 5*t* (MS*MS)* (MZ*MZ) - u* (MS*MS)* (MZ*MZ) - 4*t* (MZ*MZ*MZ*MZ) +  (MphiQ*MphiQ)*(s*(-s + t + u) - 4*(t + u)* (MZ*MZ) +  (MS*MS)*(s - 3*t - u + 8* (MZ*MZ)) + 4* (MZ*MZ*MZ*MZ)) - 2* (MS*MS)* (s*s) -  (MZ*MZ)* (s*s) +  (MchiM*MchiM)*(s*t + s*u + 2* (MS*MS*MS*MS) + 2*s* (MZ*MZ) - 8*t* (MZ*MZ) +  (MS*MS)*(-3*s - t - 3*u + 2* (MZ*MZ)) +  (MphiQ*MphiQ)*(-2*s + 4* (MS*MS) + 8* (MZ*MZ)) - 4* (MZ*MZ*MZ*MZ) +  (s*s)) +  (s*s*s) - s* (t*t) +  (MS*MS)* (t*t) + 4* (MZ*MZ)* (t*t) - s* (u*u) +  (MS*MS)* (u*u)) +  (sw*sw)*(5*s*t* (MS*MS) + s*u* (MS*MS) + 6*t*u* (MS*MS) + s* (MS*MS*MS*MS) - 5*t* (MS*MS*MS*MS) - u* (MS*MS*MS*MS) + s*t* (MZ*MZ) + s*u* (MZ*MZ) + 4*t*u* (MZ*MZ) - 3*s* (MS*MS)* (MZ*MZ) - 13*t* (MS*MS)* (MZ*MZ) - u* (MS*MS)* (MZ*MZ) - 4*t* (MZ*MZ*MZ*MZ) + 8* (MS*MS)* (MZ*MZ*MZ*MZ) +  (MphiQ*MphiQ)*(s*(-s + t + u) - 4*(t + u)* (MZ*MZ) +  (MS*MS)*(s - 7*t - u + 8* (MZ*MZ)) + 4* (MZ*MZ*MZ*MZ)) - 2* (MS*MS)* (s*s) -  (MZ*MZ)* (s*s) +  (MchiM*MchiM)*(s*t + s*u + 6* (MS*MS*MS*MS) + 2*s* (MZ*MZ) - 8*t* (MZ*MZ) +  (MphiQ*MphiQ)*(-2*s + 8* (MS*MS) + 8* (MZ*MZ)) +  (MS*MS)*(-7*s - t - 7*u + 26* (MZ*MZ)) - 4* (MZ*MZ*MZ*MZ) +  (s*s)) +  (s*s*s) - s* (t*t) +  (MS*MS)* (t*t) + 4* (MZ*MZ)* (t*t) - s* (u*u) +  (MS*MS)* (u*u))))/(token17*token18*token4*(-t +  (MchiM*MchiM))*(-s +  (MS*MS))* (MZ*MZ)) + (48*token14*token18*token29*token30* (token11*token11)* (token13*token13)* (token22*token22)*(-( (MS*MS*MS*MS)*(-u +  (MphiQ*MphiQ) + 3* (MZ*MZ))*(3* (cw*cw) +  (sw*sw))) -  (MS*MS)*(-((s + t + u - 2* (MchiM*MchiM))*(-u +  (MphiQ*MphiQ))) + (-2*s - 4*t - 5*u + 6* (MchiM*MchiM) + 5* (MphiQ*MphiQ))* (MZ*MZ) + 3* (MZ*MZ*MZ*MZ))*(3* (cw*cw) +  (sw*sw)) +  (MZ*MZ*MZ*MZ)*(3*(-s + t + u)* (cw*cw) + (-s + t + u - 2* (MS*MS))* (sw*sw)) + (-u +  (MphiQ*MphiQ))*(3*s* (cw*cw)*(-u +  (MchiM*MchiM)) + (-(s*u) +  (MchiM*MchiM)*(s - 2* (MS*MS)) + 2*t* (MS*MS))* (sw*sw)) -  (MZ*MZ)*(3* (cw*cw)*(s*u + 2*t*u + (s - t - 3*u)* (MphiQ*MphiQ) +  (MchiM*MchiM)*(-3*t - u + 4* (MphiQ*MphiQ)) -  (s*s) +  (t*t) +  (u*u)) +  (sw*sw)*(s*u + 2*t*u - 4*s* (MS*MS) - 2*t* (MS*MS) - 2*u* (MS*MS) +  (MphiQ*MphiQ)*(s - t - 3*u + 6* (MS*MS)) +  (MchiM*MchiM)*(-3*t - u + 4* (MphiQ*MphiQ) + 6* (MS*MS)) -  (s*s) +  (t*t) +  (u*u)))))/((-u +  (MphiQ*MphiQ))*(-s +  (MS*MS))* (MZ*MZ));
}
double DT::chiMpQZb(const double &cos_t, const double &s){
	double t = (s* (MchiM*MchiM) + s* (MphiQ*MphiQ) +  (MB*MB)*(s -  (MchiM*MchiM) +  (MphiQ*MphiQ)) + s* (MZ*MZ) +  (MchiM*MchiM)* (MZ*MZ) -  (MphiQ*MphiQ)* (MZ*MZ) + cos_t*s*sqrt(( (MchiM*MchiM*MchiM*MchiM) - 2* (MchiM*MchiM)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)*sqrt(( (MB*MB*MB*MB) - 2* (MB*MB)*(s +  (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MchiM*MchiM + MphiQ*MphiQ + MZ*MZ + MB*MB;
	return (48*(9* (cw*cw*cw*cw)*( (MB*MB*MB*MB*MB*MB) - 2*s*t* (MZ*MZ) + 2*s* (MchiM*MchiM)* (MZ*MZ) +  (MB*MB*MB*MB)*(-2*s - t - u + 2* (MchiM*MchiM) + 2* (MZ*MZ)) + 2*s* (MZ*MZ*MZ*MZ) + 2*t* (MZ*MZ*MZ*MZ) + 2*u* (MZ*MZ*MZ*MZ) - 4* (MchiM*MchiM)* (MZ*MZ*MZ*MZ) -  (MB*MB)*(-(s*(s + t + 2*u)) +  (MchiM*MchiM)*(3*s - 2* (MZ*MZ)) + (s + t + u)* (MZ*MZ) +  (MZ*MZ*MZ*MZ)) - 2* (MZ*MZ*MZ*MZ*MZ*MZ) - u* (s*s) +  (MchiM*MchiM)* (s*s)) + 6* (cw*cw)*( (MB*MB*MB*MB*MB*MB) - 2*s*t* (MZ*MZ) + 2*s* (MchiM*MchiM)* (MZ*MZ) +  (MB*MB*MB*MB)*(-2*s - t - u + 2* (MchiM*MchiM) + 8* (MZ*MZ)) + 2*s* (MZ*MZ*MZ*MZ) + 2*t* (MZ*MZ*MZ*MZ) + 2*u* (MZ*MZ*MZ*MZ) - 4* (MchiM*MchiM)* (MZ*MZ*MZ*MZ) +  (MB*MB)*(s*(s + t + 2*u) - (s + 7*(t + u))* (MZ*MZ) +  (MchiM*MchiM)*(-3*s + 14* (MZ*MZ)) + 5* (MZ*MZ*MZ*MZ)) - 2* (MZ*MZ*MZ*MZ*MZ*MZ) - u* (s*s) +  (MchiM*MchiM)* (s*s))* (sw*sw) + ( (MB*MB*MB*MB*MB*MB) -  (MB*MB*MB*MB)*(2*s - 3*t + u + 2* (MchiM*MchiM) - 14* (MZ*MZ)) - 2*s*t* (MZ*MZ) + 2*s* (MZ*MZ*MZ*MZ) + 2*t* (MZ*MZ*MZ*MZ) + 2*u* (MZ*MZ*MZ*MZ) +  (MB*MB)*(s*(s - 3*t + 2*u) + (3*s - 9*t - 17*u)* (MZ*MZ) +  (MchiM*MchiM)*(s + 26* (MZ*MZ)) + 7* (MZ*MZ*MZ*MZ)) - 2* (MZ*MZ*MZ*MZ*MZ*MZ) - u* (s*s) +  (MchiM*MchiM)*(2*s* (MZ*MZ) - 4* (MZ*MZ*MZ*MZ) +  (s*s)))* (sw*sw*sw*sw))* (token11*token11)* (token13*token13)* (token14*token14)* (token26*token26)* (token29*token29))/( (MZ*MZ)* (( (MB*MB) - s)*( (MB*MB) - s))) + (12*( (MB*MB*MB*MB)*(t -  (MchiM*MchiM)) + (-t +  (MchiM*MchiM))*(t*u + s* (MchiM*MchiM) - (s + t + u)* (MphiQ*MphiQ) +  (MphiQ*MphiQ*MphiQ*MphiQ)) + (t*(-s + t + u - 2* (MphiQ*MphiQ)) +  (MchiM*MchiM)*(s - 5*t - u + 6* (MphiQ*MphiQ)))* (MZ*MZ) - (t +  (MchiM*MchiM) - 2* (MphiQ*MphiQ))* (MZ*MZ*MZ*MZ) -  (MB*MB)*((-t +  (MchiM*MchiM))*(-s - u +  (MchiM*MchiM)) + (-2*t + 6* (MchiM*MchiM))* (MZ*MZ) + 2* (MZ*MZ*MZ*MZ)))* (token11*token11)* (token15*token15)* (token16*token16)* (token26*token26)* (token7*token7))/( (MZ*MZ)* (( (MchiM*MchiM) - t)*( (MchiM*MchiM) - t))* (token17*token17)* (token18*token18)* (token4*token4)) + (12*(-u +  (MB*MB) +  (MchiM*MchiM))* (token11*token11)* (token13*token13)* (token18*token18)* (token26*token26)* (token30*token30)*( (MphiQ*MphiQ*MphiQ*MphiQ) - 2* (MphiQ*MphiQ)*(u +  (MZ*MZ)) +  (( (MZ*MZ) - u)*( (MZ*MZ) - u))))/( (MZ*MZ)* (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u))) + (12*token13*token15*token16*token30*token7* (token11*token11)* (token26*token26)*( (MB*MB)*(-((s + t - u)*(-u +  (MphiQ*MphiQ))) + (-5*s - t + u + 8* (MphiQ*MphiQ))* (MZ*MZ)) + (-s + t + u - 2* (MchiM*MchiM))* (MZ*MZ*MZ*MZ) +  (MZ*MZ)*(s*u - t*u +  (MchiM*MchiM)*(s + 5*t + 3*u - 4* (MphiQ*MphiQ)) - 2*(s - t + u)* (MphiQ*MphiQ) +  (s*s) -  (t*t) - 2* (u*u)) + (-u +  (MphiQ*MphiQ))*( (MchiM*MchiM)*(s + t + u - 2* (MphiQ*MphiQ)) + (-s + t + u)* (MphiQ*MphiQ) +  (s*s) -  (t*t) -  (u*u))))/(token17*token4*(-t +  (MchiM*MchiM))*(-u +  (MphiQ*MphiQ))* (MZ*MZ)) + (24*token13*token14*token15*token16*token29*token7* (token11*token11)* (token26*token26)*(3* (cw*cw)*( (MB*MB*MB*MB)*(s - t - u + 2* (MchiM*MchiM)) + s*t* (MphiQ*MphiQ) + s*u* (MphiQ*MphiQ) + s*t* (MZ*MZ) + s*u* (MZ*MZ) + 4*t*u* (MZ*MZ) - 4*t* (MphiQ*MphiQ)* (MZ*MZ) - 4*u* (MphiQ*MphiQ)* (MZ*MZ) +  (MchiM*MchiM)*(s*(s + t + u) + 2*(s - 4*t)* (MZ*MZ) +  (MphiQ*MphiQ)*(-2*s + 8* (MZ*MZ)) - 4* (MZ*MZ*MZ*MZ)) - 4*t* (MZ*MZ*MZ*MZ) + 4* (MphiQ*MphiQ)* (MZ*MZ*MZ*MZ) -  (MphiQ*MphiQ)* (s*s) -  (MZ*MZ)* (s*s) +  (s*s*s) - s* (t*t) + 4* (MZ*MZ)* (t*t) - s* (u*u) +  (MB*MB)*(s*t + s*u + 2*t*u - 3*s* (MZ*MZ) - 5*t* (MZ*MZ) - u* (MZ*MZ) +  (MchiM*MchiM)*(-3*s - t - 3*u + 4* (MphiQ*MphiQ) + 2* (MZ*MZ)) +  (MphiQ*MphiQ)*(s - 3*t - u + 8* (MZ*MZ)) - 2* (s*s) +  (t*t) +  (u*u))) +  (sw*sw)*( (MB*MB*MB*MB)*(s - 5*t - u + 6* (MchiM*MchiM)) + s*t* (MphiQ*MphiQ) + s*u* (MphiQ*MphiQ) + s*t* (MZ*MZ) + s*u* (MZ*MZ) + 4*t*u* (MZ*MZ) - 4*t* (MphiQ*MphiQ)* (MZ*MZ) - 4*u* (MphiQ*MphiQ)* (MZ*MZ) +  (MchiM*MchiM)*(s*(s + t + u) + 2*(s - 4*t)* (MZ*MZ) +  (MphiQ*MphiQ)*(-2*s + 8* (MZ*MZ)) - 4* (MZ*MZ*MZ*MZ)) - 4*t* (MZ*MZ*MZ*MZ) + 4* (MphiQ*MphiQ)* (MZ*MZ*MZ*MZ) -  (MphiQ*MphiQ)* (s*s) -  (MZ*MZ)* (s*s) +  (s*s*s) - s* (t*t) + 4* (MZ*MZ)* (t*t) - s* (u*u) +  (MB*MB)*(5*s*t + s*u + 6*t*u - 3*s* (MZ*MZ) - 13*t* (MZ*MZ) - u* (MZ*MZ) +  (MphiQ*MphiQ)*(s - 7*t - u + 8* (MZ*MZ)) +  (MchiM*MchiM)*(-7*s - t - 7*u + 8* (MphiQ*MphiQ) + 26* (MZ*MZ)) + 8* (MZ*MZ*MZ*MZ) - 2* (s*s) +  (t*t) +  (u*u)))))/(token17*token18*token4*(-s +  (MB*MB))*(-t +  (MchiM*MchiM))* (MZ*MZ)) + (48*token14*token18*token29*token30* (token11*token11)* (token13*token13)* (token26*token26)*(-( (MB*MB*MB*MB)*(-u +  (MphiQ*MphiQ) + 3* (MZ*MZ))*(3* (cw*cw) +  (sw*sw))) -  (MB*MB)*(-((s + t + u - 2* (MchiM*MchiM))*(-u +  (MphiQ*MphiQ))) + (-2*s - 4*t - 5*u + 6* (MchiM*MchiM) + 5* (MphiQ*MphiQ))* (MZ*MZ) + 3* (MZ*MZ*MZ*MZ))*(3* (cw*cw) +  (sw*sw)) +  (MZ*MZ*MZ*MZ)*(3*(-s + t + u)* (cw*cw) + (-s + t + u - 2* (MB*MB))* (sw*sw)) + (-u +  (MphiQ*MphiQ))*(3*s* (cw*cw)*(-u +  (MchiM*MchiM)) + (-2* (MB*MB)*(-t +  (MchiM*MchiM)) + s*(-u +  (MchiM*MchiM)))* (sw*sw)) -  (MZ*MZ)*(3* (cw*cw)*(s*u + 2*t*u + (s - t - 3*u)* (MphiQ*MphiQ) +  (MchiM*MchiM)*(-3*t - u + 4* (MphiQ*MphiQ)) -  (s*s) +  (t*t) +  (u*u)) +  (sw*sw)*(s*u + 2*t*u + s* (MphiQ*MphiQ) - t* (MphiQ*MphiQ) - 3*u* (MphiQ*MphiQ) +  (MchiM*MchiM)*(-3*t - u + 4* (MphiQ*MphiQ)) +  (MB*MB)*(-2*(2*s + t + u) + 6* (MchiM*MchiM) + 6* (MphiQ*MphiQ)) -  (s*s) +  (t*t) +  (u*u)))))/((-s +  (MB*MB))*(-u +  (MphiQ*MphiQ))* (MZ*MZ));
}
double DT::chiMpQwu(const double &cos_t, const double &s){
	double t = (s* (MphiQ*MphiQ) + s* (MU*MU) +  (MphiQ*MphiQ)* (MU*MU) + s* (MW*MW) -  (MphiQ*MphiQ)* (MW*MW) +  (MchiM*MchiM)*(s -  (MU*MU) +  (MW*MW)) + cos_t*s*sqrt(( (MchiM*MchiM*MchiM*MchiM) - 2* (MchiM*MchiM)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)*sqrt(( (MU*MU*MU*MU) - 2* (MU*MU)*(s +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MchiM*MchiM + MphiQ*MphiQ + MW*MW + MU*MU;
	return (-96*token22*token26*token31*token32*( (MU*MU*MU*MU*MU*MU) + 2*s*(-t +  (MchiM*MchiM))* (MW*MW) +  (MU*MU*MU*MU)*(-2*s - t - u + 2* (MchiM*MchiM) + 2* (MW*MW)) + 2*(s + t + u - 2* (MchiM*MchiM))* (MW*MW*MW*MW) -  (MU*MU)*(-(s*(s + t + 2*u - 3* (MchiM*MchiM))) + (s + t + u - 2* (MchiM*MchiM))* (MW*MW) +  (MW*MW*MW*MW)) - 2* (MW*MW*MW*MW*MW*MW) + (-u +  (MchiM*MchiM))* (s*s))* (token1*token1)* (token11*token11))/((-s +  (MB*MB))*(s -  (MS*MS))* (MW*MW)* (token10*token10)* (token18*token18)) + (48*( (MU*MU*MU*MU*MU*MU) + 2*s*(-t +  (MchiM*MchiM))* (MW*MW) +  (MU*MU*MU*MU)*(-2*s - t - u + 2* (MchiM*MchiM) + 2* (MW*MW)) + 2*(s + t + u - 2* (MchiM*MchiM))* (MW*MW*MW*MW) -  (MU*MU)*(-(s*(s + t + 2*u - 3* (MchiM*MchiM))) + (s + t + u - 2* (MchiM*MchiM))* (MW*MW) +  (MW*MW*MW*MW)) - 2* (MW*MW*MW*MW*MW*MW) + (-u +  (MchiM*MchiM))* (s*s))* (token1*token1)* (token11*token11)* (token22*token22)* (token31*token31))/( (MW*MW)* (( (MS*MS) - s)*( (MS*MS) - s))* (token10*token10)* (token18*token18)) + (48*( (MU*MU*MU*MU*MU*MU) + 2*s*(-t +  (MchiM*MchiM))* (MW*MW) +  (MU*MU*MU*MU)*(-2*s - t - u + 2* (MchiM*MchiM) + 2* (MW*MW)) + 2*(s + t + u - 2* (MchiM*MchiM))* (MW*MW*MW*MW) -  (MU*MU)*(-(s*(s + t + 2*u - 3* (MchiM*MchiM))) + (s + t + u - 2* (MchiM*MchiM))* (MW*MW) +  (MW*MW*MW*MW)) - 2* (MW*MW*MW*MW*MW*MW) + (-u +  (MchiM*MchiM))* (s*s))* (token1*token1)* (token11*token11)* (token26*token26)* (token32*token32))/( (MW*MW)* (( (MB*MB) - s)*( (MB*MB) - s))* (token10*token10)* (token18*token18)) + (12*((-t +  (MchiM*MchiM))*(t*u + s* (Mchi0*Mchi0) - (s + t + u)* (MphiQ*MphiQ) +  (MphiQ*MphiQ*MphiQ*MphiQ)) + (t -  (MchiM*MchiM))* (MU*MU*MU*MU) + ((s + t - u)* (Mchi0*Mchi0) + t*(-s + t + u - 2* (MphiQ*MphiQ)) + 6*Mchi0*MchiM*(-t +  (MphiQ*MphiQ)))* (MW*MW) +  (MU*MU)*(-((-s - u +  (Mchi0*Mchi0))*(-t +  (MchiM*MchiM))) + (-6*Mchi0*MchiM + 2*t)* (MW*MW) - 2* (MW*MW*MW*MW)) - (t +  (Mchi0*Mchi0) - 2* (MphiQ*MphiQ))* (MW*MW*MW*MW))* (token11*token11)* (token19*token19)* (token33*token33))/( (MW*MW)* (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t))* (token10*token10)* (token18*token18)) - (24*token1*token19*token26*token32*token33* (token11*token11)*((2*Mchi0*MchiM + s - t - u)* (MU*MU*MU*MU) - 4*(Mchi0*MchiM + t -  (MphiQ*MphiQ))* (MW*MW*MW*MW) +  (MW*MW)*(2*Mchi0*MchiM*s + s*(t + u) - 4*(t + u)*(-t +  (MphiQ*MphiQ)) + 8* (MchiM*MchiM)*(-t +  (MphiQ*MphiQ)) -  (s*s)) + s*(2*Mchi0*MchiM*s +  (MchiM*MchiM)*(-s + t + u - 2* (MphiQ*MphiQ)) + (-s + t + u)* (MphiQ*MphiQ) +  (s*s) -  (t*t) -  (u*u)) +  (MU*MU)*(-4*Mchi0*MchiM*s + s*t + s*u + 2*t*u + s* (MphiQ*MphiQ) - 3*t* (MphiQ*MphiQ) - u* (MphiQ*MphiQ) +  (MchiM*MchiM)*(s - t - 3*u + 4* (MphiQ*MphiQ)) + (2*Mchi0*MchiM - 3*s - 5*t - u + 8* (MphiQ*MphiQ))* (MW*MW) - 2* (s*s) +  (t*t) +  (u*u))))/((-s +  (MB*MB))*(-t +  (Mchi0*Mchi0))* (MW*MW)* (token10*token10)* (token18*token18)) - (24*token1*token19*token22*token31*token33* (token11*token11)*((2*Mchi0*MchiM + s - t - u)* (MU*MU*MU*MU) - 4*(Mchi0*MchiM + t -  (MphiQ*MphiQ))* (MW*MW*MW*MW) +  (MW*MW)*(2*Mchi0*MchiM*s + s*(t + u) - 4*(t + u)*(-t +  (MphiQ*MphiQ)) + 8* (MchiM*MchiM)*(-t +  (MphiQ*MphiQ)) -  (s*s)) + s*(2*Mchi0*MchiM*s +  (MchiM*MchiM)*(-s + t + u - 2* (MphiQ*MphiQ)) + (-s + t + u)* (MphiQ*MphiQ) +  (s*s) -  (t*t) -  (u*u)) +  (MU*MU)*(-4*Mchi0*MchiM*s + s*t + s*u + 2*t*u + s* (MphiQ*MphiQ) - 3*t* (MphiQ*MphiQ) - u* (MphiQ*MphiQ) +  (MchiM*MchiM)*(s - t - 3*u + 4* (MphiQ*MphiQ)) + (2*Mchi0*MchiM - 3*s - 5*t - u + 8* (MphiQ*MphiQ))* (MW*MW) - 2* (s*s) +  (t*t) +  (u*u))))/((-t +  (Mchi0*Mchi0))*(-s +  (MS*MS))* (MW*MW)* (token10*token10)* (token18*token18));
}
double DT::chiMpQwc(const double &cos_t, const double &s){
	double t = (s* (MchiM*MchiM) + s* (MphiQ*MphiQ) +  (MC*MC)*(s -  (MchiM*MchiM) +  (MphiQ*MphiQ)) + s* (MW*MW) +  (MchiM*MchiM)* (MW*MW) -  (MphiQ*MphiQ)* (MW*MW) + cos_t*s*sqrt(( (MchiM*MchiM*MchiM*MchiM) - 2* (MchiM*MchiM)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)*sqrt(( (MC*MC*MC*MC) - 2* (MC*MC)*(s +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MchiM*MchiM + MphiQ*MphiQ + MW*MW + MC*MC;
	return (-96*token22*token26*token34*token35*( (MC*MC*MC*MC*MC*MC) + 2*s*(-t +  (MchiM*MchiM))* (MW*MW) +  (MC*MC*MC*MC)*(-2*s - t - u + 2* (MchiM*MchiM) + 2* (MW*MW)) + 2*(s + t + u - 2* (MchiM*MchiM))* (MW*MW*MW*MW) -  (MC*MC)*(-(s*(s + t + 2*u - 3* (MchiM*MchiM))) + (s + t + u - 2* (MchiM*MchiM))* (MW*MW) +  (MW*MW*MW*MW)) - 2* (MW*MW*MW*MW*MW*MW) + (-u +  (MchiM*MchiM))* (s*s))* (token1*token1)* (token11*token11))/((-s +  (MB*MB))*(s -  (MS*MS))* (MW*MW)* (token10*token10)* (token18*token18)) + (48*( (MC*MC*MC*MC*MC*MC) + 2*s*(-t +  (MchiM*MchiM))* (MW*MW) +  (MC*MC*MC*MC)*(-2*s - t - u + 2* (MchiM*MchiM) + 2* (MW*MW)) + 2*(s + t + u - 2* (MchiM*MchiM))* (MW*MW*MW*MW) -  (MC*MC)*(-(s*(s + t + 2*u - 3* (MchiM*MchiM))) + (s + t + u - 2* (MchiM*MchiM))* (MW*MW) +  (MW*MW*MW*MW)) - 2* (MW*MW*MW*MW*MW*MW) + (-u +  (MchiM*MchiM))* (s*s))* (token1*token1)* (token11*token11)* (token22*token22)* (token34*token34))/( (MW*MW)* (( (MS*MS) - s)*( (MS*MS) - s))* (token10*token10)* (token18*token18)) + (48*( (MC*MC*MC*MC*MC*MC) + 2*s*(-t +  (MchiM*MchiM))* (MW*MW) +  (MC*MC*MC*MC)*(-2*s - t - u + 2* (MchiM*MchiM) + 2* (MW*MW)) + 2*(s + t + u - 2* (MchiM*MchiM))* (MW*MW*MW*MW) -  (MC*MC)*(-(s*(s + t + 2*u - 3* (MchiM*MchiM))) + (s + t + u - 2* (MchiM*MchiM))* (MW*MW) +  (MW*MW*MW*MW)) - 2* (MW*MW*MW*MW*MW*MW) + (-u +  (MchiM*MchiM))* (s*s))* (token1*token1)* (token11*token11)* (token26*token26)* (token35*token35))/( (MW*MW)* (( (MB*MB) - s)*( (MB*MB) - s))* (token10*token10)* (token18*token18)) + (12*( (MC*MC*MC*MC)*(t -  (MchiM*MchiM)) + (-t +  (MchiM*MchiM))*(t*u + s* (Mchi0*Mchi0) - (s + t + u)* (MphiQ*MphiQ) +  (MphiQ*MphiQ*MphiQ*MphiQ)) + ((s + t - u)* (Mchi0*Mchi0) + t*(-s + t + u - 2* (MphiQ*MphiQ)) + 6*Mchi0*MchiM*(-t +  (MphiQ*MphiQ)))* (MW*MW) +  (MC*MC)*(-((-s - u +  (Mchi0*Mchi0))*(-t +  (MchiM*MchiM))) + (-6*Mchi0*MchiM + 2*t)* (MW*MW) - 2* (MW*MW*MW*MW)) - (t +  (Mchi0*Mchi0) - 2* (MphiQ*MphiQ))* (MW*MW*MW*MW))* (token11*token11)* (token19*token19)* (token36*token36))/( (MW*MW)* (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t))* (token10*token10)* (token18*token18)) - (24*token1*token19*token26*token35*token36* (token11*token11)*((2*Mchi0*MchiM + s - t - u)* (MC*MC*MC*MC) - 4*(Mchi0*MchiM + t -  (MphiQ*MphiQ))* (MW*MW*MW*MW) +  (MW*MW)*(2*Mchi0*MchiM*s + s*(t + u) - 4*(t + u)*(-t +  (MphiQ*MphiQ)) + 8* (MchiM*MchiM)*(-t +  (MphiQ*MphiQ)) -  (s*s)) + s*(2*Mchi0*MchiM*s +  (MchiM*MchiM)*(-s + t + u - 2* (MphiQ*MphiQ)) + (-s + t + u)* (MphiQ*MphiQ) +  (s*s) -  (t*t) -  (u*u)) +  (MC*MC)*(-4*Mchi0*MchiM*s + s*t + s*u + 2*t*u + s* (MphiQ*MphiQ) - 3*t* (MphiQ*MphiQ) - u* (MphiQ*MphiQ) +  (MchiM*MchiM)*(s - t - 3*u + 4* (MphiQ*MphiQ)) + (2*Mchi0*MchiM - 3*s - 5*t - u + 8* (MphiQ*MphiQ))* (MW*MW) - 2* (s*s) +  (t*t) +  (u*u))))/((-s +  (MB*MB))*(-t +  (Mchi0*Mchi0))* (MW*MW)* (token10*token10)* (token18*token18)) - (24*token1*token19*token22*token34*token36* (token11*token11)*((2*Mchi0*MchiM + s - t - u)* (MC*MC*MC*MC) - 4*(Mchi0*MchiM + t -  (MphiQ*MphiQ))* (MW*MW*MW*MW) +  (MW*MW)*(2*Mchi0*MchiM*s + s*(t + u) - 4*(t + u)*(-t +  (MphiQ*MphiQ)) + 8* (MchiM*MchiM)*(-t +  (MphiQ*MphiQ)) -  (s*s)) + s*(2*Mchi0*MchiM*s +  (MchiM*MchiM)*(-s + t + u - 2* (MphiQ*MphiQ)) + (-s + t + u)* (MphiQ*MphiQ) +  (s*s) -  (t*t) -  (u*u)) +  (MC*MC)*(-4*Mchi0*MchiM*s + s*t + s*u + 2*t*u + s* (MphiQ*MphiQ) - 3*t* (MphiQ*MphiQ) - u* (MphiQ*MphiQ) +  (MchiM*MchiM)*(s - t - 3*u + 4* (MphiQ*MphiQ)) + (2*Mchi0*MchiM - 3*s - 5*t - u + 8* (MphiQ*MphiQ))* (MW*MW) - 2* (s*s) +  (t*t) +  (u*u))))/((-t +  (Mchi0*Mchi0))*(-s +  (MS*MS))* (MW*MW)* (token10*token10)* (token18*token18));
}
double DT::chiMpQwt(const double &cos_t, const double &s){
	double t = (s* (MphiQ*MphiQ) + s* (MT*MT) +  (MphiQ*MphiQ)* (MT*MT) + s* (MW*MW) -  (MphiQ*MphiQ)* (MW*MW) +  (MchiM*MchiM)*(s -  (MT*MT) +  (MW*MW)) + cos_t*s*sqrt(( (MchiM*MchiM*MchiM*MchiM) - 2* (MchiM*MchiM)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)*sqrt(( (MT*MT*MT*MT) - 2* (MT*MT)*(s +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MchiM*MchiM + MphiQ*MphiQ + MW*MW + MT*MT;
	return (-96*token22*token26*token37*token38*( (MT*MT*MT*MT*MT*MT) + 2*s*(-t +  (MchiM*MchiM))* (MW*MW) +  (MT*MT*MT*MT)*(-2*s - t - u + 2* (MchiM*MchiM) + 2* (MW*MW)) + 2*(s + t + u - 2* (MchiM*MchiM))* (MW*MW*MW*MW) -  (MT*MT)*(-(s*(s + t + 2*u - 3* (MchiM*MchiM))) + (s + t + u - 2* (MchiM*MchiM))* (MW*MW) +  (MW*MW*MW*MW)) - 2* (MW*MW*MW*MW*MW*MW) + (-u +  (MchiM*MchiM))* (s*s))* (token1*token1)* (token11*token11))/((-s +  (MB*MB))*(s -  (MS*MS))* (MW*MW)* (token10*token10)* (token18*token18)) + (48*( (MT*MT*MT*MT*MT*MT) + 2*s*(-t +  (MchiM*MchiM))* (MW*MW) +  (MT*MT*MT*MT)*(-2*s - t - u + 2* (MchiM*MchiM) + 2* (MW*MW)) + 2*(s + t + u - 2* (MchiM*MchiM))* (MW*MW*MW*MW) -  (MT*MT)*(-(s*(s + t + 2*u - 3* (MchiM*MchiM))) + (s + t + u - 2* (MchiM*MchiM))* (MW*MW) +  (MW*MW*MW*MW)) - 2* (MW*MW*MW*MW*MW*MW) + (-u +  (MchiM*MchiM))* (s*s))* (token1*token1)* (token11*token11)* (token22*token22)* (token37*token37))/( (MW*MW)* (( (MS*MS) - s)*( (MS*MS) - s))* (token10*token10)* (token18*token18)) + (48*( (MT*MT*MT*MT*MT*MT) + 2*s*(-t +  (MchiM*MchiM))* (MW*MW) +  (MT*MT*MT*MT)*(-2*s - t - u + 2* (MchiM*MchiM) + 2* (MW*MW)) + 2*(s + t + u - 2* (MchiM*MchiM))* (MW*MW*MW*MW) -  (MT*MT)*(-(s*(s + t + 2*u - 3* (MchiM*MchiM))) + (s + t + u - 2* (MchiM*MchiM))* (MW*MW) +  (MW*MW*MW*MW)) - 2* (MW*MW*MW*MW*MW*MW) + (-u +  (MchiM*MchiM))* (s*s))* (token1*token1)* (token11*token11)* (token26*token26)* (token38*token38))/( (MW*MW)* (( (MB*MB) - s)*( (MB*MB) - s))* (token10*token10)* (token18*token18)) + (12*((-t +  (MchiM*MchiM))*(t*u + s* (Mchi0*Mchi0) - (s + t + u)* (MphiQ*MphiQ) +  (MphiQ*MphiQ*MphiQ*MphiQ)) + (t -  (MchiM*MchiM))* (MT*MT*MT*MT) + ((s + t - u)* (Mchi0*Mchi0) + t*(-s + t + u - 2* (MphiQ*MphiQ)) + 6*Mchi0*MchiM*(-t +  (MphiQ*MphiQ)))* (MW*MW) +  (MT*MT)*(-((-s - u +  (Mchi0*Mchi0))*(-t +  (MchiM*MchiM))) + (-6*Mchi0*MchiM + 2*t)* (MW*MW) - 2* (MW*MW*MW*MW)) - (t +  (Mchi0*Mchi0) - 2* (MphiQ*MphiQ))* (MW*MW*MW*MW))* (token11*token11)* (token19*token19)* (token39*token39))/( (MW*MW)* (( (Mchi0*Mchi0) - t)*( (Mchi0*Mchi0) - t))* (token10*token10)* (token18*token18)) - (24*token1*token19*token26*token38*token39* (token11*token11)*((2*Mchi0*MchiM + s - t - u)* (MT*MT*MT*MT) - 4*(Mchi0*MchiM + t -  (MphiQ*MphiQ))* (MW*MW*MW*MW) +  (MW*MW)*(2*Mchi0*MchiM*s + s*(t + u) - 4*(t + u)*(-t +  (MphiQ*MphiQ)) + 8* (MchiM*MchiM)*(-t +  (MphiQ*MphiQ)) -  (s*s)) + s*(2*Mchi0*MchiM*s +  (MchiM*MchiM)*(-s + t + u - 2* (MphiQ*MphiQ)) + (-s + t + u)* (MphiQ*MphiQ) +  (s*s) -  (t*t) -  (u*u)) +  (MT*MT)*(-4*Mchi0*MchiM*s + s*t + s*u + 2*t*u + s* (MphiQ*MphiQ) - 3*t* (MphiQ*MphiQ) - u* (MphiQ*MphiQ) +  (MchiM*MchiM)*(s - t - 3*u + 4* (MphiQ*MphiQ)) + (2*Mchi0*MchiM - 3*s - 5*t - u + 8* (MphiQ*MphiQ))* (MW*MW) - 2* (s*s) +  (t*t) +  (u*u))))/((-s +  (MB*MB))*(-t +  (Mchi0*Mchi0))* (MW*MW)* (token10*token10)* (token18*token18)) - (24*token1*token19*token22*token37*token39* (token11*token11)*((2*Mchi0*MchiM + s - t - u)* (MT*MT*MT*MT) - 4*(Mchi0*MchiM + t -  (MphiQ*MphiQ))* (MW*MW*MW*MW) +  (MW*MW)*(2*Mchi0*MchiM*s + s*(t + u) - 4*(t + u)*(-t +  (MphiQ*MphiQ)) + 8* (MchiM*MchiM)*(-t +  (MphiQ*MphiQ)) -  (s*s)) + s*(2*Mchi0*MchiM*s +  (MchiM*MchiM)*(-s + t + u - 2* (MphiQ*MphiQ)) + (-s + t + u)* (MphiQ*MphiQ) +  (s*s) -  (t*t) -  (u*u)) +  (MT*MT)*(-4*Mchi0*MchiM*s + s*t + s*u + 2*t*u + s* (MphiQ*MphiQ) - 3*t* (MphiQ*MphiQ) - u* (MphiQ*MphiQ) +  (MchiM*MchiM)*(s - t - 3*u + 4* (MphiQ*MphiQ)) + (2*Mchi0*MchiM - 3*s - 5*t - u + 8* (MphiQ*MphiQ))* (MW*MW) - 2* (s*s) +  (t*t) +  (u*u))))/((-t +  (Mchi0*Mchi0))*(-s +  (MS*MS))* (MW*MW)* (token10*token10)* (token18*token18));
}
double DT::chiMpQGs(const double &cos_t, const double &s){
	double t = (s* (MphiQ*MphiQ) +  (MchiM*MchiM)*(s -  (MS*MS)) + s* (MS*MS) +  (MphiQ*MphiQ)* (MS*MS) + cos_t*s*sqrt(( (MchiM*MchiM*MchiM*MchiM) - 2* (MchiM*MchiM)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)*sqrt( (( (MS*MS) - s)*( (MS*MS) - s))/s) -  (s*s))/(2.*s);
	double u = -s - t + MchiM*MchiM + MphiQ*MphiQ + 0*0 + MS*MS;
	return (-32*(s*t - (3*t + 2*u)* (MS*MS) +  (MchiM*MchiM)*(-s + 5* (MS*MS)) + 2* (MS*MS*MS*MS))* (token19*token19)* (token22*token22)* (token40*token40))/ (( (MS*MS) - s)*( (MS*MS) - s)) - (32*(u +  (MphiQ*MphiQ))*(-u +  (MchiM*MchiM) +  (MS*MS))* (token19*token19)* (token22*token22)* (token40*token40))/ (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u)) - (32* (token19*token19)* (token22*token22)* (token40*token40)*(s*u + 2*t*u - 3*t* (MS*MS) - 4*u* (MS*MS) +  (MphiQ*MphiQ)*(s - t - 3*u + 2* (MS*MS)) +  (MchiM*MchiM)*(-3*t - u + 4* (MphiQ*MphiQ) + 3* (MS*MS)) + 3* (MS*MS*MS*MS) -  (s*s) +  (t*t) +  (u*u)))/((-u +  (MphiQ*MphiQ))*(-s +  (MS*MS)));
}
double DT::chiMpQGb(const double &cos_t, const double &s){
	double t = ( (MB*MB)*(s -  (MchiM*MchiM) +  (MphiQ*MphiQ)) + s*(-s +  (MchiM*MchiM) +  (MphiQ*MphiQ) + cos_t*sqrt( (( (MB*MB) - s)*( (MB*MB) - s))/s)*sqrt(( (MchiM*MchiM*MchiM*MchiM) - 2* (MchiM*MchiM)*(s +  (MphiQ*MphiQ)) +  (( (MphiQ*MphiQ) - s)*( (MphiQ*MphiQ) - s)))/s)))/(2.*s);
	double u = -s - t + MchiM*MchiM + MphiQ*MphiQ + 0*0 + MB*MB;
	return (-32*(2* (MB*MB*MB*MB) + s*(t -  (MchiM*MchiM)) +  (MB*MB)*(-3*t - 2*u + 5* (MchiM*MchiM)))* (token19*token19)* (token26*token26)* (token40*token40))/ (( (MB*MB) - s)*( (MB*MB) - s)) - (32*(-u +  (MB*MB) +  (MchiM*MchiM))*(u +  (MphiQ*MphiQ))* (token19*token19)* (token26*token26)* (token40*token40))/ (( (MphiQ*MphiQ) - u)*( (MphiQ*MphiQ) - u)) - (32* (token19*token19)* (token26*token26)* (token40*token40)*(s*u + 2*t*u + 3* (MB*MB*MB*MB) + s* (MphiQ*MphiQ) - t* (MphiQ*MphiQ) - 3*u* (MphiQ*MphiQ) +  (MB*MB)*(-3*t - 4*u + 3* (MchiM*MchiM) + 2* (MphiQ*MphiQ)) +  (MchiM*MchiM)*(-3*t - u + 4* (MphiQ*MphiQ)) -  (s*s) +  (t*t) +  (u*u)))/((-s +  (MB*MB))*(-u +  (MphiQ*MphiQ)));
}
