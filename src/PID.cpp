#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	Kp=0;
	Ki=0;
	Kd=0;
	//p_error=0;
    i_error=0;
    //d_error=0;
	prev_cte=0;
	
}

void PID::UpdateError(double cte) {
	
	p_error = Kp * cte;
	i_error += Ki* cte;
	d_error = Kd * (cte-prev_cte);
	prev_cte = cte;
}

double PID::TotalError() {
	return p_error + i_error + d_error;
	
}

