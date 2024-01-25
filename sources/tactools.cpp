#include "tactools.hpp"
#include "ntools.hpp"
#include "vars.hpp"
// #include "../include/declarations.hpp"
#include "utils.hpp"
// #include "../amp2s/allamp2s.hpp"
#include <iostream>

double DT::wij(double s, std::function<double(double, double)> f)
{

    double crs;

    if (lists::sig_s.find(s) == lists::sig_s.end())
    {
        // std::cout << s << "\n";
        crs = 1 / (256 * M_PI * s * sqrt(s)) * adaptive_simpson38(-1, 1, s, simpson38(-1, 1, s, f), f); // flux factors already included here
        lists::sig_s[s] = crs;
        // std::cout << crs << std::endl;
        return crs;
    }
    else
    {
        return lists::sig_s.at(s);
    }
}

void DT::flickswitches(double xf, procinfos *proc)
{

    int N = proc->iniswitches.size();

    for (int i = 0; i < N; i++)
    {
        vars::m1 = *proc->inimasses.at(2 * i);
        vars::m2 = *proc->inimasses.at(2 * i + 1);
        proc->iniswitches.at(i) = Beps(xf, 1e-6);
    }
}

void DT::assigndm(procinfos *proc)
{
    int iMin = 0;
    int M = proc->neutraldsmasses.size();
    vars::MDM = *proc->neutraldsmasses.at(0);
    if (M > 1)
    {
        for (int i = 1; i < M; i++)
        {
            if (*proc->neutraldsmasses.at(iMin) > *proc->neutraldsmasses.at(i))
            {
                iMin = i;
                vars::MDM = *proc->neutraldsmasses.at(iMin);
            }
        }
    }
}

// checks if the peak is suppressed enough by the boltzmann factor to not matter for seperate integration
double DT::peak_relevance(double peakpos)
{
    return 13.8155105579643 * vars::MDM / (peakpos - vars::m1 - vars::m2);
}

// defines a triplet with the boundaries of a resonance peak and the width in terms of the variable u

double *DT::peak_bounds(double peakpos, double width)
{
    static double bounds[3];
    double n = 0.1;
    while (peakpos - 2 * width / n < vars::m1 + vars::m2)
    {
        n *= 2;
    }

    bounds[0] = 1 / ((peakpos - 2 * width / n) * (peakpos - 2 * width / n) - (vars::m1 + vars::m2) * (vars::m1 + vars::m2) + 1);
    bounds[1] = 1 / (peakpos * peakpos - (vars::m1 + vars::m2) * (vars::m1 + vars::m2) + 1);
    bounds[2] = 1 / ((peakpos + 2 * width / n) * (peakpos + 2 * width / n) - (vars::m1 + vars::m2) * (vars::m1 + vars::m2) + 1);

    return bounds;
}
// sorts the boundaries triplets in descending order
void DT::i_sort_boundaries(procinfos *proc)
{
    double current[3];
    int l;
    for (int i = 1; i < vars::dl; i++)
    {
        current[0] = proc->boundaries.at(3 * i);
        current[1] = proc->boundaries.at(3 * i + 1);
        current[2] = proc->boundaries.at(3 * i + 2);

        l = i;
        while ((l > 0) && (proc->boundaries.at(3 * (l - 1) + 1) < current[1]))
        {
            proc->boundaries.at(3 * l) = proc->boundaries.at(3 * (l - 1));
            proc->boundaries.at(3 * l + 1) = proc->boundaries.at(3 * (l - 1) + 1);
            proc->boundaries.at(3 * l + 2) = proc->boundaries.at(3 * (l - 1) + 2);

            l--;
        }
        proc->boundaries.at(3 * l) = current[0];
        proc->boundaries.at(3 * l + 1) = current[1];
        proc->boundaries.at(3 * l + 2) = current[2];
    }
}

// sets all the relevant peak boundaries (sorted) and the number of relevant peaks dl
void DT::set_boundaries(double xf, procinfos *proc)
{
    double peak_xf;
    double *b;
    int k = 0;
    vars::dl = proc->denstructures.size() / 2;

    for (int j = 0; j < vars::dl; j++)
    {

        peak_xf = peak_relevance(*proc->denstructures.at(2 * j));

        if (peak_xf > 0 && xf < peak_xf)
        {
            b = peak_bounds(*proc->denstructures.at(2 * j), *proc->denstructures.at(2 * j + 1));
            proc->boundaries.at(3 * k) = *b;
            proc->boundaries.at(3 * k + 1) = *(b + 1);
            proc->boundaries.at(3 * k + 2) = *(b + 2);
            k++;
        }
    }
    vars::dl = k;
    i_sort_boundaries(proc);
}

// calculates the s integral for one channel
double DT::integrate_s(double xf, std::function<double(double, double)> channel, procinfos *proc)
{
    double result = 0.;
    double estimate = 0.;
    double plh[4];
    if (vars::dl > 0)
    {
        plh[3] = proc->boundaries.at(3 * (vars::dl - 1) + 2);

        for (int p = 0; p < vars::dl; p++)
        {

            plh[0] = proc->boundaries.at(3 * p);
            plh[1] = proc->boundaries.at(3 * p + 1);
            plh[2] = proc->boundaries.at(3 * p + 2);

            result = result + adap_trap(plh[2], plh[1], xf, trap(plh[2], plh[1], xf, channel), channel, 1e-4);

            result = result + adap_trap(plh[1], plh[0], xf, trap(plh[1], plh[0], xf, channel), channel, 1e-4);

            if (p > 0)
            {
                estimate = estimate + gauss_kronrod_31(plh[0], proc->boundaries.at(3 * (p - 1) + 2), xf, channel);
            }
        }
        estimate = result + gauss_kronrod_31(0, plh[3], xf, channel) + gauss_kronrod_31(proc->boundaries.at(0), 1, xf, channel);

        result = result + h_adap_gauss_kronrod(0, plh[3], xf, channel, estimate);

        result = result + h_adap_gauss_kronrod(proc->boundaries.at(0), 1, xf, channel, estimate);

        for (int p = 0; p < vars::dl; p++)
        {

            if (p > 0)
            {
                plh[0] = proc->boundaries.at(3 * p);
                result = result + h_adap_gauss_kronrod(plh[0], proc->boundaries.at(3 * (p - 1) + 2), xf, channel, estimate);
            }
        }
    }
    else
    {
        estimate = gauss_kronrod_31(0, 1, xf, channel);
        result = h_adap_gauss_kronrod(0, 1, xf, channel, estimate);
    }
    return result;
}

// the one. the only. the THERMALLY AVERAGED CROSS SECTION!! at a certain x value
double DT::tac(double xf, procinfos *proc, std::string ch_str)
{

    double full = 0;
    std::function<double(double, double)> channel;

    if (ch_str == "")
    {
        if (lists::tac_x.find(xf) == lists::tac_x.end())
        {

            int N = proc->iniswitches.size();
            for (int coani = vars::initialstate; coani < vars::initialstate + 1; coani++)
            {
                if (proc->iniswitches.at(coani))
                {
                    vars::m1 = *proc->inimasses.at(2 * coani);
                    vars::m2 = *proc->inimasses.at(2 * coani + 1);

                    channel = proc->inifuncs.at(coani);
                    set_boundaries(xf, proc);

                    full = full + integrate_s(xf, channel, proc);
                    //proc->iniswitches.at(coani) = Beps(xf, 1e-4);
                }
            }
            lists::tac_x[xf] = full;
            return full;
        }
        else
        {
            return lists::tac_x.at(xf);
        }
    }
    else
    {
        size_t K = proc->channelnames.size();
        size_t ch_index = 0;

        for (size_t i = 0; i < K; i++)
        {
            if (ch_str == proc->channelnames.at(i))
            {
                ch_index = i;
                break;
            }
        }

        channel = proc->amp2fls.at(ch_index);

        vars::m1 = *proc->mass1s.at(ch_index);
        vars::m2 = *proc->mass2s.at(ch_index);
        if (lists::tac_x.find(xf) == lists::tac_x.end())
        {

            set_boundaries(xf, proc);

            full += integrate_s(xf, channel, proc);

            lists::tac_x[xf] = full;
            return full;
        }
        else
        {
            return lists::tac_x.at(xf);
        }
    }
}
