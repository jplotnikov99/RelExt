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
    const bool nlo;
    const int renormvs;
    const int renormalpha;
    const bool qcd;
    VecDoub channel_frac;
    VecString bath_procs;
    MatString generator_list;
    AnnihilationAmps &AA;
    FO1DM FO;
    std::unique_ptr<DataReader> rdr;
    std::unique_ptr<MonteCarlo> MC;

   public:
    Main(char *argv[], const int modee, double beps, const double xtoday,
         const bool fast, const bool calcwidths, const bool savecontribs, const bool nlo = false, const bool qcd = false, const int renormvs=2, const int renormalpha=1);

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
    void SaveData(const VecString &save_pars);
    void SaveToCSV(const std::string &csvname, Main &M_nlo,
               const double lo_val, const double nlo_val, const double rel_corr);
    ~Main();
};

}  // namespace DT
#include <iostream>


void printRelExtInfo(bool isNLO) {

    std::cout << "+--------------------------------------------------------------------------+\n";
    std::cout << "|                     ____      _ _____      _                             |\n";
    std::cout << "|                    |  _ \\ ___| | ____|_  _| |_                           |\n";
    std::cout << "|                    | |_) / _ \\ |  _| \\ \\/ / __|                          |\n";
    std::cout << "|                    |  _ <  __/ | |___ >  <| |_                           |\n";
    std::cout << "|                    |_| \\_\\___|_|_____/_/\\_\\\\__|                          |\n";

    if (isNLO) {
        std::cout << "|                                                                          |\n";
        std::cout << "|                              @@@@@@@                                     |\n";
        std::cout << "|                           @@@       @@@                                  |\n";
        std::cout << "|                          @@   @@@@    @@                                 |\n";
        std::cout << "|                         @@   @@  @@    @@                                |\n";
        std::cout << "|                         @@   @@  @@    @@                                |\n";
        std::cout << "|                          @@   @@@@    @@                                 |\n";
        std::cout << "|                           @@@       @@@                                  |\n";
        std::cout << "|                              @@@@@@@                                     |\n";
        std::cout << "|                                                                          |\n";
        std::cout << "|                        _   _ _      ____                                 |\n";
        std::cout << "|                       | \\ | | |    / __ \\                                |\n";
        std::cout << "|                       |  \\| | |   | |  | |                               |\n";
        std::cout << "|                       | . ` | |   | |  | |                               |\n";
        std::cout << "|                       | |\\  | |___| |__| |                               |\n";
        std::cout << "|                       |_| \\_|______\\____/                                |\n";
    }

    std::cout << "|                                                                          |\n";

    // Dein Bild
    std::cout << "|               MWXKKKXXKOo:ccldxkkkdodxxol:;,;cd0NMWo.',:                 |\n";
    std::cout << "|               MMMWNXKx;;cdO0Okxxdd:;coolodddo:..:ONd'c::                 |\n";
    std::cout << "|               MMMMW0:,oOOo:;;;;:coxxxdoc;;,,;::,..lOd:'.                 |\n";
    std::cout << "|               MMMWx,lOd;;:ldxxdoc,,;,,;codxdoc;'...;0Xd'                 |\n";
    std::cout << "|               MMNo;xk;,oKWMMMMMMWKdllkNMMMMMMWNOl'..;KX:                 |\n";
    std::cout << "|               MXc.ox':KMWKOxxOXWMMMMMMMMWKkxxOXWW0;..oNo                 |\n";
    std::cout << "|               O,.cx':KKo;..;;.'kWMMMMMMWx..:;..:dKK; :Xd                 |\n";
    std::cout << "|               K;'kl.ll.   .::..x0occccoOx..:;.   .ol.:0c                 |\n";
    std::cout << "|               X;:0:...   ..,:o0x.;:..;'.k0o:,.    ...co.                 |\n";
    std::cout << "|               O'l0:.   .:xKNXXW0:'.. .';0WNNN0d;.   .c,'                 |\n";
    std::cout << "|               d'xKo' .;OWMMWx;lOOxddxxkOkl:kWMMNx'  ',.o                 |\n";
    std::cout << "|               l.lkxl..oXWMMMW0occclllllcco0WMMWNKl..'.lX                 |\n";
    std::cout << "|               ...;dxl..cOXNWMMMMWNXXXXNWMMMMWNKkc'';':dl                 |\n";
    std::cout << "|               c'okdloo:.':dOKXNNWWWWWWWWNNXKOd:.'::..',c                 |\n";
    std::cout << "|               0,lKx,.lxd:'.';coxkO0000Okdoc;..'::'.:dONW                 |\n";
    std::cout << "|               Nc;OOo;:dd:cl:'...'''''''... .'::'. .ckNMM                 |\n";
    std::cout << "|               Mk'l0xxdxd;.,od;..,;,,,,'...;cc,.,cc:..oNM                 |\n";
    std::cout << "|               MNc'xOo;,lxl,.;cc:::,....;clc'..;xkxxo'.xW                 |\n";
    std::cout << "|               MMK:,dkl,.;odl:::,.',:cldo;......ckxdd:.lW                 |\n";
    std::cout << "|               MMMXl,oxo:..,,'';coxxol:'..,;,...'::','.xM                 |\n";

    std::cout << "|                                                                          |\n";
    std::cout << "|      R.Capucha, K.Elyaouti, J.Plotnikov, M.M. Mühlleitner, R. Santos     |\n";
    std::cout << "|                                                                          |\n";
    std::cout << "+--------------------------------------------------------------------------+\n";
}