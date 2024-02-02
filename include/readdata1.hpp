#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>

namespace DT
{
    class DataReader
    {
        private:

            size_t maxrows = 0;
            size_t currow = 0;
            std::vector<size_t> dataindices;
            std::ifstream datafile;
            std::string filename;
            

        public:

            std::vector<double *> scanpars;

            DataReader(char **argv);
            ~DataReader();
            double datalines();
            std::vector<double *> assignHeaders(std::map<std::string, double *> pars);
            void read_parameter(const size_t row);
    };
} // namespace DT
