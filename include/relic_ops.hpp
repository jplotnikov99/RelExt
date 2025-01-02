#pragma once
#include <cmath>
#include <iostream>
#include <memory>
#include <vector>

#include "beq_solver.hpp"
#include "general_model.hpp"
#include "hyper_parameters.hpp"
#include "montecarlo.hpp"

namespace DT {
class OmegaGoal {
   private:
    double omega;
    const double goal;
    const std::string par;
    const vstring channels;
    FO1DM fo;
    ModelInfo &MI;

   public:
    OmegaGoal(ModelInfo &model, const std::string &parr,
              const vstring &channelss, const double goall,
              const bool fast = true);
    bool valid(const double x);
    double get_omega();
    double operator()(const double x);
    ~OmegaGoal() {};
};

class RelicOps {
   private:
    FO1DM fo;
    vstring bath_procs;
    size_t mechanism;
    bool fast;
    double xinitial;
    double par_bounds[2] = {-1e100, 1e100};
    vstring par_names;
    std::vector<std::pair<double, double>> bounds;
    double omega;
    bool first_step = true;
    SearchMode searchmode = vanguard;
    double omega_target, omega_err;
    double omega_old, step_old, par_old;
    double bi_x1, bi_x2, bi_y1, bi_y2;
    ModelInfo &MI;
    bool is_monte = false;
    std::unique_ptr<MC> Mc;

   public:
    RelicOps(ModelInfo &model, const bool &appr);

    void init_montecarlo(const size_t N_pars, const dvec1 &lower,
                         const dvec1 &upper,
                         std::unordered_map<std::string, double> best = {});

    void generate_new_pars();

    void set_bath_procs(const vstring &b);

    void set_fast(const bool f);

    vstring get_bath_procs();

    void set_mechanism(const size_t mech);

    void set_omega_target(const double om);

    void set_omega_err(const double err);

    void set_par_bounds(const double a, const double b);

    void set_par_bounds(const std::string par, const double a, const double b);

    double calc_omega(const double yield);

    // calculates the relic density for a specific mechanism
    double CalcRelic();

    double get_last_relic();

    dvec1 calc_channel_contributions(double contrib);

    double find_par(const std::string &par);

    double random_step(const size_t par_i);

    void same_step(const size_t par_i, const double step);

    double random_walk();

    void save_best_bins(const std::string &filename);

    ~RelicOps() {};
};
}  // namespace DT
