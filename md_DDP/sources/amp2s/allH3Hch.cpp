///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::H3HchH1W(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MH3*MH3) +  (MH1*MH1)*(s +  (MH3*MH3) -  (MHch*MHch)) + s* (MHch*MHch) + s* (MW*MW) -  (MH3*MH3)* (MW*MW) +  (MHch*MHch)* (MW*MW) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MH1*MH1*MH1*MH1) - 2* (MH1*MH1)*(s +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + MH1*MH1 + MW*MW;
	return (-((token32*token4*token61*token62*((-t +  (MHch*MHch))*(-s - t + u +  (MH1*MH1) -  (MH3*MH3) +  (MHch*MHch)) + (s - 2*t - u + 3* (MH1*MH1) - 3* (MH3*MH3) - 2* (MHch*MHch))* (MW*MW) +  (MW*MW*MW*MW))* (token44*token44)* (token56*token56))/((-t +  (MH3*MH3))*(-u +  (MHch*MHch))* (MW*MW)* (token34*token34))) + (( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))* (token32*token32)* (token4*token4)* (token44*token44)* (token56*token56))/( (MW*MW)* (( (MH3*MH3) - t)*( (MH3*MH3) - t))* (token34*token34)) + ( (token44*token44)* (token56*token56)* (token61*token61)* (token62*token62)*(-2*(-s - t + u +  (MH1*MH1) + 7* (MH3*MH3) +  (MHch*MHch))* (MW*MW) +  (MW*MW*MW*MW) +  (( (MH1*MH1) -  (MH3*MH3) +  (MHch*MHch) - s - t + u)*( (MH1*MH1) -  (MH3*MH3) +  (MHch*MHch) - s - t + u))))/(4.* (MW*MW)* (token34*token34)* (( (MHch*MHch) - u)*( (MHch*MHch) - u))) + (2*token11*token32*token4*token56*token59*token60*token7*(-s +  (MW*MW))*(-((-s +  (MH1*MH1))*(-t +  (MHch*MHch))) + (s + t + 2*u - 3* (MH1*MH1) - 3* (MHch*MHch))* (MW*MW) -  (MW*MW*MW*MW))* (token44*token44))/(token26*token52*(-t +  (MH3*MH3))* (MW*MW)* (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (token11*token56*token59*token60*token61*token62*token7*(-s +  (MW*MW))*((-s +  (MH1*MH1))*(-s - t + u +  (MH1*MH1) -  (MH3*MH3) +  (MHch*MHch)) - (2*s - t + u + 2* (MH1*MH1) + 3* (MH3*MH3) - 3* (MHch*MHch))* (MW*MW) +  (MW*MW*MW*MW))* (token44*token44))/(token26*token52*(-u +  (MHch*MHch))* (MW*MW)* (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (token32*token44*token48*token61*token62*token7*(-s +  (MW*MW))*((t - u +  (MH3*MH3) -  (MHch*MHch))*(s + t - u -  (MH1*MH1) +  (MH3*MH3) -  (MHch*MHch)) + (4*s + t - u - 11* (MH3*MH3) - 5* (MHch*MHch))* (MW*MW))* (token56*token56))/(2.*token26*token28*(-u +  (MHch*MHch))* (MW*MW)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (token4*token44*token48*token7*(-s +  (MW*MW))*((-t +  (MHch*MHch))*(-t + u -  (MH3*MH3) +  (MHch*MHch)) + (2*s - t + u - 3* (MH3*MH3) - 5* (MHch*MHch))* (MW*MW))* (token32*token32)* (token56*token56))/(token26*token28*(-t +  (MH3*MH3))* (MW*MW)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (token11*token32*token44*token48*token56*token59*token60*(-((-s +  (MH1*MH1))*(t - u +  (MH3*MH3) -  (MHch*MHch))) + (t - u - 3* (MH3*MH3) + 3* (MHch*MHch))* (MW*MW))* (token7*token7))/(token28*token52* (MW*MW)* (token26*token26)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (( (MH1*MH1*MH1*MH1) - 2* (MH1*MH1)*(s +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))* (token11*token11)* (token44*token44)* (token59*token59)* (token60*token60)* (token7*token7))/( (MW*MW)* (token26*token26)* (token34*token34)* (token52*token52)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + ( (token32*token32)* (token34*token34)* (token48*token48)* (token56*token56)* (token7*token7)*((4*s - 8* (MH3*MH3) - 8* (MHch*MHch))* (MW*MW) +  (( (MH3*MH3) -  (MHch*MHch) + t - u)*( (MH3*MH3) -  (MHch*MHch) + t - u))))/(4.* (MW*MW)* (token26*token26)* (token28*token28)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))));
}
double DT::H3HchH2W(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MH3*MH3) +  (MH2*MH2)*(s +  (MH3*MH3) -  (MHch*MHch)) + s* (MHch*MHch) + s* (MW*MW) -  (MH3*MH3)* (MW*MW) +  (MHch*MHch)* (MW*MW) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MH2*MH2*MH2*MH2) - 2* (MH2*MH2)*(s +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + MH2*MH2 + MW*MW;
	return (-((token10*token32*token61*token63*((-t +  (MHch*MHch))*(-s - t + u +  (MH2*MH2) -  (MH3*MH3) +  (MHch*MHch)) + (s - 2*t - u + 3* (MH2*MH2) - 3* (MH3*MH3) - 2* (MHch*MHch))* (MW*MW) +  (MW*MW*MW*MW))* (token44*token44)* (token56*token56))/((-t +  (MH3*MH3))*(-u +  (MHch*MHch))* (MW*MW)* (token34*token34))) + (( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))* (token10*token10)* (token44*token44)* (token56*token56)* (token61*token61))/( (MW*MW)* (( (MH3*MH3) - t)*( (MH3*MH3) - t))* (token34*token34)) + ( (token32*token32)* (token44*token44)* (token56*token56)* (token63*token63)*(-2*(-s - t + u +  (MH2*MH2) + 7* (MH3*MH3) +  (MHch*MHch))* (MW*MW) +  (MW*MW*MW*MW) +  (( (MH2*MH2) -  (MH3*MH3) +  (MHch*MHch) - s - t + u)*( (MH2*MH2) -  (MH3*MH3) +  (MHch*MHch) - s - t + u))))/(4.* (MW*MW)* (token34*token34)* (( (MHch*MHch) - u)*( (MHch*MHch) - u))) + (2*token10*token56*token59*token60*token61*token8*(-s +  (MW*MW))*(-((-s +  (MH2*MH2))*(-t +  (MHch*MHch))) + (s + t + 2*u - 3* (MH2*MH2) - 3* (MHch*MHch))* (MW*MW) -  (MW*MW*MW*MW))* (token44*token44))/(token26*token52*(-t +  (MH3*MH3))* (MW*MW)* (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (token32*token56*token59*token60*token63*token8*(-s +  (MW*MW))*((-s +  (MH2*MH2))*(-s - t + u +  (MH2*MH2) -  (MH3*MH3) +  (MHch*MHch)) - (2*s - t + u + 2* (MH2*MH2) + 3* (MH3*MH3) - 3* (MHch*MHch))* (MW*MW) +  (MW*MW*MW*MW))* (token44*token44))/(token26*token52*(-u +  (MHch*MHch))* (MW*MW)* (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (token10*token32*token44*token48*token61*token8*(-s +  (MW*MW))*((-t +  (MHch*MHch))*(-t + u -  (MH3*MH3) +  (MHch*MHch)) + (2*s - t + u - 3* (MH3*MH3) - 5* (MHch*MHch))* (MW*MW))* (token56*token56))/(token26*token28*(-t +  (MH3*MH3))* (MW*MW)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (token44*token48*token63*token8*(-s +  (MW*MW))*((t - u +  (MH3*MH3) -  (MHch*MHch))*(s + t - u -  (MH2*MH2) +  (MH3*MH3) -  (MHch*MHch)) + (4*s + t - u - 11* (MH3*MH3) - 5* (MHch*MHch))* (MW*MW))* (token32*token32)* (token56*token56))/(2.*token26*token28*(-u +  (MHch*MHch))* (MW*MW)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (token32*token44*token48*token56*token59*token60*((-s +  (MH2*MH2))*(t - u +  (MH3*MH3) -  (MHch*MHch)) + (-t + u + 3* (MH3*MH3) - 3* (MHch*MHch))* (MW*MW))* (token8*token8))/(token28*token52* (MW*MW)* (token26*token26)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (( (MH2*MH2*MH2*MH2) - 2* (MH2*MH2)*(s +  (MW*MW)) +  (( (MW*MW) - s)*( (MW*MW) - s)))* (token44*token44)* (token59*token59)* (token60*token60)* (token8*token8))/( (MW*MW)* (token26*token26)* (token34*token34)* (token52*token52)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + ( (token32*token32)* (token34*token34)* (token48*token48)* (token56*token56)* (token8*token8)*((4*s - 8* (MH3*MH3) - 8* (MHch*MHch))* (MW*MW) +  (( (MH3*MH3) -  (MHch*MHch) + t - u)*( (MH3*MH3) -  (MHch*MHch) + t - u))))/(4.* (MW*MW)* (token26*token26)* (token28*token28)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))));
}
double DT::H3HchAW(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MHch*MHch) +  (MH3*MH3)*(s -  (MW*MW)) + s* (MW*MW) +  (MHch*MHch)* (MW*MW) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt( (( (MW*MW) - s)*( (MW*MW) - s))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + 0*0 + MW*MW;
	return ((token11*token56*token61*((s + t - u +  (MH3*MH3) -  (MHch*MHch))*(-s - 2*t + 2* (MHch*MHch)) + (3*(t + u) + 9* (MH3*MH3) +  (MHch*MHch))* (MW*MW) - 3* (MW*MW*MW*MW))* (token24*token24))/(2.*token26*token52*(-u +  (MHch*MHch))* (MW*MW)) + (3* (token11*token11)* (token24*token24))/( (token26*token26)* (token52*token52)) - ((u +  (MHch*MHch))* (token24*token24)* (token56*token56)* (token61*token61)*(-2*(-s - t + u + 7* (MH3*MH3) +  (MHch*MHch))* (MW*MW) +  (MW*MW*MW*MW) +  (( (MH3*MH3) -  (MHch*MHch) + s + t - u)*( (MH3*MH3) -  (MHch*MHch) + s + t - u))))/(2.* (MW*MW)* (( (MHch*MHch) - u)*( (MHch*MHch) - u))) + (token32*token56*token64*(s*(-t + u -  (MH3*MH3) +  (MHch*MHch)) + (11*(t - u) + 3* (MH3*MH3) - 3* (MHch*MHch))* (MW*MW))* (token24*token24))/(2.*token26*token52* (MW*MW)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (token11*token32*token56*(-s +  (MW*MW))*(s*(t - u +  (MH3*MH3) -  (MHch*MHch)) + (11*(-t + u) - 3* (MH3*MH3) + 3* (MHch*MHch))* (MW*MW))* (token24*token24))/(2.*token26*token52* (MW*MW)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (token56*token61*token64*(-s +  (MW*MW))*(-((s + t - u +  (MH3*MH3) -  (MHch*MHch))*(-s - 2*t + 2* (MHch*MHch))) - (3*(t + u) + 9* (MH3*MH3) +  (MHch*MHch))* (MW*MW) + 3* (MW*MW*MW*MW))* (token24*token24))/(2.*token26*token52*(-u +  (MHch*MHch))* (MW*MW)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (6*token11*token64*(s -  (MW*MW))* (token24*token24))/( (token26*token26)* (token52*token52)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (3* (token24*token24)* (token64*token64))/( (token26*token26)* (token52*token52)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + ( (token24*token24)* (token32*token32)* (token56*token56)*((-2*s + 4* (MH3*MH3) + 4* (MHch*MHch))* (MW*MW*MW*MW) + s*(2*t*u + 2* (MH3*MH3*MH3*MH3) + (-4*s - t + u)* (MHch*MHch) -  (MH3*MH3)*(4*s - t + u + 4* (MHch*MHch)) + 2* (MHch*MHch*MHch*MHch) + 2* (s*s) -  (t*t) -  (u*u)) +  (MW*MW)*(-10*t*u - 10* (MH3*MH3*MH3*MH3) + (16*s - t + u)* (MHch*MHch) +  (MH3*MH3)*(16*s + t - u + 20* (MHch*MHch)) - 10* (MHch*MHch*MHch*MHch) - 8* (s*s) + 5* (t*t) + 5* (u*u))))/(2.* (MW*MW)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (token32*token61*(-s +  (MW*MW))* (token24*token24)* (token56*token56)*(-(s*t*u) +  (MH3*MH3*MH3*MH3)*(-2*s + 2*t + u - 3* (MHch*MHch)) - 10*s*t* (MHch*MHch) + 7*s*u* (MHch*MHch) + 2*t*u* (MHch*MHch) + 9*s* (MHch*MHch*MHch*MHch) + 6*t* (MHch*MHch*MHch*MHch) - 3*u* (MHch*MHch*MHch*MHch) - 3* (MHch*MHch*MHch*MHch*MHch*MHch) + 5*(-2*s - t + u + 6* (MH3*MH3) + 2* (MHch*MHch))* (MW*MW*MW*MW) + 3*t* (s*s) - 3*u* (s*s) - 8* (MHch*MHch)* (s*s) + 2* (s*s*s) + s* (t*t) + u* (t*t) - 3* (MHch*MHch)* (t*t) +  (MW*MW)*(6* (MH3*MH3*MH3*MH3) + (2*s - 8*t - 7*u)* (MHch*MHch) +  (MH3*MH3)*(-14*s - 25*t - 8*u + 45* (MHch*MHch)) - 3* (MHch*MHch*MHch*MHch) + 3*(t*u + 2*s*(t + u) +  (t*t) - 2* (u*u))) +  (MH3*MH3)*(s*t + 2*s*u + (-7*s - 8*t + 2*u)* (MHch*MHch) + 6* (MHch*MHch*MHch*MHch) + 2* (t*t) - 2* (u*u)) - 2*t* (u*u) +  (MHch*MHch)* (u*u) +  (u*u*u)))/(2.*(-u +  (MHch*MHch))* (MW*MW)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))));
}
double DT::H3HchZW(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MHch*MHch) + s* (MW*MW) +  (MHch*MHch)* (MW*MW) + s* (MZ*MZ) -  (MHch*MHch)* (MZ*MZ) +  (MH3*MH3)*(s -  (MW*MW) +  (MZ*MZ)) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MW*MW*MW*MW) - 2* (MW*MW)*(s +  (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + MZ*MZ + MW*MW;
	return (-0.5*(token31*token58*token65*token66*token67*( (MW*MW*MW*MW)*(-u +  (MHch*MHch) + 3* (MZ*MZ)) + (s + t - u +  (MH3*MH3) -  (MHch*MHch) -  (MZ*MZ))*(s*(-u +  (MHch*MHch)) + (s + 2*t + u - 3* (MHch*MHch))* (MZ*MZ) -  (MZ*MZ*MZ*MZ)) +  (MW*MW)*((-u +  (MHch*MHch))*(-2*s + t - u - 3* (MH3*MH3) + 3* (MHch*MHch)) - (3*t + u + 9* (MH3*MH3) + 3* (MHch*MHch))* (MZ*MZ) + 4* (MZ*MZ*MZ*MZ)))* (token24*token24))/(token26*token51*(-u +  (MHch*MHch))* (MW*MW)* (MZ*MZ)) + (( (MW*MW*MW*MW) - 2* (MW*MW)*(s - 5* (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))* (token24*token24))/(4.* (MW*MW)* (MZ*MZ)* (token26*token26)* (token51*token51)) + (( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))* (token24*token24)* (token47*token47)*( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(-s + t - u +  (MHch*MHch) +  (MW*MW) + 7* (MZ*MZ)) +  (( (MHch*MHch) +  (MW*MW) -  (MZ*MZ) - s + t - u)*( (MHch*MHch) +  (MW*MW) -  (MZ*MZ) - s + t - u))))/(4.* (MW*MW)* (MZ*MZ)* (( (MA0*MA0) - t)*( (MA0*MA0) - t))* (token28*token28)* (token29*token29)* (token51*token51)) + ( (token24*token24)* (token31*token31)* (token58*token58)* (token65*token65)* (token66*token66)* (token67*token67)*( (MW*MW*MW*MW) - 2* (MW*MW)*(-s - t + u + 7* (MH3*MH3) +  (MHch*MHch) +  (MZ*MZ)) +  (( (MH3*MH3) -  (MHch*MHch) -  (MZ*MZ) + s + t - u)*( (MH3*MH3) -  (MHch*MHch) -  (MZ*MZ) + s + t - u)))*( (MHch*MHch*MHch*MHch) - 2* (MHch*MHch)*(u +  (MZ*MZ)) +  (( (MZ*MZ) - u)*( (MZ*MZ) - u))))/(4.* (MW*MW)* (MZ*MZ)* (( (MHch*MHch) - u)*( (MHch*MHch) - u))) - (token47* (token24*token24)*( (MW*MW*MW*MW*MW*MW) -  (MW*MW*MW*MW)*(2*s + 3*u +  (MH3*MH3) - 4* (MHch*MHch) - 4* (MZ*MZ)) + (-t +  (MHch*MHch))*(s*(s - t + u +  (MH3*MH3) -  (MHch*MHch)) + (-2*s - t + u - 3* (MH3*MH3) + 3* (MHch*MHch))* (MZ*MZ) +  (MZ*MZ*MZ*MZ)) +  (MW*MW)*(s*t + 3*s*u - t*u +  (MH3*MH3)*(s + t + 2*u - 3* (MHch*MHch)) - 5*s* (MHch*MHch) + 2*t* (MHch*MHch) - 5*u* (MHch*MHch) + 3* (MHch*MHch*MHch*MHch) - (t + 3*u + 9* (MH3*MH3) + 3* (MHch*MHch))* (MZ*MZ) + 3* (MZ*MZ*MZ*MZ) +  (s*s) -  (t*t) + 2* (u*u))))/(2.*token26*token28*token29*(-t +  (MA0*MA0))* (MW*MW)* (MZ*MZ)* (token51*token51)) + (token31*token47*token58*token65*token66*token67* (token24*token24)*( (MW*MW*MW*MW*MW*MW)*(-u +  (MHch*MHch) + 3* (MZ*MZ)) -  (MW*MW*MW*MW)*((-u +  (MHch*MHch))*(t + 2*u + 4* (MH3*MH3) +  (MHch*MHch)) + (-4*s + 7*t + 8*u + 12* (MH3*MH3) + 5* (MHch*MHch))* (MZ*MZ) - 10* (MZ*MZ*MZ*MZ)) + (-t +  (MHch*MHch))*(-((2*t + u + 4* (MH3*MH3) +  (MHch*MHch))* (MZ*MZ*MZ*MZ)) +  (MZ*MZ*MZ*MZ*MZ*MZ) + (-u +  (MHch*MHch))*(2*t*u +  (MH3*MH3*MH3*MH3) - 2*s* (MHch*MHch) - 2* (MH3*MH3)*(-s +  (MHch*MHch)) +  (MHch*MHch*MHch*MHch) +  (s*s) -  (t*t) -  (u*u)) +  (MZ*MZ)*(4*s*u + 3* (MH3*MH3*MH3*MH3) +  (MH3*MH3)*(2*s + 4*t - 2* (MHch*MHch)) + 2*(s + t - 3*u)* (MHch*MHch) -  (MHch*MHch*MHch*MHch) -  (s*s) +  (t*t) -  (u*u))) +  (MW*MW)*(-((-4*s + 8*t + 7*u + 12* (MH3*MH3) + 5* (MHch*MHch))* (MZ*MZ*MZ*MZ)) + 3* (MZ*MZ*MZ*MZ*MZ*MZ) - (-u +  (MHch*MHch))*(-4*s*t - 3* (MH3*MH3*MH3*MH3) - 2*(s - 3*t + u)* (MHch*MHch) + 2* (MH3*MH3)*(-s - 2*u +  (MHch*MHch)) +  (MHch*MHch*MHch*MHch) +  (s*s) +  (t*t) -  (u*u)) +  (MZ*MZ)*(9* (MH3*MH3*MH3*MH3) + 2*(-5*s + t + u)* (MHch*MHch) + 6* (MH3*MH3)*(-s + 2*(t + u) +  (MHch*MHch)) + 11* (MHch*MHch*MHch*MHch) +  (s*s) + 5* (t*t) + 5* (u*u)))))/(2.*token28*token29*token51*(-t +  (MA0*MA0))*(-u +  (MHch*MHch))* (MW*MW)* (MZ*MZ)) + (token31*token58*token59*token60*token65*token66*token67*(-s +  (MW*MW))*( (MW*MW*MW*MW)*(-u +  (MHch*MHch) + 3* (MZ*MZ)) + (s + t - u +  (MH3*MH3) -  (MHch*MHch) -  (MZ*MZ))*(s*(-u +  (MHch*MHch)) + (s + 2*t + u - 3* (MHch*MHch))* (MZ*MZ) -  (MZ*MZ*MZ*MZ)) +  (MW*MW)*((-u +  (MHch*MHch))*(-2*s + t - u - 3* (MH3*MH3) + 3* (MHch*MHch)) - (3*t + u + 9* (MH3*MH3) + 3* (MHch*MHch))* (MZ*MZ) + 4* (MZ*MZ*MZ*MZ)))* (token24*token24))/(2.*token26*token51*(-u +  (MHch*MHch))* (MW*MW)* (MZ*MZ)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (token31*token32*token59*token60*(2* (MH3*MH3)*( (MW*MW) -  (MZ*MZ))*(-s +  (MW*MW) +  (MZ*MZ)) - 2* (MHch*MHch)*( (MW*MW) -  (MZ*MZ))*(-s +  (MW*MW) +  (MZ*MZ)) - (t - u)*( (MW*MW*MW*MW) + 10* (MW*MW)* (MZ*MZ) +  (MZ*MZ*MZ*MZ) -  (s*s)))* (token24*token24))/(2.*token26* (MW*MW)* (MZ*MZ)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (token31*token32*(-s +  (MW*MW))*(2* (MH3*MH3)*( (MW*MW) -  (MZ*MZ))*(-s +  (MW*MW) +  (MZ*MZ)) - 2* (MHch*MHch)*( (MW*MW) -  (MZ*MZ))*(-s +  (MW*MW) +  (MZ*MZ)) - (t - u)*( (MW*MW*MW*MW) + 10* (MW*MW)* (MZ*MZ) +  (MZ*MZ*MZ*MZ) -  (s*s)))* (token24*token24))/(2.*token26* (MW*MW)* (MZ*MZ)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (token59*token60*(-s +  (MW*MW))*( (MW*MW*MW*MW) - 2* (MW*MW)*(s - 5* (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))* (token24*token24))/(2.* (MW*MW)* (MZ*MZ)* (token26*token26)* (token51*token51)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (( (MW*MW*MW*MW) - 2* (MW*MW)*(s - 5* (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))* (token24*token24)* (token59*token59)* (token60*token60))/(4.* (MW*MW)* (MZ*MZ)* (token26*token26)* (token51*token51)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (token47*token59*token60*(-s +  (MW*MW))* (token24*token24)*( (MW*MW*MW*MW*MW*MW) -  (MW*MW*MW*MW)*(2*s + 3*u +  (MH3*MH3) - 4* (MHch*MHch) - 4* (MZ*MZ)) + (-t +  (MHch*MHch))*(s*(s - t + u +  (MH3*MH3) -  (MHch*MHch)) + (-2*s - t + u - 3* (MH3*MH3) + 3* (MHch*MHch))* (MZ*MZ) +  (MZ*MZ*MZ*MZ)) +  (MW*MW)*(s*t + 3*s*u - t*u +  (MH3*MH3)*(s + t + 2*u - 3* (MHch*MHch)) - 5*s* (MHch*MHch) + 2*t* (MHch*MHch) - 5*u* (MHch*MHch) + 3* (MHch*MHch*MHch*MHch) - (t + 3*u + 9* (MH3*MH3) + 3* (MHch*MHch))* (MZ*MZ) + 3* (MZ*MZ*MZ*MZ) +  (s*s) -  (t*t) + 2* (u*u))))/(2.*token26*token28*token29*(-t +  (MA0*MA0))* (MW*MW)* (MZ*MZ)* (token51*token51)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (token31*token32*token47*(-s +  (MW*MW))* (token24*token24)*((-2*s + t - u + 2* (MH3*MH3) + 6* (MHch*MHch))* (MW*MW*MW*MW*MW*MW) - (-t +  (MHch*MHch))*(-(s*(t - u)*(s - t + u +  (MH3*MH3) -  (MHch*MHch))) + (-4*s + t - u + 10* (MH3*MH3) + 6* (MHch*MHch))* (MZ*MZ*MZ*MZ) +  (MZ*MZ)*(2*t*u + 2* (MH3*MH3*MH3*MH3) - 3*(2*s + t - u)* (MHch*MHch) -  (MH3*MH3)*(10*s - 3*t + 3*u + 4* (MHch*MHch)) + 2* (MHch*MHch*MHch*MHch) + 4* (s*s) -  (t*t) -  (u*u))) +  (MW*MW*MW*MW)*(-4*s*t + 4*s*u - t*u - 2* (MH3*MH3*MH3*MH3) + 8* (MHch*MHch*MHch*MHch) +  (MH3*MH3)*(-2*s + t + u - 6* (MHch*MHch) - 20* (MZ*MZ)) + 8*s* (MZ*MZ) - 4*t* (MZ*MZ) + 4*u* (MZ*MZ) - 2* (MHch*MHch)*(7*s - 4*t + 5*u + 6* (MZ*MZ)) + 4* (s*s) +  (u*u)) +  (MW*MW)*(-9*s*t* (MHch*MHch) + 11*s*u* (MHch*MHch) - 3*t*u* (MHch*MHch) + 2* (MH3*MH3*MH3*MH3)*(s - u +  (MHch*MHch)) - 8*s* (MHch*MHch*MHch*MHch) + 3*t* (MHch*MHch*MHch*MHch) - 5*u* (MHch*MHch*MHch*MHch) + 2* (MHch*MHch*MHch*MHch*MHch*MHch) - 5*(-2*s + t - u + 6* (MH3*MH3) + 2* (MHch*MHch))* (MZ*MZ*MZ*MZ) + 3*t* (s*s) - 3*u* (s*s) + 8* (MHch*MHch)* (s*s) - 2* (s*s*s) + s* (t*t) + 2*u* (t*t) -  (t*t*t) +  (MZ*MZ)*(-6*s*t - 6*s*u - 2*t*u - 6* (MH3*MH3*MH3*MH3) +  (MH3*MH3)*(14*s + 11*t + 25*u - 48* (MHch*MHch)) + (-2*s + 5*t + 7*u)* (MHch*MHch) + 6* (MHch*MHch*MHch*MHch) + 5* (t*t) - 3* (u*u)) +  (MH3*MH3)*(t*u - s*(t + u) + (6*s - 3*t + 7*u)* (MHch*MHch) - 4* (MHch*MHch*MHch*MHch) +  (t*t) - 2* (u*u)) - s* (u*u) - t* (u*u) + 3* (MHch*MHch)* (u*u))))/(2.*token28*token29*(-t +  (MA0*MA0))* (MW*MW)* (MZ*MZ)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + ( (token24*token24)* (token31*token31)* (token32*token32)* (token51*token51)*((4*s - 8* (MH3*MH3) - 8* (MHch*MHch))* (MW*MW*MW*MW*MW*MW) + (s -  (MZ*MZ))*((-4*s + 8* (MH3*MH3) + 8* (MHch*MHch))* (MZ*MZ*MZ*MZ) + s* ((t - u)*(t - u)) +  (MZ*MZ)*(2*t*u + 4* (MH3*MH3*MH3*MH3) - 4*(2*s + t - u)* (MHch*MHch) - 4* (MH3*MH3)*(2*s - t + u + 2* (MHch*MHch)) + 4* (MHch*MHch*MHch*MHch) + 4* (s*s) -  (t*t) -  (u*u))) +  (MW*MW*MW*MW)*(-2*t*u - 4* (MH3*MH3*MH3*MH3) - 4* (MHch*MHch*MHch*MHch) - 4*s* (MZ*MZ) + 4* (MHch*MHch)*(4*s - t + u + 2* (MZ*MZ)) + 4* (MH3*MH3)*(4*s + t - u + 2* (MHch*MHch) + 2* (MZ*MZ)) - 8* (s*s) +  (t*t) +  (u*u)) + 2* (MW*MW)*((-2*s + 4* (MH3*MH3) + 4* (MHch*MHch))* (MZ*MZ*MZ*MZ) + s*(2*t*u + 2* (MH3*MH3*MH3*MH3) - 2*(2*s - t + u)* (MHch*MHch) - 2* (MH3*MH3)*(2*s + t - u + 2* (MHch*MHch)) + 2* (MHch*MHch*MHch*MHch) + 2* (s*s) -  (t*t) -  (u*u)) +  (MZ*MZ)*(-10*t*u - 12* (MH3*MH3*MH3*MH3) + 16*s* (MHch*MHch) + 8* (MH3*MH3)*(2*s + 3* (MHch*MHch)) - 12* (MHch*MHch*MHch*MHch) - 8* (s*s) + 5* (t*t) + 5* (u*u)))))/(4.* (MW*MW)* (MZ*MZ)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (token32*token51*token58*token65*token66*token67*(-s +  (MW*MW))* (token24*token24)* (token31*token31)*(s*(t - u)*(s + t - u +  (MH3*MH3) -  (MHch*MHch))*(-u +  (MHch*MHch)) +  (MW*MW*MW*MW)*((-u +  (MHch*MHch))*(-4*s - t + u + 10* (MH3*MH3) + 6* (MHch*MHch)) + 5*(-2*s - t + u + 6* (MH3*MH3) + 2* (MHch*MHch))* (MZ*MZ)) + (2*s + t - u - 2* (MH3*MH3) - 6* (MHch*MHch))* (MZ*MZ*MZ*MZ*MZ*MZ) +  (MZ*MZ*MZ*MZ)*(-4*s*t + 4*s*u + t*u + 2* (MH3*MH3*MH3*MH3) + 2*(7*s + 5*t - 4*u)* (MHch*MHch) +  (MH3*MH3)*(2*s - t - u + 6* (MHch*MHch)) - 8* (MHch*MHch*MHch*MHch) - 4* (s*s) -  (t*t)) +  (MW*MW)*(4*(-2*s - t + u + 5* (MH3*MH3) + 3* (MHch*MHch))* (MZ*MZ*MZ*MZ) +  (MZ*MZ)*(6*s*t + 6*s*u + 2*t*u + 6* (MH3*MH3*MH3*MH3) + (2*s - 7*t - 5*u)* (MHch*MHch) +  (MH3*MH3)*(-14*s - 25*t - 11*u + 48* (MHch*MHch)) - 6* (MHch*MHch*MHch*MHch) + 3* (t*t) - 5* (u*u)) + (-u +  (MHch*MHch))*(2*t*u + 2* (MH3*MH3*MH3*MH3) - 3*(2*s - t + u)* (MHch*MHch) -  (MH3*MH3)*(10*s + 3*t - 3*u + 4* (MHch*MHch)) + 2* (MHch*MHch*MHch*MHch) + 4* (s*s) -  (t*t) -  (u*u))) +  (MZ*MZ)*(-2* (MH3*MH3*MH3*MH3)*(s - t +  (MHch*MHch)) + (8*s + 5*t - 3*u)* (MHch*MHch*MHch*MHch) - 2* (MHch*MHch*MHch*MHch*MHch*MHch) +  (MHch*MHch)*(3*t*(-t + u) + s*(-11*t + 9*u) - 8* (s*s)) + 3*t* (s*s) - 3*u* (s*s) + 2* (s*s*s) + s* (t*t) + u* (t*t) +  (MH3*MH3)*(-(t*u) + s*(t + u) + (-6*s - 7*t + 3*u)* (MHch*MHch) + 4* (MHch*MHch*MHch*MHch) + 2* (t*t) -  (u*u)) - s* (u*u) - 2*t* (u*u) +  (u*u*u))))/(2.*(-u +  (MHch*MHch))* (MW*MW)* (MZ*MZ)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))));
}
double DT::H3HchveE(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MH3*MH3) + s* (MHch*MHch) +  (Me*Me)*(s -  (MH3*MH3) +  (MHch*MHch)) + s* (Mnue*Mnue) +  (MH3*MH3)* (Mnue*Mnue) -  (MHch*MHch)* (Mnue*Mnue) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (Me*Me*Me*Me) - 2* (Me*Me)*(s +  (Mnue*Mnue)) +  (( (Mnue*Mnue) - s)*( (Mnue*Mnue) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + Mnue*Mnue + Me*Me;
	return ((8*Me*token11*token24*token30*token31*token35*token59*token60*(-t + u +  (MH3*MH3) -  (MHch*MHch))* (token68*token68))/(token14*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (4*(-s +  (Me*Me) +  (Mnue*Mnue))* (token11*token11)* (token35*token35)* (token59*token59)* (token60*token60)* (token68*token68))/( (token14*token14)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (4* (token24*token24)* (token30*token30)* (token31*token31)* (token68*token68)*(2*t*u +  (MH3*MH3*MH3*MH3) - 2*s* (MHch*MHch) +  (Me*Me)*(-s + 2* (MH3*MH3) + 2* (MHch*MHch)) +  (MHch*MHch*MHch*MHch) - 2* (MH3*MH3)*(s +  (MHch*MHch) -  (Mnue*Mnue)) - s* (Mnue*Mnue) + 2* (MHch*MHch)* (Mnue*Mnue) +  (s*s) -  (t*t) -  (u*u)))/( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H3HchvmM(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MHch*MHch) + s* (MM*MM) +  (MHch*MHch)* (MM*MM) + s* (Mnum*Mnum) -  (MHch*MHch)* (Mnum*Mnum) +  (MH3*MH3)*(s -  (MM*MM) +  (Mnum*Mnum)) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MM*MM*MM*MM) - 2* (MM*MM)*(s +  (Mnum*Mnum)) +  (( (Mnum*Mnum) - s)*( (Mnum*Mnum) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + Mnum*Mnum + MM*MM;
	return ((8*MM*token11*token24*token30*token31*token36*token59*token60*(-t + u +  (MH3*MH3) -  (MHch*MHch))* (token68*token68))/(token14*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (4*(-s +  (MM*MM) +  (Mnum*Mnum))* (token11*token11)* (token36*token36)* (token59*token59)* (token60*token60)* (token68*token68))/( (token14*token14)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (4* (token24*token24)* (token30*token30)* (token31*token31)* (token68*token68)*(2*t*u +  (MH3*MH3*MH3*MH3) +  (MHch*MHch*MHch*MHch) - s* (MM*MM) - 2* (MH3*MH3)*(s +  (MHch*MHch) -  (MM*MM) -  (Mnum*Mnum)) - s* (Mnum*Mnum) + 2* (MHch*MHch)*(-s +  (MM*MM) +  (Mnum*Mnum)) +  (s*s) -  (t*t) -  (u*u)))/( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H3HchvtTA(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MHch*MHch) + s* (Mnut*Mnut) -  (MHch*MHch)* (Mnut*Mnut) +  (MH3*MH3)*(s +  (Mnut*Mnut) -  (MTA*MTA)) + s* (MTA*MTA) +  (MHch*MHch)* (MTA*MTA) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (Mnut*Mnut*Mnut*Mnut) - 2* (Mnut*Mnut)*(s +  (MTA*MTA)) +  (( (MTA*MTA) - s)*( (MTA*MTA) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + Mnut*Mnut + MTA*MTA;
	return ((8*MTA*token11*token24*token30*token31*token37*token59*token60*(-t + u +  (MH3*MH3) -  (MHch*MHch))* (token68*token68))/(token14*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (4*(-s +  (Mnut*Mnut) +  (MTA*MTA))* (token11*token11)* (token37*token37)* (token59*token59)* (token60*token60)* (token68*token68))/( (token14*token14)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (4* (token24*token24)* (token30*token30)* (token31*token31)* (token68*token68)*(2*t*u +  (MH3*MH3*MH3*MH3) +  (MHch*MHch*MHch*MHch) - s* (Mnut*Mnut) - 2* (MH3*MH3)*(s +  (MHch*MHch) -  (Mnut*Mnut) -  (MTA*MTA)) - s* (MTA*MTA) + 2* (MHch*MHch)*(-s +  (Mnut*Mnut) +  (MTA*MTA)) +  (s*s) -  (t*t) -  (u*u)))/( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H3HchuD(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MH3*MH3) + s* (MHch*MHch) +  (MD*MD)*(s -  (MH3*MH3) +  (MHch*MHch)) + s* (MU*MU) +  (MH3*MH3)* (MU*MU) -  (MHch*MHch)* (MU*MU) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MD*MD*MD*MD) - 2* (MD*MD)*(s +  (MU*MU)) +  (( (MU*MU) - s)*( (MU*MU) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + MU*MU + MD*MD;
	return ((24*token11*token24*token30*token31*token57*token59*token60*( (MD*MD)*(-t + u +  (MH3*MH3) -  (MHch*MHch)) + (t - u +  (MH3*MH3) -  (MHch*MHch))* (MU*MU))* (token68*token68)* (token69*token69))/(token34*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (12*( (MD*MD*MD*MD) - s* (MU*MU) -  (MD*MD)*(s + 2* (MU*MU)) +  (MU*MU*MU*MU))* (token11*token11)* (token57*token57)* (token59*token59)* (token60*token60)* (token68*token68)* (token69*token69))/( (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (12* (token24*token24)* (token30*token30)* (token31*token31)* (token68*token68)* (token69*token69)*(2*t*u +  (MH3*MH3*MH3*MH3) - 2*s* (MHch*MHch) +  (MD*MD)*(-s + 2* (MH3*MH3) + 2* (MHch*MHch)) +  (MHch*MHch*MHch*MHch) - 2* (MH3*MH3)*(s +  (MHch*MHch) -  (MU*MU)) - s* (MU*MU) + 2* (MHch*MHch)* (MU*MU) +  (s*s) -  (t*t) -  (u*u)))/( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H3HchuS(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MHch*MHch) + s* (MS*MS) +  (MHch*MHch)* (MS*MS) + s* (MU*MU) -  (MHch*MHch)* (MU*MU) +  (MH3*MH3)*(s -  (MS*MS) +  (MU*MU)) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MS*MS*MS*MS) - 2* (MS*MS)*(s +  (MU*MU)) +  (( (MU*MU) - s)*( (MU*MU) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + MU*MU + MS*MS;
	return ((-24*token24*token30*token31*token57*token59*token60*(MC*MU*(t - u +  (MH3*MH3) -  (MHch*MHch)) + MD*MS*(-t + u +  (MH3*MH3) -  (MHch*MHch)))* (token68*token68)* (token70*token70))/(token34*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (12*(-4*MC*MD*MS*MU +  (MC*MC)*(-s +  (MS*MS) +  (MU*MU)) +  (MD*MD)*(-s +  (MS*MS) +  (MU*MU)))* (token57*token57)* (token59*token59)* (token60*token60)* (token68*token68)* (token70*token70))/( (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (12* (token24*token24)* (token30*token30)* (token31*token31)* (token68*token68)* (token70*token70)*(2*t*u +  (MH3*MH3*MH3*MH3) +  (MHch*MHch*MHch*MHch) - s* (MS*MS) - 2* (MH3*MH3)*(s +  (MHch*MHch) -  (MS*MS) -  (MU*MU)) - s* (MU*MU) + 2* (MHch*MHch)*(-s +  (MS*MS) +  (MU*MU)) +  (s*s) -  (t*t) -  (u*u)))/( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H3HchuB(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MH3*MH3) + s* (MHch*MHch) +  (MB*MB)*(s -  (MH3*MH3) +  (MHch*MHch)) + s* (MU*MU) +  (MH3*MH3)* (MU*MU) -  (MHch*MHch)* (MU*MU) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MB*MB*MB*MB) - 2* (MB*MB)*(s +  (MU*MU)) +  (( (MU*MU) - s)*( (MU*MU) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + MU*MU + MB*MB;
	return ((24*token11*token24*token30*token31*token57*token59*token60*(MT*MU*(t - u +  (MH3*MH3) -  (MHch*MHch)) + MB*MD*(-t + u +  (MH3*MH3) -  (MHch*MHch)))* (token68*token68)* (token71*token71))/(token34*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (12*(-4*MB*MD*MT*MU +  (MB*MB)*( (MD*MD) +  (MT*MT)) + ( (MD*MD) +  (MT*MT))*(-s +  (MU*MU)))* (token11*token11)* (token57*token57)* (token59*token59)* (token60*token60)* (token68*token68)* (token71*token71))/( (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (12* (token24*token24)* (token30*token30)* (token31*token31)* (token68*token68)* (token71*token71)*(2*t*u +  (MH3*MH3*MH3*MH3) - 2*s* (MHch*MHch) +  (MB*MB)*(-s + 2* (MH3*MH3) + 2* (MHch*MHch)) +  (MHch*MHch*MHch*MHch) - 2* (MH3*MH3)*(s +  (MHch*MHch) -  (MU*MU)) - s* (MU*MU) + 2* (MHch*MHch)* (MU*MU) +  (s*s) -  (t*t) -  (u*u)))/( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H3HchcD(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MD*MD) + s* (MH3*MH3) -  (MD*MD)* (MH3*MH3) +  (MC*MC)*(s +  (MH3*MH3) -  (MHch*MHch)) + s* (MHch*MHch) +  (MD*MD)* (MHch*MHch) + cos_t*s*sqrt(( (MC*MC*MC*MC) - 2* (MC*MC)*(s +  (MD*MD)) +  (( (MD*MD) - s)*( (MD*MD) - s)))/s)*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + MC*MC + MD*MD;
	return ((24*token11*token24*token30*token31*token57*token59*token60*(MC*MU*(t - u +  (MH3*MH3) -  (MHch*MHch)) + MD*MS*(-t + u +  (MH3*MH3) -  (MHch*MHch)))* (token68*token68)* (token72*token72))/(token34*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (12*(-4*MC*MD*MS*MU +  (MC*MC)*( (MS*MS) +  (MU*MU)) + (-s +  (MD*MD))*( (MS*MS) +  (MU*MU)))* (token11*token11)* (token57*token57)* (token59*token59)* (token60*token60)* (token68*token68)* (token72*token72))/( (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (12* (token24*token24)* (token30*token30)* (token31*token31)* (token68*token68)* (token72*token72)*(2*t*u - 2*s* (MH3*MH3) +  (MH3*MH3*MH3*MH3) - 2*s* (MHch*MHch) - 2* (MH3*MH3)* (MHch*MHch) +  (MC*MC)*(-s + 2* (MH3*MH3) + 2* (MHch*MHch)) +  (MD*MD)*(-s + 2* (MH3*MH3) + 2* (MHch*MHch)) +  (MHch*MHch*MHch*MHch) +  (s*s) -  (t*t) -  (u*u)))/( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H3HchcS(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MH3*MH3) +  (MC*MC)*(s +  (MH3*MH3) -  (MHch*MHch)) + s* (MHch*MHch) + s* (MS*MS) -  (MH3*MH3)* (MS*MS) +  (MHch*MHch)* (MS*MS) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MC*MC*MC*MC) - 2* (MC*MC)*(s +  (MS*MS)) +  (( (MS*MS) - s)*( (MS*MS) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + MC*MC + MS*MS;
	return ((-24*token24*token30*token31*token57*token59*token60*( (MC*MC)*(t - u +  (MH3*MH3) -  (MHch*MHch)) + (-t + u +  (MH3*MH3) -  (MHch*MHch))* (MS*MS))* (token68*token68)* (token73*token73))/(token34*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (12*( (MC*MC*MC*MC) - s* (MS*MS) -  (MC*MC)*(s + 2* (MS*MS)) +  (MS*MS*MS*MS))* (token57*token57)* (token59*token59)* (token60*token60)* (token68*token68)* (token73*token73))/( (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (12* (token24*token24)* (token30*token30)* (token31*token31)* (token68*token68)* (token73*token73)*(2*t*u +  (MH3*MH3*MH3*MH3) - 2*s* (MHch*MHch) +  (MC*MC)*(-s + 2* (MH3*MH3) + 2* (MHch*MHch)) +  (MHch*MHch*MHch*MHch) - 2* (MH3*MH3)*(s +  (MHch*MHch) -  (MS*MS)) - s* (MS*MS) + 2* (MHch*MHch)* (MS*MS) +  (s*s) -  (t*t) -  (u*u)))/( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H3HchcB(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MC*MC) + s* (MH3*MH3) +  (MC*MC)* (MH3*MH3) + s* (MHch*MHch) -  (MC*MC)* (MHch*MHch) +  (MB*MB)*(s -  (MH3*MH3) +  (MHch*MHch)) + cos_t*s*sqrt(( (MB*MB*MB*MB) - 2* (MB*MB)*(s +  (MC*MC)) +  (( (MC*MC) - s)*( (MC*MC) - s)))/s)*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + MC*MC + MB*MB;
	return ((24*token11*token24*token30*token31*token57*token59*token60*(MC*MT*(t - u +  (MH3*MH3) -  (MHch*MHch)) + MB*MS*(-t + u +  (MH3*MH3) -  (MHch*MHch)))* (token68*token68)* (token74*token74))/(token34*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (12*(-4*MB*MC*MS*MT +  (MB*MB)*( (MS*MS) +  (MT*MT)) + (-s +  (MC*MC))*( (MS*MS) +  (MT*MT)))* (token11*token11)* (token57*token57)* (token59*token59)* (token60*token60)* (token68*token68)* (token74*token74))/( (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (12* (token24*token24)* (token30*token30)* (token31*token31)* (token68*token68)* (token74*token74)*(2*t*u - 2*s* (MH3*MH3) +  (MH3*MH3*MH3*MH3) - 2*s* (MHch*MHch) - 2* (MH3*MH3)* (MHch*MHch) +  (MB*MB)*(-s + 2* (MH3*MH3) + 2* (MHch*MHch)) +  (MC*MC)*(-s + 2* (MH3*MH3) + 2* (MHch*MHch)) +  (MHch*MHch*MHch*MHch) +  (s*s) -  (t*t) -  (u*u)))/( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H3HchtD(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MH3*MH3) + s* (MHch*MHch) +  (MD*MD)*(s -  (MH3*MH3) +  (MHch*MHch)) + s* (MT*MT) +  (MH3*MH3)* (MT*MT) -  (MHch*MHch)* (MT*MT) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MD*MD*MD*MD) - 2* (MD*MD)*(s +  (MT*MT)) +  (( (MT*MT) - s)*( (MT*MT) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + MT*MT + MD*MD;
	return ((24*token11*token24*token30*token31*token57*token59*token60*(MT*MU*(t - u +  (MH3*MH3) -  (MHch*MHch)) + MB*MD*(-t + u +  (MH3*MH3) -  (MHch*MHch)))* (token68*token68)* (token75*token75))/(token34*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (12*(-4*MB*MD*MT*MU +  (MB*MB)*(-s +  (MD*MD) +  (MT*MT)) + (-s +  (MD*MD) +  (MT*MT))* (MU*MU))* (token11*token11)* (token57*token57)* (token59*token59)* (token60*token60)* (token68*token68)* (token75*token75))/( (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (12* (token24*token24)* (token30*token30)* (token31*token31)* (token68*token68)* (token75*token75)*(2*t*u +  (MH3*MH3*MH3*MH3) - 2*s* (MHch*MHch) +  (MD*MD)*(-s + 2* (MH3*MH3) + 2* (MHch*MHch)) +  (MHch*MHch*MHch*MHch) - 2* (MH3*MH3)*(s +  (MHch*MHch) -  (MT*MT)) - s* (MT*MT) + 2* (MHch*MHch)* (MT*MT) +  (s*s) -  (t*t) -  (u*u)))/( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H3HchtS(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MHch*MHch) + s* (MS*MS) +  (MHch*MHch)* (MS*MS) + s* (MT*MT) -  (MHch*MHch)* (MT*MT) +  (MH3*MH3)*(s -  (MS*MS) +  (MT*MT)) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MS*MS*MS*MS) - 2* (MS*MS)*(s +  (MT*MT)) +  (( (MT*MT) - s)*( (MT*MT) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + MT*MT + MS*MS;
	return ((24*token11*token24*token30*token31*token57*token59*token60*(MC*MT*(t - u +  (MH3*MH3) -  (MHch*MHch)) + MB*MS*(-t + u +  (MH3*MH3) -  (MHch*MHch)))* (token68*token68)* (token76*token76))/(token34*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (12*(-4*MB*MC*MS*MT +  (MB*MB)*(-s +  (MS*MS) +  (MT*MT)) +  (MC*MC)*(-s +  (MS*MS) +  (MT*MT)))* (token11*token11)* (token57*token57)* (token59*token59)* (token60*token60)* (token68*token68)* (token76*token76))/( (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (12* (token24*token24)* (token30*token30)* (token31*token31)* (token68*token68)* (token76*token76)*(2*t*u +  (MH3*MH3*MH3*MH3) +  (MHch*MHch*MHch*MHch) - s* (MS*MS) - 2* (MH3*MH3)*(s +  (MHch*MHch) -  (MS*MS) -  (MT*MT)) - s* (MT*MT) + 2* (MHch*MHch)*(-s +  (MS*MS) +  (MT*MT)) +  (s*s) -  (t*t) -  (u*u)))/( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
double DT::H3HchtB(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MH3*MH3) + s* (MHch*MHch) +  (MB*MB)*(s -  (MH3*MH3) +  (MHch*MHch)) + s* (MT*MT) +  (MH3*MH3)* (MT*MT) -  (MHch*MHch)* (MT*MT) + cos_t*s*sqrt(( (MH3*MH3*MH3*MH3) - 2* (MH3*MH3)*(s +  (MHch*MHch)) +  (( (MHch*MHch) - s)*( (MHch*MHch) - s)))/s)*sqrt(( (MB*MB*MB*MB) - 2* (MB*MB)*(s +  (MT*MT)) +  (( (MT*MT) - s)*( (MT*MT) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MHch*MHch + MT*MT + MB*MB;
	return ((24*token11*token24*token30*token31*token57*token59*token60*( (MB*MB)*(-t + u +  (MH3*MH3) -  (MHch*MHch)) + (t - u +  (MH3*MH3) -  (MHch*MHch))* (MT*MT))* (token68*token68)* (token77*token77))/(token34*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) - (12*( (MB*MB*MB*MB) - s* (MT*MT) -  (MB*MB)*(s + 2* (MT*MT)) +  (MT*MT*MT*MT))* (token11*token11)* (token57*token57)* (token59*token59)* (token60*token60)* (token68*token68)* (token77*token77))/( (token34*token34)*( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW)))) + (12* (token24*token24)* (token30*token30)* (token31*token31)* (token68*token68)* (token77*token77)*(2*t*u +  (MH3*MH3*MH3*MH3) - 2*s* (MHch*MHch) +  (MB*MB)*(-s + 2* (MH3*MH3) + 2* (MHch*MHch)) +  (MHch*MHch*MHch*MHch) - 2* (MH3*MH3)*(s +  (MHch*MHch) -  (MT*MT)) - s* (MT*MT) + 2* (MHch*MHch)* (MT*MT) +  (s*s) -  (t*t) -  (u*u)))/( (MW*MW*MW*MW) +  (s*s) +  (MW*MW)*(-2*s +  (WW*WW))));
}
