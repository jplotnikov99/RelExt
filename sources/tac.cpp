#include "tac.hpp"

namespace DT
{
    Tac::Tac(std::shared_ptr<Model> model)
    {
        mod = model;
        cos_err = std::make_unique<ErrorTracker>(iserror);
        tac_err = std::make_unique<ErrorTracker>(iserror);
        for (size_t i = 0; i < mod->N_widths; i++)
        {
            boundaries.push_back(0);
            boundaries.push_back(0);
            boundaries.push_back(0);
        }
    }

    void Tac::sort_inimasses(const vstring &ch_str)
    {
        if (ch_str.size() == 0)
        {
            vstring all_channels = mod->get_all_channels();
            for (auto it : all_channels)
            {
                mod->assign_masses(m1, m2, it);
                inimap[m1 + m2].push_back(it);
            }
        }
        else
        {
            for (auto it : ch_str)
            {
                mod->assign_masses(m1, m2, it);
                inimap[m1 + m2].push_back(it);
            }
        }
    }

    double Tac::simpson38_cos_t(const double l, const double r, const double &s)
    {
        return (r - l) / 8 * (mod->eval(l, s) + 3 * mod->eval((2 * l + r) / 3, s) + 3 * mod->eval((l + 2 * r) / 3, s) + mod->eval(r, s));
    }

    double Tac::simpson38_adap_cos_t(const double l, const double r, const double &s, const double ans, size_t depth)
    {
        // represents how much precision you need
        if (ans == 0)
            return 0;
        double eps = simpson_eps;
        if (depth > 14)
        {
            cos_err->add_error(ans);
            std::cout << "Maximum depth of cos_t integration is reached. Result might lose precision.\n";
            return ans;
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
        double m = (l + r) / 2, I1 = simpson38_cos_t(l, m, s), I2 = simpson38_cos_t(m, r, s);
        double I = I1 + I2;
        if (fabs(I / ans - 1) < eps)
        {
            cos_err->add_error(fabs(I - ans));
            return I;
        }
        return simpson38_adap_cos_t(l, m, s, I1, depth + 1) + simpson38_adap_cos_t(m, r, s, I2, depth + 1);
    }

    double Tac::wij(const double &s)
    {

        if (sig_s.find(s) == sig_s.end())
        {
            double crs = 1 / (256 * M_PI * s * sqrt(s));
            double cos_int = simpson38_adap_cos_t(-1, 1, s, simpson38_cos_t(-1, 1, s));
            cos_err->mult_const(crs);
            crs *= cos_int;
            sig_s[s] = crs;
            cos_err->map_error(s);
            return crs;
        }
        else
        {
            cos_err->load_error(s);
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

    double Tac::sigv(const double &u, const double &x)
    {
        double s = (m1 + m2) * (m1 + m2) + (1 - u) / u;
        double pre = lipsv(s, x) * 1 / (u * u);
        double res = wij(s) * pre;
        cos_err->mult_const(pre);
        cos_err->reset_error();
        return res;
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

    double Tac::simpson38_peak(const double l, const double r, const double &x)
    {
        cos_err->keep_track(4);
        double h = (r - l) / 8;
        double resll = sigv(l, x);
        double resl = 3 * sigv((2 * l + r) / 3, x);
        double resr = 3 * sigv((l + 2 * r) / 3, x);
        double resrr = sigv(r, x);
        cos_err->mult_error_stack({1, 3, 3, 1});
        cos_err->mult_const(h);
        tac_err->add_error(cos_err->transfer_error());
        return h * (resll + resl + resr + resrr);
    }

    double Tac::simpson38_adap_peak(const double l, const double r, const double &x, const double &ans, size_t depth)
    {
        if (ans == 0)
            return 0;
        double eps = trapezoidal_eps;
        if (depth > 15)
        {
            tac_err->add_error(ans);
            std::cout << "Maximum depth of peak integration is reached. Result might lose precision.\n";
            return ans;
        }
        else if (depth > 14)
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

        double m = (l + r) / 2, I1 = simpson38_peak(l, m, x), I2 = simpson38_peak(m, r, x);
        double I = I1 + I2;
        if (fabs(I / ans - 1) < eps)
        {
            tac_err->add_error(fabs(I - ans));
            return I;
        }
        return simpson38_adap_peak(l, m, x, I1, depth + 1) + simpson38_adap_peak(m, r, x, I2, depth + 1);
    }

    // Kronrod abisscas [-1,1] intervall
    // 61 point gauss kronrod
    static const double kronx_61[31] =
        {
            0.999484410050490637571325895705811,
            0.996893484074649540271630050918695,
            0.991630996870404594858628366109486,
            0.983668123279747209970032581605663,
            0.973116322501126268374693868423707,
            0.960021864968307512216871025581798,
            0.944374444748559979415831324037439,
            0.926200047429274325879324277080474,
            0.905573307699907798546522558925958,
            0.882560535792052681543116462530226,
            0.857205233546061098958658510658944,
            0.829565762382768397442898119732502,
            0.799727835821839083013668942322683,
            0.767777432104826194917977340974503,
            0.733790062453226804726171131369528,
            0.697850494793315796932292388026640,
            0.660061064126626961370053668149271,
            0.620526182989242861140477556431189,
            0.579345235826361691756024932172540,
            0.536624148142019899264169793311073,
            0.492480467861778574993693061207709,
            0.447033769538089176780609900322854,
            0.400401254830394392535476211542661,
            0.352704725530878113471037207089374,
            0.304073202273625077372677107199257,
            0.254636926167889846439805129817805,
            0.204525116682309891438957671002025,
            0.153869913608583546963794672743256,
            0.102806937966737030147096751318001,
            0.051471842555317695833025213166723,
            0.000000000000000000000000000000000,
    };

    // 61 point kronrod weights
    static const double wkron_61[31]{
        0.001389013698677007624551591226760,
        0.003890461127099884051267201844516,
        0.006630703915931292173319826369750,
        0.009273279659517763428441146892024,
        0.011823015253496341742232898853251,
        0.014369729507045804812451432443580,
        0.016920889189053272627572289420322,
        0.019414141193942381173408951050128,
        0.021828035821609192297167485738339,
        0.024191162078080601365686370725232,
        0.026509954882333101610601709335075,
        0.028754048765041292843978785354334,
        0.030907257562387762472884252943092,
        0.032981447057483726031814191016854,
        0.034979338028060024137499670731468,
        0.036882364651821229223911065617136,
        0.038678945624727592950348651532281,
        0.040374538951535959111995279752468,
        0.041969810215164246147147541285970,
        0.043452539701356069316831728117073,
        0.044814800133162663192355551616723,
        0.046059238271006988116271735559374,
        0.047185546569299153945261478181099,
        0.048185861757087129140779492298305,
        0.049055434555029778887528165367238,
        0.049795683427074206357811569379942,
        0.050405921402782346840893085653585,
        0.050881795898749606492297473049805,
        0.051221547849258772170656282604944,
        0.051426128537459025933862879215781,
        0.051494729429451567558340433647099};

    double Tac::kronrod_61(const double l, const double r, const double &x)
    {
        double m = 0.5 * (r + l);
        double h = 0.5 * (r - l);

        double res = 0;
        for (size_t i = 0; i < 30; i++)
        {
            double dx = h * kronx_61[i];
            res += wkron_61[i] * (sigv(m + dx, x) + sigv(m - dx, x));
        }
        res += wkron_61[30] * (sigv(m, x));
        res *= h;

        return res;
    }

    /* abscissae of the 15-point kronrod rule */
    static const double kronx_15[15] =
        {
            0.991455371120812639206854697526329,
            0.949107912342758524526189684047851,
            0.864864423359769072789712788640926,
            0.741531185599394439863864773280788,
            0.586087235467691130294144838258730,
            0.405845151377397166906606412076961,
            0.207784955007898467600689403773245,
            0.000000000000000000000000000000000,
            -0.207784955007898467600689403773245,
            -0.405845151377397166906606412076961,
            -0.586087235467691130294144838258730,
            -0.741531185599394439863864773280788,
            -0.864864423359769072789712788640926,
            -0.949107912342758524526189684047851,
            -0.991455371120812639206854697526329};

    double Tac::adap_gauss_kronrod(const double l, const double r, const double &x, const double &est, int depth)
    {
        double I1, I2, y[15];
        double h = (r - l) / 2;
        cos_err->keep_track(15);
        for (int i = 0; i < 15; i++)
        {
            y[i] = sigv((kronx_15[i] + 1) * h + l, x);
        }

        I1 = h * (0.022935322010529224963732008058970 * (y[0] + y[14]) + 0.063092092629978553290700663189204 * (y[1] + y[13]) + 0.104790010322250183839876322541518 * (y[2] + y[12]) + 0.140653259715525918745189590510238 * (y[3] + y[11]) + 0.169004726639267902826583426598550 * (y[4] + y[10]) + 0.190350578064785409913256402421014 * (y[5] + y[9]) + 0.204432940075298892414161999234649 * (y[6] + y[8]) + 0.209482141084727828012999174891714 * y[7]);
        if (I1 == 0)
        {
            cos_err->lose_track();
            return 0.;
        }
        I2 = h * (0.129484966168869693270611432679082 * (y[1] + y[13]) + 0.279705391489276667901467771423780 * (y[3] + y[11]) + 0.381830050505118944950369775488975 * (y[5] + y[9]) + 0.417959183673469387755102040816327 * y[7]);
        double err = fabs(I1 - I2);
        if (depth > 16)
        {
            cos_err->mult_error_stack(
                {0.022935322010529224963732008058970,
                 0.063092092629978553290700663189204,
                 0.104790010322250183839876322541518,
                 0.140653259715525918745189590510238,
                 0.169004726639267902826583426598550,
                 0.190350578064785409913256402421014,
                 0.204432940075298892414161999234649,
                 0.209482141084727828012999174891714,
                 0.204432940075298892414161999234649,
                 0.190350578064785409913256402421014,
                 0.169004726639267902826583426598550,
                 0.140653259715525918745189590510238,
                 0.104790010322250183839876322541518,
                 0.063092092629978553290700663189204,
                 0.022935322010529224963732008058970});
            cos_err->mult_const(h);
            tac_err->add_error(cos_err->transfer_error());
            tac_err->add_error(err);
            return I1;
        }
        if (err < gauss_kronrod_eps * est)
        {
            cos_err->mult_error_stack(
                {0.022935322010529224963732008058970,
                 0.063092092629978553290700663189204,
                 0.104790010322250183839876322541518,
                 0.140653259715525918745189590510238,
                 0.169004726639267902826583426598550,
                 0.190350578064785409913256402421014,
                 0.204432940075298892414161999234649,
                 0.209482141084727828012999174891714,
                 0.204432940075298892414161999234649,
                 0.190350578064785409913256402421014,
                 0.169004726639267902826583426598550,
                 0.140653259715525918745189590510238,
                 0.104790010322250183839876322541518,
                 0.063092092629978553290700663189204,
                 0.022935322010529224963732008058970});
            cos_err->mult_const(h);
            tac_err->add_error(cos_err->transfer_error());
            tac_err->add_error(err);
            return I1;
        }
        cos_err->lose_track();
        double m = (2 * l + r) / 3;
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
            res += simpson38_adap_peak(b[2], b[1], x, simpson38_peak(b[2], b[1], x));
            res += simpson38_adap_peak(b[1], b[0], x, simpson38_peak(b[1], b[0], x));
        }
        return res;
    }

    void Tac::estimate_integrate_s(const double &x, double &res, double &estimate)
    {
        if (N_relevant_peaks > 0)
        {
            res += integrate_peaks(x);
            estimate = res;

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

    void Tac::integrate_s(const double &x, double &res, double &estimate)
    {
        if (N_relevant_peaks > 0)
        {
            res += (adap_gauss_kronrod(0, boundaries.at(3 * N_relevant_peaks - 1), x, estimate) + adap_gauss_kronrod(boundaries.at(0), 1, x, estimate));

            for (size_t i = 1; i < N_relevant_peaks; i++)
            {
                res += adap_gauss_kronrod(boundaries.at(3 * i), boundaries.at(3 * i - 1), x, estimate);
            }
        }
        else
        {
            res += adap_gauss_kronrod(0, 1e-3, x, estimate);
            res += adap_gauss_kronrod(1e-3, 1, x, estimate);
        }
    }

    double Tac::tac(const double &x)
    {
        double res = 0.;
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
            if (fabs(tac_err->get_error() / res) > 0.1)
            {
                std::cout << "Result and error are of the same order in the TAC.\n";
                std::cout << x << " " << res << " " << tac_err->get_error() << std::endl;
            }
            tac_x[x] = res;
            tac_err->map_error(x);
            error = tac_err->transfer_error();
            return res;
        }
        else
        {
            tac_err->load_error(x);
            error = tac_err->transfer_error();
            return tac_x.at(x);
        }
    }

    double Tac::get_error()
    {
        return error;
    }

    void Tac::clear_state(const bool full)
    {
        max_prec_s = false;
        tac_x.clear();
        sig_s.clear();
        cos_err->clear_map();
        if (full)
            inimap.clear();
    }

} // namespace DT
