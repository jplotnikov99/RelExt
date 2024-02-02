#include "readdata1.hpp"

namespace DT
{
	DataReader::DataReader(char **argv)
	{
		filename = "../dataInput/" + std::string(argv[1]);
		datafile.open(filename);
		if (!datafile)
		{
			std::cerr << "Unable to open file " << filename << ". Check if the name of the file is correct and if it is stored in the dataInput directory.\n";
			exit(1);
		}
	}

	DataReader::~DataReader()
	{
		datafile.close();
	}

	double DataReader::datalines()
	{
		std::string line;
		while (getline(datafile, line))
		{
			maxrows++;
		}
		return maxrows;
	}

	std::vector<double *> DataReader::assignHeaders(std::map<std::string, double *> pars)
	{
		// read data from scannerS file
		datafile.clear();
		datafile.seekg(0);

		std::vector<std::string> headers;

		std::string line;
		if (getline(datafile, line))
		{
			std::stringstream ss(line);
			std::string header;
			while (getline(ss, header, '\t') || getline(ss, header, ',') || getline(ss, header, ' '))
			{
				headers.push_back(header);
			}
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
					// std::cout << it->first << "\n";
					datapars.push_back(it->second);
					dataindices.push_back(i);
					break;
				}
				++it;
			}
			// if(it == pars.end()) std::cout << "This parameter is not a valid input parameter of the model: " << headers.at(i) << "\n";
		}
		return datapars;
	}

	void DataReader::read_parameter(const size_t row)
	{

		std::string line;
		size_t col = 0;
		size_t i = 0;

		if (row < currow)
		{
			std::cerr << "Error in read_parameter. This function reads data sequentially.\n";
			exit(1);
		}

		if(row > maxrows - 1)
		{
			std::cerr << "Error in read_parameter. Last parameter point was reached.\n";
			exit(1);
		}

		while (getline(datafile, line))
		{
			currow++;
			if (currow == row)
			{
				std::istringstream ss(line);
				std::string value;
				while (getline(ss, value, '\t') || getline(ss, value, ',') || getline(ss, value, ' '))
				{
					if (std::find(dataindices.begin(), dataindices.end(), col) != dataindices.end())
					{
						*scanpars.at(i) = (std::stod(value));
						i++;
					}
					col++;
				}
				break;
			}
		}
	}
} // namespace DT
