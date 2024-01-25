#include "utils.hpp"
#include "vars.hpp"
// #include "../include/declarations.hpp"

bool DT::heaviDecays(double m1, double m2, double m3)
{
   return (m1 > m2 + m3);
}

bool DT::heavi(double s, double m1, double m2)
{
   return ((m1 + m2) * (m1 + m2) - s <= 0);
}

double DT::flux(double s, double m1, double m2, double m3, double m4)
{
   return sqrt((s - (m1 + m2) * (m1 + m2)) * (s - (m1 - m2) * (m1 - m2)) * (s - (m3 + m4) * (m3 + m4)) * (s - (m3 - m4) * (m3 - m4)));
}

double DT::besselK(int n, double x)
{
   return 1.2533141373155 * 1 / sqrt(x) * exp(-x) * (1 + (4 * n * n - 1) / (8 * x) + (4 * n * n - 1) * (4 * n * n - 9) / (128 * x * x) + (4 * n * n - 1) * (4 * n * n - 9) * (4 * n * n - 25) / (3072 * x * x * x));
}

double DT::polK(int n, double x)
{
   return 1.2533141373155 * 1 / sqrt(x) * (1 + (4 * n * n - 1) / (8 * x) + (4 * n * n - 1) * (4 * n * n - 9) / (128 * x * x) + (4 * n * n - 1) * (4 * n * n - 9) * (4 * n * n - 25) / (3072 * x * x * x));
}

double DT::besselK2(double x)
{
   double y = 1 / x;
   return 1.2533141373155 * exp(-x) / sqrt(x) *
          (1 + 1.875 * y * (1 + 0.4375 * y * (1 - 0.375 * y * (1 - 1.03125 * y * (1 - 1.625 * y * (1 - 2.1875 * y))))));
}

double DT::polK1(double x)
{
   double y = 1 / x;
   return 1.2533141373155 / sqrt(x) *
          (1 + 0.375 * y * (1 - 0.31250 * y * (1 - 0.875 * y * (1 - 1.40625 * y * (1 - 1.925 * y * (1 - 2.4375 * y))))));
}

double DT::polK2(double x)
{
   double y = 1 / x;
   return 1.2533141373155 / sqrt(x) *
          (1 + 1.875 * y * (1 + 0.4375 * y * (1 - 0.375 * y * (1 - 1.03125 * y * (1 - 1.625 * y * (1 - 2.1875 * y))))));
}

bool DT::Beps(double xf, double eps)
{
   return (exp(-xf * (vars::m1 + vars::m2 - 2 * vars::MDM) / vars::MDM) >= eps);
}

void DT::save_data(const char *filename, std::vector<std::string> header, std::vector<double> data)
{
    std::ofstream outfile(filename, std::ios::out | std::ios::app);

    outfile.seekp(0, std::ios::end);

    if (outfile.tellp() == 0)
    {

        for (int k = 0; k < header.size(); k++)
        {
            outfile << header.at(k) << "\t";
        }
    }
    else
    {

        for (int i = 0; i < data.size(); i++)
        {
            outfile << data.at(i) << "\t";
        }
    }
    outfile << "\n";

    outfile.close();
}
