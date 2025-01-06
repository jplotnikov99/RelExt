#pragma once
#include <functional>
#include <iostream>
#include <memory>
#include <unordered_map>
#include <vector>

#include "general_model.hpp"
#include "hyper_parameters.hpp"
#include "macros.hpp"
#include "readdata1.hpp"
#include "relic_ops.hpp"

namespace DT {
class Main {
   private:
    double omega;
    size_t mode;
    std::string input_file;
    std::string output_file;
    bool first_run = true;
    double channel_contrib = 1.;
    dvec1 channel_percent;
    vstring bath_procs;
    vvstring generator_list;
    ModelInfo &MI;
    std::unique_ptr<DataReader> rdr;
    std::unique_ptr<DataReader> sgr;
    std::unique_ptr<RelicOps> relops;

   public:
    Main(const int modee, const std::string inputfile, const int start,
         const int end = 0);

    int start_point = 1, end_point = 0;
    void load_setting();

    void check_start_end_points();

    void load_generation_file();

    void load_read_file();

    void load_user_operations();

    // loads parameter point and assigns DM mass
    void load_parameters(const size_t i);

    // returns the value of the parameter
    double get_parameter_val(const std::string &par);

    // defines which particles are in the DS bath via the particle names
    vstring def_thermal_bath(const vstring bath_particles = {});

    // sets the channels which contribute to the relic density
    void set_channels();

    // checks if the thermal bath particles and the input channels match
    void check_procs(const vstring &ch_str, const vstring &bath_procs);

    // args are: particle names of DS particles included in the thermal bath
    void ChangeThermalBath(const vstring &args);

    // args are: min sqrt(s), max sqrt(s), number of points, channel names
    void CalcXsec(const vstring &args);

    // args are: min x, max x, number of points, channel names
    void CalcTac(const vstring &args);

    // args are: mechanism type
    void CalcRelic(const vstring &args);

    // args are: name of parameter, mechanism, relic target, relic error,
    // variable to save into
    void FindParameter(const vstring &args);

    // args are: mechanism, relic target, relic error, parameters
    void RandomWalk(const vstring &args);

    // saves the scanned data
    void SaveData(const vstring &args);

    ~Main();
};

}  // namespace DT
