#include "EffDof.hpp"

namespace DT
{
    Dof::Dof()
    {
        // read data from geff file
        std::ifstream geff_file("../numdata/T_heff_geff.dat");
        if (!geff_file)
        {
            std::cerr << "Unable to open file T_heff_geff.dat.";
            exit(1);
        }
        std::string line;
        while (getline(geff_file, line))
        {
            std::stringstream ss(line);
            std::string value;
            int ncolumn = 0;
            while (getline(ss, value, ' '))
            {
                if (ncolumn == 0)
                {
                    geff_x.push_back(stod(value));
                } // T
                if (ncolumn == 1)
                {
                    heff_y.push_back(stod(value));
                } // heff
                if (ncolumn == 2)
                {
                    geff_y.push_back(stod(value));
                } // geff
                ncolumn++;
            }
        }
        geff_file.close();

        // read data from g12 file
        std::ifstream g12_file("../numdata/g12micro.dat");
        if (!g12_file)
        {
            std::cerr << "Unable to open file g12micro.dat.";
            exit(1);
        }
        while (getline(g12_file, line))
        {
            std::stringstream ss(line);
            std::string value;
            int ncolumn = 0;
            while (getline(ss, value, '\t'))
            {
                if (ncolumn == 0)
                {
                    g12_x.push_back(stod(value));
                } // T
                if (ncolumn == 1)
                {
                    g12_y.push_back(stod(value));
                } // g12
                ncolumn++;
            }
        }
        g12_file.close();
    }

    double Dof::linint(const double x, const double x1, const double x2, const double y1, const double y2)
    {
        return ((y2 - y1) / (x2 - x1)) * (x - x1) + y1;
    }

    double Dof::geff(const double T)
    {
        int size = geff_x.size();
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
            if (T >= geff_x[size - 2]) // special case: beyond right end
            {
                i = size - 2;
            }
            else
            {
                while (T > geff_x[i + 1])
                    i++;
            }
            double xL, yL, xR, yR;
            xL = geff_x[i];
            yL = geff_y[i];
            xR = geff_x[i + 1];
            yR = geff_y[i + 1];
            return linint(T, xL, xR, yL, yR);
        }
    }

    double Dof::heff(const double T)
    {
        int size = geff_x.size();
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
            if (T >= geff_x[size - 2]) // special case: beyond right end
            {
                i = size - 2;
            }
            else
            {
                while (T > geff_x[i + 1])
                    i++;
            }
            double xL, yL, xR, yR;
            xL = geff_x[i];
            yL = heff_y[i];
            xR = geff_x[i + 1];
            yR = heff_y[i + 1];
            return linint(T, xL, xR, yL, yR);
        }
    }

    double Dof::g12(const double T)
    {
        int size = g12_x.size();
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
            if (T >= g12_x[size - 2]) // special case: beyond right end
            {
                i = size - 2;
            }
            else
            {
                while (T > g12_x[i + 1])
                    i++;
            }
            double xL, yL, xR, yR;
            xL = g12_x[i];
            yL = g12_y[i];
            xR = g12_x[i + 1];
            yR = g12_y[i + 1];
            return linint(T, xL, xR, yL, yR);
        }
    }
} // namespace DT
