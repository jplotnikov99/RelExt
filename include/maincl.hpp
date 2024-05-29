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
        std::string mode;
        std::string input_file;
        std::string output_file;
        vstring bath_particles = {};
        vstring bath_procs = {};
        vstring considered_procs = {};
        vstring subtracted_procs = {};
        vstring neglected_particles = {};
        vstring saved_pars = {};
        bool first_run = true;
        double channel_contrib = 1.;
        std::unordered_map<std::string, std::function<void(const vstring)>> operations_map;
        std::unordered_map<std::string, ResError> variable_map;
        std::vector<vstring> user_operations;
        std::vector<vstring> generator_list;
        std::unique_ptr<DataReader> rdr;
        std::shared_ptr<Model> mod;
        std::unique_ptr<RelicOps> relops;

    public:
        Main(int argc, char **argv);

        int start_point = 1, end_point = 0;

        void load_setting(const std::string sg_file);

        void load_read_file();

        void load_generation_file();

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

        int check_var_existence(const std::string &var, const std::string func = "");

        double get_number(const std::string &arg, const std::string &func);

        // args are: variable name, value
        void Def(const vstring &args);

        // args are: variable name, value (can be variable or number)
        void Add(const vstring &args);

        // args are: variable name, value (can be variable or number)
        void Sub(const vstring &args);

        // args are: variable name, value (can be variable or number)
        void Mult(const vstring &args);
        
        // args are: variable name, value (can be variable or number)
        void Div(const vstring &args);

        // args are: variable name, value (can be variable or number) 
        void Set(const vstring &args);

        // args are: particle names of DS particles included in the thermal bath
        void ChangeThermalBath(const vstring &args);

        // args are: min sqrt(s), max sqrt(s), number of points, channel names
        void CalcXsec(const vstring &args);

        // args are: min x, max x, number of points, channel names
        void CalcTac(const vstring &args);

        // args are: mechanism type
        void CalcRelic(const vstring &args);

        // args are: name of parameter, mechanism, relic target, relic error, variable to save into 
        void FindParameter(const vstring &args);

        // saves the scanned data
        void SaveData(const vstring &args);

        void do_user_operations();

        ~Main(){};
    };

} // namespace DT
