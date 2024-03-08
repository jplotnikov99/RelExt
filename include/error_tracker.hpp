#pragma once
#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>
namespace DT
{
    class ErrorTracker
    {
    private:
        bool is_on;
        double temporary_error = 0.;
        size_t N_errors = 0;
        std::vector<double> error_stack;
        std::unordered_map<double, double> error_map;

    public:
        ErrorTracker(bool track);

        void reset_error();
        void add_error(const double &err);
        void mult_const(const double &c);
        void keep_track(const size_t &size);
        void lose_track();
        void to_error_stack(const double &err);
        double last_stack_entry();
        void mult_error_stack(const std::vector<double> &vc);
        double transfer_error();
        double get_error();
        void map_error(const double &err);
        void load_error(const double &err);
        void clear_map();
        ~ErrorTracker(){};
    };

} // namespace DT
