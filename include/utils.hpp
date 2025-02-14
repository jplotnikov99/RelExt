#pragma once

#include <cmath>
#include <fstream>
#include <iostream>
#include <cassert>
#include <random>
#include <string>
#include <vector>
#include <algorithm>

#include "hyper_parameters.hpp"
// #include "bessel-library.hpp"

namespace DT {

typedef std::vector<std::string> VecString;
typedef std::vector<VecString> MatString;

double MIN(const double a, const double b);

double MAX(const double a, const double b);

double SQR(const double a);

double SIGN(const double a, const double b);

// Heavi-side function and flux factor for the amp2sflux

bool heaviDecays(const double &m1, const double &m2, const double &m3);

double kaellen(const double x, const double y, const double z);

double flux(const double &s, const double &m1, const double &m2,
            const double &m3, const double &m4);

// Bessel functions

double besselK2(const double &x);

double polK1(const double &x);

double polK2(const double &x);

void append_to_VecString(VecString &a, const VecString &b);

void check_arguments_number(const bool exact, const size_t needs,
                            const size_t has, const std::string &func);

std::string str_tolower(std::string s);

double linint(const double x, const double x1, const double x2, const double y1,
              const double y2);

double simpson_est(const double l, const double r, double *f);

double generate_random(const double a, const double b);

}  // namespace DT