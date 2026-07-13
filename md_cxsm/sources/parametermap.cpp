///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void ModelInfo::load_parameter_map(){
		using namespace PAR;
		parmap["aEWM1"] = &aEWM1;
		parmap["Gf"] = &Gf;
		parmap["aS"] = &aS;
		parmap["ymdo"] = &ymdo;
		parmap["ymup"] = &ymup;
		parmap["yms"] = &yms;
		parmap["ymc"] = &ymc;
		parmap["ymb"] = &ymb;
		parmap["ymt"] = &ymt;
		parmap["yme"] = &yme;
		parmap["ymm"] = &ymm;
		parmap["ymtau"] = &ymtau;
		parmap["cabi"] = &cabi;
		parmap["MW"] = &MW;
		parmap["svev"] = &svev;
		parmap["alpha"] = &alpha;
		parmap["MA1"] = &MA1;
		parmap["MS1"] = &MS1;
		parmap["MH"] = &MH;
		parmap["GG"] = &GG;
		parmap["MZ"] = &MZ;
		parmap["Me"] = &Me;
		parmap["MMU"] = &MMU;
		parmap["MTA"] = &MTA;
		parmap["MU"] = &MU;
		parmap["MC"] = &MC;
		parmap["MT"] = &MT;
		parmap["MD"] = &MD;
		parmap["MS"] = &MS;
		parmap["MB"] = &MB;
		parmap["WZ"] = &WZ;
		parmap["WW"] = &WW;
		parmap["WT"] = &WT;
		parmap["WH"] = &WH;
		parmap["WS1"] = &WS1;
		parmap["WA1"] = &WA1;
		parmap["E"] = &E;
		parmap["Pi"] = &Pi;
		double* val1 = new double(CT_svev_ZEM_H1_OS.real());
		parmap["vsZEM1os"] = val1;
		double* val2 = new double(CT_svev_ZEM_H2_OS.real());
	 	parmap["vsZEM2os"] = val2;
		double* val3 = new double(CT_svev_ZEM_H1_pstr.real());
	 	parmap["vsZEM1pstar"] = val3;
		double* val4 = new double(CT_svev_ZEM_H2_pstr.real());
	 	parmap["vsZEM2pstar"] = val4;
		double* val5 = new double(CT_svev_OS_H1_OS.real());
		parmap["vsOS1os"] = val1;
		double* val6 = new double(CT_svev_OS_H2_OS.real());
	 	parmap["vsOS2os"] = val2;
		double* val7 = new double(CT_svev_OS_H1_pstr.real());
		parmap["vsOS1os"] = val1;
		double* val8 = new double(CT_svev_OS_H2_pstr.real());
	 	parmap["vsOS2os"] = val2;
	}
}
