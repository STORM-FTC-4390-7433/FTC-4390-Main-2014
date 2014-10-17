#ifndef DRIVESYS_C
#define DRIVESYS_C

void updateDriveSys (DriveSys t, int LeftMotorPower, int RightMotorPower){

if(LeftMotorPower > 100){
	LeftMotorPower = 100;}

if(LeftMotorPower < -100){
	LeftMotorPower = -100;}

if(RightMotorPower > 100){
	RightMotorPower = 100;}

if(RightMotorPower < -100){
	RightMotorPower = -100;}

motor[t.backLeft] = LeftMotorPower;
	motor[t.backRight] = RightMotorPower;


	return;
}

#endif
