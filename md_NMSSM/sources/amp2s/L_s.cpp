#include "utils.hpp"
#include "../../model.hpp"
using namespace std;
double DT::lambda_s_e(){
	using namespace PAR;
	std::complex<double> res(0,0);
	std::complex<double> I(0,1);
	complex<double> res_higgs = 0;
	complex<double> res_squark = 0;
	int gen = 1;


	complex<double>N1 = Nh[0][0];
	complex<double>N2 = Nh[0][1];
	complex<double>N3 = Nh[0][2];
	complex<double>N4 = Nh[0][3];
	complex<double>N5 = Nh[0][4];

 
	std::complex<double>t1[3];
	std::complex<double>t3[3];
	std::complex<double>t2[3];
	
	t1[0] = -g2 * (std::conj(N2) - TTW * std::conj(N1)) * (Sh[0][0] * std::conj(N3) - Sh[0][1] *std::conj(N4));
    t2[0] = std::sqrt(2.0) * lam * (Sh[0][2] * std::conj(N3)*std::conj(N4) + std::conj(N5)*(Sh[0][1]*std::conj(N3)+ Sh[0][0]*std::conj(N4)));
    t3[0] = -sqrt(2)*kap*Sh[0][2]*std::conj(N5*N5);
	t1[1] = -g2 * (std::conj(N2) - TTW * std::conj(N1)) * (Sh[1][0] * std::conj(N3) - Sh[1][1] *std::conj(N4));
    t2[1] = std::sqrt(2.0) * lam * (Sh[1][2] * std::conj(N3)*std::conj(N4) + std::conj(N5)*(Sh[1][1]*std::conj(N3)+ Sh[1][0]*std::conj(N4)));
    t3[1] = -sqrt(2)*kap*Sh[1][2]*std::conj(N5*N5);
	t1[2] = -g2 * (std::conj(N2) - TTW * std::conj(N1)) * (Sh[2][0] * std::conj(N3) - Sh[2][1] *std::conj(N4));
    t2[2] = std::sqrt(2.0) * lam * (Sh[2][2] * std::conj(N3)*std::conj(N4) + std::conj(N5)*(Sh[2][1]*std::conj(N3)+ Sh[2][0]*std::conj(N4)));
    t3[2] = -sqrt(2)*kap*Sh[2][2]*std::conj(N5*N5);
	std::complex<double>C_HL[3];
	C_HL[0] =  (t1[0] + t2[0]) +t3[0] ;
	C_HL[1] =  (t1[1] + t2[1]) +t3[1] ;
	C_HL[2] =  (t1[2] + t2[2]) +t3[2] ;
	
	
	for(int a=0; a<3; a++){
		res_higgs -= 1./(2*mh[a]*mh[a]) * (Md[gen]/vd) * Sh[a][0]* std::real(C_HL[a]);
	}

	complex<double>CR_d[2];
	complex<double>CL_d[2];
	complex<double>CL_u[2];
	complex<double>CR_u[2];
	complex<double>cth = ZDS[0][0];
	complex<double>sth = ZDS[0][1];
	
	complex<double>msd2[2];
	complex<double>msu2[2];
		double Yd = -2/3; // Singlett Hypercharge
	double Yu = 4/3;
	double T3_d = 0.; // Singlett IsoSpin
	double Y = 1/3; // Doublett Hypercharge
	double T3_D = -1/2; // Singlet Hypercharge Down
	double T3_U = 1/2; // Singlet Hypercharge Down 
	
	int sgen = 2;
 	msd2[0] = Msd[sgen]*Msd[sgen];
	msd2[1] = Msd[sgen+1]*Msd[sgen+1];
	msu2[0] = Msu[sgen]*Msu[sgen];
	msu2[1] = Msu[sgen+1]*Msu[sgen+1];
	complex<double>mn2 = MN[0]*MN[0];

	CR_d[0] = -sqrt(2)*g2*((std::conj(N2)*T3_D + Y/2. * TTW*std::conj(N1))*cth + Md[gen]/(vd*g2) *std::conj(N3)*sth);
	CR_d[1] = -sqrt(2)*g2*((-std::conj(N2)*T3_D + Y/2. * TTW*std::conj(N1))*sth + Md[gen]/(vd*g2) *std::conj(N3)*cth);

	CL_d[0] = -sqrt(2)*g2*(Yd/2 * TTW*std::conj(N1)*sth + Md[gen]/(vd*g2) * std::conj(N3)*cth);
	CL_d[1] = -sqrt(2)*g2*(Yd/2 * TTW*std::conj(N1)*cth - Md[gen]/(vd*g2)  * std::conj(N3)*sth);

	CR_u[0] = -sqrt(2)*g2*((std::conj(N2)*T3_U + Y/2. * TTW*std::conj(N1))*cth + Mu[gen]/(vu*g2)*std::conj(N4)*sth);
	CR_u[1] = -sqrt(2)*g2*((-std::conj(N2)*T3_U + Y/2. * TTW*std::conj(N1))*sth + Mu[gen]/(vu*g2)*std::conj(N4)*cth);

	CL_u[0] = -sqrt(2)*g2*(Yu/2 * TTW*std::conj(N1)*sth + Mu[gen]/(vu*g2) * std::conj(N4)*cth);
	CL_u[1] = -sqrt(2)*g2*(Yu/2 * TTW*std::conj(N1)*cth - Mu[gen]/(vu*g2) * std::conj(N4)*sth);
	
	
	for(int a=0; a<2;a++){
		res_squark -= (1./(4.*(msd2[a]-mn2))*std::real(CR_d[a]*std::conj(CL_d[a])));
	}
	res = res_higgs + res_squark;

	return res.real();
}
