

//Movement for Robot
enum StateMode {Step1 , Step2 , Step3, Step4, Step5, Step6,Step7,Step8,Step9,Step10,Step11,Step12,Step13 , Stop}; //go forward
//Switch Cases for Robot Movement
uint8_t State = Step1;
//char Directions ;
boolean Step2Check = false;
boolean Step3Check = false;

void ObstaclesAdvoidance(double Distance, double ForwardL , double ForwardR)
{
  switch (State)
  {
    case Step1: //go straight till it hit obstacle
      TargetRPM = 100;
      MoveRobotForward();
      if (ForwardL <= 10 || ForwardR <= 10 || Distance <=10)
      {
        RobotStop();
        test = TotalDistanceTravelled;
        TotalDistanceTravelled =0;
        State = Step2;
        delay(1000);
      }
      break;

    case Step2: //turn right

      TargetRPM = 120;
      if (Step2Check == false)
      {
        RobotStop();
        LeftMotorCounter = 0;
        RightMotorCounter = 0;
        TurningCounter = 0;
        TurningCounterL = 0;
        Angle = false;
        Step2Check = true;
      }
      MoveRobotClockWise();
      if (Angle == true)
      {
        RightMotorCounter = 0;
        LeftMotorCounter = 0;
        RightPreviousMotorError = RightMotorError;
        LeftPreviousMotorError = LeftMotorError;
        Angle = false;
        Step2Check = false;
        Step3Check = false;
        RobotStop();
        State = Step3;
        delay(1000);
      }
      break;
    case Step3: // go straight one grid
      if (Step3Check == false)
      {
        RobotStop();
        LeftMotorCounter = 0;
        RightMotorCounter = 0;
        DistanceCounter = 0;
        DistanceStop = false;
        Step3Check = true;
      }
      TargetRPM = 100;
      MoveRobotForward();
      if (DistanceStop == true)
      {
        RightMotorCounter = 0;
        LeftMotorCounter = 0;
        RightMotorError = 0;
        LeftMotorError = 0;
        RightPreviousMotorError = RightMotorError;
        LeftPreviousMotorError = LeftMotorError;
        RobotStop();
        State = Step4;
        Step2Check = false;
        Step3Check = false;
        delay(1000);
      }
      break;
    case Step4: // turn left
     TargetRPM = 130;
      if (Step2Check == false)
      {
        RobotStop();
        LeftMotorCounter = 0;
        RightMotorCounter = 0;
        TurningCounter = 0;
        TurningCounterL =0;
        AngleL = false;
        Angle = false;
        Step2Check = true;
      }
      MoveRobotAntiClockWise();
      if (AngleL == true)
      {
        RightMotorCounter = 0;
        LeftMotorCounter = 0;
        RightPreviousMotorError = RightMotorError;
        LeftPreviousMotorError = LeftMotorError;
        AngleL = false;
        Step2Check = false;
        Step3Check = false;
        RobotStop();
        State = Step5;
        delay(1000);
      }
      break;

    case Step5: //go straight one grid
      if (Step3Check == false)
      {
        RobotStop();
        RightMotorCounter = 0;
        LeftMotorCounter = 0;
        RightMotorError = 0;
        LeftMotorError = 0;
        RightPreviousMotorError = RightMotorError;
        LeftPreviousMotorError = LeftMotorError;
        DistanceCounter = 0;
        DistanceStop = false;
        Step3Check = true;
      }
      TargetRPM = 90;
      MoveRobotForward();
      if (DistanceStop == true)
      {
        RightMotorCounter = 0;
        LeftMotorCounter = 0;
        RightMotorError = 0;
        LeftMotorError = 0;
        RightPreviousMotorError = RightMotorError;
        LeftPreviousMotorError = LeftMotorError;
        RobotStop();
        State = Step6;
        Step2Check = false;
        Step3Check = false;
        delay(1000);
      }
      break;
     case Step6: //go straight another grid robot should be straight after the box
      if (Step3Check == false)
      {
        RobotStop();
        RightMotorCounter = 0;
        LeftMotorCounter = 0;
        RightMotorError = 0;
        LeftMotorError = 0;
        RightPreviousMotorError = RightMotorError;
        LeftPreviousMotorError = LeftMotorError;
        DistanceCounter = 0;
        DistanceStop = false;
        Step3Check = true;
      }
      TargetRPM = 90;
      MoveRobotForward();
      if (DistanceStop == true)
      {
        RightMotorCounter = 0;
        LeftMotorCounter = 0;
        RightMotorError = 0;
        LeftMotorError = 0;
        RightPreviousMotorError = RightMotorError;
        LeftPreviousMotorError = LeftMotorError;
        RobotStop();
        State = Step7;
        Step2Check = false;
        Step3Check = false;
        delay(1000);
      }
      break;
     case Step7:
     TargetRPM = 120;
      if (Step2Check == false)
      {
        RobotStop();
        LeftMotorCounter = 0;
        RightMotorCounter = 0;
        TurningCounter = 0;
        TurningCounterL =0;
        AngleL = false;
        Angle = false;
        Step2Check = true;
      }
      MoveRobotAntiClockWise();
      if (AngleL == true)
      {
        RightMotorCounter = 0;
        LeftMotorCounter = 0;
        RightPreviousMotorError = RightMotorError;
        LeftPreviousMotorError = LeftMotorError;
        AngleL = false;
        Step2Check = false;
        Step3Check = false;
        RobotStop();
        State = Step8;
        delay(1000);
      }
      break;

      case Step8:
      if (Step3Check == false)
      {
        RobotStop();
        LeftMotorCounter = 0;
        RightMotorCounter = 0;
        DistanceCounter = 0;
        DistanceStop = false;
        Step3Check = true;
      }
      TargetRPM = 100;
      MoveRobotForward();
      if (DistanceStop == true)
      {
        RightMotorCounter = 0;
        LeftMotorCounter = 0;
        RightMotorError = 0;
        LeftMotorError = 0;
        RightPreviousMotorError = RightMotorError;
        LeftPreviousMotorError = LeftMotorError;
        RobotStop();
        State = Step9;
        Step2Check = false;
        Step3Check = false;
        delay(1000);
      }
      break;

      case Step9:
      TargetRPM = 120;
      if (Step2Check == false)
      {
        RobotStop();
        LeftMotorCounter = 0;
        RightMotorCounter = 0;
        TurningCounter = 0;
        TurningCounterL= 0;
        Angle = false;
        Step2Check = true;
      }
      MoveRobotClockWise();
      if (Angle == true)
      {
        RightMotorCounter = 0;
        LeftMotorCounter = 0;
        RightPreviousMotorError = RightMotorError;
        LeftPreviousMotorError = LeftMotorError;
        Angle = false;
        Step2Check = false;
        Step3Check = false;
        RobotStop();
        State = Step10;
        TotalDistanceTravelled =0;
        test1 = 350 - test;
        delay(1000);
      }
      break;

      case Step10:
      MoveRobotForward();
      if(TotalDistanceTravelled == test1)
      {
        RobotStop();
        State = Step11;
        delay(1000);
      }
      break;
      case Step11:
      RobotStop();
//      
      
      break;



  }
}
