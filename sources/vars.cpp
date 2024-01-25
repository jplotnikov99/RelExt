#include "vars.hpp"

namespace DT
{
	double zero = 0.;
	namespace vars
	{
		double m1, m2, m3, m4;
		double peaklower;
		double peakupper;
		double MDM;
		int ssdatasize;
		int dl;
		double ch_contribs = 1;
		double initialx;
		bool appr = true;
		int initialstate = 0;

	}

	namespace lists
	{
		std::vector<std::string> ssdata;
		std::vector<double> geff_x;
		std::vector<double> geff_y;
		std::vector<double> heff_y;
		std::vector<double> g12_x;
		std::vector<double> g12_y;
		std::unordered_map<double, double> sig_s;
		std::unordered_map<double, double> tac_x;
		std::vector<double> relStrength;
		std::vector<std::string> relChannel;

	}
}