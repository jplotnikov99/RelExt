#pragma once
#include <iostream>
#include <cmath>
#include <array>
#include<gsl/gsl_sf_dilog.h>
#include<gsl/gsl_sf_result.h>

using namespace std;

	double Pi = M_PI;
//############# Parameters ######################
	double alpha =0.072925610063423463;
	double CKM11 = 0.97435;
	double CKM112 = pow(CKM11, 2);
	double alphaS = 4*Pi*0.1184;
	double vs =  982.05559489445216 ;
  const double FAGS = 0.1180;
  double lambda = 1;
  double deltaE = 0.1;
  int level;
//############# masses ######################
	double mw = 80.35797;;
	double mz = 91.15348;
	double mh2= 741.50844921693283;
	double mh1= 125.09;
	double MX = 705.9961487440969 ;
//############# widths ######################
	double gammah1 =0.0040112202312828664;
	double gammah2 = 1.4571055848489756  ;
	double gammaw =  2.085;
	double gammaz = 2.4952;
  double R_MUH22 = mh2 * mh2;
  double I_MUH22 = mh2 * gammah2;
  double R_MUH12 = mh1 * mh1;
  double I_MUH12 = mh1 * gammah1;
//############# complex masses ######################
	  complex<double>MH1 =  std::sqrt(std::sqrt(R_MUH12 * R_MUH12  + I_MUH12 * I_MUH12)) *
      std::complex<double>(std::cos(0.5 * std::atan(I_MUH12 / R_MUH12)),
                           std::sin(0.5 * std::atan(I_MUH12 / R_MUH12)));
    complex<double>MH2 =  std::sqrt(std::sqrt(R_MUH22 * R_MUH22 + I_MUH22 * I_MUH22)) *
      std::complex<double>(std::cos(0.5 * std::atan(I_MUH22 / R_MUH22)),
                           std::sin(0.5 * std::atan(I_MUH22 / R_MUH22)));
    complex<double>MW  =  sqrt(complex<double>(mw*mw, gammaw*mw));
    complex<double>MZ  =  sqrt(complex<double>(mz*mz, gammaz*mz));
//############# Useful expressions ######################
	double MW4 = pow(mw,4);
	double MW2 = pow(mw,2);
	double MWr = mw;
	double DeltaE=0.1;
	const double Gmu    = 0.000011663787;
	const double EL     = 2. * std::sqrt(std::sqrt(2.)) *
                  std::sqrt(Gmu * MW2 * (1. - MW2 / (mz*mz)));
	const double GS = 1.219777963704922;
	const double ME  = 0.00051099891;
	const double MMU = 0.1056583715;
	const double Mta = 1.77682;
	const double MU  = 0.0022;
	const double MC  = 1.43141297;
	const double MD  = 0.0047;
	const double MS  = 0.095;
	const double MB  = 4.84141297;
	const double MT = 172.5;
	const double G    = 6.70861e-39;       // gravitational constant
	const double M_Pl = std::sqrt(1. / G); // Planck mass
	complex<double> v = complex<double>(246.2499473048146,3.80654215802507) ;
//############# K�llen function ######################
std::complex<double> operator+(const std::complex<double> &compl_in,
                               const int &int_in)
{
  return std::complex<double>(compl_in.real() + static_cast<double>(int_in),
                              compl_in.imag());
}
std::complex<double> operator+(const int &int_in,
                               const std::complex<double> &compl_in)
{
  return compl_in + int_in;
}

std::complex<double> operator-(const std::complex<double> &compl_in,
                               const int &int_in)
{
  return compl_in + (-int_in);
}

std::complex<double> operator-(const int &int_in,
                               const std::complex<double> &compl_in)
{
  return (-compl_in) + int_in;
}

std::complex<double> operator*(const std::complex<double> &compl_in,
                               const int &int_in)
{
  return std::complex<double>(compl_in.real() * static_cast<double>(int_in),
                              compl_in.imag() * static_cast<double>(int_in));
}

std::complex<double> operator*(const int &int_in,
                               const std::complex<double> &compl_in)
{
  return compl_in * int_in;
}

std::complex<double> operator/(const std::complex<double> &compl_in,
                               const int &int_in)
{
  return std::complex<double>(compl_in.real() / static_cast<double>(int_in),
                              compl_in.imag() / static_cast<double>(int_in));
}
std::complex<double> operator/(const int &int_in,
                               const std::complex<double> &compl_in)
{
  return std::complex<double>(static_cast<double>(int_in) * compl_in.real() /
                                  (compl_in.real() * compl_in.real() +
                                   compl_in.imag() * compl_in.imag()),
                              -static_cast<double>(int_in) * compl_in.imag() /
                                  (compl_in.real() * compl_in.real() +
                                   compl_in.imag() * compl_in.imag()));
}





double Li2(double x)
{
  const double PI  = 3.1415926535897932;
  const double P[] = {0.9999999999999999502e+0,
                      -2.6883926818565423430e+0,
                      2.6477222699473109692e+0,
                      -1.1538559607887416355e+0,
                      2.0886077795020607837e-1,
                      -1.0859777134152463084e-2};
  const double Q[] = {1.0000000000000000000e+0,
                      -2.9383926818565635485e+0,
                      3.2712093293018635389e+0,
                      -1.7076702173954289421e+0,
                      4.1596017228400603836e-1,
                      -3.9801343754084482956e-2,
                      8.2743668974466659035e-4};

  double y = 0, r = 0, s = 1;

  // transform to [0, 1/2]
  if (x < -1)
  {
    const double l = std::log(1 - x);
    y              = 1 / (1 - x);
    r              = -PI * PI / 6 + l * (0.5 * l - std::log(-x));
    s              = 1;
  }
  else if (x == -1)
  {
    return -PI * PI / 12;
  }
  else if (x < 0)
  {
    const double l = std::log1p(-x);
    y              = x / (x - 1);
    r              = -0.5 * l * l;
    s              = -1;
  }
  else if (x == 0)
  {
    return 0;
  }
  else if (x < 0.5)
  {
    y = x;
    r = 0;
    s = 1;
  }
  else if (x < 1)
  {
    y = 1 - x;
    r = PI * PI / 6 - std::log(x) * std::log1p(-x);
    s = -1;
  }
  else if (x == 1)
  {
    return PI * PI / 6;
  }
  else if (x < 2)
  {
    const double l = std::log(x);
    y              = 1 - 1 / x;
    r              = PI * PI / 6 - l * (std::log(y) + 0.5 * l);
    s              = 1;
  }
  else
  {
    const double l = std::log(x);
    y              = 1 / x;
    r              = PI * PI / 3 - 0.5 * l * l;
    s              = -1;
  }

  const double y2 = y * y;
  const double y4 = y2 * y2;
  const double p =
      P[0] + y * P[1] + y2 * (P[2] + y * P[3]) + y4 * (P[4] + y * P[5]);
  const double q = Q[0] + y * Q[1] + y2 * (Q[2] + y * Q[3]) +
                   y4 * (Q[4] + y * Q[5] + y2 * Q[6]);

  return r + s * y * p / q;
}
template <typename T> T Power(const T &base, const int &exp)
{
  if (exp > 0)
  {
    if (exp == 1) return base;
    return base * Power(base, exp - 1);
  }
  if (exp < 0)
  {
    if (exp == -1) return 1. / base;
    return 1. / base * Power(base, exp + 1);
  }
  return T(1);
}


 std::array<double,9> arr_MF = {ME,
            MMU,
            Mta,
            MD,
            MS,
            MB,
            MU,
            MC,
            MT};

  
  double Mtasq   = Power(Mta, 2);
  double Mtapow3 = Power(Mta, 3);
  double Mtapow4 = Power(Mta, 4);

 
  double MTsq   = Power(MT, 2);
  double MTpow3 = Power(MT, 3);
  double MTpow4 = Power(MT, 4);

  
  double MBsq   = Power(MB, 2);
  double MBpow3 = Power(MB, 3);
  double MBpow4 = Power(MB, 4);

 
  double MMUsq   = Power(MMU, 2);
  double MMUpow3 = Power(MMU, 3);
  double MMUpow4 = Power(MMU, 4);


  double MCsq   = Power(MC, 2);
  double MCpow3 = Power(MC, 3);
  double MCpow4 = Power(MC, 4);

  
  double MSsq   = Power(MS, 2);
  double MSpow3 = Power(MS, 3);
  double MSpow4 = Power(MS, 4);


  double MEsq   = Power(ME, 2);
  double MEpow3 = Power(ME, 3);
  double MEpow4 = Power(ME, 4);


  double MUsq   = Power(MU, 2);
  double MUpow3 = Power(MU, 3);
  double MUpow4 = Power(MU, 4);


  double MDsq   = Power(MD, 2);
  double MDpow3 = Power(MD, 3);
  double MDpow4 = Power(MD, 4);


  complex<double>MZsq    = Power(MZ, 2);
  complex<double>MZpow3  = Power(MZ, 3);
  complex<double>MZpow4  = Power(MZ, 4);
  complex<double>MZpow5  = Power(MZ, 5);
  complex<double>MZpow6  = Power(MZ, 6);
  complex<double>MZpow7  = Power(MZ, 7);
  complex<double>MZpow8  = Power(MZ, 8);
  complex<double>MZpow9  = Power(MZ, 9);
  complex<double>MZpow10 = Power(MZ, 10);

  complex<double>MWsq    = Power(MW, 2);
  complex<double>MWpow3  = Power(MW, 3);
  complex<double>MWpow4  = Power(MW, 4);
  complex<double>MWpow5  = Power(MW, 5);
  complex<double>MWpow6  = Power(MW, 6);
  complex<double>MWpow7  = Power(MW, 7);
  complex<double>MWpow8  = Power(MW, 8);
  complex<double>MWpow9  = Power(MW, 9);
  complex<double>MWpow10 = Power(MW, 10);

  complex<double>CW      = MW / MZ;
  complex<double>CWsq    = Power(CW, 2);
  complex<double>CWpow3  = Power(CW, 3);
  complex<double> CWpow4 = Power(CW, 4);
  complex<double>CWpow5  = Power(CW, 5);
  complex<double>CWpow6  = Power(CW, 6);
  complex<double>CWpow7  = Power(CW, 7);
  complex<double>CWpow8  = Power(CW, 8);
  complex<double>CWpow9  = Power(CW, 9);
  complex<double>CWpow10 = Power(CW, 10);

  complex<double>SW      = std::sqrt(1 - CW * CW);
  complex<double>SWsq    = Power(SW, 2);
  complex<double>SWpow3  = Power(SW, 3);
  complex<double>SWpow4  = Power(SW, 4);
  complex<double>SWpow5  = Power(SW, 5);
  complex<double>SWpow6  = Power(SW, 6);
  complex<double>SWpow7  = Power(SW, 7);
  complex<double>SWpow8  = Power(SW, 8);
  complex<double>SWpow9  = Power(SW, 9);
  complex<double>SWpow10 = Power(SW, 10);

  double ELsq   = Power(EL, 2);
  double ELpow3 = Power(EL, 3);
  double ELpow4 = Power(EL, 4);

  complex<double>GSsq   = Power(GS, 2);
  complex<double>GSpow3 = Power(GS, 3);
  complex<double>GSpow4 = Power(GS, 4);

  complex<double>MH1sq    = Power(MH1, 2);
  complex<double>MH1pow3  = Power(MH1, 3);
  complex<double>MH1pow4  = Power(MH1, 4);
  complex<double>MH1pow5  = Power(MH1, 5);
  complex<double>MH1pow6  = Power(MH1, 6);
  complex<double>MH1pow7  = Power(MH1, 7);
  complex<double>MH1pow8  = Power(MH1, 8);
  complex<double>MH1pow9  = Power(MH1, 9);
  complex<double>MH1pow10 = Power(MH1, 10);


  complex<double>MH2sq    = Power(MH2, 2);
  complex<double>MH2pow3  = Power(MH2, 3);
  complex<double>MH2pow4  = Power(MH2, 4);
  complex<double>MH2pow5  = Power(MH2, 5);
  complex<double>MH2pow6  = Power(MH2, 6);
  complex<double>MH2pow7  = Power(MH2, 7);
  complex<double>MH2pow8  = Power(MH2, 8);
  complex<double>MH2pow9  = Power(MH2, 9);
  complex<double>MH2pow10 = Power(MH2, 10);

  double MHX = MX;
  complex<double> MHXsq    = Power(MHX, 2);
  complex<double> MHXpow3  = Power(MHX, 3);
  complex<double>MHXpow4  = Power(MHX, 4);
  complex<double> MHXpow5  = Power(MHX, 5);
  complex<double> MHXpow6  = Power(MHX, 6);
  complex<double>MHXpow7  = Power(MHX, 7);
  complex<double> MHXpow8  = Power(MHX, 8);
  complex<double> MHXpow9  = Power(MHX, 9);
  complex<double> MHXpow10 = Power(MHX, 10);

  double ca      = std::cos(alpha);
  double casq    = Power(ca, 2);
  double capow3  = Power(ca, 3);
  double capow4  = Power(ca, 4);
  double capow5  = Power(ca, 5);
  double capow6  = Power(ca, 6);
  double capow7  = Power(ca, 7);
  double capow8  = Power(ca, 8);
  double capow9  = Power(ca, 9);
  double capow10 = Power(ca, 10);

  double sa      = std::sin(alpha);
  double sasq    = Power(sa, 2);
  double sapow3  = Power(sa, 3);
  double sapow4  = Power(sa, 4);
  double sapow5  = Power(sa, 5);
  double sapow6  = Power(sa, 6);
  double sapow7  = Power(sa, 7);
  double sapow8  = Power(sa, 8);
  double sapow9  = Power(sa, 9);
  double sapow10 = Power(sa, 10);

 
  complex<double> vsq    = Power(v, 2);
  complex<double>vpow3  = Power(v, 3);
 complex<double> vpow4  = Power(v, 4);
 complex<double>vpow5  = Power(v, 5);
  complex<double> vpow6  = Power(v, 6);
  complex<double> vpow7  = Power(v, 7);
 complex<double>vpow8  = Power(v, 8);
 complex<double> vpow9  = Power(v, 9);
  complex<double> vpow10 = Power(v, 10);

  
  double vssq    = Power(vs, 2);
  double vspow3  = Power(vs, 3);
  double vspow4  = Power(vs, 4);
  double vspow5  = Power(vs, 5);
  double vspow6  = Power(vs, 6);
  double vspow7  = Power(vs, 7);
  double vspow8  = Power(vs, 8);
  double vspow9  = Power(vs, 9);
  double vspow10 = Power(vs, 10);
 double ms_pole = 0.095;
double mc_pole = 1.4203295370482341;
double mb_pole = 4.8303295370482342;
double mt_pole = 172.5;

double simpson_eps = 1e-5;
double beps_eps = 1e-6;
double trapezoidal_eps = 1e-6;
double gauss_kronrod_eps = 1e-2;

double xtoday_FO = 1e4;
double xtoday_FI = 100;
double x_reheating = 0.0001;
double secant_eps = 0.01;
double rk4_eps = 1e-6;
size_t secant_maxiter = 100;

double vanguard_step_size = 0.5;
double descent_learning_rate = 0.1;
size_t max_N_bisections = 50;
double random_walk_rate = 0.01;
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

    static const double li2_table[201]{
        -0.8224670334241132, -0.81552588147734, -0.8085652775847698,
        -0.80158508303581, -0.7945851574777074, -0.7875653588880654,
        -0.7805255435467617, -0.7734655660072514, -0.7663852790672393,
        -0.759284533738705, -0.7521631792172618, -0.7450210628508317,
        -0.7378580301076192, -0.7306739245433601, -0.7234685877678299,
        -0.7162418594105892, -0.7089935770859439, -0.7017235763570986,
        -0.6944316906994796, -0.6871177514632061, -0.6797815878346812,
        -0.6724230267972812, -0.6650418930911146, -0.6576380091718222,
        -0.6502111951683959, -0.642761268839979, -0.6352880455316255,
        -0.6277913381289827, -0.6202709570118635, -0.6127267100066813,
        -0.6051584023377052, -0.5975658365771048, -0.5899488125937447,
        -0.582307127500691, -0.5746405756013894, -0.566948948334474,
        -0.5592320342171615, -0.5514896187871893, -0.5437214845432478,
        -0.5359274108838616, -0.5281071740446666, -0.5202605470340322,
        -0.5123872995669775, -0.5044871979973176, -0.49656000524799226,
        -0.4886054807395059, -0.4806233803164225, -0.4726134561718483,
        -0.46457545676983175, -0.456509126765613, -0.4484142069236462,
        -0.44029043403331936, -0.4321375408222911, -0.42395525586735977,
        -0.41574330350278016, -0.40750140372593496, -0.39922927210026676,
        -0.3909266196553737, -0.38259315278416334, -0.37422857313695956,
        -0.36583257751244963, -0.3574048577453542, -0.34894510059069817,
        -0.3404529876045565, -0.33192819502113846, -0.32337039362607395,
        -0.314779248625755, -0.3061544195125796, -0.29749555992593923,
        -0.288802317508783, -0.28007433375958285, -0.2713112438795188,
        -0.2625126766146897, -0.253678254093151, -0.2448075916565682,
        -0.23590029768626344, -0.22695597342342608, -0.2179742127832413,
        -0.20895460216268372, -0.199896720241705, -0.19080013777753554,
        -0.18166441739180322, -0.17248911335015626, -0.163273771334064,
        -0.154017928204449, -0.14472111175678748, -0.13538284046729487,
        -0.12600262322979322, -0.11657995908283461, -0.1071143369266316,
        -0.09760523522932155, -0.08805212172206399, -0.07845445308244316,
        -0.06881167460561727, -0.059123219862624, -0.04938851034521775,
        -0.03960695509657778, -0.029777950327186338,
        -0.019900879015136857, -0.009975110490083544, 0.,
        0.010025111740139104, 0.020100899018693216, 0.030228051617706853,
        0.04040727532433833, 0.050639292464496076, 0.06092484245988503,
        0.07126468240974464, 0.08165958769864333, 0.09211035263178641,
        0.10261779109939119, 0.11318273727179025, 0.12380604632703615,
        0.13448859521290676, 0.1452312834453412, 0.15603503394548324,
        0.166900793917664, 0.17782953577082802, 0.18882225808608577,
        0.19987998663328557, 0.2110037754397047, 0.2221947079142068,
        0.23345389803046374, 0.24478249157312734, 0.2561816674511429,
        0.2676526390827326, 0.27919665585694775, 0.2908150046770919,
        0.30250901159176047, 0.3142800435197315, 0.3261295100754762,
        0.33805886550265063, 0.35006961072357856, 0.3621632955134562,
        0.37434152080880645, 0.3866059411605866, 0.3989582673433339,
        0.4114002691328175, 0.4239337782658715, 0.4365606915974295,
        0.4492829744712819, 0.46210266432275626, 0.47502187453340394,
        0.4880427985598766, 0.5011677143615624, 0.5143989891542119,
        0.5277390845198059, 0.5411905619063263, 0.5547560885549614,
        0.5684384438966669, 0.5822405264650127, 0.5961653613779506,
        0.6102161084476865, 0.6243960709853216, 0.6387087053755842,
        0.6531576315069019, 0.6677466441536057, 0.6824797254204211,
        0.6973610583749819, 0.7123950420122819, 0.7275863077163336,
        0.7429397374093822, 0.7584604836086882, 0.7741539916460525,
        0.7900260243471349, 0.806082689517724, 0.8223304706443282,
        0.8387762612891729, 0.8554274037479977, 0.8722917326468025,
        0.8893776242860387, 0.9066940527042101, 0.9242506536361259,
        0.9420577977956072, 0.9601266752335169, 0.9784693929303062,
        0.9970990883058104, 1.0160300620066374, 1.0352779342170135,
        1.0548598299086689, 1.0747946000082484, 1.0951030875753942,
        1.1158084509851358, 1.1369365601467012, 1.1585164875073104,
        1.1805811238302555, 1.2031679608604189, 1.2263201012378304,
        1.2500875841992622, 1.2745291604164142, 1.2997147230049588,
        1.3257287277346907, 1.352675161043712, 1.3806850411302798,
        1.4099283004640202, 1.4406337969700393, 1.4731258602397368,
        1.507899040678907, 1.5457997120314657, 1.5886254480763753,
        1.6449340668482264
	};