///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"

double DT::H3A0H1Z(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MH1*MH1) + s* (MH3*MH3) +  (MH1*MH1)* (MH3*MH3) + s* (MZ*MZ) -  (MH3*MH3)* (MZ*MZ) +  (MA0*MA0)*(s -  (MH1*MH1) +  (MZ*MZ)) + cos_t*s*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s)*sqrt(( (MH1*MH1*MH1*MH1) - 2* (MH1*MH1)*(s +  (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MA0*MA0 + MH1*MH1 + MZ*MZ;
	return ((token4*token50*((-t +  (MA0*MA0))*(-s - t + u +  (MA0*MA0) +  (MH1*MH1) -  (MH3*MH3)) - (-s + 2*t + u + 2* (MA0*MA0) - 3* (MH1*MH1) + 3* (MH3*MH3))* (MZ*MZ) +  (MZ*MZ*MZ*MZ))* (token44*token44)* (token47*token47))/((-u +  (MA0*MA0))*(-t +  (MH3*MH3))* (MZ*MZ)* (token26*token26)* (token34*token34)* (token51*token51)* (token52*token52)) + (( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(t +  (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t)))* (token4*token4)* (token44*token44)* (token47*token47))/( (MZ*MZ)* (( (MH3*MH3) - t)*( (MH3*MH3) - t))* (token26*token26)* (token34*token34)* (token51*token51)* (token52*token52)) + ( (token44*token44)* (token47*token47)* (token50*token50)*(-2*(-s - t + u +  (MA0*MA0) +  (MH1*MH1) + 7* (MH3*MH3))* (MZ*MZ) +  (MZ*MZ*MZ*MZ) +  (( (MA0*MA0) +  (MH1*MH1) -  (MH3*MH3) - s - t + u)*( (MA0*MA0) +  (MH1*MH1) -  (MH3*MH3) - s - t + u))))/(4.* (MZ*MZ)* (token26*token26)* (token34*token34)* (token51*token51)* (token52*token52)* (( (MA0*MA0) - u)*( (MA0*MA0) - u))) - (token44*token47*token48*token49*token50*token7*(-s +  (MZ*MZ))*((-t + u +  (MA0*MA0) -  (MH3*MH3))*(-s - t + u +  (MA0*MA0) +  (MH1*MH1) -  (MH3*MH3)) + (4*s + t - u - 5* (MA0*MA0) - 11* (MH3*MH3))* (MZ*MZ)))/(2.*token26*token29*token51*token52*token53*token54*(-u +  (MA0*MA0))* (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (token4*token44*token47*token48*token49*token7*(-s +  (MZ*MZ))*((-t +  (MA0*MA0))*(-t + u +  (MA0*MA0) -  (MH3*MH3)) + (2*s - t + u - 5* (MA0*MA0) - 3* (MH3*MH3))* (MZ*MZ)))/(token26*token29*token51*token52*token53*token54*(-t +  (MH3*MH3))* (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (2*token4*token45*token46*token7*(-s +  (MZ*MZ))*(-((-t +  (MA0*MA0))*(-s +  (MH1*MH1))) + (s + t + 2*u - 3* (MA0*MA0) - 3* (MH1*MH1))* (MZ*MZ) -  (MZ*MZ*MZ*MZ))* (token44*token44)* (token47*token47))/((-t +  (MH3*MH3))* (MZ*MZ)* (token26*token26)* (token34*token34)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (token45*token46*token50*token7*(-s +  (MZ*MZ))*((-s +  (MH1*MH1))*(-s - t + u +  (MA0*MA0) +  (MH1*MH1) -  (MH3*MH3)) + (-2*s + t - u + 3* (MA0*MA0) - 2* (MH1*MH1) - 3* (MH3*MH3))* (MZ*MZ) +  (MZ*MZ*MZ*MZ))* (token44*token44)* (token47*token47))/((-u +  (MA0*MA0))* (MZ*MZ)* (token26*token26)* (token34*token34)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (token44*token45*token46*token47*token48*token49*((-s +  (MH1*MH1))*(-t + u +  (MA0*MA0) -  (MH3*MH3)) + (t - u + 3* (MA0*MA0) - 3* (MH3*MH3))* (MZ*MZ))* (token7*token7))/(token26*token29*token51*token52*token53*token54* (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (( (MH1*MH1*MH1*MH1) - 2* (MH1*MH1)*(s +  (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))* (token44*token44)* (token45*token45)* (token46*token46)* (token47*token47)* (token7*token7))/( (MZ*MZ)* (token26*token26)* (token34*token34)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (token34*token34)* (token48*token48)* (token49*token49)* (token7*token7)*((4*s - 8* (MA0*MA0) - 8* (MH3*MH3))* (MZ*MZ) +  (( (MA0*MA0) -  (MH3*MH3) - t + u)*( (MA0*MA0) -  (MH3*MH3) - t + u))))/(4.* (MZ*MZ)* (token29*token29)* (token53*token53)* (token54*token54)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0H2Z(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (s* (MH2*MH2) + s* (MH3*MH3) +  (MH2*MH2)* (MH3*MH3) + s* (MZ*MZ) -  (MH3*MH3)* (MZ*MZ) +  (MA0*MA0)*(s -  (MH2*MH2) +  (MZ*MZ)) + cos_t*s*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s)*sqrt(( (MH2*MH2*MH2*MH2) - 2* (MH2*MH2)*(s +  (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))/s) -  (s*s))/(2.*s);
	double u = -s - t + MH3*MH3 + MA0*MA0 + MH2*MH2 + MZ*MZ;
	return ((token10*token55*((-t +  (MA0*MA0))*(-s - t + u +  (MA0*MA0) +  (MH2*MH2) -  (MH3*MH3)) - (-s + 2*t + u + 2* (MA0*MA0) - 3* (MH2*MH2) + 3* (MH3*MH3))* (MZ*MZ) +  (MZ*MZ*MZ*MZ))* (token44*token44)* (token47*token47))/((-u +  (MA0*MA0))*(-t +  (MH3*MH3))* (MZ*MZ)* (token26*token26)* (token34*token34)* (token51*token51)* (token52*token52)) + (( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(t +  (MZ*MZ)) +  (( (MZ*MZ) - t)*( (MZ*MZ) - t)))* (token10*token10)* (token44*token44)* (token47*token47))/( (MZ*MZ)* (( (MH3*MH3) - t)*( (MH3*MH3) - t))* (token26*token26)* (token34*token34)* (token51*token51)* (token52*token52)) + ( (token44*token44)* (token47*token47)* (token55*token55)*(-2*(-s - t + u +  (MA0*MA0) +  (MH2*MH2) + 7* (MH3*MH3))* (MZ*MZ) +  (MZ*MZ*MZ*MZ) +  (( (MA0*MA0) +  (MH2*MH2) -  (MH3*MH3) - s - t + u)*( (MA0*MA0) +  (MH2*MH2) -  (MH3*MH3) - s - t + u))))/(4.* (MZ*MZ)* (token26*token26)* (token34*token34)* (token51*token51)* (token52*token52)* (( (MA0*MA0) - u)*( (MA0*MA0) - u))) - (token44*token47*token48*token49*token55*token8*(-s +  (MZ*MZ))*((-t + u +  (MA0*MA0) -  (MH3*MH3))*(-s - t + u +  (MA0*MA0) +  (MH2*MH2) -  (MH3*MH3)) + (4*s + t - u - 5* (MA0*MA0) - 11* (MH3*MH3))* (MZ*MZ)))/(2.*token26*token29*token51*token52*token53*token54*(-u +  (MA0*MA0))* (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (token10*token44*token47*token48*token49*token8*(-s +  (MZ*MZ))*((-t +  (MA0*MA0))*(-t + u +  (MA0*MA0) -  (MH3*MH3)) + (2*s - t + u - 5* (MA0*MA0) - 3* (MH3*MH3))* (MZ*MZ)))/(token26*token29*token51*token52*token53*token54*(-t +  (MH3*MH3))* (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (2*token10*token45*token46*token8*(-s +  (MZ*MZ))*(-((-t +  (MA0*MA0))*(-s +  (MH2*MH2))) + (s + t + 2*u - 3* (MA0*MA0) - 3* (MH2*MH2))* (MZ*MZ) -  (MZ*MZ*MZ*MZ))* (token44*token44)* (token47*token47))/((-t +  (MH3*MH3))* (MZ*MZ)* (token26*token26)* (token34*token34)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) - (token45*token46*token55*token8*(-s +  (MZ*MZ))*((-s +  (MH2*MH2))*(-s - t + u +  (MA0*MA0) +  (MH2*MH2) -  (MH3*MH3)) + (-2*s + t - u + 3* (MA0*MA0) - 2* (MH2*MH2) - 3* (MH3*MH3))* (MZ*MZ) +  (MZ*MZ*MZ*MZ))* (token44*token44)* (token47*token47))/((-u +  (MA0*MA0))* (MZ*MZ)* (token26*token26)* (token34*token34)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (token44*token45*token46*token47*token48*token49*((-s +  (MH2*MH2))*(-t + u +  (MA0*MA0) -  (MH3*MH3)) + (t - u + 3* (MA0*MA0) - 3* (MH3*MH3))* (MZ*MZ))* (token8*token8))/(token26*token29*token51*token52*token53*token54* (MZ*MZ)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (( (MH2*MH2*MH2*MH2) - 2* (MH2*MH2)*(s +  (MZ*MZ)) +  (( (MZ*MZ) - s)*( (MZ*MZ) - s)))* (token44*token44)* (token45*token45)* (token46*token46)* (token47*token47)* (token8*token8))/( (MZ*MZ)* (token26*token26)* (token34*token34)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (token34*token34)* (token48*token48)* (token49*token49)* (token8*token8)*((4*s - 8* (MA0*MA0) - 8* (MH3*MH3))* (MZ*MZ) +  (( (MA0*MA0) -  (MH3*MH3) - t + u)*( (MA0*MA0) -  (MH3*MH3) - t + u))))/(4.* (MZ*MZ)* (token29*token29)* (token53*token53)* (token54*token54)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0wW(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) +  (MH3*MH3) + 2* (MW*MW) + cos_t*sqrt(s - 4* (MW*MW))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + MW*MW + MW*MW;
	return (( (token24*token24)* (token56*token56)*(-16* (MH3*MH3)* (MW*MW) +  ((- (MA0*MA0) +  (MH3*MH3) + s + t - u)*(- (MA0*MA0) +  (MH3*MH3) + s + t - u)))*( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(u +  (MW*MW)) +  (( (MW*MW) - u)*( (MW*MW) - u))))/(16.* (MW*MW*MW*MW)* (token26*token26)* (token52*token52)* (( (MHch*MHch) - u)*( (MHch*MHch) - u))) + ( (token24*token24)* (token56*token56)*(8*(-s + 2*t + 2*u +  (MA0*MA0) + 3* (MH3*MH3))* (MW*MW*MW*MW*MW*MW) - 16* (MW*MW*MW*MW*MW*MW*MW*MW) - (-t +  (MA0*MA0))*(-u +  (MA0*MA0))*(2*t*u +  (MA0*MA0*MA0*MA0) + 2*s* (MH3*MH3) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (MH3*MH3*MH3*MH3) +  (s*s) -  (t*t) -  (u*u)) -  (MW*MW*MW*MW)*(2*t*u + 9* (MA0*MA0*MA0*MA0) + (-6*s + 16*(t + u))* (MH3*MH3) - 2* (MA0*MA0)*(5*s +  (MH3*MH3)) + 9* (MH3*MH3*MH3*MH3) +  (s*s) + 7* (t*t) + 7* (u*u)) +  (MW*MW)*(8*s*t*u + 2* (MA0*MA0*MA0*MA0*MA0*MA0) +  (MA0*MA0*MA0*MA0)*(-4*s + 3*(t + u) + 4* (MH3*MH3)) + 3*(t + u)* (MH3*MH3*MH3*MH3) - t* (s*s) - u* (s*s) - u* (t*t) +  (t*t*t) - 2* (MA0*MA0)*(6*t*u + s*(t + u) + (2*s + 3*(t + u))* (MH3*MH3) + 3* (MH3*MH3*MH3*MH3) -  (s*s) -  (t*t) -  (u*u)) - t* (u*u) + 2* (MH3*MH3)*(s*(t + u) + 2*( (t*t) +  (u*u))) +  (u*u*u))))/(8.*(-t +  (MHch*MHch))*(-u +  (MHch*MHch))* (MW*MW*MW*MW)* (token26*token26)* (token52*token52)) + (( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(t +  (MW*MW)) +  (( (MW*MW) - t)*( (MW*MW) - t)))* (token24*token24)* (token56*token56)*(-16* (MH3*MH3)* (MW*MW) +  ((- (MA0*MA0) +  (MH3*MH3) + s - t + u)*(- (MA0*MA0) +  (MH3*MH3) + s - t + u))))/(16.* (MW*MW*MW*MW)* (( (MHch*MHch) - t)*( (MHch*MHch) - t))* (token26*token26)* (token52*token52)) + ( (token24*token24)* (token47*token47)* (token56*token56)*( (s*s)* ((t - u)*(t - u)) - 4* (MW*MW*MW*MW)*(6*t*u + 8* (MA0*MA0*MA0*MA0) - 16*s* (MH3*MH3) - 16* (MA0*MA0)*(s +  (MH3*MH3)) + 8* (MH3*MH3*MH3*MH3) + 8* (s*s) - 3* (t*t) - 3* (u*u)) + 4*s* (MW*MW)*(2*t*u + 2* (MA0*MA0*MA0*MA0) - 4*s* (MH3*MH3) - 4* (MA0*MA0)*(s +  (MH3*MH3)) + 2* (MH3*MH3*MH3*MH3) + 2* (s*s) -  (t*t) -  (u*u))))/(4.* (MW*MW*MW*MW)* (token26*token26)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (token47*(-s +  (MZ*MZ))* (token24*token24)* (token56*token56)*(-(s*(t - u)*(-t +  (MA0*MA0))*(s - t + u -  (MA0*MA0) +  (MH3*MH3))) + 8*(-2*s + t - u + 2* (MA0*MA0) + 6* (MH3*MH3))* (MW*MW*MW*MW*MW*MW) - 2* (MW*MW*MW*MW)*(-7*s*t - s*u - 2*t*u + 4* (MA0*MA0*MA0*MA0) + (6*s + 11*t + 13*u)* (MH3*MH3) -  (MA0*MA0)*(6*s - 9*t + u + 32* (MH3*MH3)) - 4* (MH3*MH3*MH3*MH3) + 2* (s*s) + 3* (t*t) -  (u*u)) +  (MW*MW)*(2*(s - 4*t + 4*u)* (MA0*MA0*MA0*MA0) - 2*(s + t - u)* (MH3*MH3*MH3*MH3) - 7*t* (s*s) + 3*u* (s*s) + 2* (s*s*s) - s* (t*t) - 4*u* (t*t) + 2* (t*t*t) +  (MA0*MA0)*(15*s*t - 11*s*u + 2*t*u - 2*(8*s - 5*t + 5*u)* (MH3*MH3) - 4* (s*s) + 2* (t*t) - 4* (u*u)) + s* (u*u) + 2*t* (u*u) +  (MH3*MH3)*(11*s*t + s*u + 2*t*u - 4* (t*t) + 2* (u*u)))))/(4.*(-t +  (MHch*MHch))* (MW*MW*MW*MW)* (token26*token26)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (token47*(-s +  (MZ*MZ))* (token24*token24)* (token56*token56)*(-(s*(-t + u)*(-u +  (MA0*MA0))*(s + t - u -  (MA0*MA0) +  (MH3*MH3))) + 8*(-2*s - t + u + 2* (MA0*MA0) + 6* (MH3*MH3))* (MW*MW*MW*MW*MW*MW) - 2* (MW*MW*MW*MW)*(-(s*t) - 7*s*u - 2*t*u + 4* (MA0*MA0*MA0*MA0) + (6*s + 13*t + 11*u)* (MH3*MH3) -  (MA0*MA0)*(6*s + t - 9*u + 32* (MH3*MH3)) - 4* (MH3*MH3*MH3*MH3) + 2* (s*s) -  (t*t) + 3* (u*u)) +  (MW*MW)*(2*(s + 4*t - 4*u)* (MA0*MA0*MA0*MA0) - 2*(s - t + u)* (MH3*MH3*MH3*MH3) + 3*t* (s*s) - 7*u* (s*s) + 2* (s*s*s) + s* (t*t) + 2*u* (t*t) +  (MH3*MH3)*(s*t + 11*s*u + 2*t*u + 2* (t*t) - 4* (u*u)) - s* (u*u) - 4*t* (u*u) +  (MA0*MA0)*(-11*s*t + 15*s*u + 2*t*u - 2*(8*s + 5*t - 5*u)* (MH3*MH3) - 4* (s*s) - 4* (t*t) + 2* (u*u)) + 2* (u*u*u))))/(4.*(-u +  (MHch*MHch))* (MW*MW*MW*MW)* (token26*token26)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0VEve(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) +  (MH3*MH3) + 2* (Mnue*Mnue) + cos_t*sqrt(s - 4* (Mnue*Mnue))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + Mnue*Mnue + Mnue*Mnue;
	return (( (token24*token24)* (token25*token25)*(2*t*u +  (MA0*MA0*MA0*MA0) +  (MH3*MH3*MH3*MH3) - 2* (MA0*MA0)*(s +  (MH3*MH3) - 2* (Mnue*Mnue)) - 2*s* (Mnue*Mnue) +  (MH3*MH3)*(-2*s + 4* (Mnue*Mnue)) +  (s*s) -  (t*t) -  (u*u)))/( (token27*token27)* (token28*token28)* (token29*token29)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0VMvm(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) +  (MH3*MH3) + 2* (Mnum*Mnum) + cos_t*sqrt(s - 4* (Mnum*Mnum))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + Mnum*Mnum + Mnum*Mnum;
	return (( (token24*token24)* (token25*token25)*(2*t*u +  (MA0*MA0*MA0*MA0) +  (MH3*MH3*MH3*MH3) - 2* (MA0*MA0)*(s +  (MH3*MH3) - 2* (Mnum*Mnum)) - 2*s* (Mnum*Mnum) +  (MH3*MH3)*(-2*s + 4* (Mnum*Mnum)) +  (s*s) -  (t*t) -  (u*u)))/( (token27*token27)* (token28*token28)* (token29*token29)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0VTvt(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) +  (MH3*MH3) + 2* (Mnut*Mnut) + cos_t*sqrt(s - 4* (Mnut*Mnut))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + Mnut*Mnut + Mnut*Mnut;
	return (( (token24*token24)* (token25*token25)*(2*t*u +  (MA0*MA0*MA0*MA0) +  (MH3*MH3*MH3*MH3) - 2* (MA0*MA0)*(s +  (MH3*MH3) - 2* (Mnut*Mnut)) - 2*s* (Mnut*Mnut) +  (MH3*MH3)*(-2*s + 4* (Mnut*Mnut)) +  (s*s) -  (t*t) -  (u*u)))/( (token27*token27)* (token28*token28)* (token29*token29)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0Ee(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) + 2* (Me*Me) +  (MH3*MH3) + cos_t*sqrt(s - 4* (Me*Me))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + Me*Me + Me*Me;
	return ((-2*Me*token24*token35*token45*token46*token47*token56*token57*token58*( (MA0*MA0) -  (MH3*MH3))*( (CW*CW) +  (SW*SW)))/(token26*token34*token51*token52*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (2*s* (token35*token35)* (token45*token45)* (token46*token46)* (token57*token57))/( (token34*token34)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (token24*token24)* (token47*token47)* (token56*token56)* (token58*token58)*( (SW*SW*SW*SW)*(5* (MA0*MA0*MA0*MA0) +  (Me*Me)*(-2*s + 4* (MH3*MH3)) + 2* (MA0*MA0)*(2* (Me*Me) - 5*(s +  (MH3*MH3))) + 5*(-2*s* (MH3*MH3) +  (MH3*MH3*MH3*MH3) +  (s*s) -  ((t - u)*(t - u)))) +  (CW*CW*CW*CW)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH3*MH3) +  (Me*Me)*(-2*s + 4* (MH3*MH3)) +  (MA0*MA0)*(4* (Me*Me) - 2*(s +  (MH3*MH3))) +  (MH3*MH3*MH3*MH3) +  (s*s) -  (t*t) -  (u*u)) + 2* (CW*CW)* (SW*SW)*(-2*t*u -  (MA0*MA0*MA0*MA0) + 2*s* (MH3*MH3) + 2* (MA0*MA0)*(s + 2* (Me*Me) +  (MH3*MH3)) +  (Me*Me)*(-2*s + 4* (MH3*MH3)) -  (MH3*MH3*MH3*MH3) -  (s*s) +  (t*t) +  (u*u))))/(4.* (token26*token26)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0Mm(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) +  (MH3*MH3) + 2* (MM*MM) + cos_t*sqrt(s - 4* (MM*MM))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + MM*MM + MM*MM;
	return ((-2*MM*token24*token36*token45*token46*token47*token56*token57*token58*( (MA0*MA0) -  (MH3*MH3))*( (CW*CW) +  (SW*SW)))/(token26*token34*token51*token52*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (2*s* (token36*token36)* (token45*token45)* (token46*token46)* (token57*token57))/( (token34*token34)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (token24*token24)* (token47*token47)* (token56*token56)* (token58*token58)*( (SW*SW*SW*SW)*(10*t*u + 5* (MA0*MA0*MA0*MA0) + 5* (MH3*MH3*MH3*MH3) - 2* (MA0*MA0)*(5*s + 5* (MH3*MH3) - 2* (MM*MM)) - 2*s* (MM*MM) + 2* (MH3*MH3)*(-5*s + 2* (MM*MM)) + 5* (s*s) - 5* (t*t) - 5* (u*u)) +  (CW*CW*CW*CW)*(2*t*u +  (MA0*MA0*MA0*MA0) +  (MH3*MH3*MH3*MH3) - 2* (MA0*MA0)*(s +  (MH3*MH3) - 2* (MM*MM)) - 2*s* (MM*MM) +  (MH3*MH3)*(-2*s + 4* (MM*MM)) +  (s*s) -  (t*t) -  (u*u)) + 2* (CW*CW)* (SW*SW)*(-2*t*u -  (MA0*MA0*MA0*MA0) -  (MH3*MH3*MH3*MH3) - 2*s* (MM*MM) + 2* (MH3*MH3)*(s + 2* (MM*MM)) + 2* (MA0*MA0)*(s +  (MH3*MH3) + 2* (MM*MM)) -  (s*s) +  (t*t) +  (u*u))))/(4.* (token26*token26)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0TAta(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) +  (MH3*MH3) + 2* (MTA*MTA) + cos_t*sqrt(s - 4* (MTA*MTA))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + MTA*MTA + MTA*MTA;
	return ((-2*MTA*token24*token37*token45*token46*token47*token56*token57*token58*( (MA0*MA0) -  (MH3*MH3))*( (CW*CW) +  (SW*SW)))/(token26*token34*token51*token52*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (2*s* (token37*token37)* (token45*token45)* (token46*token46)* (token57*token57))/( (token34*token34)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (token24*token24)* (token47*token47)* (token56*token56)* (token58*token58)*( (SW*SW*SW*SW)*(10*t*u + 5* (MA0*MA0*MA0*MA0) + 5* (MH3*MH3*MH3*MH3) - 2* (MA0*MA0)*(5*s + 5* (MH3*MH3) - 2* (MTA*MTA)) - 2*s* (MTA*MTA) + 2* (MH3*MH3)*(-5*s + 2* (MTA*MTA)) + 5* (s*s) - 5* (t*t) - 5* (u*u)) +  (CW*CW*CW*CW)*(2*t*u +  (MA0*MA0*MA0*MA0) +  (MH3*MH3*MH3*MH3) - 2* (MA0*MA0)*(s +  (MH3*MH3) - 2* (MTA*MTA)) - 2*s* (MTA*MTA) +  (MH3*MH3)*(-2*s + 4* (MTA*MTA)) +  (s*s) -  (t*t) -  (u*u)) + 2* (CW*CW)* (SW*SW)*(-2*t*u -  (MA0*MA0*MA0*MA0) -  (MH3*MH3*MH3*MH3) - 2*s* (MTA*MTA) + 2* (MH3*MH3)*(s + 2* (MTA*MTA)) + 2* (MA0*MA0)*(s +  (MH3*MH3) + 2* (MTA*MTA)) -  (s*s) +  (t*t) +  (u*u))))/(4.* (token26*token26)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0Uu(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) +  (MH3*MH3) + 2* (MU*MU) + cos_t*sqrt(s - 4* (MU*MU))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + MU*MU + MU*MU;
	return ((-6*MU*token24*token38*token45*token46*token47*token56*token57*token58*( (MA0*MA0) -  (MH3*MH3))*( (CW*CW) +  (SW*SW)))/(token26*token34*token51*token52*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (6*s* (token38*token38)* (token45*token45)* (token46*token46)* (token57*token57))/( (token34*token34)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (token24*token24)* (token47*token47)* (token56*token56)* (token58*token58)*( (SW*SW*SW*SW)*(34*t*u + 17* (MA0*MA0*MA0*MA0) + 17* (MH3*MH3*MH3*MH3) - 18*s* (MU*MU) +  (MH3*MH3)*(-34*s + 36* (MU*MU)) +  (MA0*MA0)*(-34*s - 34* (MH3*MH3) + 36* (MU*MU)) + 17* (s*s) - 17* (t*t) - 17* (u*u)) + 9* (CW*CW*CW*CW)*(2*t*u +  (MA0*MA0*MA0*MA0) +  (MH3*MH3*MH3*MH3) - 2* (MA0*MA0)*(s +  (MH3*MH3) - 2* (MU*MU)) - 2*s* (MU*MU) +  (MH3*MH3)*(-2*s + 4* (MU*MU)) +  (s*s) -  (t*t) -  (u*u)) - 6* (CW*CW)* (SW*SW)*(2*t*u +  (MA0*MA0*MA0*MA0) +  (MH3*MH3*MH3*MH3) + 6*s* (MU*MU) - 2* (MH3*MH3)*(s + 6* (MU*MU)) - 2* (MA0*MA0)*(s +  (MH3*MH3) + 6* (MU*MU)) +  (s*s) -  (t*t) -  (u*u))))/(12.* (token26*token26)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0Cc(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) + 2* (MC*MC) +  (MH3*MH3) + cos_t*sqrt(s - 4* (MC*MC))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + MC*MC + MC*MC;
	return ((-6*MC*token24*token39*token45*token46*token47*token56*token57*token58*( (MA0*MA0) -  (MH3*MH3))*( (CW*CW) +  (SW*SW)))/(token26*token34*token51*token52*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (6*s* (token39*token39)* (token45*token45)* (token46*token46)* (token57*token57))/( (token34*token34)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (token24*token24)* (token47*token47)* (token56*token56)* (token58*token58)*( (SW*SW*SW*SW)*(17* (MA0*MA0*MA0*MA0) + 18* (MC*MC)*(-s + 2* (MH3*MH3)) +  (MA0*MA0)*(36* (MC*MC) - 34*(s +  (MH3*MH3))) + 17*(-2*s* (MH3*MH3) +  (MH3*MH3*MH3*MH3) +  (s*s) -  ((t - u)*(t - u)))) - 6* (CW*CW)* (SW*SW)*(2*t*u +  (MA0*MA0*MA0*MA0) + 6* (MC*MC)*(s - 2* (MH3*MH3)) - 2*s* (MH3*MH3) - 2* (MA0*MA0)*(s + 6* (MC*MC) +  (MH3*MH3)) +  (MH3*MH3*MH3*MH3) +  (s*s) -  (t*t) -  (u*u)) + 9* (CW*CW*CW*CW)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH3*MH3) +  (MC*MC)*(-2*s + 4* (MH3*MH3)) +  (MA0*MA0)*(4* (MC*MC) - 2*(s +  (MH3*MH3))) +  (MH3*MH3*MH3*MH3) +  (s*s) -  (t*t) -  (u*u))))/(12.* (token26*token26)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0Tt(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) +  (MH3*MH3) + 2* (MT*MT) + cos_t*sqrt(s - 4* (MT*MT))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + MT*MT + MT*MT;
	return ((-6*MT*token24*token40*token45*token46*token47*token56*token57*token58*( (MA0*MA0) -  (MH3*MH3))*( (CW*CW) +  (SW*SW)))/(token26*token34*token51*token52*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (6*s* (token40*token40)* (token45*token45)* (token46*token46)* (token57*token57))/( (token34*token34)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (token24*token24)* (token47*token47)* (token56*token56)* (token58*token58)*( (SW*SW*SW*SW)*(34*t*u + 17* (MA0*MA0*MA0*MA0) + 17* (MH3*MH3*MH3*MH3) - 18*s* (MT*MT) +  (MH3*MH3)*(-34*s + 36* (MT*MT)) +  (MA0*MA0)*(-34*s - 34* (MH3*MH3) + 36* (MT*MT)) + 17* (s*s) - 17* (t*t) - 17* (u*u)) + 9* (CW*CW*CW*CW)*(2*t*u +  (MA0*MA0*MA0*MA0) +  (MH3*MH3*MH3*MH3) - 2* (MA0*MA0)*(s +  (MH3*MH3) - 2* (MT*MT)) - 2*s* (MT*MT) +  (MH3*MH3)*(-2*s + 4* (MT*MT)) +  (s*s) -  (t*t) -  (u*u)) - 6* (CW*CW)* (SW*SW)*(2*t*u +  (MA0*MA0*MA0*MA0) +  (MH3*MH3*MH3*MH3) + 6*s* (MT*MT) - 2* (MH3*MH3)*(s + 6* (MT*MT)) - 2* (MA0*MA0)*(s +  (MH3*MH3) + 6* (MT*MT)) +  (s*s) -  (t*t) -  (u*u))))/(12.* (token26*token26)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0Dd(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) + 2* (MD*MD) +  (MH3*MH3) + cos_t*sqrt(s - 4* (MD*MD))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + MD*MD + MD*MD;
	return ((-6*MD*token24*token41*token45*token46*token47*token56*token57*token58*( (MA0*MA0) -  (MH3*MH3))*( (CW*CW) +  (SW*SW)))/(token26*token34*token51*token52*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (6*s* (token41*token41)* (token45*token45)* (token46*token46)* (token57*token57))/( (token34*token34)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (token24*token24)* (token47*token47)* (token56*token56)* (token58*token58)*( (SW*SW*SW*SW)*(5* (MA0*MA0*MA0*MA0) + 18* (MD*MD)*(-s + 2* (MH3*MH3)) + 2* (MA0*MA0)*(18* (MD*MD) - 5*(s +  (MH3*MH3))) + 5*(-2*s* (MH3*MH3) +  (MH3*MH3*MH3*MH3) +  (s*s) -  ((t - u)*(t - u)))) + 6* (CW*CW)* (SW*SW)*(2*t*u +  (MA0*MA0*MA0*MA0) + 2* (MA0*MA0)*(-s + 6* (MD*MD) -  (MH3*MH3)) - 2*s* (MH3*MH3) + 6* (MD*MD)*(-s + 2* (MH3*MH3)) +  (MH3*MH3*MH3*MH3) +  (s*s) -  (t*t) -  (u*u)) + 9* (CW*CW*CW*CW)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH3*MH3) +  (MD*MD)*(-2*s + 4* (MH3*MH3)) +  (MA0*MA0)*(4* (MD*MD) - 2*(s +  (MH3*MH3))) +  (MH3*MH3*MH3*MH3) +  (s*s) -  (t*t) -  (u*u))))/(12.* (token26*token26)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0Ss(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) +  (MH3*MH3) + 2* (MS*MS) + cos_t*sqrt(s - 4* (MS*MS))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + MS*MS + MS*MS;
	return ((-6*MS*token24*token42*token45*token46*token47*token56*token57*token58*( (MA0*MA0) -  (MH3*MH3))*( (CW*CW) +  (SW*SW)))/(token26*token34*token51*token52*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (6*s* (token42*token42)* (token45*token45)* (token46*token46)* (token57*token57))/( (token34*token34)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (token24*token24)* (token47*token47)* (token56*token56)* (token58*token58)*( (SW*SW*SW*SW)*(10*t*u + 5* (MA0*MA0*MA0*MA0) + 5* (MH3*MH3*MH3*MH3) - 2* (MA0*MA0)*(5*s + 5* (MH3*MH3) - 18* (MS*MS)) - 18*s* (MS*MS) + 2* (MH3*MH3)*(-5*s + 18* (MS*MS)) + 5* (s*s) - 5* (t*t) - 5* (u*u)) + 9* (CW*CW*CW*CW)*(2*t*u +  (MA0*MA0*MA0*MA0) +  (MH3*MH3*MH3*MH3) - 2* (MA0*MA0)*(s +  (MH3*MH3) - 2* (MS*MS)) - 2*s* (MS*MS) +  (MH3*MH3)*(-2*s + 4* (MS*MS)) +  (s*s) -  (t*t) -  (u*u)) + 6* (CW*CW)* (SW*SW)*(2*t*u +  (MA0*MA0*MA0*MA0) +  (MH3*MH3*MH3*MH3) - 2* (MA0*MA0)*(s +  (MH3*MH3) - 6* (MS*MS)) - 6*s* (MS*MS) + 2* (MH3*MH3)*(-s + 6* (MS*MS)) +  (s*s) -  (t*t) -  (u*u))))/(12.* (token26*token26)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
double DT::H3A0Bb(const double &cos_t, const double &s){
	using namespace PAR;
	double t = (-s +  (MA0*MA0) + 2* (MB*MB) +  (MH3*MH3) + cos_t*sqrt(s - 4* (MB*MB))*sqrt(( (MA0*MA0*MA0*MA0) - 2* (MA0*MA0)*(s +  (MH3*MH3)) +  (( (MH3*MH3) - s)*( (MH3*MH3) - s)))/s))/2.;
	double u = -s - t + MH3*MH3 + MA0*MA0 + MB*MB + MB*MB;
	return ((-6*MB*token24*token43*token45*token46*token47*token56*token57*token58*( (MA0*MA0) -  (MH3*MH3))*( (CW*CW) +  (SW*SW)))/(token26*token34*token51*token52*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + (6*s* (token43*token43)* (token45*token45)* (token46*token46)* (token57*token57))/( (token34*token34)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))) + ( (token24*token24)* (token47*token47)* (token56*token56)* (token58*token58)*( (SW*SW*SW*SW)*(5* (MA0*MA0*MA0*MA0) + 18* (MB*MB)*(-s + 2* (MH3*MH3)) + 2* (MA0*MA0)*(18* (MB*MB) - 5*(s +  (MH3*MH3))) + 5*(-2*s* (MH3*MH3) +  (MH3*MH3*MH3*MH3) +  (s*s) -  ((t - u)*(t - u)))) + 6* (CW*CW)* (SW*SW)*(2*t*u +  (MA0*MA0*MA0*MA0) + 2* (MA0*MA0)*(-s + 6* (MB*MB) -  (MH3*MH3)) - 2*s* (MH3*MH3) + 6* (MB*MB)*(-s + 2* (MH3*MH3)) +  (MH3*MH3*MH3*MH3) +  (s*s) -  (t*t) -  (u*u)) + 9* (CW*CW*CW*CW)*(2*t*u +  (MA0*MA0*MA0*MA0) - 2*s* (MH3*MH3) +  (MB*MB)*(-2*s + 4* (MH3*MH3)) +  (MA0*MA0)*(4* (MB*MB) - 2*(s +  (MH3*MH3))) +  (MH3*MH3*MH3*MH3) +  (s*s) -  (t*t) -  (u*u))))/(12.* (token26*token26)* (token51*token51)* (token52*token52)*( (MZ*MZ*MZ*MZ) +  (s*s) +  (MZ*MZ)*(-2*s +  (WZ*WZ)))));
}
