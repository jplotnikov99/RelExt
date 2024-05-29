#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>
#include "utils.hpp"

namespace DT
{
    class DataReader
    {
    private:
        size_t maxrows = 0;
        size_t currow = 0;
        std::vector<size_t> dataindices;
        std::ifstream datafile;
        std::ofstream outfile;
        std::string filename;

    public:
        std::vector<double *> scanpars;

        DataReader(const std::string file, const size_t mode);
        double datalines();
        std::string get_line_at(const std::string name);
        void rmv_spaces(std::string &str);
        vstring line_to_strings(const std::string line, const char delimiter);
        double get_val_of(const std::string name);
        std::string get_name_of(const std::string name);
        vstring get_slist_of(const std::string name);
        vstring get_full_line(const std::string line);
        std::vector<vstring> get_operation_slist();
        std::vector<double *> assignHeaders(std::map<std::string, double *> pars);
        void read_parameter(const size_t row);
        std::vector<vstring> get_generation_slist();
        void save_data(std::vector<std::string> yourheader, std::vector<double> yourlist);
        ~DataReader();
    };
} // namespace DT
