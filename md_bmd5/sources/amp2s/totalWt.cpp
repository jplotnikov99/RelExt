///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"
#include "width.hpp"
#include <memory>

double DT::wtHt(){
	using namespace PAR;
	if(heaviDecays(MT,MH,MT)){
	return -0.03125*(( (MH*MH) - 4* (MT*MT))*sqrt( (MH*MH*MH*MH) - 4* (MH*MH)* (MT*MT))* (yt*yt))/(Pi* (MT*MT*MT));
	}
	else{ return 0; }

}
double DT::wtpQchi0(){
	using namespace PAR;
	if(heaviDecays(MT,MphiQ,Mchi0)){
	return (( (Mchi0*Mchi0) -  (MphiQ*MphiQ) +  (MT*MT))*sqrt((- ((Mchi0 - MphiQ)*(Mchi0 - MphiQ)) +  (MT*MT))*(- ((Mchi0 + MphiQ)*(Mchi0 + MphiQ)) +  (MT*MT)))* ((CKM3x3*ymbD + CKM3x2*ymsD)*(CKM3x3*ymbD + CKM3x2*ymsD)))/(32.*Pi* (MT*MT*MT));
	}
	else{ return 0; }

}
double DT::wtAt(){
	using namespace PAR;
	if(heaviDecays(MT,0,MT)){
	return 0;
	}
	else{ return 0; }

}
double DT::wtZt(){
	using namespace PAR;
	if(heaviDecays(MT,MZ,MT)){
	return -0.001736111111111111*( (EL*EL)*sqrt(-4* (MT*MT)* (MZ*MZ) +  (MZ*MZ*MZ*MZ))*(9* (cw*cw*cw*cw)*(- (MT*MT) +  (MZ*MZ)) - 6* (cw*cw)*(11* (MT*MT) +  (MZ*MZ))* (sw*sw) + (7* (MT*MT) + 17* (MZ*MZ))* (sw*sw*sw*sw)))/(Pi* (cw*cw)* (MT*MT*MT)* (sw*sw));
	}
	else{ return 0; }

}
double DT::wtWd(){
	using namespace PAR;
	if(heaviDecays(MT,MW,MD)){
	return ( (CKM3x1*CKM3x1)* (EL*EL)*sqrt((MD + MT - MW)*(-MD + MT + MW)*( (MT*MT) -  ((MD + MW)*(MD + MW))))*(( (MD*MD) +  (MT*MT))* (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MD*MD) -  (MT*MT))*( (MD*MD) -  (MT*MT)))))/(64.*Pi* (MT*MT*MT)* (MW*MW)* (sw*sw));
	}
	else{ return 0; }

}
double DT::wtWs(){
	using namespace PAR;
	if(heaviDecays(MT,MW,MS)){
	return ( (CKM3x2*CKM3x2)* (EL*EL)*sqrt((MS + MT - MW)*(-MS + MT + MW)*( (MT*MT) -  ((MS + MW)*(MS + MW))))*(( (MS*MS) +  (MT*MT))* (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MS*MS) -  (MT*MT))*( (MS*MS) -  (MT*MT)))))/(64.*Pi* (MT*MT*MT)* (MW*MW)* (sw*sw));
	}
	else{ return 0; }

}
double DT::wtWb(){
	using namespace PAR;
	if(heaviDecays(MT,MW,MB)){
	return ( (CKM3x3*CKM3x3)* (EL*EL)*sqrt((MB + MT - MW)*(-MB + MT + MW)*( (MT*MT) -  ((MB + MW)*(MB + MW))))*(( (MB*MB) +  (MT*MT))* (MW*MW) - 2* (MW*MW*MW*MW) +  (( (MB*MB) -  (MT*MT))*( (MB*MB) -  (MT*MT)))))/(64.*Pi* (MT*MT*MT)* (MW*MW)* (sw*sw));
	}
	else{ return 0; }

}
double DT::wtGt(){
	using namespace PAR;
	if(heaviDecays(MT,0,MT)){
	return 0;
	}
	else{ return 0; }

}
double DT::wwt(const double QCDaS){
	return ( wtHt() + wtpQchi0() + wtAt() + wtZt() + wtWd() + wtWs() + wtWb() + wtGt() );
}
