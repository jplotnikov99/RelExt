#include "error_tracker.hpp"

namespace DT
{
    ErrorTracker::ErrorTracker(bool track)
    {
        is_on = track;
    }
    void ErrorTracker::reset_error()
    {
        if (error_stack.size() != N_errors)
        {
            error_stack.push_back(temporary_error);
        }
        temporary_error *= 0;
    }
    void ErrorTracker::add_error(const double &err)
    {
        temporary_error += err;
    }
    void ErrorTracker::mult_const(const double &c)
    {
        temporary_error *= c;
    }
    void ErrorTracker::keep_track(const size_t &size)
    {
        N_errors += size;
    }
    void ErrorTracker::lose_track()
    {
        error_stack.clear();
        N_errors *= 0;
    }
    void ErrorTracker::to_error_stack(const double &err)
    {
        error_stack.push_back(err);
        N_errors++;
    }
    double ErrorTracker::last_stack_entry()
    {
        return error_stack.back();
    }
    void ErrorTracker::mult_error_stack(const std::vector<double> &vc)
    {
        assert(temporary_error == 0);
        for (size_t i = 0; i < N_errors; i++)
        {
            temporary_error += (vc.at(i) * error_stack.at(i));
        }
        error_stack.clear();
        N_errors *= 0;
    }
    double ErrorTracker::transfer_error()
    {
        double res = temporary_error;
        reset_error();
        return res;
    }
    double ErrorTracker::get_error()
    {
        return temporary_error;
    }
    void ErrorTracker::map_error(const double &err)
    {
        error_map[err] = temporary_error;
    }
    void ErrorTracker::load_error(const double &err)
    {
        temporary_error = error_map.at(err);
    }
    void ErrorTracker::clear_map()
    {
        error_map.clear();
    }

} // namespace DT
