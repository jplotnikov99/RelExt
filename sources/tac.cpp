#include "tac.hpp"

namespace DT
{
    Tac::Tac(std::shared_ptr<Model> model)
    {
        mod = model;
        for (size_t i = 0; i < mod->N_widths; i++)
        {
            boundaries.push_back(0);
            boundaries.push_back(0);
            boundaries.push_back(0);
        }
    }

    void Tac::sort_inimasses(const vstring &ch_str)
    {
        for (auto it : ch_str)
        {
            mod->assign_masses(m1, m2, it);
            inimap[m1 + m2].push_back(it);
        }
    }

    ResError Tac::simpson38_cos_t(const double l, const double r, const double &s)
    {
        ResError res{(r - l) / 8 * (mod->eval(l, s) + 3 * mod->eval((2 * l + r) / 3, s) + 3 * mod->eval((l + 2 * r) / 3, s) + mod->eval(r, s)), 0};
        return res;
    }

    ResError Tac::simpson38_adap_cos_t(const double l, const double r, const double &s, ResError *y, size_t depth)
    {
        // represents how much precision you need
        ResError I1, I2, y1[4];
        double m = (r + l) / 2.;
        double h = (r - l) / 8.;
        ResError I = h * (y[0] + 3 * y[1] + 3 * y[2] + y[3]);
        y1[0] = {mod->eval(m, s), 0.};
        y1[1] = y[2];
        y1[2] = {mod->eval((l + 5 * r) / 6, s), 0.};
        y1[3] = y[3];
        y[3] = y1[0];
        y[2] = y[1];
        y[1] = {mod->eval((5 * l + r) / 6, s), 0.};
        I1 = h * (y[0] + 3 * y[1] + 3 * y[2] + y[3]);
        I2 = h * (y1[0] + 3 * y1[1] + 3 * y1[2] + y1[3]);
        double eps = simpson_eps;

        if (depth > 14)
        {
            std::cout << "Maximum depth of cos_t integration is reached. Result might lose precision.\n";
            return {1., 0.};
        }
        else if (depth > 13)
        {
            eps *= 1e4;
        }
        else if (depth > 12)
        {
            eps *= 1e3;
        }
        else if (depth > 10)
        {
            eps *= 1e2;
        }
        else if (depth > 8)
        {
            eps *= 1e1;
        }

        if (fabs(I.res - 1) < eps)
        {
            I.err = fabs(I.res);
            return I1 + I2;
        }
        return simpson38_adap_cos_t(l, m, s, depth + 1) + simpson38_adap_cos_t(m, r, s, depth + 1);
    }

    ResError Tac::wij(const double &s)
    {

        if (sig_s.find(s) == sig_s.end())
        {
            ResError crs = 1 / (256 * M_PI * s * sqrt(s)) * simpson38_adap_cos_t(-1, 1, s);
            sig_s[s] = crs;
            return crs;
        }
        else
        {
            return sig_s.at(s);
        }
    }

    double Tac::lipsv(const double &s, const double &x)
    {
        double num = 0.;
        double den = 0.;
        double mtemp;
        double Tinv = x / mod->MDM;

        if (x > 10)
        {
            num += Tinv * polK1(sqrt(s) * Tinv);
            for (auto it : mod->bath_masses)
            {
                mtemp = *it;
                den += mtemp * mtemp * exp(-Tinv * (mtemp - sqrt(s) / 2)) * polK2(Tinv * mtemp);
            }
            den *= den;
        }
        else
        {
            num += Tinv * std::cyl_bessel_k(1, sqrt(s) * Tinv);
            for (auto it : mod->bath_masses)
            {
                mtemp = *it;
                den += mtemp * mtemp * std::cyl_bessel_k(2, Tinv * mtemp);
            }
            den *= den;
        }

        return num / den;
    }

    ResError Tac::sigv(const double &u, const double &x)
    {
        double s = (m1 + m2) * (m1 + m2) + (1 - u) / u;
        return wij(s) * lipsv(s, x) * 1 / (u * u);
    }

    bool Tac::beps(const double &x)
    {
        return (exp(-x * (m1 + m2 - 2 * mod->MDM) / mod->MDM) >= beps_eps);
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

    ResError Tac::simpson38_peak(const double l, const double r, const double &x)
    {
        return (r - l) / 8 * (sigv(l, x) + 3 * sigv((2 * l + r) / 3, x) + 3 * sigv((l + 2 * r) / 3, x) + sigv(r, x));
    }

    ResError Tac::simpson38_adap_peak(const double l, const double r, const double &x, const ResError &ans, size_t depth)
    {
        if (ans.res == 0)
            return ans;
        double eps = trapezoidal_eps;
        double m = (l + r) / 2;
        ResError I1 = simpson38_peak(l, m, x), I2 = simpson38_peak(m, r, x);
        ResError I = I1 + I2;
        if (fabs(I.res / ans.res - 1) < eps)
        {
            I.err += fabs(I.res - ans.res);
            return I;
        }
        return simpson38_adap_peak(l, m, x, I1, depth + 1) + simpson38_adap_peak(m, r, x, I2, depth + 1);
    }

    double Tac::kronrod_61(const double l, const double r, const double &x)
    {
        double m = 0.5 * (r + l);
        double h = 0.5 * (r - l);

        double res = 0;
        for (size_t i = 0; i < 30; i++)
        {
            double dx = h * kronx_61[i];
            res += wkron_61[i] * (sigv(m + dx, x).res + sigv(m - dx, x).res);
        }
        res += wkron_61[30] * (sigv(m, x).res);
        res *= h;

        return res;
    }

    ResError Tac::adap_gauss_kronrod(const double l, const double r, const double &x, const double &est, int depth)
    {
        ResError I1, I2, y[15];
        double h = (r - l) / 2;
        for (int i = 0; i < 15; i++)
        {
            y[i] = sigv((kronx_15[i] + 1) * h + l, x);
        }

        I1 = h * (0.022935322010529224963732008058970 * (y[0] + y[14]) + 0.063092092629978553290700663189204 * (y[1] + y[13]) + 0.104790010322250183839876322541518 * (y[2] + y[12]) + 0.140653259715525918745189590510238 * (y[3] + y[11]) + 0.169004726639267902826583426598550 * (y[4] + y[10]) + 0.190350578064785409913256402421014 * (y[5] + y[9]) + 0.204432940075298892414161999234649 * (y[6] + y[8]) + 0.209482141084727828012999174891714 * y[7]);
        if (I1.res == 0)
        {
            return I1;
        }
        I2 = h * (0.129484966168869693270611432679082 * (y[1] + y[13]) + 0.279705391489276667901467771423780 * (y[3] + y[11]) + 0.381830050505118944950369775488975 * (y[5] + y[9]) + 0.417959183673469387755102040816327 * y[7]);
        double err = fabs(I1.res - I2.res);
        if (err < gauss_kronrod_eps * est)
        {
            I1.err += err;
            return I1;
        }
        double m = (2 * l + r) / 3;
        return adap_gauss_kronrod(l, m, x, est, depth + 1) + adap_gauss_kronrod(m, r, x, est, depth + 1);
    }

    ResError Tac::integrate_peaks(const double &x)
    {
        ResError res{0., 0.};
        double b[3];
        for (size_t i = 0; i < N_relevant_peaks; i++)
        {
            b[0] = boundaries.at(3 * i);
            b[1] = boundaries.at(3 * i + 1);
            b[2] = boundaries.at(3 * i + 2);
            res = res + simpson38_adap_peak(b[2], b[1], x, simpson38_peak(b[2], b[1], x));
            res = res + simpson38_adap_peak(b[1], b[0], x, simpson38_peak(b[1], b[0], x));
        }
        return res;
    }

    void Tac::estimate_integrate_s(const double &x, ResError &res, double &estimate)
    {
        if (N_relevant_peaks > 0)
        {
            res = res + integrate_peaks(x);
            estimate = res.res;

            for (size_t i = 1; i < N_relevant_peaks; i++)
            {
                estimate += kronrod_61(boundaries.at(3 * i), boundaries.at(3 * i - 1), x);
            }

            estimate += (kronrod_61(0, boundaries.at(3 * N_relevant_peaks - 1), x) + kronrod_61(boundaries.at(0), 1, x));
        }
        else
        {
            estimate += kronrod_61(0, 1e-3, x);
            estimate += kronrod_61(1e-3, 1, x);
        }
    }

    void Tac::integrate_s(const double &x, ResError &res, double &estimate)
    {
        if (N_relevant_peaks > 0)
        {
            res = res + (adap_gauss_kronrod(0, boundaries.at(3 * N_relevant_peaks - 1), x, estimate) + adap_gauss_kronrod(boundaries.at(0), 1, x, estimate));

            for (size_t i = 1; i < N_relevant_peaks; i++)
            {
                res = res + adap_gauss_kronrod(boundaries.at(3 * i), boundaries.at(3 * i - 1), x, estimate);
            }
        }
        else
        {
            res = res + adap_gauss_kronrod(0, 1e-3, x, estimate);
            res = res + adap_gauss_kronrod(1e-3, 1, x, estimate);
        }
    }

    ResError Tac::tac(const double &x)
    {
        ResError res{0., 0.};
        double estimate = 0.;
        if (tac_x.find(x) == tac_x.end())
        {
            for (auto &it : inimap)
            {
                mod->set_channel(m1, m2, it.second);
                if (beps(x))
                {
                    set_boundaries(x);
                    estimate_integrate_s(x, res, estimate);
                }
            }
            for (auto &it : inimap)
            {
                mod->set_channel(m1, m2, it.second);
                if (beps(x))
                {
                    set_boundaries(x);
                    integrate_s(x, res, estimate);
                }
            }
            if (fabs(res.err / res.res) > 1e-1)
            {
                std::cout << "Result and error are of the same order in the TAC.\n";
                std::cout << x << " " << res << std::endl;
            }
            tac_x[x] = res;
            return res;
        }
        else
        {
            return tac_x.at(x);
        }
    }

    void Tac::clear_state(const bool full)
    {
        max_prec_s = false;
        tac_x.clear();
        sig_s.clear();
        if (full)
            inimap.clear();
    }

} // namespace DT
