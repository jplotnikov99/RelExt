#include "search.hpp"


std::vector<double> DT::gradientFO(std::vector<double> &y1, const double eps)
{
    
}



double DT::findParameters(std::map<std::string, double *> &map, double initial, double relic, procinfos *proc)
{
    *map["lam13"] = initial;
    vars::initialstate = 2;
    vars::MDM = *map["mMPsi"];
    double omini = getOmegaF(proc);
    double err;
    do
    {
        err = fabs(omini - relic) / relic;
        if (omini - relic > 0)
        {
            *map["lam13"] *= (1 + err);
        }
        else
        {
            *map["lam13"] /= (1 + err);
        }
        omini = getOmegaF(proc);
    } while (err > 0.001);
    return omini;
}