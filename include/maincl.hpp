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
        double xtoday_FI = 100;
        double xR = 0.0001;
        double xinitial;
        double omega;
        vstring bath_procs = {};
        std::unordered_map<std::string, double> channel_strength;
        std::unique_ptr<DataReader> rdr;
        std::shared_ptr<Dof> dof;
        std::shared_ptr<Model> mod;
        std::unique_ptr<BeqSolver> bsol;

    public:
        size_t N_par_points;

        // loads parameter point and assigns DM mass
        void load_parameters(const size_t i);

        // defines which particles are in the DS bath via the particle names
        void def_thermal_bath(const vstring &prtcls = {});

        // checks if the thermal bath particles and the input channels match
        void check_procs(const vstring &ch_str);

        // calculates the fraction between single channel TACs and full TAC
        void calc_initial_strength(const vstring &ch_str = {});

        // calculate the fraction between single channel relic density and full relic density
        void calc_relic_frac(const double ch_contrib, const vstring &ch_str = {});

        // calculates the DM relic density via freeze-out
        double calc_Omega_FO(const double ch_contrib = 1., const vstring &ch_str = {});

        // calculates the DM relic density via freeze-in
        double calc_Omega_FI(const double ch_contrib = 1., const vstring &ch_str = {});

        // calculates the DM relic density via exponential growth
        double calc_Omega_EXP();

        // saves the scanned data
        void save_data(char** argv, const vstring save_pars, bool channels = false);

        Main(int argc, char **argv);
        ~Main(){};
    };

} // namespace DT
