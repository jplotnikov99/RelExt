// Header file for Effective Dof functions


// Effective dof
namespace DT {
    namespace dof_our{
        double geff(double T){
            int size = geff_x.size();
            int i = 0;
            double upper = 106.75;
            double lower = 3.36;
            if(T >= 5000){
                return upper;
            }
            else if(T < 0.00005){
                return lower;
            }
            else{
                // find left end of interval for interpolation
                if ( T >= geff_x[size - 2] ) // special case: beyond right end
                {
                    i = size - 2;
                }
                else
                {
                    while ( T > geff_x[i+1] ) i++;
                }
                double xL, yL, xR, yR;
                xL = geff_x[i]; yL = geff_y[i]; xR = geff_x[i+1]; yR = geff_y[i+1];
                return ntools::linint(T, xL, xR, yL, yR);
            }
        }

        // Effective dof (entropy)
        double heff(double T){
            int size = geff_x.size();
            int i = 0;
            double upper = 106.75;
            double lower = 3.93 ;   
            if(T >= 5000){
                return upper;
            }
            else if(T < 0.00005){
                return lower;
            }
            else{
                // find left end of interval for interpolation
                if ( T >= geff_x[size - 2] ) // special case: beyond right end
                {
                   i = size - 2;
                }
                else
                {
                   while ( T > geff_x[i+1] ) i++;
                }
                double xL, yL, xR, yR;
                xL = geff_x[i]; yL = heff_y[i]; xR = geff_x[i+1]; yR = heff_y[i+1];
                return ntools::linint(T, xL, xR, yL, yR);
            }
        }

        // g12 function        
        double g12(double T){
            int size = g12_x.size();
            int i = 0;
            double upper = 10.3319;
            double lower = 2.1330;            
            if(T >= 56.3781){
                return upper;
            }
            else if(T < 0.000046){
                return lower;
            }
            else{
                // find left end of interval for interpolation
                if ( T >= g12_x[size - 2] ) // special case: beyond right end
                {
                  i = size - 2;
                }
                else
                {
                  while ( T > g12_x[i+1] ) i++;
                }
                double xL, yL, xR, yR;
                xL = g12_x[i]; yL = g12_y[i]; xR = g12_x[i+1]; yR = g12_y[i+1];
                return ntools::linint(T, xL, xR, yL, yR);
            }
        }
    }
}