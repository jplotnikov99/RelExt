#include "EffDofmic.hpp"
#include "vars.hpp"
#include "ntools.hpp"

double DT::geff(double T)
{
    int size = lists::geff_x.size();
    int i = 0;
    double upper = 105.7491;
    double lower = 3.367225;

    if (T >= 12589.25)
    {
        return upper;
    }
    else if (T < 1.995263e-05)
    {
        return lower;
    }
    else
    {
        // find left end of interval for interpolation
        if (T >= lists::geff_x[size - 2]) // special case: beyond right end
        {
            i = size - 2;
        }
        else
        {
            while (T > lists::geff_x[i + 1])
                i++;
        }
        double xL, yL, xR, yR;
        xL = lists::geff_x[i];
        yL = lists::geff_y[i];
        xR = lists::geff_x[i + 1];
        yR = lists::geff_y[i + 1];
        return linint(T, xL, xR, yL, yR);
    }
}

// Effective dof (entropy)
double DT::heff(double T)
{
    int size = lists::geff_x.size();
    int i = 0;
    double upper = 105.7499;
    double lower = 3.913901;

    if (T >= 12589.25)
    {
        return upper;
    }
    else if (T < 1.995263e-05)
    {
        return lower;
    }
    else
    {
        // find left end of interval for interpolation
        if (T >= lists::geff_x[size - 2]) // special case: beyond right end
        {
            i = size - 2;
        }
        else
        {
            while (T > lists::geff_x[i + 1])
                i++;
        }
        double xL, yL, xR, yR;
        xL = lists::geff_x[i];
        yL = lists::heff_y[i];
        xR = lists::geff_x[i + 1];
        yR = lists::heff_y[i + 1];
        return linint(T, xL, xR, yL, yR);
    }
}

// g12 function
double DT::g12(double T)
{
    int size = lists::g12_x.size();
    int i = 0;
    double upper = 10.300250759013824;
    double lower = 2.1329160762942783;
    if (T >= 89.12511)
    {
        return upper;
    }
    else if (T < 0.00001995263)
    {
        return lower;
    }
    else
    {
        // find left end of interval for interpolation
        if (T >= lists::g12_x[size - 2]) // special case: beyond right end
        {
            i = size - 2;
        }
        else
        {
            while (T > lists::g12_x[i + 1])
                i++;
        }
        double xL, yL, xR, yR;
        xL = lists::g12_x[i];
        yL = lists::g12_y[i];
        xR = lists::g12_x[i + 1];
        yR = lists::g12_y[i + 1];
        return linint(T, xL, xR, yL, yR);
    }
}