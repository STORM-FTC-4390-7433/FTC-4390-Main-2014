#ifndef DRIVESYS_C
#define DRIVESYS_C

void updateDriveSys (LiftSys t, int driveRPower, int driveLPower){
	motor[t.driveR] = driveRPower;
	motor[t.driveL] = driveLPower;
	return;
}

#endif
