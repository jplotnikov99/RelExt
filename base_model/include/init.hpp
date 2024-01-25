#pragma once 

#include <fstream>
#include <vector>
#include <iostream>
#include <sstream>
#include <cmath>
#include <map>
#include "declarations.hpp"
#include "vars.hpp"

namespace DT{
	void loadpoint(std::vector<std::string> data, std::vector<double *> scanpars);
	void init(procinfos *proc);
	void loadmap(std::map<std::string, double*> &map);
}
