#pragma once
#include <memory>
#include <vector>
#include <iostream>
#include "tac.hpp"
#include "utils.hpp"
#include "EffDof.hpp"

namespace DT
{
    class Beqs
    {
    private:
        const double G = 6.7e-39;
        size_t mech = 0;
        std::shared_ptr<Dof> dof;
        std::shared_ptr<Model> mod;
        std::unique_ptr<Tac> tac;

    public:
        Beqs(std::shared_ptr<Model> model);
        // set the DM generatio mechanism
        void set_mechanism(const size_t &m);

        // clear TAC maps which are necessary for faster computation
        void reset_tac_state();

        // sorts different channels by their total initial state masses
        void sort_inimasses(const vstring &ch_str = {});

        // prefactor of the boltzmann equation
        double pre(const double &x);

        // Temperature for a given entropy
        double T_ent(const double &ent);

        // Entropy for a given temperature
        double ent_T(const double &x);

        double yeq(const double &x);

        // function to help find the starting point to be used in the runge Kutta routine
        double fstart(double x);

        // Boltzmann equation that needs to be solved for freeze-out and simple freeze-in
        double beq(const double &x, const double &y);

        ~Beqs(){};
    };

} // namespace DT
