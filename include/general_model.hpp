#pragma once

#include <iostream>
#include <map>
#include <vector>
#include <functional>
#include <memory>
#include "utils.hpp"
#include "EffDof.hpp"

namespace DT
{
    typedef std::function<double(double, double)> amp2;
    typedef std::vector<amp2> vamp2;
    class Model
    {

    private:
        std::vector<double *> dsmasses; // needs to be defined in mathematica file
        std::vector<double *> neutraldsmasses;
        std::vector<double *> inimasses;
        
        vamp2 inifuncs;
        vamp2 amp2s;
        vamp2 amp2fls;
        std::vector<std::string> channelnames;
        std::vector<double *> mass1s;
        std::vector<double *> mass2s;
        std::vector<double *> mass3s;
        std::vector<double *> mass4s;
        amp2 cur_channel;
        std::shared_ptr<Dof> dof;
        

    public:
        size_t N_initial_states;    // needs to be defined in mathematica file
        size_t N_widths;            // needs to be defined in mathematica file
        std::map<std::string, double *> parmap;
        std::vector<double *> denstructures;

        double MDM = 0.;

        Model(std::shared_ptr<Dof> degrees_of_freedom);
        ~Model(){};

        void init();
        void load_parameters();
        void load_parameter_map();

        void assigndm();
        void change_parameter(const std::string par, const double newval);
        void set_channel(double &m1, double &m2, const size_t i, std::string ch_str = "");

        double eval(const double cos_t, const double s);


        double yeq(const double &x);
        double lipsv(const double &s, const double &x);
    };
} // namespace DT
