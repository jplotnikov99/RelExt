#include "../include/hyper_parameters.hpp"

namespace DT {
// SM parameters
double ms_pole = 0.095;
double mc_pole = 1.4203295370482341;
double mb_pole = 4.8303295370482342;
double mt_pole = 172.5;

double theta_eps = 1e-6;
double beps_eps = 1e-6;
double peak_eps = 1e-6;
double gauss_kronrod_eps = 1e-4;

double xtoday_FO = 1e6;
double xtoday_FI = 100;
double x_reheating = 0.0001;
double secant_eps = 0.01;
double dopr_eps = 1e-6;
double secant_maxiter = 100;

double vanguard_step_size = 0.5;
double descent_rate = 0.1;
double max_N_bisections = 50;
double random_walk_rate = 0.01;

}  // namespace DT