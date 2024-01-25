#include <iostream>
#include <chrono>
#include <string>
#include "readdata.hpp"
#include "include/init.hpp"
#include "vars.hpp"
#include "beq.hpp"
#include "tactools.hpp"
#include "analysis.hpp"
//#include "AnyHdecay.hpp"


using namespace std::chrono;
using namespace DT;

//#### Comment out if you provide your own widths ####
//#define ANYHDECAY

int main(int argc, char **argv)
{
	
	if(!argv[2]) {std::cout << "No output file was specified. Run executable with: ./model input.csv output.csv\n"; return 1;}
	//##### Initialize all DMDM->SMSM processes #####
	procinfos c;
	init(&c);

	//##### Initialize Hdecay wraper #####
	//AnyHdecay::Hdecay Hdec;
	//std::map<std::string_view, double> hdwidths;

	//##### Initialize Degrees of Freedom of the universe and datafile to read in data #####
	
	std::map<std::string, double *> parmap;
	loadmap(parmap);
	readDataDof(argc, argv);
	datalines(argc, argv);
	std::vector<double *> scanpars = assignHeaders(std::string(argv[1]), parmap);
	openfile(std::string(argv[1]));
	
	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now();
	//##### Main loop over all data points 
	for (int k = 1; k < vars::ssdatasize; k++)
	{
		std::cout << "\nPoint:" << k << "\n";
		readParameter(k, argc, argv);
		loadpoint(lists::ssdata, scanpars);
		assigndm(&c);
		//##### Hdecay calculates the decay widths #####
		//#ifdef ANYHDECAY
		//hdwidths = Hdec.cxsmDark(AnyHdecay::MixAngle{DT::alpha}, AnyHdecay::HMass{DT::MH}, AnyHdecay::HMass{DT::MS1},
		//			AnyHdecay::DarkAMass{DT::MA1}, AnyHdecay::SingletVev{DT::svev}, AnyHdecay::PotentialPar{-123.123123});
		//DT::WH = hdwidths["w_H1"];
		//DT::WS1 = hdwidths["w_H2"];
		//#endif

		//##### Clear maps (they are needed for faster computation) #####
		lists::sig_s.clear();
		lists::tac_x.clear();
		//#####	This function calculates the relic density via freeze-out. The second argument 
		//		determines the minimal percentage a single channel has to contribute to be calculated #####
		double res = getOmegaF(&c);

		lists::sig_s.clear();
		lists::tac_x.clear();

		std::ofstream outfile("../tacH2H2.csv");
		for(double x = 15; x < 200; x += 0.1){
			outfile << x << "\t" << tac(x, &c, "A1A1S1S1")<< std::endl;
		}
		outfile.close();

		//double omegaSS = stod(lists::ssdata[getColumnIndex("omega_c")]);
		//double ratio = (res / omegaSS - 1) * 100;
		//printf("Difference to Micro: %.3f\n", ratio);

		//##### Initialze lists to safe data #####
		std::vector<double> mylist;
		std::vector<std::string> myheader;

		//##### write the variables and parameters you want to save in *mylist* and their names in myheader ##### 
		myheader = {"k", "omega", "MA1"};
		mylist = {(double) k, res,  MA1};
		

		//##### saves the data in a chosen directory #####
		save_data(argv, myheader, mylist, &c);

		//##### clear parameter point for next iteration #####
		lists::ssdata.clear();
	}
	end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	std::cout << elapsed_seconds.count()<< "\n";
	closefile();
	return 0;
}
