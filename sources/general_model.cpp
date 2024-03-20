#include "general_model.hpp"

namespace DT
{

    Model::Model()
    {
    }

    vstring Model::get_all_channels()
    {
        return channelnames;
    }

    size_t Model::get_N_all_channels()
    {
        return channelnames.size() - N_initial_states;
    }

    size_t Model::get_N_initial_states()
    {
        return N_initial_states;
    }

    std::string Model::get_channel_name(const size_t i)
    {
        assert(i < channelnames.size());
        return channelnames.at(i);
    }

    void Model::assign_bath_masses(const vstring &prtcls)
    {
        bath_masses.clear();
        if (prtcls.size() == 0)
        {
            bath_masses = dsmasses;
        }
        else
        {
            for (auto it : prtcls)
            {
                bath_masses.push_back(particles[it]);
            }
        }
    }

    vstring Model::get_subchannels(const std::string &ini_state)
    {
        vstring res = {};
        size_t found;
        for (size_t i = 0; i < channelnames.size() - N_initial_states; i++)
        {
            found = channelnames.at(i).find(ini_state);
            if (found != std::string::npos)
            {
                res.push_back(channelnames.at(i));
            }
        }
        return res;
    }

    vstring Model::find_thermal_procs(const vstring &prtcls)
    {
        size_t N = channelnames.size();
        vstring res = {};
        size_t found;
        for (auto it : prtcls)
        {
            for (size_t i = N - N_initial_states; i < N; i++)
            {
                found = channelnames.at(i).find(it);
                if (found != std::string::npos)
                    for (auto jt : prtcls)
                    {
                        if (channelnames.at(i).find(jt, found + 1) != std::string::npos)
                        {
                            res.push_back(channelnames.at(i));
                        }
                    }
            }
        }
        return res;
    }

    void Model::assigndm()
    {
        MDM = 1e16;

        for (auto it : bath_masses)
        {
            if (MDM > *it)
            {
                MDM = *it;
            }
        }
    }

    void Model::change_parameter(const std::string par, const double newval)
    {
        *parmap[par] = newval;
        load_parameters();
        assigndm();
    }

    double Model::get_parmater_val(const std::string par)
    {
        return (*parmap[par]);
    }

    void Model::assign_masses(double &m1, double &m2, std::string ch_str)
    {
        if (*mass1s[ch_str] + *mass2s[ch_str] >= *mass3s[ch_str] + *mass4s[ch_str])
        {
            m1 = *mass1s[ch_str];
            m2 = *mass2s[ch_str];
        }
        else
        {
            m1 = *mass3s[ch_str];
            m2 = *mass4s[ch_str];
        }
    }

    void Model::set_channel(double &m1, double &m2, vstring ch_str)
    {
        cur_channel.clear();
        assign_masses(m1, m2, ch_str.at(0));
        for (auto it : ch_str)
        {
            cur_channel.push_back(amp2fls[it]);
        }
        N_cur = cur_channel.size();
    }

    double Model::eval(const double cos_t, const double s)
    {
        double res = 0;
        for (auto it : cur_channel)
        {
            res += it(cos_t, s);
        }
        return res;
    }

} // namespace DT
