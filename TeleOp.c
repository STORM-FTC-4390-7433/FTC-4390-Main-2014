#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTServo)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     backLeft,      tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     backRight,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     intakeMotor,   tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorG,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     liftMotor,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     motorF,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C4_1,    pullServo,            tServoStandard)
#pragma config(Servo,  srvo_S1_C4_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define COMPETITION

#include "JoystickDriver.c"
#include "drive.h"
#include "drive.c"
//#include "lift.h"
//#include "lift.c"
#include "intake.h"
#include "intake.c"
//#include "gate.h"
//#include "gate.c"
#include "pull.c"

DriveSys drive;
//LiftSys lift;
IntakeSys intake;
//GateSys gate;
PullSys pull;
void initializeRobot(){
	drive.BackLeft = backLeft;
	drive.BackRight = backRight;
	//gate.gate = gateServo;
	//lift.lift = liftMotor;
	intake.intakeMotor = intakeMotor;
	pull.pullServo = pullServo;

	return;
}

task main() {

	initializeRobot();

	#ifdef COMPETITION
	waitForStart();
	#endif

	while(true)
  	{
       getJoystickSettings(joystick);


       //updateDriveSys (drive, 100, 100);

       updateDriveSys(drive, joystick.joy1_y1*(100.0/128.0), joystick.joy1_y2*(100.0/128.0));
    //   updateDriveSys (drive, 100, joystick.joy1_y2);

       //updateLiftSys (lift, joy2Btn(8), joy2Btn(7));
       updateIntakeSys(intake, joy1Btn(8), joy1Btn(7));
       //updateGateSys (gate, joy2Btn(6), joy2Btn(5));
			 updatePullSys(pull, joy1Btn(6), joy1Btn(5));
    }
}
