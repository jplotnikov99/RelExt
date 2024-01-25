#pragma once

#include <cmath>
#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <string>
#include <fstream>
#include "vars.hpp"


namespace DT{
	
		// prefactor in Beq
        double pre(double xf);

        //Temperature for a given entropy density
        double T_ent(double ent);

        // Entropy density for a given temperature
        double ent_T(double xf);

        // function to help find the starting point to be used in the runge Kutta routine
        double fstart(double xf, procinfos *proc, std::string ch_str = "");

        // Boltzmann equation that needs to be solved
		double boltzmann_eq(double y, double xf, procinfos *proc, std::string ch_str = "");

        // Calculate the single channel contributions to the full relic density omegaF
        void saveChannelContr(double omegaF, double xtoday, double chcontrib, procinfos *proc);

        // stepper function for runge kutta
        double setStep(double hnow, double err);

        // Boltzmann equation solver for all processes 
		void solve_beq(double xtoday, double& x, double& y, procinfos *proc, std::string ch_str = "", double h = 0.1, double eps = 1e-6);

        // returns the relic density
        double getOmegaF(procinfos *proc, std::string ch_str = "", double chcontrib = 1.);

        // returns freeze-in relic density for certain reheating temperature
        double getOmegaFI(double TR, procinfos *proc);
        
}