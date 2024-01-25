#pragma once

#include <vector>
#include <string>
#include <functional>
#include <unordered_map>

namespace DT{
	typedef std::vector<std::function<double(double, double)>> funcs;
	typedef struct{
		std::vector<double*> inimasses;
		std::vector<double*> denstructures;
		std::vector<double*> neutraldsmasses;
		std::vector<double> boundaries;
		std::vector<bool> iniswitches;
		funcs inifuncs;
		std::vector<std::string> channelnames;
		funcs amp2s;
		funcs amp2fls;
		std::vector<double*> mass1s;
		std::vector<double*> mass2s;
		std::vector<double*> mass3s;
		std::vector<double*> mass4s;
	}procinfos;
	
	extern double zero;
	
	namespace vars{

		extern double m1, m2, m3, m4;
        extern double peaklower;
        extern double peakupper;
        extern double MDM;
        extern int ssdatasize;
        extern int dl;
        extern double ch_contribs;
        extern double initialx;
		extern bool appr;

		extern int initialstate;

	}

	namespace lists{
		extern std::vector<std::string> ssdata;
		extern std::vector<double> geff_x; 
		extern std::vector<double> geff_y; 
		extern std::vector<double> heff_y; 
		extern std::vector<double> g12_x; 
		extern std::vector<double> g12_y;
		extern std::unordered_map<double, double> sig_s;
		extern std::unordered_map<double, double> tac_x;
		extern std::vector<double> relStrength;
		extern std::vector<std::string> relChannel;
	}
}