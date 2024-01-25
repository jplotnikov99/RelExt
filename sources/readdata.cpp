#include "readdata.hpp"
#include "vars.hpp"

int DT::linenumber;
std::ifstream DT::ssfile;
std::vector<std::string> DT::headers;
std::vector<size_t> DT::dataindices;

// function to sort 2D vector wrt its 1st column (for interpolation to work)
bool DT::sortcol(const std::vector<double> &v1, const std::vector<double> &v2)
{
	return v1[0] < v2[0];
}

// function to count number of lines of csv file
void DT::datalines(int argc, char **argv)
{
	// read data from scannerS file
	// std::string filename = "../numdata/" + std::string(argv[1]);
	std::string filename = "../dataInput/" + std::string(argv[1]);
	std::ifstream ssfile(filename);
	if (!ssfile)
	{
		std::cerr << "Unable to open file " << argv[1] << ". Check if the name of the file is correct and if it is stored in the dataInput directory.";
		exit(1);
	}
	std::string line;
	while (getline(ssfile, line))
	{
		vars::ssdatasize++;
	}
	ssfile.close();
}

void DT::openfile(std::string filename)
{
	// filename = "../numdata/" + filename; //std::string(argv[1])
	filename = "../dataInput/" + filename; // std::string(argv[1])
	ssfile.open(filename);
	if (!ssfile)
	{
		std::cerr << "Unable to open file " << filename << ". Check if the name of the file is correct and if it is stored in the dataInput directory.";
		exit(1);
	}
	// skip 1st line
	std::string line;
	getline(ssfile, line);
	linenumber = 0;
}

void DT::closefile()
{
	ssfile.close();
}

// function to read data from external files from micro
void DT::readParameter(int row, int argc, char **argv)
{

	std::string line;
	size_t col = 0;

	if (row < linenumber)
	{
		std::cerr << "Error in readParameter. This function reads data sequentially.";
		exit(1);
	}
	
	while (getline(ssfile, line))
	{
		linenumber++;
		if (linenumber == row)
		{
			std::istringstream ss(line);
			std::string value;
			while (getline(ss, value, '\t') || getline(ss, value, ',') || getline(ss, value, ' '))
			{
				if(std::find(dataindices.begin(), dataindices.end(), col) != dataindices.end()) {
					lists::ssdata.push_back(value);
				}		
				col++;
			}
			break;
		}
	}
}

void DT::readDataDof(int argc, char **argv)
{
	// read data from geff file
	std::ifstream geff_file("../numdata/T_heff_geff.dat");
	if (!geff_file)
	{
		std::cerr << "Unable to open file T_heff_geff.dat.";
		exit(1);
	}
	std::string line;
	while (getline(geff_file, line))
	{
		std::stringstream ss(line);
		std::string value;
		int ncolumn = 0;
		while (getline(ss, value, ' '))
		{
			if (ncolumn == 0)
			{
				lists::geff_x.push_back(stod(value));
			} // T
			if (ncolumn == 1)
			{
				lists::heff_y.push_back(stod(value));
			} // heff
			if (ncolumn == 2)
			{
				lists::geff_y.push_back(stod(value));
			} // geff
			ncolumn++;
		}
	}
	geff_file.close();

	// read data from g12 file
	std::ifstream g12_file("../numdata/g12micro.dat");
	if (!g12_file)
	{
		std::cerr << "Unable to open file g12micro.dat.";
		exit(1);
	}
	while (getline(g12_file, line))
	{
		std::stringstream ss(line);
		std::string value;
		int ncolumn = 0;
		while (getline(ss, value, '\t'))
		{
			if (ncolumn == 0)
			{
				lists::g12_x.push_back(stod(value));
			} // T
			if (ncolumn == 1)
			{
				lists::g12_y.push_back(stod(value));
			} // g12
			ncolumn++;
		}
	}
	g12_file.close();
}

std::vector<double *> DT::assignHeaders(const std::string &filename, std::map<std::string, double *> pars)
{
	// read data from scannerS file
	// std::string filedir = "../numdata/" + filename;
	std::string filedir = "../dataInput/" + filename;
	std::ifstream file(filedir);
	if (!file)
	{
		std::cout << "Failed to open the file!" << std::endl;
	}
	std::string line;
	if (getline(file, line))
	{
		std::stringstream ss(line);
		std::string header;
		while (getline(ss, header, '\t') || getline(ss, header, ',') || getline(ss, header, ' '))
		{
			headers.push_back(header);
		}
		file.close();
	}
	std::vector<double *> datapars;
	std::map<std::string, double *>::iterator it;
	
	for (size_t i = 0; i < headers.size(); i++)
	{
		it = pars.begin();
		while (it != pars.end())
		{
			if (it->first == headers.at(i))
			{
				//std::cout << it->first << "\n";
				datapars.push_back(it->second);
				dataindices.push_back(i);
				break;
			}
			++it;
		}
		//if(it == pars.end()) std::cout << "This parameter is not a valid input parameter of the model: " << headers.at(i) << "\n";
	}
	return datapars;
}

int DT::getColumnIndex(const std::string &targetHeader)
{
	for (int i = 0; i < headers.size(); ++i)
	{
		if (headers[i] == targetHeader)
		{
			return i;
		}
	}
	std::cout << "Header not found!, or the file is empty!" << std::endl;
	return -1;
}
