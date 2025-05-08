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
    const bool calc_widths;
    const bool save_contribs;
    VecDoub channel_frac;
    VecString bath_procs;
    MatString generator_list;
    AnnihilationAmps &AA;
    FO1DM FO;
    std::unique_ptr<DataReader> rdr;
    std::unique_ptr<MonteCarlo> MC;

   public:
    Main(char *argv[], const int modee, double beps, const double xtoday,
         const bool fast, const bool calcwidths, const bool savecontribs);

    void load_generation_file();

    void load_read_file();

    void load_user_operations();

    void PrintParticles();

    void PrintChannels();

    void PrintDM();

    // loads parameter point and assigns DM mass
    void LoadParameters(const size_t i = 0);

    // returns the value of the parameter
    double GetParameter(const std::string &par);

    void ChangeParameter(const std::string &par, const double newval);

    // defines which particles are in the DS bath via the particle names
    VecString def_thermal_bath(const VecString bath_particles = {});

    // sets the channels which contribute to the relic density
    void set_channels(const VecString &consider, VecString &subtract,
                      const VecString &neglect);

    // args are: particle names of DS particles included in the thermal bath
    void ChangeThermalBath(const VecString &args);

    // initialize MonteCarlo
    void InitMonteCarlo(size_t Nbins, const size_t Nbest, const double prandom,
                        const double target);

    // set weight in the Montecarlo method
    void SetWeight();

    double CalcAmp(const double s, const double cos_t, VecString channels);

    // args are: min sqrt(s), max sqrt(s), number of points, channel names
    void CalcXsec(double sqsmin, double sqsmax, const size_t points,
                  const std::string outfile, VecString channels);

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
    void RWalk(const double target, const double eps, const double gam,
               const size_t maxit);

    // saves the scanned data
    void SaveData(const VecString &args);

    ~Main();
};

}  // namespace DT
