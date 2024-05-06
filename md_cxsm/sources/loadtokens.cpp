///////////////////CODE GENERATED VIA MATHEMATICA///////////////////


#include "general_model.hpp"
#include "../model.hpp"

namespace DT{
	void Model::load_tokens(){
		token1 = -1;
		token2 = sin(alpha);
		token3 = 2*(MH - MS1)*(MH + MS1)*svev*pow(cos(alpha),3) + vev*(pow(MH,2) + pow(MS1,2) + (-pow(MH,2) + pow(MS1,2))*cos(2*alpha))*sin(alpha);
		token4 = -12;
		token5 = pow(MH,4);
		token6 = svev*pow(cos(alpha),3) + vev*pow(sin(alpha),3);
		token7 = pow(MS1,2);
		token8 = 2*pow(MH,2) + pow(MS1,2);
		token9 = pow(cos(alpha),2);
		token10 = svev*cos(alpha) - vev*sin(alpha);
		token11 = pow(sin(alpha),2);
		token12 = 2;
		token13 = pow(svev,2);
		token14 = vev;
		token15 = 4;
		token16 = cos(alpha);
		token17 = -((pow(MH,2) + pow(MS1,2))*vev) + (MH - MS1)*(MH + MS1)*(vev*cos(2*alpha) + svev*sin(2*alpha));
		token18 = pow(MH,2);
		token19 = pow(MH,2) + 2*pow(MS1,2);
		token20 = vev*cos(alpha) + svev*sin(alpha);
		token21 = vev*cos(alpha)*(pow(MH,2) + pow(MS1,2) + (-pow(MH,2) + pow(MS1,2))*cos(2*alpha)) + 2*(MH - MS1)*(MH + MS1)*svev*pow(sin(alpha),3);
		token22 = 6;
		token23 = pow(MS1,4);
		token24 = -(vev*pow(cos(alpha),3)) + svev*pow(sin(alpha),3);
		token25 = pow(EL,2);
		token26 = pow(pow(cw,2) + pow(sw,2),2);
		token27 = pow(cw,2);
		token28 = svev;
		token29 = pow(sw,2);
		token30 = ye;
		token31 = sqrt(2);
		token32 = ym;
		token33 = ytau;
		token34 = yup;
		token35 = yc;
		token36 = yt;
		token37 = ydo;
		token38 = ys;
		token39 = yb;
	}
}
