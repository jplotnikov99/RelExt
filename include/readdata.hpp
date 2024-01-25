#pragma once

#include <fstream>
#include <vector>
#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>

namespace DT{


	extern int linenumber;
	extern std::ifstream ssfile;
	extern std::vector<std::string> headers;
	extern std::vector<size_t> dataindices;
	void openfile(std::string filename);
	void closefile();
	bool sortcol(const std::vector<double>& v1, const std::vector<double>& v2);
	void datalines(int argc, char** argv);
	std::vector<double *> assignHeaders(const std::string& filename, std::map<std::string, double *> pars);
	int getColumnIndex(const std::string& targetHeader);
	void readParameter(int row, int argc, char** argv); 
	void readDataDof(int argc, char** argv); 

	//private:
	//static int linenumber;
	//static std::ifstream ssfile;
	
}


