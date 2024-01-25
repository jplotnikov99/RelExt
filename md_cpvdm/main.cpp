#include <iostream>
#include <chrono>
#include <string>
#include "readdata.hpp"
#include "include/init.hpp"
#include "vars.hpp"
#include "beq.hpp"
#include "tactools.hpp"
#include "analysis.hpp"


using namespace std::chrono;
using namespace DT;

int main(int argc, char **argv)
{
	//##### Initialize all DMDM->SMSM processes #####
	procinfos c;
	init(&c);

	//##### Initialize Degrees of Freedom of the universe and datafile to read in data #####
	
	std::map<std::string, double *> parmap;
	loadmap(parmap);
	readDataDof(argc, argv);
	datalines(argc, argv);
	std::vector<double *> scanpars = assignHeaders(std::string(argv[1]), parmap);
	openfile(std::string(argv[1]));
	
	
	//##### Main loop over all data points 
	for (int k = 1; k < vars::ssdatasize; k++)
	{
		std::cout << "\nPoint:" << k << "\n";
		readParameter(k, argc, argv);
		loadpoint(lists::ssdata, scanpars);
		assigndm(&c);

		//##### Clear maps (they are needed for faster computation) #####
		lists::sig_s.clear();
		lists::tac_x.clear();

		//#####	This function calculates the relic density via freeze-out. The second argument 
		//		determines the minimal percentage a single channel has to contribute to be calculated #####
		double res = getOmegaF(&c);

		//##### Initialze lists to safe data #####
		std::vector<double> mylist;
		std::vector<std::string> myheader;

		//##### write the variables and parameters you want to save in *mylist* and their names in *myheader* ##### 
		myheader = {"k", "omega"};
		mylist = {(double) k, res};

		//double omegaSS = std::stod(lists::ssdata[getColumnIndex("omega_c")]);
		//double ratio = (res / omegaSS - 1) * 100;
		//printf("Difference to Micro: %.3f\n", ratio);

		//##### saves the data in a chosen directory #####
		save_data(argv, myheader, mylist, &c);

		//##### clear parameter point for next iteration #####
		lists::ssdata.clear();
	}

	closefile();
	return 0;
}
