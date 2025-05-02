///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::N3C1h2hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mh[1].real(),MHm[1].real())*N3C1h2hpm2(cos_t, s);
}
double DT::N3C1h3hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mh[2].real(),MHm[1].real())*N3C1h3hpm2(cos_t, s);
}
double DT::N3C1h4hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mh[3].real(),MHm[1].real())*N3C1h4hpm2(cos_t, s);
}
double DT::N3C1h5hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mh[4].real(),MHm[1].real())*N3C1h5hpm2(cos_t, s);
}
double DT::N3C1h6hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mh[5].real(),MHm[1].real())*N3C1h6hpm2(cos_t, s);
}
double DT::N3C1h2wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mh[1].real(),MWm.real())*N3C1h2w(cos_t, s);
}
double DT::N3C1h3wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mh[2].real(),MWm.real())*N3C1h3w(cos_t, s);
}
double DT::N3C1h4wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mh[3].real(),MWm.real())*N3C1h4w(cos_t, s);
}
double DT::N3C1h5wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mh[4].real(),MWm.real())*N3C1h5w(cos_t, s);
}
double DT::N3C1h6wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mh[5].real(),MWm.real())*N3C1h6w(cos_t, s);
}
double DT::N3C1hpm2Afl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),MHm[1].real(),0.)*N3C1hpm2A(cos_t, s);
}
double DT::N3C1hpm2Zfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),MHm[1].real(),MZ.real())*N3C1hpm2Z(cos_t, s);
}
double DT::N3C1Awfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),0.,MWm.real())*N3C1Aw(cos_t, s);
}
double DT::N3C1Zwfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),MZ.real(),MWm.real())*N3C1Zw(cos_t, s);
}
double DT::N3C1v1E1fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),0.,Me[0].real())*N3C1v1E1(cos_t, s);
}
double DT::N3C1v2E2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),0.,Me[1].real())*N3C1v2E2(cos_t, s);
}
double DT::N3C1v3E3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),0.,Me[2].real())*N3C1v3E3(cos_t, s);
}
double DT::N3C1u1D1fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mu[0].real(),Md[0].real())*N3C1u1D1(cos_t, s);
}
double DT::N3C1u2D2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mu[1].real(),Md[1].real())*N3C1u2D2(cos_t, s);
}
double DT::N3C1u3D3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[2].real(),MC[0].real(),Mu[2].real(),Md[2].real())*N3C1u3D3(cos_t, s);
}
