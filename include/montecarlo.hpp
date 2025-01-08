#pragma once
#include <algorithm>
#include <cassert>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "data_structures.hpp"
#include "hyper_parameters.hpp"
#include "utils.hpp"

namespace DT {

typedef std::vector<int> ivec1;
typedef std::vector<double> dvec1;
typedef std::vector<dvec1> dvec2;

class MonteCarlo {
   private:
    const size_t N_pars;
    const double target;
    double worst_bin = 2.;
    std::string worst_bin_ID = "";
    size_t points = 1;
    VecDoub lbounds;
    VecDoub ubounds;
    std::unordered_map<std::string, double> best_bins;

   public:
    MonteCarlo(const size_t Np, VecDoub &lower, VecDoub &upper,
               const double targett,
               std::unordered_map<std::string, double> &best)
        : N_pars(Np), target(targett) {
        best_bins = best;
        lbounds = lower;
        ubounds = upper;
    };

    ivec1 get_bins(const VecDoub &pars);

    std::string bins_to_ID(const ivec1 &bins);

    ivec1 ID_to_bins(const std::string &ID);

    void set_weight(const VecDoub &pars, const double x);

    std::string get_random_bin_ID();

    VecDoub generate_new_pars();

    void print_best_bins();

    void save_best_bins(const VecString &par_names,
                        const std::string &filename);

    ~MonteCarlo() {};
};
}  // namespace DT
