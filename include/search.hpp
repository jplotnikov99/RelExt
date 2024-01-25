#pragma once

#include <cmath>
#include <vector>
#include <map>
#include <iostream>
#include "beq.hpp"
#include "vars.hpp"

namespace DT
{
    std::vector<double> gradientFO(std::vector<double> &y1, const double eps);
    double findParameters(std::map<std::string, double*> &map, double initial, double relic, procinfos *proc);
}