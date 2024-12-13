#pragma once
#include <iostream>
#include <map>

namespace DT {
// SM parameters
extern double ms_pole;
extern double mc_pole;
extern double mb_pole;
extern double mt_pole;

// TAC parameters
extern double theta_eps;
extern double beps_eps;
extern double peak_eps;
extern double gauss_kronrod_eps;

// Beq solver parameters
extern double xtoday_FO;
extern double xtoday_FI;
extern double x_reheating;
extern double secant_eps;
extern double secant_maxiter;
extern double dopr_eps;
extern double rk4_y_factor;

// parameter search parameters
extern size_t N_bins;
extern size_t N_best;
extern double p_random;
extern double vanguard_step_size;
extern double descent_learning_rate;
extern double max_N_bisections;
extern double random_walk_rate;

static const double kronx_15[15] = {
    0.991455371120812639206854697526329,  0.949107912342758524526189684047851,
    0.864864423359769072789712788640926,  0.741531185599394439863864773280788,
    0.586087235467691130294144838258730,  0.405845151377397166906606412076961,
    0.207784955007898467600689403773245,  0.000000000000000000000000000000000,
    -0.207784955007898467600689403773245, -0.405845151377397166906606412076961,
    -0.586087235467691130294144838258730, -0.741531185599394439863864773280788,
    -0.864864423359769072789712788640926, -0.949107912342758524526189684047851,
    -0.991455371120812639206854697526329};

// Kronrod abisscas [-1,1] intervall
// 61 point gauss kronrod
static const double kronx_61[31] = {
    0.999484410050490637571325895705811, 0.996893484074649540271630050918695,
    0.991630996870404594858628366109486, 0.983668123279747209970032581605663,
    0.973116322501126268374693868423707, 0.960021864968307512216871025581798,
    0.944374444748559979415831324037439, 0.926200047429274325879324277080474,
    0.905573307699907798546522558925958, 0.882560535792052681543116462530226,
    0.857205233546061098958658510658944, 0.829565762382768397442898119732502,
    0.799727835821839083013668942322683, 0.767777432104826194917977340974503,
    0.733790062453226804726171131369528, 0.697850494793315796932292388026640,
    0.660061064126626961370053668149271, 0.620526182989242861140477556431189,
    0.579345235826361691756024932172540, 0.536624148142019899264169793311073,
    0.492480467861778574993693061207709, 0.447033769538089176780609900322854,
    0.400401254830394392535476211542661, 0.352704725530878113471037207089374,
    0.304073202273625077372677107199257, 0.254636926167889846439805129817805,
    0.204525116682309891438957671002025, 0.153869913608583546963794672743256,
    0.102806937966737030147096751318001, 0.051471842555317695833025213166723,
    0.000000000000000000000000000000000,
};

static const double wkron_61[31] = {
    0.001389013698677007624551591226760, 0.003890461127099884051267201844516,
    0.006630703915931292173319826369750, 0.009273279659517763428441146892024,
    0.011823015253496341742232898853251, 0.014369729507045804812451432443580,
    0.016920889189053272627572289420322, 0.019414141193942381173408951050128,
    0.021828035821609192297167485738339, 0.024191162078080601365686370725232,
    0.026509954882333101610601709335075, 0.028754048765041292843978785354334,
    0.030907257562387762472884252943092, 0.032981447057483726031814191016854,
    0.034979338028060024137499670731468, 0.036882364651821229223911065617136,
    0.038678945624727592950348651532281, 0.040374538951535959111995279752468,
    0.041969810215164246147147541285970, 0.043452539701356069316831728117073,
    0.044814800133162663192355551616723, 0.046059238271006988116271735559374,
    0.047185546569299153945261478181099, 0.048185861757087129140779492298305,
    0.049055434555029778887528165367238, 0.049795683427074206357811569379942,
    0.050405921402782346840893085653585, 0.050881795898749606492297473049805,
    0.051221547849258772170656282604944, 0.051426128537459025933862879215781,
    0.051494729429451567558340433647099};

/* weights of the 30-point gauss rule */
static const double wgauss_30[15] = 
    {0.007968192496166605615465883474674, 0.018466468311090959142302131912047,
     0.028784707883323369349719179611292, 0.038799192569627049596801936446348,
     0.048402672830594052902938140422808, 0.057493156217619066481721689402056,
     0.065974229882180495128128515115962, 0.073755974737705206268243850022191,
     0.080755895229420215354694938460530, 0.086899787201082979802387530715126,
     0.092122522237786128717632707087619, 0.096368737174644259639468626351810,
     0.099593420586795267062780282103569, 0.101762389748405504596428952168554,
     0.102852652893558840341285636705415};

static const double li2_table[201] = {-0.8224670334241132,
                                      -0.81552588147734,
                                      -0.8085652775847698,
                                      -0.80158508303581,
                                      -0.7945851574777074,
                                      -0.7875653588880654,
                                      -0.7805255435467617,
                                      -0.7734655660072514,
                                      -0.7663852790672393,
                                      -0.759284533738705,
                                      -0.7521631792172618,
                                      -0.7450210628508317,
                                      -0.7378580301076192,
                                      -0.7306739245433601,
                                      -0.7234685877678299,
                                      -0.7162418594105892,
                                      -0.7089935770859439,
                                      -0.7017235763570986,
                                      -0.6944316906994796,
                                      -0.6871177514632061,
                                      -0.6797815878346812,
                                      -0.6724230267972812,
                                      -0.6650418930911146,
                                      -0.6576380091718222,
                                      -0.6502111951683959,
                                      -0.642761268839979,
                                      -0.6352880455316255,
                                      -0.6277913381289827,
                                      -0.6202709570118635,
                                      -0.6127267100066813,
                                      -0.6051584023377052,
                                      -0.5975658365771048,
                                      -0.5899488125937447,
                                      -0.582307127500691,
                                      -0.5746405756013894,
                                      -0.566948948334474,
                                      -0.5592320342171615,
                                      -0.5514896187871893,
                                      -0.5437214845432478,
                                      -0.5359274108838616,
                                      -0.5281071740446666,
                                      -0.5202605470340322,
                                      -0.5123872995669775,
                                      -0.5044871979973176,
                                      -0.49656000524799226,
                                      -0.4886054807395059,
                                      -0.4806233803164225,
                                      -0.4726134561718483,
                                      -0.46457545676983175,
                                      -0.456509126765613,
                                      -0.4484142069236462,
                                      -0.44029043403331936,
                                      -0.4321375408222911,
                                      -0.42395525586735977,
                                      -0.41574330350278016,
                                      -0.40750140372593496,
                                      -0.39922927210026676,
                                      -0.3909266196553737,
                                      -0.38259315278416334,
                                      -0.37422857313695956,
                                      -0.36583257751244963,
                                      -0.3574048577453542,
                                      -0.34894510059069817,
                                      -0.3404529876045565,
                                      -0.33192819502113846,
                                      -0.32337039362607395,
                                      -0.314779248625755,
                                      -0.3061544195125796,
                                      -0.29749555992593923,
                                      -0.288802317508783,
                                      -0.28007433375958285,
                                      -0.2713112438795188,
                                      -0.2625126766146897,
                                      -0.253678254093151,
                                      -0.2448075916565682,
                                      -0.23590029768626344,
                                      -0.22695597342342608,
                                      -0.2179742127832413,
                                      -0.20895460216268372,
                                      -0.199896720241705,
                                      -0.19080013777753554,
                                      -0.18166441739180322,
                                      -0.17248911335015626,
                                      -0.163273771334064,
                                      -0.154017928204449,
                                      -0.14472111175678748,
                                      -0.13538284046729487,
                                      -0.12600262322979322,
                                      -0.11657995908283461,
                                      -0.1071143369266316,
                                      -0.09760523522932155,
                                      -0.08805212172206399,
                                      -0.07845445308244316,
                                      -0.06881167460561727,
                                      -0.059123219862624,
                                      -0.04938851034521775,
                                      -0.03960695509657778,
                                      -0.029777950327186338,
                                      -0.019900879015136857,
                                      -0.009975110490083544,
                                      0.,
                                      0.010025111740139104,
                                      0.020100899018693216,
                                      0.030228051617706853,
                                      0.04040727532433833,
                                      0.050639292464496076,
                                      0.06092484245988503,
                                      0.07126468240974464,
                                      0.08165958769864333,
                                      0.09211035263178641,
                                      0.10261779109939119,
                                      0.11318273727179025,
                                      0.12380604632703615,
                                      0.13448859521290676,
                                      0.1452312834453412,
                                      0.15603503394548324,
                                      0.166900793917664,
                                      0.17782953577082802,
                                      0.18882225808608577,
                                      0.19987998663328557,
                                      0.2110037754397047,
                                      0.2221947079142068,
                                      0.23345389803046374,
                                      0.24478249157312734,
                                      0.2561816674511429,
                                      0.2676526390827326,
                                      0.27919665585694775,
                                      0.2908150046770919,
                                      0.30250901159176047,
                                      0.3142800435197315,
                                      0.3261295100754762,
                                      0.33805886550265063,
                                      0.35006961072357856,
                                      0.3621632955134562,
                                      0.37434152080880645,
                                      0.3866059411605866,
                                      0.3989582673433339,
                                      0.4114002691328175,
                                      0.4239337782658715,
                                      0.4365606915974295,
                                      0.4492829744712819,
                                      0.46210266432275626,
                                      0.47502187453340394,
                                      0.4880427985598766,
                                      0.5011677143615624,
                                      0.5143989891542119,
                                      0.5277390845198059,
                                      0.5411905619063263,
                                      0.5547560885549614,
                                      0.5684384438966669,
                                      0.5822405264650127,
                                      0.5961653613779506,
                                      0.6102161084476865,
                                      0.6243960709853216,
                                      0.6387087053755842,
                                      0.6531576315069019,
                                      0.6677466441536057,
                                      0.6824797254204211,
                                      0.6973610583749819,
                                      0.7123950420122819,
                                      0.7275863077163336,
                                      0.7429397374093822,
                                      0.7584604836086882,
                                      0.7741539916460525,
                                      0.7900260243471349,
                                      0.806082689517724,
                                      0.8223304706443282,
                                      0.8387762612891729,
                                      0.8554274037479977,
                                      0.8722917326468025,
                                      0.8893776242860387,
                                      0.9066940527042101,
                                      0.9242506536361259,
                                      0.9420577977956072,
                                      0.9601266752335169,
                                      0.9784693929303062,
                                      0.9970990883058104,
                                      1.0160300620066374,
                                      1.0352779342170135,
                                      1.0548598299086689,
                                      1.0747946000082484,
                                      1.0951030875753942,
                                      1.1158084509851358,
                                      1.1369365601467012,
                                      1.1585164875073104,
                                      1.1805811238302555,
                                      1.2031679608604189,
                                      1.2263201012378304,
                                      1.2500875841992622,
                                      1.2745291604164142,
                                      1.2997147230049588,
                                      1.3257287277346907,
                                      1.352675161043712,
                                      1.3806850411302798,
                                      1.4099283004640202,
                                      1.4406337969700393,
                                      1.4731258602397368,
                                      1.507899040678907,
                                      1.5457997120314657,
                                      1.5886254480763753,
                                      1.6449340668482264

};
}  // namespace DT
