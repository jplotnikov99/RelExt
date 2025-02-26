#include <vector>
    
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
        // Effective dof (energy)
        double geff(const double T);
        // Effective dof (entropy)
        double heff(const double T);
        // g12 function
        double g12(const double T);
    };