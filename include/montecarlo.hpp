#pragma once
#include <algorithm>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "utils.hpp"

namespace DT {
struct Average {
    double val;
    double N;
};

Average operator+(const Average &a, const double b);
typedef std::vector<double> dvec1;
typedef std::vector<dvec1> dvec2;
typedef std::vector<Average> avec1;
typedef std::vector<avec1> avec2;

class MC {
   private:
    const size_t N_pars;
    const size_t N_bins;
    const size_t begin;
    const size_t N_best = 100;
    double worst_bin = 2.;
    std::string worst_bin_ID = "";
    size_t points = 1;
    dvec1 lbounds;
    dvec1 ubounds;
    std::unordered_map<std::string, Average> best_bins;

   public:
    MC(const size_t Np, const size_t Nb, const size_t Bb, const dvec1 &lower,
       const dvec1 &upper)
        : N_pars(Np), N_bins(Nb), begin(Bb) {
        lbounds = lower;
        ubounds = upper;
    };

    std::string bins_to_ID(const std::vector<int> &bins);

    std::vector<int> ID_to_bins(const std::string &ID);

    void add_to_best(const std::string &ID, const double x);

    void set_weight(const dvec1 &pars, const double x);

    std::string get_random_bin_ID();

    dvec1 generate_new_pars();

    void print_best();
    ~MC() {};
};
}  // namespace DT
