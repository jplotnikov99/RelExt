#pragma once
#include <cmath>
#include <iostream>
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
    const size_t best = 10;
    size_t points = 0;
    dvec1 lbounds;
    dvec1 ubounds;
    avec2 weights;

   public:
    MC(const size_t Np, const size_t Nb, const size_t Bb, const dvec1 &lower,
       const dvec1 &upper)
        : N_pars(Np), N_bins(Nb), begin(Bb) {
        lbounds = lower;
        ubounds = upper;
        for (size_t i = 0; i < N_pars; i++) {
            weights.push_back({});
            for (size_t j = 0; j < N_bins; j++) {
                weights[i].push_back({0., 0.});
            }
        }
    };

    // 2*(sigmoid(abs(x)) - 1/2) such that weights are only between 0 and 1
    double sigmoid(const double x);

    void set_weight(const dvec1 &pars, const double x);

    dvec1 generate_new_pars();

    void print_grid_row(const size_t i);
    void print_grid();
    ~MC() {};
};
}  // namespace DT
