///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../include/init.hpp"
#include "readdata.hpp"
#include "../amp2s/allamp2s.hpp"
#include "../include/declarations.hpp"

void DT::loadpoint(std::vector<std::string> data, std::vector<double *> scanpars) {
	MZ = 91.1876;
	aEWM1 = 0.00775795;
	Gf = 0.0000116637;
	aS = 0.1172;
	mHsm = 125.09;
	mHc = 200.;
	alph1 = -0.1;
	alph2 = -0.1;
	alph3 = 0.1;
	mH1 = 100.;
	mH2 = 200.;
	m22sq = 100;
	mssq = 100;
	L2 = 0.1;
	L6 = 0.1;
	L8 = 0.1;
	MC = 1.2;
	MB = 4.23;
	MT = 172.5;
	GG = 1.21358;
	Mnue = 0.;
	Mnum = 0.;
	Mnut = 0.;
	Me = 0.;
	MM = 0.1057;
	MTA = 1.777;
	MU = 0.;
	MD = 0.;
	MS = 0.;
	WT = 2.;
	WZ = 2.4952;
	WW = 2.085;
	WHsm = 1.;
	WH1 = 0.;
	WH2 = 1.;
	WH3 = 1.;
	WHc = 1.;
	E = 2.71828;
	Pi = 3.14159;
	for(size_t i = 0; i < lists::ssdata.size(); i++)
	{
		*scanpars.at(i) = std::stod(lists::ssdata.at(i));
	}
	MW = pow(pow(MZ,2)/2.+pow(-(aEWM1*Pi*pow(2,-0.5)*pow(Gf,-1)*pow(MZ,2))+pow(MZ,4)/4.,0.5),0.5);
	EE = 2*pow(aEWM1,0.5)*pow(Pi,0.5);
	CW2 = pow(MW,2)*pow(MZ,-2);
	SW2 = 1-CW2;
	CW = pow(CW2,0.5);
	SW = pow(SW2,0.5);
	g1 = EE*pow(CW,-1);
	g2 = EE*pow(SW,-1);
	v = 0.8408964152537146*pow(Gf,-0.5);
	RR1x1 = cos(alph1)*cos(alph2);
	RR1x2 = cos(alph2)*sin(alph1);
	RR1x3 = sin(alph2);
	RR2x1 = -(cos(alph3)*sin(alph1))-cos(alph1)*sin(alph2)*sin(alph3);
	RR2x2 = cos(alph1)*cos(alph3)-sin(alph1)*sin(alph2)*sin(alph3);
	RR2x3 = cos(alph2)*sin(alph3);
	RR3x1 = -(cos(alph1)*cos(alph3)*sin(alph2))+sin(alph1)*sin(alph3);
	RR3x2 = -(cos(alph3)*sin(alph1)*sin(alph2))-cos(alph1)*sin(alph3);
	RR3x3 = cos(alph2)*cos(alph3);
	mH3 = pow(-((RR1x1*RR1x2*pow(mH1,2)+RR2x1*RR2x2*pow(mH2,2))*pow(RR3x1,-1)*pow(RR3x2,-1)),0.5);
	m11sq = -0.5*pow(mHsm,2);
	L1 = pow(mHsm,2)*pow(v,-2);
	L3 = 2*(-m22sq+pow(mHc,2))*pow(v,-2);
	L4 = pow(RR1x3-2*RR2x1*RR3x2,-1)*(2*(mH1-mH3)*(mH1+mH3)*RR1x2*RR3x2*RR3x3+2*RR1x2*RR2x2*RR2x3*(-pow(mH1,2)+pow(mH2,2))+RR1x3*(pow(mH2,2)+pow(mH3,2)-2*pow(mHc,2))-2*RR2x1*RR3x2*(pow(mH2,2)+pow(mH3,2)-2*pow(mHc,2))+RR1x3*(-pow(mH1,2)+pow(mH2,2))*pow(RR2x3,2)+(mH1-mH3)*(mH1+mH3)*RR1x3*pow(RR3x3,2))*pow(v,-2);
	L5 = RR1x3*pow(RR1x3-2*RR2x1*RR3x2,-1)*(pow(mH3,2)+pow(mH2,2)*(-1+pow(RR2x3,2))-pow(mH1,2)*pow(RR2x3,2)+(mH1-mH3)*(mH1+mH3)*pow(RR3x3,2))*pow(v,-2);
	L7 = -2*pow(RR1x3-2*RR2x1*RR3x2,-1)*(mssq*(RR1x3-2*RR2x1*RR3x2)+RR2x3*(2*RR1x2*RR2x2+RR1x3*RR2x3)*pow(mH2,2)+(RR1x1*RR3x1-RR1x2*RR3x2)*RR3x3*pow(mH3,2)-pow(mH1,2)*(-2*RR2x1*RR3x2+2*RR1x2*(RR2x2*RR2x3-RR3x2*RR3x3)+RR1x3*(1+pow(RR2x3,2)-pow(RR3x3,2))))*pow(v,-2);
	Treal = RR1x1*((-pow(mH1,2)+pow(mH2,2))*pow(RR2x1,2)+(mH1-mH3)*(mH1+mH3)*pow(RR3x1,2))*pow(RR1x3-2*RR2x1*RR3x2,-1)*pow(v,-1);
	Timag = RR1x2*((-pow(mH1,2)+pow(mH2,2))*pow(RR2x2,2)+(mH1-mH3)*(mH1+mH3)*pow(RR3x2,2))*pow(RR1x3-2*RR2x1*RR3x2,-1)*pow(v,-1);
	CKM1x1 = 0.97428;
	CKM1x2 = 0.2253;
	CKM1x3 = 0.00347;
	CKM2x1 = 0.2252;
	CKM2x2 = 0.97345;
	CKM2x3 = 0.041;
	CKM3x1 = 0.00862;
	CKM3x2 = 0.0403;
	CKM3x3 = 0.999152;
	EL = EE;
	gc19 = -EL;
	gc20 = -EL;
	gc21 = EL;
	gc22 = -EL;
	gc24 = EL;
	gc27 = -EL;
	gc28 = -((CW*EL)/SW);
	gc30 = (CW*EL)/SW;
	gc32 = -EL;
	gc35 = EL;
	gc36 = (CW*EL)/SW;
	gc38 = -((CW*EL)/SW);
	gc40 = (CW*EL)/SW;
	gc42 = -((CW*EL)/SW);
	gc44 = FAGS;
	gc45 = -FAGS;
	gc46 = - (FAGS*FAGS);
	gc47L = -(MB/v);
	gc47R = MB/v;
	gc48 = -(MB/v);
	gc49L = -(MD/v);
	gc49R = MD/v;
	gc50 = -(MD/v);
	gc51L = -(MS/v);
	gc51R = MS/v;
	gc52 = -(MS/v);
	gc53L = -((sqrt(2)*MS*(CKM2x3))/v);
	gc53R = (sqrt(2)*MT*(CKM2x3))/v;
	gc54L = -((sqrt(2)*MB*(CKM3x3))/v);
	gc54R = (sqrt(2)*MT*(CKM3x3))/v;
	gc55L = -((sqrt(2)*MD*(CKM1x3))/v);
	gc55R = (sqrt(2)*MT*(CKM1x3))/v;
	gc56L = -((sqrt(2)*MS*(CKM2x1))/v);
	gc56R = (sqrt(2)*MU*(CKM2x1))/v;
	gc57L = -((sqrt(2)*MB*(CKM3x1))/v);
	gc57R = (sqrt(2)*MU*(CKM3x1))/v;
	gc58L = -((sqrt(2)*MD*(CKM1x1))/v);
	gc58R = (sqrt(2)*MU*(CKM1x1))/v;
	gc59L = -((sqrt(2)*MS*(CKM2x2))/v);
	gc59R = (sqrt(2)*MC*(CKM2x2))/v;
	gc60L = -((sqrt(2)*MB*(CKM3x2))/v);
	gc60R = (sqrt(2)*MC*(CKM3x2))/v;
	gc61L = -((sqrt(2)*MD*(CKM1x2))/v);
	gc61R = (sqrt(2)*MC*(CKM1x2))/v;
	gc62L = -(Me/v);
	gc62R = Me/v;
	gc63 = -(Me/v);
	gc64L = -(MM/v);
	gc64R = MM/v;
	gc65 = -(MM/v);
	gc66L = -(MTA/v);
	gc66R = MTA/v;
	gc67 = -(MTA/v);
	gc68 = -((sqrt(2)*Me)/v);
	gc69 = -((sqrt(2)*MM)/v);
	gc70 = -((sqrt(2)*MTA)/v);
	gc71L = (sqrt(2)*CKM2x3*MT)/v;
	gc71R = -((sqrt(2)*CKM2x3*MS)/v);
	gc72L = (sqrt(2)*CKM2x1*MU)/v;
	gc72R = -((sqrt(2)*CKM2x1*MS)/v);
	gc73L = (sqrt(2)*CKM2x2*MC)/v;
	gc73R = -((sqrt(2)*CKM2x2*MS)/v);
	gc74L = (sqrt(2)*CKM3x3*MT)/v;
	gc74R = -((sqrt(2)*CKM3x3*MB)/v);
	gc75L = (sqrt(2)*CKM3x1*MU)/v;
	gc75R = -((sqrt(2)*CKM3x1*MB)/v);
	gc76L = (sqrt(2)*CKM3x2*MC)/v;
	gc76R = -((sqrt(2)*CKM3x2*MB)/v);
	gc77L = (sqrt(2)*CKM1x3*MT)/v;
	gc77R = -((sqrt(2)*CKM1x3*MD)/v);
	gc78L = (sqrt(2)*CKM1x1*MU)/v;
	gc78R = -((sqrt(2)*CKM1x1*MD)/v);
	gc79L = (sqrt(2)*CKM1x2*MC)/v;
	gc79R = -((sqrt(2)*CKM1x2*MD)/v);
	gc80L = MC/v;
	gc80R = -(MC/v);
	gc81 = -(MC/v);
	gc82L = MT/v;
	gc82R = -(MT/v);
	gc83 = -(MT/v);
	gc84L = MU/v;
	gc84R = -(MU/v);
	gc85 = -(MU/v);
	gc86R = -((sqrt(2)*Me)/v);
	gc87R = -((sqrt(2)*MM)/v);
	gc88R = -((sqrt(2)*MTA)/v);
	gc164 = FAGS;
	gc165 = FAGS;
	gc166 = FAGS;
	gc167 = FAGS;
	gc168 = FAGS;
	gc169 = FAGS;
	gc173 = EL/(2.*SW);
	gc174 = EL/(2.*SW);
	gc175 = EL;
	gc177 = EL/(2.*SW);
	gc179 = EL/(2.*SW);
	gc181 = EL/(2.*SW);
	gc185 = EL/(2.*SW);
	gc186 = -0.5*EL/SW;
	gc188 = (EL*(RR1x1 + RR1x2))/(2.*SW);
	gc190 = (EL*(RR2x1 + RR2x2))/(2.*SW);
	gc192 = (EL*(RR3x1 + RR3x2))/(2.*SW);
	gc198 = - (EL*EL);
	gc205 = (CW*EL)/SW;
	gc206 =  (EL*EL)/ (SW*SW);
	gc209 = -0.5*(EL*( (CW*CW) +  (SW*SW)))/(CW*SW);
	gc210 = -0.5*(CW*EL)/SW + (EL*SW)/(2.*CW);
	gc211 = -0.5*(CW*EL)/SW + (EL*SW)/(2.*CW);
	gc212 = -0.5*(EL*(RR1x2*RR2x1 - RR1x1*RR2x2)*( (CW*CW) +  (SW*SW)))/(CW*SW);
	gc213 = -0.5*(EL*(RR1x2*RR3x1 - RR1x1*RR3x2)*( (CW*CW) +  (SW*SW)))/(CW*SW);
	gc214 = -0.5*(EL*(RR2x2*RR3x1 - RR2x1*RR3x2)*( (CW*CW) +  (SW*SW)))/(CW*SW);
	gc227 = (CW* (EL*EL))/SW;
	gc239 = -(( (CW*CW)* (EL*EL))/ (SW*SW));
	gc240 = -0.3333333333333333*EL;
	gc241 = -0.3333333333333333*EL;
	gc242 = -0.3333333333333333*EL;
	gc243 = -EL;
	gc244 = -EL;
	gc245 = -EL;
	gc246 = (2*EL)/3.;
	gc247 = (2*EL)/3.;
	gc248 = (2*EL)/3.;
	gc249 = EL/(sqrt(2)*SW);
	gc250 = EL/(sqrt(2)*SW);
	gc251 = EL/(sqrt(2)*SW);
	gc252 = (CKM2x3*EL)/(sqrt(2)*SW);
	gc253 = (CKM2x1*EL)/(sqrt(2)*SW);
	gc254 = (CKM2x2*EL)/(sqrt(2)*SW);
	gc255 = (CKM3x3*EL)/(sqrt(2)*SW);
	gc256 = (CKM3x1*EL)/(sqrt(2)*SW);
	gc257 = (CKM3x2*EL)/(sqrt(2)*SW);
	gc258 = (CKM1x3*EL)/(sqrt(2)*SW);
	gc259 = (CKM1x1*EL)/(sqrt(2)*SW);
	gc260 = (CKM1x2*EL)/(sqrt(2)*SW);
	gc261 = EL/(sqrt(2)*SW);
	gc262 = EL/(sqrt(2)*SW);
	gc263 = EL/(sqrt(2)*SW);
	gc264 = (EL*(CKM2x3))/(sqrt(2)*SW);
	gc265 = (EL*(CKM3x3))/(sqrt(2)*SW);
	gc266 = (EL*(CKM1x3))/(sqrt(2)*SW);
	gc267 = (EL*(CKM2x1))/(sqrt(2)*SW);
	gc268 = (EL*(CKM3x1))/(sqrt(2)*SW);
	gc269 = (EL*(CKM1x1))/(sqrt(2)*SW);
	gc270 = (EL*(CKM2x2))/(sqrt(2)*SW);
	gc271 = (EL*(CKM3x2))/(sqrt(2)*SW);
	gc272 = (EL*(CKM1x2))/(sqrt(2)*SW);
	gc273L = -0.16666666666666666*(EL*(3* (CW*CW) +  (SW*SW)))/(CW*SW);
	gc273R = (EL*SW)/(3.*CW);
	gc274L = -0.16666666666666666*(EL*(3* (CW*CW) +  (SW*SW)))/(CW*SW);
	gc274R = (EL*SW)/(3.*CW);
	gc275L = -0.16666666666666666*(EL*(3* (CW*CW) +  (SW*SW)))/(CW*SW);
	gc275R = (EL*SW)/(3.*CW);
	gc276L = -0.5*(EL*( (CW*CW) -  (SW*SW)))/(CW*SW);
	gc276R = (EL*SW)/CW;
	gc277L = -0.5*(EL*( (CW*CW) -  (SW*SW)))/(CW*SW);
	gc277R = (EL*SW)/CW;
	gc278L = -0.5*(EL*( (CW*CW) -  (SW*SW)))/(CW*SW);
	gc278R = (EL*SW)/CW;
	gc279L = (CW*EL)/(2.*SW) - (EL*SW)/(6.*CW);
	gc279R = (-2*EL*SW)/(3.*CW);
	gc280L = (CW*EL)/(2.*SW) - (EL*SW)/(6.*CW);
	gc280R = (-2*EL*SW)/(3.*CW);
	gc281L = (CW*EL)/(2.*SW) - (EL*SW)/(6.*CW);
	gc281R = (-2*EL*SW)/(3.*CW);
	gc282 = (EL*( (CW*CW) +  (SW*SW)))/(2.*CW*SW);
	gc283 = (EL*( (CW*CW) +  (SW*SW)))/(2.*CW*SW);
	gc284 = (EL*( (CW*CW) +  (SW*SW)))/(2.*CW*SW);
}
