#include <iostream>
#include <chrono>
#include "readdata.hpp"
#include "include/init.hpp"
#include "vars.hpp"
#include "../sources/ntools.cpp"
#include "../sources/beq.cpp"
#include "../sources/tactools.cpp"
#include "../sources/analysis.cpp"
#include "amp2s/allamp2s.hpp"

#include <string>

using namespace std::chrono;
using namespace DT;

int main(int argc, char **argv)
{

	beq b;

	tactools t;

	chinfo c;

	initprocs(c);

	amp2s a;

	analytics an;

	reader microfile;
	microfile.openfile(std::string(argv[1]));
	microfile.datalines(argc, argv);
	microfile.readDataDof(argc, argv);
	microfile.assignHeaders(std::string(argv[1]));

	auto start = high_resolution_clock::now();

	for (int k = 1; k < vars::ssdatasize; k++)
	{

		std::cout << k << std::endl;

		microfile.readDataMicro(k, argc, argv);
		init(c, lists::ssdata);
		t.assigndm(c);
		lists::sig_s.clear();
		lists::tac_x.clear();

		double res = b.getOmegaF(c, 0.1);

		double omegaSS = stod(lists::ssdata[microfile.getColumnIndex("omega_c")]);
		double ratio = (res / omegaSS - 1) * 100;
		printf("Difference to Micro: %.3f\n", ratio);

		std::vector<double> mylist;
		std::vector<std::string> myheader;

		mylist = {MH0, ratio};

		myheader = {"MH0", "micro_dif"};

		an.save_data("../dataInput/inerd.csv", c, myheader, mylist, 1);

		lists::ssdata.clear();
	}

	microfile.closefile();

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(stop - start);
	printf("Time in s: %ld\n", duration.count());

	return 0;
}
