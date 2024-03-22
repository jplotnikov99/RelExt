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
        double xinitial;
        ResError omega;
        bool first_step = true;
        SearchMode searchmode = vanguard;
        double omega_old;
        double step_old;
        double par_old;
        double bi_x1, bi_x2, bi_y1, bi_y2;
        std::shared_ptr<Model> mod;
        std::unique_ptr<BeqSolver> bs;

    public:
        RelicOps(std::shared_ptr<Model> model);

        void set_bath_procs(const vstring &b);

        // calculates the relic density for a specific mechanism
        ResError calc_relic(const size_t mech);

        double get_next_step(const double &x1, const double &x2, const double &y1, const double &y2, const double &ytarget);

        void check_sign_flip(const double step_new, const double omega_new, const double par_new);

        double get_next_omega(const vstring &pars, const double om, const double relic, const size_t mech);

        std::vector<double> vanguard_search(const vstring &pars, const double relic, const double err, const size_t mech);

        std::vector<double> descent_search(const vstring &pars, const double relic, const size_t mech);

        std::vector<double> bisect_search(const vstring &pars, const double relic, const double err, const size_t mech);

        std::vector<double> find_pars(const vstring &pars, const double relic, const double err, const size_t mech);

        ~RelicOps(){};
    };
} // namespace DT
