#pragma once

#include <cmath>
#include <unordered_map>
#include <functional>
#include <string>
#include "vars.hpp"

namespace DT{

	// wij is a function that appears in the TAC
	double wij(double s, std::function<double(double, double)> f);

	//Equilibrium yield defined in yeq.cpp for each model
	double yeq(double xf);

	//integrand of the TAC defined in yeq.cpp for each model
	double sigv(double u, double xf, std::function<double(double, double)> f);

	void flickswitches(double xf, procinfos *proc);

	void assigndm(procinfos *proc);

	//checks if the peak is suppressed enough by the boltzmann factor to not matter for seperate integration
	double peak_relevance(double peakpos);

	//defines a triplet with the boundaries of a resonance peak and the width
	double* peak_bounds(double peakpos, double width);

	//sorts the boundaries triplets in descending order
	void i_sort_boundaries(procinfos *proc);

	//sets all the relevant peak boundaries (sorted) and the number of relevant peaks dl
	void set_boundaries(double xf, procinfos *proc);

	//calculates the s integral for one channel
	double integrate_s(double xf, std::function<double(double, double)> channel, procinfos *proc);

	//the one. the only. full THERMALLY AVERAGED CROSS SECTION at a certain x value
	double tac(double xf, procinfos *proc, std::string ch_str = "");
}
