#pragma once

#include <iostream>
#include <map>
#include <vector>
#include <functional>
#include <memory>
#include <cassert>
#include "utils.hpp"
#include "EffDof.hpp"

namespace DT
{
#define ADDCHANNEL(name, namefl, m1, m2, m3, m4) \
    channelnames.push_back(#name);               \
    amp2s[#name] = name;                         \
    amp2fls[#name] = namefl;                     \
    mass1s[#name] = &m1;                         \
    mass2s[#name] = &m2;                         \
    mass3s[#name] = &m3;                         \
    mass4s[#name] = &m4;

#define ADDINITIALSTATE(name, m1, m2) \
    inifuncs.push_back(name);         \
    inimasses.push_back(&m1);         \
    inimasses.push_back(&m2);

    typedef std::function<double(const double &, const double &)> f;
    typedef std::vector<f> vamp2;
    typedef std::unordered_map<std::string, f> fmap;

    class Model
    {

    private:
        std::unordered_map<std::string, double *> particles;
        std::vector<double *> dsmasses;
        std::vector<double *> neutraldsmasses;
        vamp2 inifuncs;
        fmap amp2s;
        fmap amp2fls;
        vstring channelnames;
        std::unordered_map<std::string, double *> mass1s;
        std::unordered_map<std::string, double *> mass2s;
        std::unordered_map<std::string, double *> mass3s;
        std::unordered_map<std::string, double *> mass4s;
        std::vector<double *> inimasses;

        vamp2 cur_channel;
        size_t N_cur;
        size_t N_all_channels;
        size_t N_initial_states;
        double ZERO = 0;

    public:
        size_t N_widths;
        std::map<std::string, double *> parmap;
        std::vector<double *> denstructures;
        std::vector<double *> bath_masses;
        double MDM = 0.;

        Model();

        void init();
        void load_parameters();
        void load_parameter_map();
        double get_parmater_val(const std::string par);
        void change_parameter(const std::string par, const double newval);

        size_t get_N_all_channels();
        size_t get_N_initial_states();
        std::string get_channel_name(const size_t i);
        vstring get_subchannels(const std::string &ini_state);
        void assign_bath_masses(const vstring &prtcls = {});
        vstring find_thermal_procs(const vstring &prtcls = {});

        void assigndm();

        void assign_masses(double &m1, double &m2, const std::string ch_str);
        void set_channel(double &m1, double &m2, const size_t i, const vstring ch_str = {});
        double eval(const double cos_t, const double s);

        ~Model(){};
    };
} // namespace DT
