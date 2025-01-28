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
#define ADDCHANNEL(name, amp, ampfl) \
    amp2s[name] = amp;               \
    amp2fls[name] = ampfl;

#define CHECKCONDITION(condition) \
    if (!(condition)) return false;

typedef std::function<double(const double &, const double &)> f;
typedef std::vector<f> vamp2;
typedef std::unordered_map<std::string, f> fmap;
typedef std::unordered_map<std::string, double *> sMapDp;

struct ModelInfo {
    sMapDp DSmasses;
    VecString channelnames;
    sMapDp prtcls;
    sMapDp aprtcls;
    std::vector<double *> neutraldsmasses;
    std::unordered_map<std::string, double> DSdof;
    std::map<std::string, double *> parmap;
    std::vector<double *> denstructures;
    size_t N_widths;
    VecString bath_masses;
    double ZERO = 0;
    double MDM = 0.;

    void init();
    void calc_widths_and_scale();
    void load_prtcls();
    void load_parameters();
    void load_parameter_map();
    void load_tokens();
    bool check_conditions();
    bool load_everything();
    double get_prtcl_mass(const std::string &prtcl);
    bool check_par_existence(const std::string &par);
    bool change_parameter(const std::string &par, const double newval,
                          const bool load = true);

    void assign_bath_masses(const VecString &prtcls = {});
    void assigndm();

    ModelInfo();
};

class AnnihilationAmps : public ModelInfo {
   private:
    double s;
    fmap amp2s;
    fmap amp2fls;
    vamp2 cur_channel;

   public:
    AnnihilationAmps();

    void init();
    void print_channels();
    void channel_parity(int &p1, int &p2, const std::string &channel);
    bool check_channel_existence(std::string &channel);
    VecString get_channel_prtcls(const std::string &channel);
    void get_channel_masses(double &m1, double &m2, double &m3, double &m4,
                            const std::string &channel);
    VecString find_channels_by_particle(const std::string &particle);
    void assign_masses(double &m1, double &m2, const std::string &channel);
    VecString find_thermal_procs(const VecString &prtcls = {});
    void set_s(const double new_s);
    void set_channel(const VecString &ch_str, const bool flux = true);
    double operator()(const double cos_t);

    ~AnnihilationAmps() {};
};
}  // namespace DT
