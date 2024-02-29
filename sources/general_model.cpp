#include "general_model.hpp"

namespace DT
{

    Model::Model(std::shared_ptr<Dof> degrees_of_freedom)
    {
        dof = degrees_of_freedom;
    }

    size_t Model::get_N_all_channels()
    {
        return channelnames.size() - N_initial_states;
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
    }

    double Model::get_parmater_val(const std::string par)
    {
        return (*parmap[par]);
    }

    void Model::assign_masses(double &m1, double &m2, std::string ch_str)
    {
        m1 = *mass1s[ch_str];
        m2 = *mass2s[ch_str];
    }

    void Model::set_channel(double &m1, double &m2, const size_t i, vstring ch_str)
    {
        cur_channel.clear();
        if (ch_str.size() == 0)
        {
            m1 = *inimasses.at(2 * i);
            m2 = *inimasses.at(2 * i + 1);
            cur_channel.push_back(inifuncs.at(i));
        }
        else
        {
            assign_masses(m1, m2, ch_str.at(0));
            for (auto it : ch_str)
            {
                cur_channel.push_back(amp2fls[it]);
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

    double Model::yeq(const double &x)
    {
        double yeq = 0;
        double mtemp;
        double a = 1 / (MDM * MDM);
        double Tinv = x / MDM;

        if (x > 10)
        {
            for (auto it : bath_masses)
            {
                mtemp = *it;
                yeq += pow(mtemp, 2) * a * besselK2(Tinv * mtemp);
            }
        }
        else
        {
            for (auto it : bath_masses)
            {
                mtemp = *it;
                yeq += pow(mtemp, 2) * a * std::cyl_bessel_k(2, Tinv * mtemp);
            }
        }
        yeq *= 45 * x * x / (4 * dof->heff(1 / Tinv) * M_PI * M_PI * M_PI * M_PI);
        return yeq;
    }

    double Model::lipsv(const double &s, const double &x)
    {
        double num = 0.;
        double den = 0.;
        double mtemp;
        double Tinv = x / MDM;

        if (x > 10)
        {
            num += Tinv * polK1(sqrt(s) * Tinv);
            for (auto it : bath_masses)
            {
                mtemp = *it;
                den += mtemp * mtemp * exp(-Tinv * (mtemp - sqrt(s) / 2)) * polK2(Tinv * mtemp);
            }
            den *= den;
        }
        else
        {
            num += Tinv * std::cyl_bessel_k(1, sqrt(s) * Tinv);
            for (auto it : bath_masses)
            {
                mtemp = *it;
                den += mtemp * mtemp * std::cyl_bessel_k(2, Tinv * mtemp);
            }
            den *= den;
        }

        return num / den;
    }

} // namespace DT
