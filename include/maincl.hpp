#pragma once
#include <functional>
#include <iostream>
#include <memory>
#include <unordered_map>
#include <vector>

#include "beq_solver.hpp"
#include "general_model.hpp"
#include "hyper_parameters.hpp"
#include "macros.hpp"
#include "montecarlo.hpp"
#include "readdata1.hpp"
#include "relic_ops.hpp"

namespace DT {
class Main {
   private:
    double omega;
    size_t mode;
    std::string output_file;
    bool first_run = true;
    double channel_contrib = 1.;
    dvec1 channel_percent;
    VecString bath_procs;
    MatString generator_list;
    ModelInfo &MI;
    FO1DM FO;
    std::unique_ptr<DataReader> rdr;
    std::unique_ptr<MC> Mc;
    std::unique_ptr<RelicOps> relops;

   public:
    Main(const int modee, const std::string &inputfile,
         const std::string &outputfile, double beps, const double xtoday,
         const bool fast, const int start, const int end = 0);

    int start_point = 1, end_point = 0;

    void check_start_end_points();

    void load_generation_file();

    void load_read_file();

    void load_user_operations();

    // loads parameter point and assigns DM mass
    void load_parameters(const size_t i);

    // returns the value of the parameter
    double get_parameter(const std::string &par);

    void change_parameter(const std::string &par, const double newval);

    // defines which particles are in the DS bath via the particle names
    VecString def_thermal_bath(const VecString bath_particles = {});

    // sets the channels which contribute to the relic density
    void set_channels(const VecString &consider, VecString &subtract,
                      const VecString &neglect);

    // args are: particle names of DS particles included in the thermal bath
    void ChangeThermalBath(const VecString &args);

    // args are: min sqrt(s), max sqrt(s), number of points, channel names
    void CalcXsec(double sqsmin, double sqsmax, const size_t points,
                  const std::string outfile, const VecString channels);

    // args are: min x, max x, number of points, channel names
    void CalcTac(double xmin, double xmax, const size_t points,
                 const std::string outfile, VecString channels = {});

    // args are: mechanism type
    double CalcRelic(const int mechanism = 0);

    // args are: name of parameter, mechanism, relic target, relic error,
    // variable to save into
    void FindParameter(const std::string &par, const double target,
                       const double eps);

    // args are: mechanism, relic target, relic error, parameters
    void RandomWalk(const double target, const double eps);

    // saves the scanned data
    void SaveData(const VecString &args);

    ~Main();
};

}  // namespace DT
