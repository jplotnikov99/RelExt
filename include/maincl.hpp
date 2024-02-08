#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <unordered_map>
#include "readdata1.hpp"
#include "general_model.hpp"
#include "tac.hpp"
#include "beq_solver.hpp"

namespace DT
{
    class Main
    {
    private:
        double xtoday_FO = 1e8;
        double xinitial;
        double omega;
        std::unordered_map<std::string, double> channel_strength;
        std::unique_ptr<DataReader> rdr;
        std::shared_ptr<Dof> dof;
        std::shared_ptr<Model> mod;
        std::unique_ptr<BeqSolver> bsol;

    public:
        size_t N_par_points;

        // loads parameter point and assigns DM mass
        void load_parameters(const size_t i);

        // calculates the fraction between single channel TACs and full TAC
        void calc_tac_frac(const std::vector<std::string> &ch_str = {});

        // calculate the fraction between single channel relic density and full relic density
        void calc_relic_frac(const double ch_contrib, const std::vector<std::string> &ch_str = {});

        // calculates the DM relic density via freeze-out
        double calc_Omega_FO(const std::vector<std::string> &ch_str = {}, const double ch_contrib = 1.);

        Main(int argc, char **argv);
        ~Main(){};
    };

} // namespace DT
