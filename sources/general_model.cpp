#include "general_model.hpp"

namespace DT
{

    Model::Model(std::shared_ptr<Dof> degrees_of_freedom)
    {
        dof = degrees_of_freedom;
    }

    void Model::assigndm()
    {
        MDM = *neutraldsmasses.at(0);

        for (int i = 1; i < neutraldsmasses.size(); i++)
        {
            if (MDM > *neutraldsmasses.at(i))
            {
                MDM = *neutraldsmasses.at(i);
            }
        }
    }

    void Model::change_parameter(const std::string par, const double newval)
    {
        std::map<std::string, double *>::iterator it;
        it = parmap.begin();
        while (it != parmap.end())
        {
            if (it->first == par)
            {
                *it->second = newval;
                break;
            }
            ++it;
        }
    }

    void Model::get_inimasses(double &m1, double &m2, const size_t i)
    {
        m1 = *inimasses.at(2 * i);
        m2 = *inimasses.at(2 * i + 1);
    }

    void Model::set_channel(double &m1, double &m2, const size_t i, const std::string amp2_name)
    {
        if (amp2_name == "")
        {
            get_inimasses(m1, m2, i);
            cur_channel = inifuncs.at(i);
        }
        else
        {
        }
    }

    double Model::eval(const double cos_t, const double s)
    {
        return cur_channel(cos_t, s);
    }

    double Model::yeq(const double &x)
    {
        double yeq = 0;
        double mtemp;
        double a = 1 / (MDM * MDM);
        double Tinv = x / MDM;

        for (size_t i = 0; i < dsmasses.size(); i++)
        {
            mtemp = *dsmasses.at(i);
            yeq += pow(mtemp, 2) * a * besselK2(Tinv * mtemp);
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
            for (size_t i = 0; i < dsmasses.size(); i++)
            {
                mtemp = *dsmasses.at(i);
                den += mtemp * mtemp * exp(-Tinv * (mtemp - sqrt(s) / 2)) * polK2(Tinv * mtemp);
            }
            den *= den;
        }
        else
        {
            num += Tinv * std::cyl_bessel_k(1, sqrt(s) * Tinv);
            for (size_t i = 0; i < dsmasses.size(); i++)
            {
                mtemp = *dsmasses.at(i);
                den += mtemp * mtemp * std::cyl_bessel_k(2, Tinv * mtemp);
            }
            den *= den;
        }

        return num / den;
    }

} // namespace DT
