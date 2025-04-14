#pragma once

#include <cmath>
#include <fstream>
#include <iostream>
#include <cassert>
#include <random>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

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

class OptionParser {
public:
    // Parses the arguments and stores them as key-value pairs
    void parse(int argc, char* argv[]) {
        for (int i = 1; i < argc; ++i) { // Skip argv[0] (program name)
            std::string arg(argv[i]);
            size_t equal_pos = arg.find('=');
            if (equal_pos != std::string::npos) {
                std::string name = arg.substr(0, equal_pos);
                std::string value = arg.substr(equal_pos + 1);
                options_[name] = value;
            }
        }
    }

    // Returns true if the option exists
    bool has(const std::string& name) const {
        return options_.count(name) > 0;
    }

    // Returns the value of an option, or default_val if not found
    std::string get(const std::string& name, const std::string& default_val = "") const {
        auto it = options_.find(name);
        return (it != options_.end()) ? it->second : default_val;
    }

private:
    std::unordered_map<std::string, std::string> options_;
};

}  // namespace DT