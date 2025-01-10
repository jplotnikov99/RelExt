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
    const VecString pars;
    const VecString channels;
    FO1DM &FO;
    AnnihilationAmps &AA;

   public:
    OmegaGoal(AnnihilationAmps &AnAmps, FO1DM &fo, const VecString &parss,
              const VecString &channelss, const double goall);
    bool valid(VecDoub &x);
    double get_omega();
    VecDoub get_parvals();
    double operator()(const double x);
    double operator()(VecDoub &x);
    ~OmegaGoal() {};
};
}  // namespace DT
