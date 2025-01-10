#pragma once
#include <iostream>
#include <memory>
#include <vector>

#include "boltzmann_equations.hpp"
#include "general_model.hpp"
#include "hyper_parameters.hpp"
#include "numerical/StepperDopr853.hpp"
#include "numerical/root_finding.hpp"
#include "utils.hpp"

namespace DT {

class FO1DM {
   private:
    BeqInfo BI;
    FOCondition foc;
    double xtoday, xf;
    bool appr, suppress = false;

   public:
    FO1DM(AnnihilationAmps &AnAmps, const bool &apprr)
        : BI(AnAmps), appr(apprr), foc(BI, apprr ? 1.5 : 0.1) {};
    void set_appr(const bool &apprr);
    void set_xtoday(const double &xtoday);
    double omega(const double &yield);
    VecDoub calc_contributions(const VecString &channels);
    double operator()(const VecString &channels);
    ~FO1DM() {};
};
}  // namespace DT
