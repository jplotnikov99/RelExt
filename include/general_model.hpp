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
#define ADDCHANNEL(name, namefl, m1, m2, m3, m4) \
    channelnames.push_back(#name);               \
    amp2s[#name] = name;                         \
    amp2fls[#name] = namefl;                     \
    mass1s[#name] = &m1;                         \
    mass2s[#name] = &m2;                         \
    mass3s[#name] = &m3;                         \
    mass4s[#name] = &m4;

#define CHECKCONDITION(condition)                 \
    if (!(condition)) return false;

typedef std::function<double(const double &, const double &)> f;
typedef std::vector<f> vamp2;
typedef std::unordered_map<std::string, f> fmap;
typedef std::unordered_map<std::string, double *> sMapDp;

class Model {
   private:
    sMapDp particles;
    std::unordered_map<std::string, double> dsDof;
    std::vector<double *> neutraldsmasses;
    fmap amp2s;
    fmap amp2fls;
    vstring channelnames;
    sMapDp mass1s;
    sMapDp mass2s;
    sMapDp mass3s;
    sMapDp mass4s;
    vamp2 cur_channel;
    double ZERO = 0;

   public:
    size_t N_widths;
    std::map<std::string, double *> parmap;
    std::vector<double *> denstructures;
    vstring bath_masses;
    double MDM = 0.;

    Model();

    void init();
    void calc_widths_and_scale();
    void load_parameters();
    void load_parameter_map();
    void load_tokens();
    bool check_conditions();

    bool load_everything();
    double the_mass(const std::string &prtcl);
    double the_dof(const std::string &prtcl);
    bool check_par_existence(const std::string par);
    double get_parameter_val(const std::string par);
    bool change_parameter(const std::string par, const double newval,
                          const bool load = true);
    vstring get_all_channels();
    bool check_channel_existence(const std::string &channel);
    void get_channel_masses(double &m1, double &m2, double &m3, double &m4,
                            const std::string &channel);
    vstring find_channels_by_particle(const std::string &particle);
    void assign_bath_masses(const vstring &prtcls = {});
    vstring find_thermal_procs(const vstring &prtcls = {});

    void assigndm();

    void assign_masses(double &m1, double &m2, const std::string &channel);
    void set_channel(double &m1, double &m2, const vstring &ch_str,
                     const bool flux = true);
    ResError operator()(const double cos_t, const double s);

    ~Model() {};
};
}  // namespace DT
