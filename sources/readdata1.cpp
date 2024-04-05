#include "readdata1.hpp"

namespace DT
{
	DataReader::DataReader(const std::string file, const size_t mode)
	{
		switch (mode)
		{
		case 0:
			filename = "../settings/" + file;
			datafile.open(filename);
			if (!datafile)
			{
				std::cerr << "Unable to open file " << filename << ". Check if the name of the file is correct and if it is stored in the setting directory.\n";
				exit(1);
			}
			break;
		case 1:
			filename = "../dataInput/" + file;
			datafile.open(filename);
			if (!datafile)
			{
				std::cerr << "Unable to open file " << filename << ". Check if the name of the file is correct and if it is stored in the dataInput directory.\n";
				exit(1);
			}
			break;
		case 2:
			filename = "../dataOutput/" + file;
			outfile.open(filename);
			if (!outfile)
			{
				std::cerr << "Unable to open file " << filename << ". Check if the name of the file is correct and if it is stored in the dataOutput directory.\n";
				exit(1);
			}
			break;

		default:
			std::cerr << "Wrong case in " << __func__ << "\n";
			break;
		}
	}

	std::string DataReader::get_line_at(const std::string name)
	{
		datafile.clear();
		datafile.seekg(0);
		size_t found;
		std::string line;
		while (getline(datafile, line))
		{
			found = line.find(name);
			if (found != std::string::npos)
			{
				break;
			}
		}
		if (found == std::string::npos)
		{
			std::cout << name << " was not found in " << filename << ".\n";
			exit(1);
		}
		return line;
	}

	void DataReader::rmv_spaces(std::string &str)
	{
		str.erase(std::remove_if(str.begin(), str.end(), isspace), str.end());
	}

	vstring DataReader::line_to_strings(const std::string line, const char delimiter)
	{
		std::string temp;
		vstring res;
		std::stringstream ss(line);

		while (getline(ss, temp, delimiter))
		{
			rmv_spaces(temp);
			if (temp.size() != 0)
				res.push_back(temp);
		}
		return res;
	}

	double DataReader::get_val_of(const std::string name)
	{
		std::string line;
		line = get_line_at(name);
		std::stringstream ss(line);
		getline(ss, line, '|');
		getline(ss, line, '|');
		rmv_spaces(line);
		if (line.size() == 0)
			line = "0";

		return std::stod(line);
	}

	std::string DataReader::get_name_of(const std::string name)
	{
		std::string line;
		line = get_line_at(name);
		std::stringstream ss(line);
		getline(ss, line, '|');
		getline(ss, line, '|');
		rmv_spaces(line);

		return line;
	}

	vstring DataReader::get_slist_of(const std::string name)
	{
		std::string line;
		line = get_line_at(name);
		std::stringstream ss(line);
		getline(ss, line, '|');
		getline(ss, line, '|');

		return line_to_strings(line, ',');
	}

	std::vector<vstring> DataReader::get_operation_slist()
	{
		std::vector<vstring> res = {};
		vstring temp;
		std::string hold;
		std::string line;
		line = get_line_at("START");
		while (getline(datafile, line))
		{
			if (line == "END")
			{
				break;
			}
			rmv_spaces(line);
			if (line != "")
			{
				temp.clear();
				temp = line_to_strings(line, '|');
				if (temp.size() != 1)
				{
					hold = temp.at(0);
					temp = line_to_strings(temp.at(1), ',');
					temp.insert(temp.begin(), hold);
				}
				res.push_back(temp);
			}
		}
		return res;
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

		if (row > maxrows - 1)
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

	void DataReader::save_data(std::vector<std::string> yourheader, std::vector<double> yourlist)
	{

		outfile.seekp(0, std::ios::end);

		if (outfile.tellp() == 0)
		{

			for (int k = 0; k < yourheader.size(); k++)
			{
				outfile << yourheader.at(k) << "\t";
			}
			outfile << "\n";
		}

		for (int i = 0; i < yourlist.size(); i++)
		{
			outfile << yourlist.at(i) << "\t";
		}

		outfile << "\n";
	}

	DataReader::~DataReader()
	{
		datafile.close();
		outfile.close();
	}
} // namespace DT
