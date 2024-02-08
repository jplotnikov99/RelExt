#include "tac.hpp"

namespace DT
{
    Tac::Tac(std::shared_ptr<Model> model)
    {
        mod = model;
        for (size_t i = 0; i < mod->N_initial_states; i++)
        {
            iniswitches.push_back(true);
        }
        for (size_t i = 0; i < mod->N_widths; i++)
        {
            boundaries.push_back(0);
            boundaries.push_back(0);
            boundaries.push_back(0);
        }
    }

    void Tac::set_initial_masses(const double &ma, const double &mb)
    {
        m1 = ma;
        m2 = mb;
    }

    void Tac::sort_inimasses(const std::vector<std::string> &ch_str)
    {
        double ma;
        double mb;
        for (auto it : ch_str)
        {
            mod->assign_masses(ma, mb, it);
            inimap[ma + mb].push_back(it);
        }
    }

    void Tac::clear_maps()
    {
        tac_x.clear();
        sig_s.clear();
        inimap.clear();
    }

    double Tac::simpson38(const double l, const double r, const double &s)
    {
        return (r - l) / 8 * (mod->eval(l, s) + 3 * mod->eval((2 * l + r) / 3, s) + 3 * mod->eval((l + 2 * r) / 3, s) + mod->eval(r, s));
    }

    double Tac::adaptive_simpson38(const double l, const double r, const double &s, const double ans, int depth)
    {
        // represents how much precision you need
        double eps = simpson_eps;
        if (depth > 8)
            eps = 1e-4;
        if (depth > 10)
            eps = 1e-3;
        if (depth > 12)
            eps = 1e-2;
        if (depth > 13)
            eps = 1e-1;
        if (depth > 14)
            return ans;
        double m = (l + r) / 2, x = simpson38(l, m, s), y = simpson38(m, r, s);
        if (fabs(((x + y) / ans - 1)) < eps)
            return x + y;
        if (ans == 0)
            return 0;
        return adaptive_simpson38(l, m, s, x, depth + 1) + adaptive_simpson38(m, r, s, y, depth + 1);
    }

    double Tac::wij(const double &s)
    {
        double crs;

        if (sig_s.find(s) == sig_s.end())
        {
            crs = 1 / (256 * M_PI * s * sqrt(s)) * adaptive_simpson38(-1, 1, s, simpson38(-1, 1, s)); // flux factors already included here
            sig_s[s] = crs;
            return crs;
        }
        else
        {
            return sig_s.at(s);
        }
    }

    double Tac::sigv(const double &u, const double &x)
    {
        double s = (m1 + m2) * (m1 + m2) + (1 - u) / u;
        return wij(s) * mod->lipsv(s, x) * 1 / (u * u);
    }

    bool Tac::beps(const double &x, const double &MDM)
    {
        return (exp(-x * (m1 + m2 - 2 * MDM) / MDM) >= beps_eps);
    }

    void Tac::flickswitches(const double &x)
    {
        for (int i = 0; i < iniswitches.size(); i++)
        {
            mod->set_channel(m1, m2, i);
            iniswitches.at(i) = beps(x, mod->MDM);
        }
    }

    double Tac::peak_relevance(const double &peakpos)
    {
        return 13.8155105579643 * mod->MDM / (peakpos - m1 - m2);
    }

    double *Tac::peak_bounds(const double &peakpos, const double &width)
    {
        static double bounds[3];
        double n = 0.1;
        while (peakpos - 2 * width / n < m1 + m2)
        {
            n *= 2;
        }

        bounds[0] = 1 / ((peakpos - 2 * width / n) * (peakpos - 2 * width / n) - (m1 + m2) * (m1 + m2) + 1);
        bounds[1] = 1 / (peakpos * peakpos - (m1 + m2) * (m1 + m2) + 1);
        bounds[2] = 1 / ((peakpos + 2 * width / n) * (peakpos + 2 * width / n) - (m1 + m2) * (m1 + m2) + 1);

        return bounds;
    }

    void Tac::i_sort_boundaries()
    {
        double current[3];
        int l;
        for (int i = 1; i < N_relevant_peaks; i++)
        {
            current[0] = boundaries.at(3 * i);
            current[1] = boundaries.at(3 * i + 1);
            current[2] = boundaries.at(3 * i + 2);

            l = i;
            while ((l > 0) && (boundaries.at(3 * (l - 1) + 1) < current[1]))
            {
                boundaries.at(3 * l) = boundaries.at(3 * (l - 1));
                boundaries.at(3 * l + 1) = boundaries.at(3 * (l - 1) + 1);
                boundaries.at(3 * l + 2) = boundaries.at(3 * (l - 1) + 2);

                l--;
            }
            boundaries.at(3 * l) = current[0];
            boundaries.at(3 * l + 1) = current[1];
            boundaries.at(3 * l + 2) = current[2];
        }
    }

    void Tac::set_boundaries(const double &x)
    {
        double peak_xf;
        double *b;

        N_relevant_peaks = 0;

        for (int j = 0; j < mod->N_widths; j++)
        {

            peak_xf = peak_relevance(*mod->denstructures.at(2 * j));

            if (peak_xf > 0 && x < peak_xf)
            {
                b = peak_bounds(*mod->denstructures.at(2 * j), *mod->denstructures.at(2 * j + 1));
                boundaries.at(3 * N_relevant_peaks) = *b;
                boundaries.at(3 * N_relevant_peaks + 1) = *(b + 1);
                boundaries.at(3 * N_relevant_peaks + 2) = *(b + 2);
                N_relevant_peaks++;
            }
        }
        i_sort_boundaries();
    }

    double Tac::trapezoidal(const double l, const double r, const double &x)
    {
        return (r - l) / 2 * (sigv(l, x) + sigv(r, x));
    }

    double Tac::adap_trapezoidal(const double l, const double r, const double &x, const double &ans, size_t depth)
    {
        depth++;
        double m = (l + r) / 2, I1 = trapezoidal(l, m, x), I2 = trapezoidal(m, r, x);
        double I = I1 + I2;
        if (ans == 0)
            return 0;
        if (depth == 12)
            return I;
        return (fabs((I) / ans - 1) < trapezoidal_eps) ? I : adap_trapezoidal(l, m, x, I1, depth) + adap_trapezoidal(m, r, x, I2, depth);
    }

    // Kronrod abisscas [-1,1] intervall

    // 31 point gauss kronrod
    const double kronx_31[31] = {
        -0.9980022986934,
        -0.98799251802049,
        -0.96773907567914,
        -0.93727339240071,
        -0.89726453234408,
        -0.84820658341043,
        -0.79041850144247,
        -0.72441773136017,
        -0.6509967412974,
        -0.5709721726085,
        -0.48508186364024,
        -0.39415134707756,
        -0.29918000715317,
        -0.20119409399743,
        -0.10114206691872,
        0,
        0.10114206691872,
        0.20119409399743,
        0.29918000715317,
        0.39415134707756,
        0.48508186364024,
        0.5709721726085,
        0.65099674129742,
        0.72441773136017,
        0.79041850144247,
        0.84820658341043,
        0.89726453234408,
        0.93727339240071,
        0.96773907567914,
        0.98799251802049,
        0.9980022986934};

    double Tac::gauss_kronrod_31(const double l, const double r, const double &x)
    {
        double I1, I2, h, y[31];
        h = (r - l) / 2;
        for (int i = 0; i < 31; i++)
        {
            y[i] = sigv((kronx_31[i] + 1) * h + l, x);
        }
        I1 = h * (0.005377479872923 * (y[0] + y[30]) + 0.01500794732932 * (y[1] + y[29]) + 0.02546084732672 * (y[2] + y[28]) + 0.03534636079138 * (y[3] + y[27]) + 0.04458975132476 * (y[4] + y[26]) + 0.05348152469093 * (y[5] + y[25]) + 0.06200956780067 * (y[6] + y[24]) + 0.06985412131873 * (y[7] + y[23]) + 0.07684968075772 * (y[8] + y[22]) + 0.08308050282313 * (y[9] + y[21]) + 0.08856444305621 * (y[10] + y[20]) + 0.093126598170825 * (y[11] + y[19]) + 0.09664272698362 * (y[12] + y[18]) + 0.0991735987218 * (y[13] + y[17]) + 0.10076984552388 * (y[14] + y[16]) + 0.10133000701479 * y[15]);
        I2 = h * (0.0307532419961 * (y[1] + y[29]) + 0.07036604748811 * (y[3] + y[27]) + 0.10715922046717 * (y[5] + y[25]) + 0.1395706779262 * (y[7] + y[23]) + 0.16626920581699 * (y[9] + y[21]) + 0.18616100001556 * (y[11] + y[19]) + 0.19843148532711 * (y[13] + y[17]) + 0.2025782419256 * y[15]);
        return (I1 + I2) / 2.;
    }

    // 13 point gauss kronrod
    const double kronx_13[13] = {
        -0.988703202612678858,
        -0.932469514203152028,
        -0.82137334086502794,
        -0.661209386466264514,
        -0.463118212475304612,
        -0.238619186083196909,
        0,
        0.238619186083196909,
        0.463118212475304612,
        0.661209386466264514,
        0.82137334086502794,
        0.932469514203152028,
        0.988703202612678858};

    double Tac::adap_gauss_kronrod(const double l, const double r, const double &x, const double &est, int depth)
    {
        double I1, I2, h, y[13], eps1;
        h = (r - l) / 2;
        for (int i = 0; i < 13; i++)
        {
            y[i] = sigv((kronx_13[i] + 1) * h + l, x);
        }
        I1 = h * (0.030396154 * (y[0] + y[12]) + 0.0836944404 * (y[1] + y[11]) + 0.1373206046 * (y[2] + y[10]) + 0.1810719943 * (y[3] + y[9]) + 0.2132096523 * (y[4] + y[8]) + 0.2337708641 * (y[5] + y[7]) + 0.2410725802 * y[6]);
        I2 = h * (0.171324492 * (y[1] + y[11]) + 0.360761573 * (y[3] + y[9]) + 0.4679139346 * (y[5] + y[7]));
        eps1 = gauss_kronrod_eps * est / I1 * pow(2, depth);
        if (I1 == 0)
            return 0.;
        if (depth > 12)
            return I1;
        if (fabs(I2 / I1 - 1) < eps1 || eps1 > 1)
            return I1;
        double m = (l + r) / 2;
        return adap_gauss_kronrod(l, m, x, est, depth + 1) + adap_gauss_kronrod(m, r, x, est, depth + 1);
    }

    double Tac::integrate_peaks(const double &x)
    {
        double res = 0.;
        double b[3];
        for (size_t i = 0; i < N_relevant_peaks; i++)
        {
            b[0] = boundaries.at(3 * i);
            b[1] = boundaries.at(3 * i + 1);
            b[2] = boundaries.at(3 * i + 2);
            res += adap_trapezoidal(b[2], b[1], x, trapezoidal(b[2], b[1], x));
            res += adap_trapezoidal(b[1], b[0], x, trapezoidal(b[1], b[0], x));
        }
        return res;
    }

    double Tac::integrate_s(const double &x)
    {
        double res = 0.;
        double estimate = 0.;

        if (N_relevant_peaks > 0)
        {
            res = integrate_peaks(x);
            estimate = res;

            for (size_t i = 1; i < N_relevant_peaks; i++)
            {
                estimate += gauss_kronrod_31(boundaries.at(3 * i), boundaries.at(3 * i - 1), x);
            }

            estimate += (gauss_kronrod_31(0, boundaries.at(3 * N_relevant_peaks - 1), x) + gauss_kronrod_31(boundaries.at(0), 1, x));

            res += (adap_gauss_kronrod(0, boundaries.at(3 * N_relevant_peaks - 1), x, estimate) + adap_gauss_kronrod(boundaries.at(0), 1, x, estimate));

            for (size_t i = 1; i < N_relevant_peaks; i++)
            {
                res += adap_gauss_kronrod(boundaries.at(3 * i), boundaries.at(3 * i - 1), x, estimate);
            }
        }
        else
        {
            estimate += gauss_kronrod_31(0, 1, x);
            res += adap_gauss_kronrod(0, 1, x, estimate);
        }
        return res;
    }

    double Tac::tac(const double &x, const std::vector<std::string> &ch_str)
    {
        double res = 0.;

        if (tac_x.find(x) == tac_x.end())
        {
            if (ch_str.size() == 0)
            {
                for (size_t i = 0; i < mod->N_initial_states; i++)
                {
                    if (iniswitches.at(i))
                    {
                        mod->set_channel(m1, m2, i);
                        set_boundaries(x);
                        res += integrate_s(x);
                        iniswitches.at(i) = beps(x, mod->MDM);
                    }
                }
            }
            else
            {
                for (ini_it = inimap.begin(); ini_it != inimap.end(); ini_it++)
                {
                    mod->set_channel(m1, m2, 0, ini_it->second);
                    if (beps(x, mod->MDM))
                    {
                        set_boundaries(x);
                        res += integrate_s(x);
                    }
                }
            }
            tac_x[x] = res;
            return res;
        }
        else
        {
            return tac_x.at(x);
        }
    }

} // namespace DT
