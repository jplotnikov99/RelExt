#pragma once

#include <iostream>
#include <functional>
#include <string>
#include <fstream>
#include <cmath>
#include <stdlib.h>
#include "vars.hpp"

namespace DT{


	// xsec function (without symmetry factors when we have identical particles)
	double xsec(double s, std::string ch_str, procinfos *proc);

	// generates a file with the xsec in pb over s/pcmin
	void plot_xsec(const char* filename, double lower, double upper, int Npoints, std::string ch_str, procinfos *proc, bool com = 1,  bool logarithmic = 1);
	
	void save_data(char** argv, std::vector<std::string> yourheader, std::vector<double> yourlist, procinfos *proc, bool channels = 0);
	
}