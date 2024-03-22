#pragma once
#include <iostream>
#include <memory>
#include <cmath>
#include <vector>
#include "hyper_parameters.hpp"
#include "result_error_pair.hpp"
#include "general_model.hpp"
#include "beq_solver.hpp"

namespace DT
{
    enum SearchMode
    {
        vanguard,
        bisect,
        descent,
        stop
    };
    class RelicOps
    {
    private:
        vstring bath_procs;
        size_t mechanism;
        double xinitial;
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

        // calculates the relic density for a specific mechanism
        ResError calc_relic();

        double get_next_step(const double &x1, const double &x2, const double &y1, const double &y2, const double &ytarget);

        void check_sign_flip(const double step_new, const double omega_new, const double par_new);

        double get_next_omega(const vstring &pars, const double om);

        std::vector<double> vanguard_search(const vstring &pars);

        std::vector<double> descent_search(const vstring &pars);

        std::vector<double> bisect_search(const vstring &pars);

        std::vector<double> find_pars(const vstring &pars);

        ~RelicOps(){};
    };
} // namespace DT
