#include "general_model.hpp"

namespace DT
{

    Model::Model()
    {
    }

    double Model::get_parameter_val(const std::string par)
    {
        return (*parmap[par]);
    }

    void Model::change_parameter(const std::string par, const double newval)
    {
        *parmap[par] = newval;
        assigndm();
        load_parameters();
        load_tokens();
        //assigndm();
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
    
    void Model::get_channel_masses(double &m1, double &m2, double &m3, double &m4, const std::string &channel)
    {
        m1 = *mass1s.at(channel);
        m2 = *mass2s.at(channel);
        m3 = *mass3s.at(channel);
        m4 = *mass4s.at(channel);
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

    vstring Model::find_channels_by_particle(const std::string &particle)
    {
        vstring res = {};
        size_t found;
        for (auto it : channelnames)
        {
            found = it.find(particle);
            if (found != std::string::npos)
            {
                res.push_back(it);
            }
        }
        return res;
    }

    vstring Model::find_thermal_procs(const vstring &prtcls)
    {
        vstring res = {};
        size_t found;
        for (auto it : prtcls)
        {
            for (auto jt : channelnames)
            {
                found = jt.find(it);
                if (found != std::string::npos)
                {
                    for (auto kt : prtcls)
                    {
                        if (jt.find(kt, found + 1) != std::string::npos)
                        {
                            res.push_back(jt);
                        }
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

    void Model::assign_masses(double &m1, double &m2, const std::string &channel)
    {
        if (*mass1s[channel] + *mass2s[channel] >= *mass3s[channel] + *mass4s[channel])
        {
            m1 = *mass1s[channel];
            m2 = *mass2s[channel];
        }
        else
        {
            m1 = *mass3s[channel];
            m2 = *mass4s[channel];
        }
    }

    void Model::set_channel(double &m1, double &m2, const vstring &ch_str, const bool flux)
    {
        cur_channel.clear();
        assign_masses(m1, m2, ch_str.at(0));
        if (flux)
        {
            for (auto it : ch_str)
            {
                cur_channel.push_back(amp2fls[it]);
            }
        }
        else
        {
            for (auto it : ch_str)
            {
                cur_channel.push_back(amp2s[it]);
            }
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
