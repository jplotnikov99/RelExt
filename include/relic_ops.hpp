#pragma once
#include <cmath>
#include <iostream>
#include <memory>
#include <vector>

#include "beq_solver.hpp"
#include "general_model.hpp"
#include "hyper_parameters.hpp"
#include "result_error_pair.hpp"

namespace DT {
enum SearchMode { vanguard, bisect, descent, stop };
class RelicOps {
   private:
    vstring bath_procs;
    size_t mechanism;
    double xinitial;
    double par_bounds[2] = {-1e100, 1e100};
    std::map<std::string, std::pair<double, double>> pars_bounds;
    ResError omega;
    bool first_step = true;
    SearchMode searchmode = vanguard;
    double omega_target, omega_err;
    double omega_old, step_old, par_old;
    double bi_x1, bi_x2, bi_y1, bi_y2;
    std::shared_ptr<Model> mod;
    std::unique_ptr<BeqSolver> bs;

   public:
    RelicOps(std::shared_ptr<Model> model);

    void set_bath_procs(const vstring &b);

    void set_mechanism(const size_t mech);

    void set_omega_target(const double om);

    void set_omega_err(const double err);

    void set_par_bounds(const double a, const double b);

    void set_par_bounds(const std::string par, const double a, const double b);

    ResError get_last_relic();

    // calculates the relic density for a specific mechanism
    ResError CalcRelic();

    double get_next_step(const double &x1, const double &x2, const double &y1,
                         const double &y2, const double &ytarget);

    void check_sign_flip(const double step_new, const double omega_new,
                         const double par_new);

    double get_next_omega(const std::string &par, const double om);

    void vanguard_search(const std::string &par);

    void descent_search(const std::string &par);

    void bisect_search(const std::string &par);

    ResError find_par(const std::string &par);

    double random_step(const std::string &par);

    ResError random_walk();

    ~RelicOps() {};
};
}  // namespace DT
