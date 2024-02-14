#include "utils.hpp"

bool DT::heaviDecays(const double &m1, const double &m2, const double &m3)
{
   return (m1 > m2 + m3);
}

bool DT::heavi(const double &s, const double &m1, const double &m2)
{
   return ((m1 + m2) * (m1 + m2) - s <= 0);
}

double DT::flux(const double &s, const double &m1, const double &m2, const double &m3, const double &m4)
{
   return sqrt((s - (m1 + m2) * (m1 + m2)) * (s - (m1 - m2) * (m1 - m2)) * (s - (m3 + m4) * (m3 + m4)) * (s - (m3 - m4) * (m3 - m4)));
}

double DT::besselK(const int n, const double &x)
{
   return 1.2533141373155 * 1 / sqrt(x) * exp(-x) * (1 + (4 * n * n - 1) / (8 * x) + (4 * n * n - 1) * (4 * n * n - 9) / (128 * x * x) + (4 * n * n - 1) * (4 * n * n - 9) * (4 * n * n - 25) / (3072 * x * x * x));
}

double DT::polK(const int n, const double &x)
{
   return 1.2533141373155 * 1 / sqrt(x) * (1 + (4 * n * n - 1) / (8 * x) + (4 * n * n - 1) * (4 * n * n - 9) / (128 * x * x) + (4 * n * n - 1) * (4 * n * n - 9) * (4 * n * n - 25) / (3072 * x * x * x));
}

double DT::besselK2(const double &x)
{
   double y = 1 / x;
   return 1.2533141373155 * exp(-x) / sqrt(x) *
          (1 + 1.875 * y * (1 + 0.4375 * y * (1 - 0.375 * y * (1 - 1.03125 * y * (1 - 1.625 * y * (1 - 2.1875 * y))))));
}

double DT::polK1(const double &x)
{
   double y = 1 / x;
   return 1.2533141373155 / sqrt(x) *
          (1 + 0.375 * y * (1 - 0.31250 * y * (1 - 0.875 * y * (1 - 1.40625 * y * (1 - 1.925 * y * (1 - 2.4375 * y))))));
}

double DT::polK2(const double &x)
{
   double y = 1 / x;
   return 1.2533141373155 / sqrt(x) *
          (1 + 1.875 * y * (1 + 0.4375 * y * (1 - 0.375 * y * (1 - 1.03125 * y * (1 - 1.625 * y * (1 - 2.1875 * y))))));
}

bool DT::is_substring(const std::string &str1, const std::string &str2)
{
   return str2.find(str1) != std::string::npos;
}