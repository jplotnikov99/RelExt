#pragma once
#include <memory>
#include <vector>
#include <iostream>
#include "tac.hpp"
#include "EffDof.hpp"

namespace DT
{
    class Beqs
    {
    private:
        const double G = 6.7e-39;
        std::shared_ptr<Dof> dof;
        std::shared_ptr<Model> mod;
        std::unique_ptr<Tac> tac;

    public:
        // clear TAC maps which are necessary for faster computation
        void clear_tac_maps();

        // sorts different channels by their total initial state masses
        void sort_inimasses(const std::vector<std::string> &ch_str = {});

        // prefactor of the boltzmann equation
        double pre(const double &x);

        // Temperature for a given entropy
        double T_ent(const double &ent);

        // Entropy for a given temperature
        double ent_T(const double &x);

        // function to help find the starting point to be used in the runge Kutta routine
        double fstart(double x, const std::vector<std::string> &ch_str = {});

        // Boltzmann equation that needs to be solved
        double beq_FO(const double &x, const double &y, const std::vector<std::string> &ch_str = {});

        Beqs(std::shared_ptr<Dof> degrees_of_freedom, std::shared_ptr<Model> model);
        ~Beqs(){};
    };

} // namespace DT
