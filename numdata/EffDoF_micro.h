// Header file for Effective Dof functions

// Effective dof
namespace DT{

    namespace dof_micro {

        double geff(double T){
            int size = data::geff_x.size();
            int i = 0;
            double upper = 105.7491;
            double lower = 3.367225;
            if(T >= 12589.25){
                return upper;
            }
            else if(T < 1.995263e-05){
                return lower;
            }
            else{
                // find left end of interval for interpolation
                if ( T >= data::geff_x[size - 2] ) // special case: beyond right end
                {
                    i = size - 2;
                }
                else
                {
                    while ( T > data::geff_x[i+1] ) i++;
                }
                double xL, yL, xR, yR;
                xL = data::geff_x[i]; yL = data::geff_y[i]; xR = data::geff_x[i+1]; yR = data::geff_y[i+1];
                return ntools::linint(T, xL, xR, yL, yR);
            }
        }

        // Effective dof (entropy)
        double heff(double T){
            int size = data::geff_x.size();
            int i = 0;
            double upper = 105.7499;
            double lower = 3.913901;   
            if(T >= 12589.25){
                return upper;
            }
            else if(T < 1.995263e-05){
                return lower;
            }
            else{
                // find left end of interval for interpolation
                if ( T >= data::geff_x[size - 2] ) // special case: beyond right end
                {
                   i = size - 2;
                }
                else
                {
                   while ( T > data::geff_x[i+1] ) i++;
                }
                double xL, yL, xR, yR;
                xL = data::geff_x[i]; yL = data::heff_y[i]; xR = data::geff_x[i+1]; yR = data::heff_y[i+1];
                return ntools::linint(T, xL, xR, yL, yR);
            }
        }

        // g12 function        
        double g12(double T){
            int size = data::g12_x.size();
            int i = 0;
            double upper = 10.300250759013824;
            double lower = 2.1329160762942783;            
            if(T >= 89.12511){
                return upper;
            }
            else if(T < 0.00001995263){
                return lower;
            }
            else{
                // find left end of interval for interpolation
                if ( T >= data::g12_x[size - 2] ) // special case: beyond right end
                {
                  i = size - 2;
                }
                else
                {
                  while ( T > data::g12_x[i+1] ) i++;
                }
                double xL, yL, xR, yR;
                xL = data::g12_x[i]; yL = data::g12_y[i]; xR = data::g12_x[i+1]; yR = data::g12_y[i+1];
                return ntools::linint(T, xL, xR, yL, yR);
            }
        }
    }
}