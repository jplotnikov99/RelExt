#pragma once
#include <algorithm>
#include <cassert>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "utils.hpp"

namespace DT {

typedef std::vector<int> ivec1;
typedef std::vector<double> dvec1;
typedef std::vector<dvec1> dvec2;

class MC {
   private:
    const size_t N_pars;
    const size_t N_bins;
    const size_t N_best = 500;
    double worst_bin = 2.;
    std::string worst_bin_ID = "";
    size_t points = 1;
    dvec1 lbounds;
    dvec1 ubounds;
    std::unordered_map<std::string, double> best_bins;
    std::map<std::string, int> excluded_bins;

   public:
    MC(const size_t Np, const size_t Nb, const dvec1 &lower, const dvec1 &upper)
        : N_pars(Np), N_bins(Nb) {
        lbounds = lower;
        ubounds = upper;
    };

    ivec1 get_bins(const dvec1 &pars);

    std::string bins_to_ID(const ivec1 &bins);

    ivec1 ID_to_bins(const std::string &ID);

    int get_bin_distance(const ivec1 &a, const ivec1 &b);

    int get_bin_distance(const std::string &a, const std::string &b);

    bool is_excluded(const ivec1 &bins);

    void set_weight(const dvec1 &pars, const double x);

    std::string get_random_bin_ID();

    dvec1 generate_new_pars();

    void print_best();
    ~MC() {
        std::string filesave = "../dataOutput/binout.txt";
        std::ofstream outfile(filesave, std::ios::out | std::ios::app);
        outfile.seekp(0, std::ios::end);
        for (auto it : best_bins) {
            ivec1 bins = ID_to_bins(it.first);
            for (auto jt : bins) {
                outfile << jt << "\t";
            }
            outfile << it.second << "\n";
        }
    };
};
}  // namespace DT
