#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <unordered_map>
#include "hyper_parameters.hpp"
#include "readdata1.hpp"
#include "general_model.hpp"
#include "relic_ops.hpp"
#include "tac.hpp"
#include "beq_solver.hpp"
#include "mass_run.hpp"

namespace DT
{
    class Main
    {
    private:
        size_t mechanism = 10; 
        ResError omega;
        double omega_error;
        std::string input_file;
        std::string output_file;
        vstring bath_particles = {}; 
        vstring bath_procs = {};
        vstring considered_procs = {};
        vstring saved_pars = {};
        double channel_contrib = 1.;
        vstring strong_channels = {};
        std::unique_ptr<DataReader> rdr;
        std::shared_ptr<Model> mod;
        std::unique_ptr<RelicOps> relops;

    public:
        Main(int argc, char **argv);

        size_t N_par_points;

        void load_setting(const std::string sg_file);

        // loads parameter point and assigns DM mass
        void load_parameters(const size_t i);

        // changes a parameters value
        void change_parameter(const std::string &par, const double &newval);

        // returns the value of the parameter
        double get_parameter_val(const std::string &par);

        // defines which particles are in the DS bath via the particle names
        void def_thermal_bath();

        // sets the channels which contribute to the relic density
        void set_channels();

        // checks if the thermal bath particles and the input channels match
        void check_procs(const vstring &ch_str);

        // finds the channels which contribute to TAC more than channel_contrib
        void find_strong_channels();

        // calculate the fraction between single channel relic density and full relic density
        void calc_relic_frac();

        void calc_relic();

        // finds the parameter values for which the needed relic density is reached within a certain limit
        void find_pars(const vstring &pars, const double relic = 0.119, const double err = 0.003);

        // saves the scanned data
        void save_data(bool channels = false);

        ~Main(){};
    };

} // namespace DT
