#ifndef LIFTSYS_C
#define LIFTSYS_C

void updateIntakeSys (LiftSys t, int liftMotorRPower, int liftMotorLPower){
	motor[t.liftMotorR] = liftMotorRPower;
	motor[t.liftMotorL] = liftMotorLPower;
	return;
}

#endif
