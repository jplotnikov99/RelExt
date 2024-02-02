#pragma once

#include <readdata1.hpp>
#include <vector>

namespace DT
{
    class Dof
    {
    private:
        std::vector<double> geff_x;
        std::vector<double> geff_y;
        std::vector<double> heff_y;
        std::vector<double> g12_x;
        std::vector<double> g12_y;

    public:
        Dof();
        ~Dof() {};
        double linint(const double x, const double x1, const double x2, const double y1, const double y2);
        // Effective dof (energy)
        double geff(const double T);
        // Effective dof (entropy)
        double heff(const double T);
        // g12 function
        double g12(const double T);
    };
} // namespace DT
