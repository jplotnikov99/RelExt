#pragma once
#include <memory>
#include <vector>
#include <iostream>
#include "Dof.h"

class Beqs
    {
    private:
        const double G = 6.7e-39;
        std::shared_ptr<Dof> dof;

    public:
        Beqs();
        // clear TAC maps which are necessary for faster computation
        void reset_tac_state(const bool full);

        // prefactor of the boltzmann equation
        double pre(const double &x);

        // prefactor + tac of the boltzmann equation
        double pre_tac(const double &x);

        // Temperature for a given entropy
        double T_ent(const double &ent);

        // Entropy for a given temperature
        double ent_T(const double &x);

        double yeq(const double &x);

        // function to help find the starting point to be used in the runge Kutta routine
        double fstart(double x);

        // Boltzmann equation that needs to be solved for freeze-out and simple freeze-in
        double beq(const double &x, const double &y);
	};