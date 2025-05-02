///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::N3N3h2h2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[1].real(),Mh[1].real())*N3N3h2h2(cos_t, s);
}
double DT::N3N3h2h3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[1].real(),Mh[2].real())*N3N3h2h3(cos_t, s);
}
double DT::N3N3h2h4fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[1].real(),Mh[3].real())*N3N3h2h4(cos_t, s);
}
double DT::N3N3h2h5fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[1].real(),Mh[4].real())*N3N3h2h5(cos_t, s);
}
double DT::N3N3h2h6fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[1].real(),Mh[5].real())*N3N3h2h6(cos_t, s);
}
double DT::N3N3h3h3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[2].real(),Mh[2].real())*N3N3h3h3(cos_t, s);
}
double DT::N3N3h3h4fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[2].real(),Mh[3].real())*N3N3h3h4(cos_t, s);
}
double DT::N3N3h3h5fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[2].real(),Mh[4].real())*N3N3h3h5(cos_t, s);
}
double DT::N3N3h3h6fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[2].real(),Mh[5].real())*N3N3h3h6(cos_t, s);
}
double DT::N3N3h4h4fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[3].real(),Mh[3].real())*N3N3h4h4(cos_t, s);
}
double DT::N3N3h4h5fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[3].real(),Mh[4].real())*N3N3h4h5(cos_t, s);
}
double DT::N3N3h4h6fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[3].real(),Mh[5].real())*N3N3h4h6(cos_t, s);
}
double DT::N3N3h5h5fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[4].real(),Mh[4].real())*N3N3h5h5(cos_t, s);
}
double DT::N3N3h5h6fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[4].real(),Mh[5].real())*N3N3h5h6(cos_t, s);
}
double DT::N3N3h6h6fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[5].real(),Mh[5].real())*N3N3h6h6(cos_t, s);
}
double DT::N3N3hpm2Hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),MHm[1].real(),MHm[1].real())*N3N3hpm2Hpm2(cos_t, s);
}
double DT::N3N3h2Zfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[1].real(),MZ.real())*N3N3h2Z(cos_t, s);
}
double DT::N3N3h3Zfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[2].real(),MZ.real())*N3N3h3Z(cos_t, s);
}
double DT::N3N3h4Zfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[3].real(),MZ.real())*N3N3h4Z(cos_t, s);
}
double DT::N3N3h5Zfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[4].real(),MZ.real())*N3N3h5Z(cos_t, s);
}
double DT::N3N3h6Zfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mh[5].real(),MZ.real())*N3N3h6Z(cos_t, s);
}
double DT::N3N3hpm2Wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),MHm[1].real(),MWm.real())*N3N3hpm2W(cos_t, s);
}
double DT::N3N3ZZfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),MZ.real(),MZ.real())*N3N3ZZ(cos_t, s);
}
double DT::N3N3wWfl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),MWm.real(),MWm.real())*N3N3wW(cos_t, s);
}
double DT::N3N3V1v1fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),0.,0.)*N3N3V1v1(cos_t, s);
}
double DT::N3N3V2v2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),0.,0.)*N3N3V2v2(cos_t, s);
}
double DT::N3N3V3v3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),0.,0.)*N3N3V3v3(cos_t, s);
}
double DT::N3N3E1e1fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Me[0].real(),Me[0].real())*N3N3E1e1(cos_t, s);
}
double DT::N3N3E2e2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Me[1].real(),Me[1].real())*N3N3E2e2(cos_t, s);
}
double DT::N3N3E3e3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Me[2].real(),Me[2].real())*N3N3E3e3(cos_t, s);
}
double DT::N3N3U1u1fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mu[0].real(),Mu[0].real())*N3N3U1u1(cos_t, s);
}
double DT::N3N3U2u2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mu[1].real(),Mu[1].real())*N3N3U2u2(cos_t, s);
}
double DT::N3N3U3u3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Mu[2].real(),Mu[2].real())*N3N3U3u3(cos_t, s);
}
double DT::N3N3D1d1fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Md[0].real(),Md[0].real())*N3N3D1d1(cos_t, s);
}
double DT::N3N3D2d2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Md[1].real(),Md[1].real())*N3N3D2d2(cos_t, s);
}
double DT::N3N3D3d3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return flux(s, MN[2].real(),MN[2].real(),Md[2].real(),Md[2].real())*N3N3D3d3(cos_t, s);
}
