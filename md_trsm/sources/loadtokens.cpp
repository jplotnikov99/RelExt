///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void Model::load_tokens(){
		token1 = -(lam12*pow(cos(alpha),2)) - lam123*cos(alpha)*sin(alpha) - lam13*pow(sin(alpha),2);
		token2 = -6;
		token3 = lam;
		token4 = pow(vev,2);
		token5 = lam12*pow(cos(alpha),2) + lam123*cos(alpha)*sin(alpha) + lam13*pow(sin(alpha),2);
		token6 = -1;
		token7 = pow(lam12*pow(cos(alpha),2) + lam123*cos(alpha)*sin(alpha) + lam13*pow(sin(alpha),2),2);
		token8 = pow(lam123*cos(2*alpha) + (-lam12 + lam13)*sin(2*alpha),2);
		token9 = 1;
		token10 = 4;
		token11 = -0.5;
		token12 = AH;
		token13 = vev;
		token14 = pow(EL,2);
		token15 = pow(pow(cw,2) + pow(sw,2),2);
		token16 = 2;
		token17 = pow(cw,2);
		token18 = pow(sw,2);
		token19 = -0.25;
		token20 = GH;
		token21 = lam12 + lam13 + (lam12 - lam13)*cos(2*alpha) + lam123*sin(2*alpha);
		token22 = SUNDelta(SUNIndex(Glu3),SUNIndex(Glu4));
		token23 = ye;
		token24 = sqrt(2);
		token25 = ym;
		token26 = ytau;
		token27 = yup;
		token28 = yc;
		token29 = yt;
		token30 = ydo;
		token31 = ys;
		token32 = yb;
		token33 = -(lam123*cos(2*alpha)) + (lam12 - lam13)*sin(2*alpha);
		token34 = -3;
		token35 = lam123*cos(2*alpha) + (-lam12 + lam13)*sin(2*alpha);
		token36 = lam13*pow(cos(alpha),2) - lam123*cos(alpha)*sin(alpha) + lam12*pow(sin(alpha),2);
		token37 = -(lam13*pow(cos(alpha),2)) + lam123*cos(alpha)*sin(alpha) - lam12*pow(sin(alpha),2);
		token38 = pow(lam13*pow(cos(alpha),2) - lam123*cos(alpha)*sin(alpha) + lam12*pow(sin(alpha),2),2);
		token39 = lam12 + lam13 + (-lam12 + lam13)*cos(2*alpha) - lam123*sin(2*alpha);
	}
}
