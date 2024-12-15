#pragma once

#include <cassert>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <vector>

#include "EffDof.hpp"
#include "utils.hpp"

namespace DT {
#define ADDCHANNELINFO(name, namefl, m1, m2, m3, m4) \
    channelnames.push_back(#name);                   \
    mass1s[#name] = &m1;                             \
    mass2s[#name] = &m2;                             \
    mass3s[#name] = &m3;                             \
    mass4s[#name] = &m4;

#define ADDCHANNEL(name, namefl) \
    amp2s[#name] = name;         \
    amp2fls[#name] = namefl;

#define CHECKCONDITION(condition) \
    if (!(condition)) return false;

typedef std::function<double(const double &, const double &)> f;
typedef std::vector<f> vamp2;
typedef std::unordered_map<std::string, f> fmap;
typedef std::unordered_map<std::string, double *> sMapDp;

struct ModelInfo {
    sMapDp DSmasses;
    vstring channelnames;
    sMapDp mass1s;
    sMapDp mass2s;
    sMapDp mass3s;
    sMapDp mass4s;
    std::vector<double *> neutraldsmasses;
    std::unordered_map<std::string, double> DSdof;
    std::map<std::string, double *> parmap;
    std::vector<double *> denstructures;
    size_t N_widths;
    vstring bath_masses;
    double ZERO = 0;
    double MDM = 0.;

    void init();
    void calc_widths_and_scale();
    void load_parameters();
    void load_parameter_map();
    void load_tokens();
    bool check_conditions();
    bool load_everything();
    bool check_par_existence(const std::string &par);
    bool change_parameter(const std::string &par, const double newval,
                          const bool load = true);
    bool check_channel_existence(const std::string &channel);
    void get_channel_masses(double &m1, double &m2, double &m3, double &m4,
                            const std::string &channel);
    vstring find_channels_by_particle(const std::string &particle);
    void assign_bath_masses(const vstring &prtcls = {});
    vstring find_thermal_procs(const vstring &prtcls = {});
    void assigndm();
    void assign_masses(double &m1, double &m2, const std::string &channel);

    ModelInfo();
};

class AnnihilationAmps{
   private:
    double s;
    fmap amp2s;
    fmap amp2fls;
    vamp2 cur_channel;

   public:
    AnnihilationAmps();

    void init();
    void set_s(const double new_s);
    void set_channel(const vstring &ch_str, const bool flux = true);
    ResError operator()(const double cos_t);

    ~AnnihilationAmps() {};
};
}  // namespace DT
