#pragma once

#include <cmath>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

namespace DT{

		// Heavi-side function and flux factor for the amp2sflux

		bool heaviDecays(double m1, double m2, double m3);

		bool heavi(double s, double m1, double m2);

		double flux(double s, double m1, double m2, double m3, double m4);

		// Bessel functions

		double besselK(int n, double x);

		double polK(int n, double x);

		double besselK2(double x);

		double polK1(double x);

		double polK2(double x);

		bool Beps(double xf, double eps);

		void save_data(const char *filename, std::vector<std::string> header, std::vector<double> data);


}