#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Hubs,  S2, HTMotor,  HTMotor,  none,     none)
#pragma config(Hubs,  S3, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorI2CMuxController)
#pragma config(Sensor, S3,     ,               sensorI2CMuxController)
#pragma config(Motor,  motorA,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorTetrix, openLoop, driveLeft)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, openLoop, driveRight)
#pragma config(Motor,  mtr_S1_C2_1,     motorF,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorG,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_1,     motorH,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_2,     motorI,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C2_1,     motorJ,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C2_2,     motorK,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S3_C1_1,     motorL,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S3_C1_2,     motorM,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S3_C2_1,    servo1,               tServoStandard)
#pragma config(Servo,  srvo_S3_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S3_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S3_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S3_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S3_C2_6,    servo6,               tServoNone)

       #include "JoystickDriver.c";
    task main()
    {
    	while(true)
    	{
    		getJoystickSettings(joystick);
    	if(joy1Btn(8) ==  1)

    	{
    		motor[mtr_S3_C1_1] = 100;
    	}
    	else if(joy1Btn(7) == 1)
    	{
    		motor[mtr_S3_C1_1] = -100;
    	}
    }
    }
