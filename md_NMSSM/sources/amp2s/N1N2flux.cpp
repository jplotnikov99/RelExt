///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::N1N2h2h2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[1].real(),Mh[1].real())*N1N2h2h2(cos_t, s);
}
double DT::N1N2h2h3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[1].real(),Mh[2].real())*N1N2h2h3(cos_t, s);
}
double DT::N1N2h2h4fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[1].real(),Mh[3].real())*N1N2h2h4(cos_t, s);
}
double DT::N1N2h2h5fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[1].real(),Mh[4].real())*N1N2h2h5(cos_t, s);
}
double DT::N1N2h2h6fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[1].real(),Mh[5].real())*N1N2h2h6(cos_t, s);
}
double DT::N1N2h3h3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[2].real(),Mh[2].real())*N1N2h3h3(cos_t, s);
}
double DT::N1N2h3h4fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[2].real(),Mh[3].real())*N1N2h3h4(cos_t, s);
}
double DT::N1N2h3h5fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[2].real(),Mh[4].real())*N1N2h3h5(cos_t, s);
}
double DT::N1N2h3h6fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[2].real(),Mh[5].real())*N1N2h3h6(cos_t, s);
}
double DT::N1N2h4h4fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[3].real(),Mh[3].real())*N1N2h4h4(cos_t, s);
}
double DT::N1N2h4h5fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[3].real(),Mh[4].real())*N1N2h4h5(cos_t, s);
}
double DT::N1N2h4h6fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[3].real(),Mh[5].real())*N1N2h4h6(cos_t, s);
}
double DT::N1N2h5h5fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[4].real(),Mh[4].real())*N1N2h5h5(cos_t, s);
}
double DT::N1N2h5h6fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[4].real(),Mh[5].real())*N1N2h5h6(cos_t, s);
}
double DT::N1N2h6h6fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[5].real(),Mh[5].real())*N1N2h6h6(cos_t, s);
}
double DT::N1N2hpm2Hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),MHm[1].real(),MHm[1].real())*N1N2hpm2Hpm2(cos_t, s);
}
double DT::N1N2h2Zfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[1].real(),MZ.real())*N1N2h2Z(cos_t, s);
}
double DT::N1N2h3Zfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[2].real(),MZ.real())*N1N2h3Z(cos_t, s);
}
double DT::N1N2h4Zfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[3].real(),MZ.real())*N1N2h4Z(cos_t, s);
}
double DT::N1N2h5Zfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[4].real(),MZ.real())*N1N2h5Z(cos_t, s);
}
double DT::N1N2h6Zfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mh[5].real(),MZ.real())*N1N2h6Z(cos_t, s);
}
double DT::N1N2hpm2Wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),MHm[1].real(),MWm.real())*N1N2hpm2W(cos_t, s);
}
double DT::N1N2ZZfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),MZ.real(),MZ.real())*N1N2ZZ(cos_t, s);
}
double DT::N1N2wWfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),MWm.real(),MWm.real())*N1N2wW(cos_t, s);
}
double DT::N1N2V1v1fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),0.,0.)*N1N2V1v1(cos_t, s);
}
double DT::N1N2V2v2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),0.,0.)*N1N2V2v2(cos_t, s);
}
double DT::N1N2V3v3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),0.,0.)*N1N2V3v3(cos_t, s);
}
double DT::N1N2E1e1fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Me[0].real(),Me[0].real())*N1N2E1e1(cos_t, s);
}
double DT::N1N2E2e2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Me[1].real(),Me[1].real())*N1N2E2e2(cos_t, s);
}
double DT::N1N2E3e3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Me[2].real(),Me[2].real())*N1N2E3e3(cos_t, s);
}
double DT::N1N2U1u1fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mu[0].real(),Mu[0].real())*N1N2U1u1(cos_t, s);
}
double DT::N1N2U2u2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mu[1].real(),Mu[1].real())*N1N2U2u2(cos_t, s);
}
double DT::N1N2U3u3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Mu[2].real(),Mu[2].real())*N1N2U3u3(cos_t, s);
}
double DT::N1N2D1d1fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Md[0].real(),Md[0].real())*N1N2D1d1(cos_t, s);
}
double DT::N1N2D2d2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Md[1].real(),Md[1].real())*N1N2D2d2(cos_t, s);
}
double DT::N1N2D3d3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*flux(s, MN[0].real(),MN[1].real(),Md[2].real(),Md[2].real())*N1N2D3d3(cos_t, s);
}
