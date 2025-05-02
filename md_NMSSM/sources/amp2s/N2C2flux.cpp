///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "../../model.hpp"
#include "utils.hpp"

double DT::N2C2h2hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mh[1].real(),MHm[1].real())*N2C2h2hpm2(cos_t, s);
}
double DT::N2C2h3hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mh[2].real(),MHm[1].real())*N2C2h3hpm2(cos_t, s);
}
double DT::N2C2h4hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mh[3].real(),MHm[1].real())*N2C2h4hpm2(cos_t, s);
}
double DT::N2C2h5hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mh[4].real(),MHm[1].real())*N2C2h5hpm2(cos_t, s);
}
double DT::N2C2h6hpm2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mh[5].real(),MHm[1].real())*N2C2h6hpm2(cos_t, s);
}
double DT::N2C2h2wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mh[1].real(),MWm.real())*N2C2h2w(cos_t, s);
}
double DT::N2C2h3wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mh[2].real(),MWm.real())*N2C2h3w(cos_t, s);
}
double DT::N2C2h4wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mh[3].real(),MWm.real())*N2C2h4w(cos_t, s);
}
double DT::N2C2h5wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mh[4].real(),MWm.real())*N2C2h5w(cos_t, s);
}
double DT::N2C2h6wfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mh[5].real(),MWm.real())*N2C2h6w(cos_t, s);
}
double DT::N2C2hpm2Afl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),MHm[1].real(),0.)*N2C2hpm2A(cos_t, s);
}
double DT::N2C2hpm2Zfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),MHm[1].real(),MZ.real())*N2C2hpm2Z(cos_t, s);
}
double DT::N2C2Awfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),0.,MWm.real())*N2C2Aw(cos_t, s);
}
double DT::N2C2Zwfl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),MZ.real(),MWm.real())*N2C2Zw(cos_t, s);
}
double DT::N2C2v1E1fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),0.,Me[0].real())*N2C2v1E1(cos_t, s);
}
double DT::N2C2v2E2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),0.,Me[1].real())*N2C2v2E2(cos_t, s);
}
double DT::N2C2v3E3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),0.,Me[2].real())*N2C2v3E3(cos_t, s);
}
double DT::N2C2u1D1fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mu[0].real(),Md[0].real())*N2C2u1D1(cos_t, s);
}
double DT::N2C2u2D2fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mu[1].real(),Md[1].real())*N2C2u2D2(cos_t, s);
}
double DT::N2C2u3D3fl(const double &cos_t, const double &s){
	using namespace PAR;
	return 2*2*flux(s, MN[1].real(),MC[1].real(),Mu[2].real(),Md[2].real())*N2C2u3D3(cos_t, s);
}
