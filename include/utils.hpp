#pragma once

#include <cmath>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "hyper_parameters.hpp"
#include "result_error_pair.hpp"

namespace DT
{

	typedef std::vector<std::string> vstring;

	// Heavi-side function and flux factor for the amp2sflux

	bool heaviDecays(const double &m1, const double &m2, const double &m3);

	bool heavi(const double &s, const double &m1, const double &m2);

	double kaellen(const double &s, const double &m1, const double &m2);

	double flux(const double &s, const double &m1, const double &m2, const double &m3, const double &m4);

	// Bessel functions

	double besselK(const int n, const double &x);

	double polK(const int n, const double &x);

	double besselK2(const double &x);

	double polK1(const double &x);

	double polK2(const double &x);

	void append_to_vstring(vstring &a, const vstring &b);

	double simpson_est(const double l, const double r, double *f);

}