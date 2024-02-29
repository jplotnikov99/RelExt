#pragma once
#include <memory>
#include <vector>
#include <iostream>
#include "utils.hpp"
#include "EffDof.hpp"
#include "general_model.hpp"
#include "boltzmann_equations.hpp"
#include "hyper_parameters.hpp"

namespace DT
{
    class BeqSolver
    {
    private:
        std::shared_ptr<Dof> dof;
        std::shared_ptr<Model> mod;
        std::unique_ptr<Beqs> beq;

    public:
        BeqSolver(std::shared_ptr<Model> model);

        // sets the mechanism of DM generation
        void set_mechanism(const size_t &mech);

        // sorts different channels by their total initial state masses
        void sort_inimasses(const vstring &ch_str = {});

        double yeq(const double &x);

        // secant method implementation to find a root between x1 and x2
        double secant_method(double x0, double x1);

        // four point runge kutta method needed to solve Boltzmann Eq.
        void rk4(double &x, double &y, const double &h);

        // set new stepsize for the next runga kutta evaluation
        double setStep(const double &hnow, const double &err);

        // Solves the Boltzmann equation with the full TAC using the adaptive 4-point runge-kutta method
        void adap_rk4(const double &xtoday, double &x, double &y, double h = 0.1);

        ~BeqSolver(){};
    };

} // namespace DT
