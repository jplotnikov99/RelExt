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
    typedef std::function<double(const double &, const double &)> f;
    typedef std::vector<f> vamp2;
    typedef std::unordered_map<std::string, f> fmap;
    class Model
    {

    private:
        std::vector<double *> dsmasses;
        std::vector<double *> neutraldsmasses;
        std::vector<double *> inimasses;
        vamp2 inifuncs;
        fmap amp2s;
        fmap amp2fls;
        std::vector<std::string> channelnames;
        std::unordered_map<std::string, double *> mass1s;
        std::unordered_map<std::string, double *> mass2s;
        std::shared_ptr<Dof> dof;
        vamp2 cur_channel;
        size_t N_cur;
        size_t N_all_channels;

    public:
        size_t N_initial_states;
        size_t N_widths;
        std::map<std::string, double *> parmap;
        std::vector<double *> denstructures;

        double MDM = 0.;

        Model(std::shared_ptr<Dof> degrees_of_freedom);
        ~Model(){};

        void init();
        void load_parameters();
        void load_parameter_map();

        size_t get_N_all_channels();
        std::string get_channel_name(const size_t i);

        void assigndm();
        void change_parameter(const std::string par, const double newval);
        void assign_masses(double &m1, double &m2, const std::string ch_str);
        void set_channel(double &m1, double &m2, const size_t i, const std::vector<std::string> ch_str = {});

        double eval(const double cos_t, const double s);

        double yeq(const double &x);
        double lipsv(const double &s, const double &x);
    };
} // namespace DT
