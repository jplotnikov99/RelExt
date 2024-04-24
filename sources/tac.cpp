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

    ResError Tac::simpson38_adap_cos_t(const double l, const double r, const double &s, ResError *f, const double &est)
    {
        ResError I1, I2, I3, f1[4];
        double m = (r + l) / 2.;
        double h = (r - l) / 8.;
        ResError I = h * (f[0] + 3 * f[1] + 3 * f[2] + f[3]);
        f1[0] = mod->eval(m, s);
        f1[1] = f[2];
        f1[2] = mod->eval((l + 5 * r) / 6, s);
        f1[3] = f[3];
        f[3] = f1[0];
        f[2] = f[1];
        f[1] = mod->eval((5 * l + r) / 6, s);
        I1 = h / 2 * (f[0] + 3 * f[1] + 3 * f[2] + f[3]);
        I2 = h / 2 * (f1[0] + 3 * f1[1] + 3 * f1[2] + f1[3]);
        I3 = I1 + I2;

        if (fabs(I.res - I3.res) < simpson_eps * fabs(est))
        {
            I3.err = fabs(I.res - I3.res);
            return I3;
        }
        return simpson38_adap_cos_t(l, m, s, f, est) + simpson38_adap_cos_t(m, r, s, f1, est);
    }

    ResError Tac::xsec(const double &s, const std::string &channel)
    {
        double m1, m2, m3, m4;
        mod->set_channel(m1, m2, {channel}, false);
        if (sqrt(s) < m1 + m2)
        {
            return {0., 0.};
        }
        mod->get_channel_masses(m1, m2, m3, m4, channel);

        double f_est[10];
        for (size_t i = 0; i < 10; i++)
        {
            f_est[i] = mod->eval(-1 + 0.2222222222222222 * i, s).res;
        }
        double est = simpson_est(-1, 1, f_est);
        ResError f[4];
        f[0] = {f_est[0], 0.};
        f[1] = {f_est[3], 0.};
        f[2] = {f_est[6], 0.};
        f[3] = {f_est[9], 0.};
        return 1 / (32 * M_PI * s) * sqrt(kaellen(s, m3 * m3, m4 * m4) / kaellen(s, m1 * m1, m2 * m2)) * simpson38_adap_cos_t(-1, 1, s, f, est);
    }

    ResError Tac::wij(const double &s)
    {
        if (sig_s.count(s) == 0)
        {
            double f_est[10];
            for (size_t i = 0; i < 10; i++)
            {
                f_est[i] = mod->eval(-1 + 0.2222222222222222 * i, s).res;
            }
            double est = simpson_est(-1, 1, f_est);
            ResError f[4];
            f[0] = {f_est[0], 0.};
            f[1] = {f_est[3], 0.};
            f[2] = {f_est[6], 0.};
            f[3] = {f_est[9], 0.};
            ResError crs = 1 / (256 * M_PI * s * sqrt(s)) * simpson38_adap_cos_t(-1, 1, s, f, est);
            sig_s[s] = crs;
            return crs;
        }
        else
        {
            return sig_s.at(s);
        }
    }

    void Tac::calc_polK2(const double &x)
    {
        double Tinv = x / mod->MDM;
        double mtemp, cur;
        polK2s.clear();
        for (auto it : mod->bath_masses)
        {
            mtemp = *it;
            cur = mtemp * mtemp * polK2(Tinv * mtemp);
            polK2s.push_back(cur);
        }
    }

    double Tac::lipsv(const double &s, const double &x)
    {
        double num = 0.;
        double den = 0.;
        double mtemp;
        double sqs = sqrt(s);
        double Tinv = x / mod->MDM;

        if (x > 10)
        {
            num += Tinv * polK1(sqs * Tinv);
            for (size_t i = 0; i < mod->bath_masses.size(); i++)
            {
                mtemp = *mod->bath_masses.at(i);
                den += exp(-Tinv * (mtemp - sqs / 2)) * polK2s.at(i);
            }
            den *= den;
        }
        else
        {
            num += Tinv * std::cyl_bessel_k(1, sqs * Tinv);
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
        double s = lower_bound + (1 - u) / u;
        return wij(s) * lipsv(s, x) * 1 / (u * u);
    }

    bool Tac::beps(const double &x)
    {
        return (x * (m1 + m2 - 2 * mod->MDM) / mod->MDM <= -beps_eps);
    }

    double Tac::peak_relevance(const double &peakpos)
    {
        return -(beps_eps - 4.6051701859880) * mod->MDM / (peakpos - m1 - m2);
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
        double m = (l + r) / 2;
        ResError I1 = simpson38_peak(l, m, x), I2 = simpson38_peak(m, r, x);
        ResError I = I1 + I2;
        if ((fabs(I.res / ans.res - 1) < trapezoidal_eps) || (depth == 20))
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

    ResError Tac::adap_gauss_kronrod(const double l, const double r, const double &x, const double &est)
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
        return adap_gauss_kronrod(l, m, x, est) + adap_gauss_kronrod(m, r, x, est);
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
        if (tac_x.count(x) == 0)
        {
            calc_polK2(x);
            for (auto &it : inimap)
            {
                mod->set_channel(m1, m2, it.second);
                lower_bound = (m1 + m2) * (m1 + m2);
                if (beps(x))
                {
                    set_boundaries(x);
                    estimate_integrate_s(x, res, estimate);
                }
            }
            for (auto &it : inimap)
            {
                mod->set_channel(m1, m2, it.second);
                lower_bound = (m1 + m2) * (m1 + m2);
                if (beps(x))
                {
                    set_boundaries(x);
                    integrate_s(x, res, estimate);
                }
            }
            if ((fabs(res.err / res.res) > 1e-1) && (!tac_error_reached))
            {
                tac_error_reached = true;
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
        tac_error_reached = false;
        tac_x.clear();
        sig_s.clear();
        if (full)
            inimap.clear();
    }

} // namespace DT
