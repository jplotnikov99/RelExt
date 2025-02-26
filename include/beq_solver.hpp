#pragma once
#include <iostream>
#include <memory>
#include <vector>

#include "boltzmann_equations.hpp"
#include "general_model.hpp"
#include "hyper_parameters.hpp"
#include "utils.hpp"

namespace DT {
class BeqSolver {
   private:
    std::shared_ptr<Model> mod;
    std::unique_ptr<Beqs> beq;
    bool reject = false;
    double errold = 1e-4;

   public:
    BeqSolver(std::shared_ptr<Model> model);

    // sets the mechanism of DM generation
    void set_mechanism(const size_t &mech);

    // sorts different channels by their total initial state masses
    bool sort_inimasses(const vstring &ch_str = {});

    double yeq(const double &x);

    // secant method implementation to find a root between x1 and x2
    double secant_method(double x0, double x1, const double del);

    double bisec(double x1, double x2, const double del);

    double dopr5(double &x, ResError &y, const double &h);

    // step size controller for the next dopr5 iteration
    double controller(const double &hnow, const double &err);

    // solves 1D boltzmann-eq using the Dormand-Prince-Method
    void adap_dopr5(const double &xtoday, double &x, ResError &y,
                    double h = 1e-3);

    ResError kronrod_61(const double l, const double r);

    ResError icoll(const double xf, const double x0);

    // Solution for freeze-out approximation
    ResError calc_yield(const double &xtoday, double &x, ResError &y,
                        const bool appr = true);

    void reset_tac_state(const bool full);

    ~BeqSolver() {};
};

}  // namespace DT
