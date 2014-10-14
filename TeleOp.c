#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Hubs,  S2, HTMotor,  HTMotor,  none,     none)
#pragma config(Hubs,  S3, HTMotor,  HTServo,  none,     none)
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

 #include "JoystickDriver.c";
    task main()
    {
         while(true)
         {
           getJoystickSettings(joystick);
         if(joystick.joy1_y1>0 && joystick.joy1_y1<1)
         {
          motor[mtr_S1_C1_1]=50;
          motor[mtr_S1_C2_1]=50;
         }
         else if(joystick.joy1_y1<0 && joystick.joy1_y1>-1)
         {
          motor[motorA]=-50;
          motor[motorB]=-50;
         }
         else if(joystick.joy1_y1>1)
         {
          motor[motorA]=100;
          motor[motorB]=100;
         }
         else if(joystick.joy1_y1<-1)
         {
          motor[motorA]=-100;
          motor[motorB]=-100;
         }
         }
     }
