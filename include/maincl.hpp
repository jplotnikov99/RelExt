#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <unordered_map>
#include <functional>
#include "macros.hpp"
#include "hyper_parameters.hpp"
#include "readdata1.hpp"
#include "general_model.hpp"
#include "relic_ops.hpp"

namespace DT
{
    class Main
    {
    private:
        ResError omega;
        std::string input_file;
        std::string output_file;
        vstring bath_particles = {};
        vstring bath_procs = {};
        vstring considered_procs = {};
        vstring subtracted_procs = {};
        vstring neglected_particles = {};
        vstring saved_pars = {};
        bool first_save = true;
        double channel_contrib = 1.;
        vstring strong_channels = {};
        std::unordered_map<std::string, std::function<void(const vstring)>> operations_map;
        std::vector<vstring> user_operations;
        std::unique_ptr<DataReader> rdr;
        std::shared_ptr<Model> mod;
        std::unique_ptr<RelicOps> relops;

    public:
        Main(int argc, char **argv);

        size_t start_point = 1, end_point = 0;

        void load_setting(const std::string sg_file);

        void load_user_operations();

        // loads parameter point and assigns DM mass
        void load_parameters(const size_t i);

        // returns the value of the parameter
        double get_parameter_val(const std::string &par);

        // defines which particles are in the DS bath via the particle names
        void def_thermal_bath();

        // sets the channels which contribute to the relic density
        void set_channels();

        // checks if the thermal bath particles and the input channels match
        void check_procs(const vstring &ch_str);

        void CalcXsec(const vstring &args);

        void CalcTac(const vstring &args);

        void CalcRelic(const vstring &args);

        // finds the parameter values for which the needed relic density is reached within a certain limit
        void FindParameter(const vstring &args);

        // saves the scanned data
        void save_data();

        void do_user_operations();

        ~Main(){};
    };

} // namespace DT
