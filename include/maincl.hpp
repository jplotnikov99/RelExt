#pragma once
#include <iostream>
#include <memory>
#include "readdata1.hpp"
#include "general_model.hpp"
#include "beq_solver.hpp"
#include "tac.hpp"

namespace DT
{
    class Main
    {
    private:
        double xtoday_FO = 1e8;
        std::unique_ptr<DataReader> rdr; 
        std::shared_ptr<Dof> dof;
        std::shared_ptr<Model> mod;
        std::unique_ptr<BeqSolver> bsol;
    public:
        size_t N_par_points;
        void load_parameters(const size_t i);
        double calc_Omega_FO(const std::vector<std::string> &ch_str = {}, const double ch_contrib = 1.);

        Main(int argc, char** argv);
        ~Main(){};
    };
    
} // namespace DT
