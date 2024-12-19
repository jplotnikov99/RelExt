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
    const double xtoday;
    bool appr;

   public:
    FO1DM(ModelInfo &model, const bool &apprr, const double &xto)
        : BI(model), appr(apprr), foc(BI, apprr ? 1.5 : 0.1), xtoday(xto) {};
    void set_appr(const bool &apprr);
    double omega(const double &yield);
    double operator()(const vstring &channels);
    ~FO1DM() {};
};
}  // namespace DT
