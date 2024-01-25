#include "analysis.hpp"
#include "ntools.hpp"
#include "vars.hpp"

// xsec function (without symmetry factors when we have identical particles)
double DT::xsec(double s, std::string ch_str, procinfos *proc)
{

    int K = sizeof(proc->channelnames) / sizeof(std::string);
    int ch_index;

    for (int i; i < K; i++)
    {
        if (ch_str == proc->channelnames.at(i))
        {
            ch_index = i;
            break;
        }
    }

    std::function<double(double, double)> channel = proc->amp2s.at(ch_index);

    double m1 = *proc->mass1s.at(ch_index);
    double m2 = *proc->mass2s.at(ch_index);
    double m3 = *proc->mass3s.at(ch_index);
    double m4 = *proc->mass4s.at(ch_index);

    double pcmin = sqrt((s - (m1 + m2) * (m1 + m2)) * (s - (m1 - m2) * (m1 - m2)) / (4 * s));
    double pcmout = sqrt((s - (m3 + m4) * (m3 + m4)) * (s - (m3 - m4) * (m3 - m4)) / (4 * s));

    return (1 / (32 * M_PI * s)) * (pcmout / pcmin) * adaptive_simpson38(-1, 1, s, simpson38(-1, 1, s, channel), channel);
}

void DT::plot_xsec(const char *filename, double lower, double upper, int Npoints, std::string ch_str, procinfos *proc, bool com, bool logarithmic)
{

    double ls, s, pcm, lpcm;

    double pb = 2.56819e-9;

    int K = sizeof(proc->channelnames) / sizeof(std::string);
    int ch_index;

    for (int i; i < K; i++)
    {
        if (ch_str == proc->channelnames.at(i))
        {
            ch_index = i;
            break;
        }
    }

    double m1 = *proc->mass1s.at(ch_index);
    double m2 = *proc->mass2s.at(ch_index);

    std::ofstream outfile(filename);

    if (logarithmic && com)
    {
        for (int i = 0; i < Npoints; i++)
        {
            lpcm = log10(lower) + (log10(upper) - log10(lower)) * ((double)rand() / (double)RAND_MAX);
            pcm = pow(10.0, lpcm);
            s = m1 * m1 + m2 * m2 + 2 * pcm * pcm + 2 * sqrt(m1 * m1 * m2 * m2 + m1 * m1 * pcm * pcm + m2 * m2 * pcm * pcm + pcm * pcm * pcm * pcm);
            outfile << pcm << "\t" << xsec(s, ch_str, proc) / pb << "\n";
        }
    }
    else if (!logarithmic && com)
    {
        for (int i = 0; i < Npoints; i++)
        {
            pcm = lower + (upper - lower) * ((double)rand() / (double)RAND_MAX);
            s = m1 * m1 + m2 * m2 + 2 * pcm * pcm + 2 * sqrt(m1 * m1 * m2 * m2 + m1 * m1 * pcm * pcm + m2 * m2 * pcm * pcm + pcm * pcm * pcm * pcm);
            outfile << pcm << "\t" << xsec(s, ch_str, proc) / pb << "\n";
        }
    }
    else if (logarithmic && !com)
    {
        for (int i = 0; i < Npoints; i++)
        {
            ls = log10(lower) + (log10(upper) - log10(lower)) * ((double)rand() / (double)RAND_MAX);
            s = pow(10.0, ls);
            outfile << s << "\t" << xsec(s, ch_str, proc) / pb << "\n";
        }
    }
    else if (!logarithmic && !com)
    {
        for (int i = 0; i < Npoints; i++)
        {
            s = lower + (upper - lower) * ((double)rand() / (double)RAND_MAX);
            outfile << s << "\t" << xsec(s, ch_str, proc) / pb << "\n";
        }
    }
    outfile.close();
}


void DT::save_data(char** argv, std::vector<std::string> yourheader, std::vector<double> yourlist, procinfos *proc, bool channels)
{
    std::string filesave = "../dataOutput/" + std::string(argv[2]);

    std::ofstream outfile(filesave, std::ios::out | std::ios::app);

    outfile.seekp(0, std::ios::end);

    if (outfile.tellp() == 0)
    {

        for (int k = 0; k < yourheader.size(); k++)
        {
            outfile << yourheader.at(k) << "\t";
        }
        if (channels)
        {
            int K = sizeof(proc->channelnames) / sizeof(std::string);
            for (int l = 0; l < K; l++)
            {
                outfile << proc->channelnames.at(l) << "\t";
            }
        }
        outfile << "\n";
    }

    for (int i = 0; i < yourlist.size(); i++)
    {
        outfile << yourlist.at(i) << "\t";
    }
    if (channels)
    {
        int K = sizeof(proc->channelnames) / sizeof(std::string);
        int max = lists::relChannel.size();
        bool found = false;
        for (int l = 0; l < K; l++)
        {
            found = false;
            for (int m = 0; m < max; m++)
            {
                if (lists::relChannel.at(m) == proc->channelnames[l])
                {
                    outfile << lists::relStrength.at(m) << "\t";
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                outfile << 0. << "\t";
            }
        }
    }

    outfile << "\n";

    outfile.close();
}