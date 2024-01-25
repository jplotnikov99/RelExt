#include "beq.hpp"
#include "vars.hpp"
#include "EffDofmic.hpp"
#include "utils.hpp"
#include "ntools.hpp"
#include "tactools.hpp"

// prefactor in Beq
double DT::pre(double xf)
{
    double G = 6.7e-39;
    return sqrt(M_PI / (45 * G)) * vars::MDM / (xf * xf);
}

// Temperature for a given entropy
double DT::T_ent(double ent)
{
    return pow(45 * ent / (2 * M_PI * M_PI * heff(vars::MDM / 25)), 0.33333333); // assuming heff cte for the values of x (~25, ie, at FO) that are relevant (and small changes in ent)
}

// Entropy for a given temperature
double DT::ent_T(double xf)
{
    return 2 * M_PI * M_PI * vars::MDM * vars::MDM * vars::MDM / (xf * xf * xf) * heff(vars::MDM / xf) / 45;
}

// function to help find the starting point to be used in the runge Kutta routine
double DT::fstart(double xf, procinfos *proc, std::string ch_str)
{

    double G = 6.7e-39;
    double dif = 0.5; // (Y-Yeq)/Yeq at starting point
    double result;
    double ent = ent_T(xf); // entropy as function of T
    double d = 0.001 * ent; // stepsize for entropy increase
    double upper, lower, dlnYeqdent;

    xf = vars::MDM / T_ent(ent + d);
    upper = log(yeq(xf)); // logYeq for entropy = entropy + d
    xf = vars::MDM / T_ent(ent - d);
    lower = log(yeq(xf));         // logYeq for entropy = entropy - d
    dlnYeqdent = (upper - lower) / (2 * d); // this is derivative of logYeq wrt entropy
    xf = vars::MDM / T_ent(ent);

    // eq 6 from microlecture
    result = dlnYeqdent * (sqrt(6 * M_PI * M_PI * M_PI / 30 * vars::MDM * vars::MDM * vars::MDM * vars::MDM / (xf * xf * xf * xf) * geff(vars::MDM / xf) * G) / tac(xf, proc, ch_str)) - dif * yeq(xf);
    return result;
}

// Boltzmann equation that needs to be solved
double DT::boltzmann_eq(double y, double xf, procinfos *proc, std::string ch_str)
{
    return -pre(xf) * g12(vars::MDM / xf) * tac(xf, proc, ch_str) * (y * y - yeq(xf) * yeq(xf));
}

double DT::setStep(double hnow, double err)
{
    double hnext;
    if (err > 1)
    {
        hnext = 0.9 * 1 / (sqrt(sqrt(err))) * hnow;
        if (hnext < 0.1 * hnow)
        {
            hnext = 0.1 * hnow;
        }
    }
    else
    {
        if (err > 0.0006)
        {
            hnext = 0.9 * pow(err, -0.2) * hnow;
        }
        else
        {
            hnext = 5 * hnow;
        }
    }
    return hnext;
}

// Solves the Boltzmann equation with the full TAC using the adaptive 4-point runge-kutta method
void DT::solve_beq(double xtoday, double &x, double &y, procinfos *proc, std::string ch_str, double h, double eps)
{
    //std::ofstream outfile("../dataInput/FI_15.csv", std::ios::out | std::ios::app);
//
    //outfile.seekp(0, std::ios::end);
//
    //outfile << x1 << "\t" << y1;
//
    //outfile << "\n";
//
    //outfile.close();

    double xsave, ysave, ytemp;
    xsave = x;
    ysave = y;

    rk4(x, y, h, proc, ch_str);
    ytemp = y;
    x = xsave;
    y = ysave;
    rk4(x, y, h / 2, proc, ch_str);
    rk4(x, y, h / 2, proc, ch_str);
    double err = fabs((y - ytemp) / ytemp) / eps;
    h = setStep(h, err);
    if (x + h == x)
    {
        printf("Stepsize too small. Stiff system suspected.\n");
        exit(1);
    }
    else if (err > 1)
    {
        x = xsave;
        y = ysave;
        solve_beq(xtoday, x, y, proc, ch_str, h, eps);
    }
    else if (x + h > xtoday)
    {
        h = xtoday - x;
        rk4(x, y, h, proc, ch_str);
    }
    else
    {
        solve_beq(xtoday, x, y, proc, ch_str, h, eps);
    }
}

// Calculate the single channel contributions to the full relic density omegaF
void DT::saveChannelContr(double omegaF, double xtoday, double chcontrib, procinfos *proc)
{

    int n_procs = proc->channelnames.size();

    double frac;
    double TACfull = tac(vars::initialx, proc);
    double tacfrac;
    double xs, ys;
    std::vector<std::string> rel_channels;
    std::vector<double> rel_frac;
    flickswitches(vars::initialx, proc);

    for (int i = 0; i < n_procs; i++)
    {

        vars::m1 = *proc->mass1s.at(i);
        vars::m2 = *proc->mass2s.at(i);
        
        if (Beps(vars::initialx, 1e-4))
        {
            lists::sig_s.clear();
            lists::tac_x.clear();
            
            tacfrac = tac(vars::initialx, proc, proc->channelnames.at(i)) / TACfull;
            if (tacfrac > chcontrib / 1.5)
            {
                // flickswitches(20., ch);
                xs = secant_method(15., 15.1, 0.01, 100, proc, proc->channelnames.at(i));
                ys = 1.5 * yeq(xs);

                solve_beq(xtoday, xs, ys, proc, proc->channelnames.at(i));
                frac = omegaF / (2.742e8 * vars::MDM * ys);

                rel_channels.push_back(proc->channelnames.at(i));
                rel_frac.push_back(frac);
            }
        }
    }

    std::cout << "Channel contributions:" << std::endl;
    double max = 0;
    double maxj = 0;
    lists::relChannel.clear();
    lists::relStrength.clear();
    while (rel_frac.size() > 0)
    {
        for (int j = 0; j < rel_frac.size(); j++)
        {
            if (rel_frac.at(j) > max)
            {
                maxj = j;
                max = rel_frac.at(j);
                // std::cout << max << std::endl;
            }
        }
        if (max > chcontrib)
        {
            std::cout << rel_channels.at(maxj) << ":\t" << max * 100 << "%" << std::endl;
            lists::relChannel.push_back(rel_channels.at(maxj));
            lists::relStrength.push_back(max);
        }

        max = 0;
        rel_channels.erase(rel_channels.begin() + maxj);
        rel_frac.erase(rel_frac.begin() + maxj);
    }
}

// returns the freeze-out relic density
double DT::getOmegaF(procinfos *proc, std::string ch_str, double chcontrib)
{
    double x, y;
    double omegaF;
    double xtoday = 1e8;
    vars::appr = true;
    
    lists::sig_s.clear();
	lists::tac_x.clear();
    
    //flickswitches(15., proc);
    x = secant_method(15., 15.1, 0.01, 100, proc, ch_str);
    y = 1.5 * yeq(x);
    
    vars::initialx = x;
    printf("Initial x: %.5e\n", x);

    solve_beq(xtoday, x, y, proc, ch_str);
    
    omegaF = 2.742e8 * vars::MDM * y;
    std::cout << "Omega full:\n"
              << omegaF << std::endl;

    if (chcontrib != 1)
    {
        saveChannelContr(omegaF, xtoday, chcontrib, proc);
    }
    return omegaF;
}

// returns freeze-in relic density for certain reheating temperature
double DT::getOmegaFI(double TR, procinfos *proc)
{

    double x, y;
    double xtoday = 200;
    lists::sig_s.clear();
	lists::tac_x.clear();
    x = vars::MDM / TR;
    vars::appr = false;
    printf("Initial x: %.5e\n", x);
    y = 0.;

    solve_beq(xtoday, x, y, proc);
    
    double omegaF = 2.742e8 * vars::MDM * y;
    std::cout << "Omega full:\n"
              << omegaF << std::endl;

    return omegaF;
}
