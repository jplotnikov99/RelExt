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
    double xtoday;
    bool appr;

   public:
    FO1DM(ModelInfo &model, const bool &apprr)
        : BI(model), appr(apprr), foc(BI, apprr ? 1.5 : 0.1) {};
    void set_appr(const bool &apprr);
    void set_xtoday(const double &xtoday);
    double omega(const double &yield);
    double operator()(const VecString &channels);
    ~FO1DM() {};
};
}  // namespace DT
