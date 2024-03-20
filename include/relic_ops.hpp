#pragma once
#include <iostream>
#include <memory>
#include "result_error_pair.hpp"
#include "beq_solver.hpp"

namespace DT
{
    class RelicOps
    {
    private:
        vstring bath_procs;
        double xinitial;
        double xtoday_FO = 1e7;
        double x_reheating = 0.0001;
        double xtoday_FI = 100;
        ResError omega;
        std::shared_ptr<Model> mod;
        std::unique_ptr<BeqSolver> bs;

    public:
        RelicOps(std::shared_ptr<Model> model);
        
        void set_bath_procs(const vstring &b);

        // calculates the relic density for a specific mechanism
        ResError calc_relic(const size_t mech);

        double get_next_step(const double &x1, const double &x2, const double &y1, const double &y2, const double &ytarget);
        ~RelicOps(){};
    };
} // namespace DT
