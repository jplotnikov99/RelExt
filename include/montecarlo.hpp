#pragma once
#include <algorithm>
#include <cassert>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>

#include "data_structures.hpp"
#include "hyper_parameters.hpp"
#include "utils.hpp"

namespace DT {

typedef std::vector<double> dvec1;
typedef std::vector<dvec1> dvec2;

class MonteCarlo {
   private:
    const size_t N_pars;
    size_t N_best;
    size_t N_bins;
    const double p_random;
    const double target;
    double worst_cell = 2.;
    std::string worst_cell_ID = "";
    VecDoub lbounds;
    VecDoub ubounds;
    std::unordered_map<std::string, double> best_cells;

   public:
    MonteCarlo(const size_t Np, VecDoub &lower, VecDoub &upper,
               const size_t Nbins, const size_t Nbest, const double prandom,
               const double targett,
               std::unordered_map<std::string, double> &best)
        : N_pars(Np),
          N_bins(Nbins),
          N_best(Nbest),
          p_random(prandom),
          target(targett) {
        best_cells = best;
        lbounds = lower;
        ubounds = upper;
    };

    std::vector<int> get_bins(const VecDoub &pars);

    std::string bins_to_ID(const std::vector<int> &bins);

    std::vector<int> ID_to_bins(const std::string &ID);

    void set_weight(const VecDoub &pars, const double &relic);

    std::string select_random_cell_ID();

    VecDoub generate_new_pars();

    void print_best_cells();

    void save_best_cells(const VecString &par_names,
                        const std::string &filename);

    ~MonteCarlo() {};
};
}  // namespace DT
