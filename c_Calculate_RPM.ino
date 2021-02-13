//Timer for RPM
unsigned long RPMTimerMR = 0;
unsigned long StartRPMTimerMR = 0;
unsigned long EndRPMTimerMR = 0;


unsigned long RPMTimerML = 0;
unsigned long StartRPMTimerML = 0;
unsigned long EndRPMTimerML = 0;


void LeftMotorCount()
{
  LeftMotorCounter++;
  if (LeftMotorCounter == 1) {
    StartRPMTimerML = micros();
  }
  else if (LeftMotorCounter == 11) {
    DistanceCounter++;
    TotalDistanceTravelled++;
    if(DistanceCounter == 48)
    {
      DistanceStop = true;
      DistanceCounter = 0;
    }
    EndRPMTimerML = micros();
    RPMTimerML = (EndRPMTimerML - StartRPMTimerML) / 10.00;
    mlRPM = calculateRPM(RPMTimerML);
    LeftMotorCounter = 0;
  }
}
void RightMotorCount()
{
  RightMotorCounter++;
  if (RightMotorCounter == 1) {
    StartRPMTimerMR = micros();
  }
  else if (RightMotorCounter == 11) {
    TurningCounter++;
    TurningCounterL++;
    if (TurningCounter == 34) // [36[+1},72[+2],108[+4],144[+4],180[+6],216[+6],252[+6],288[+7],324[+9],360[+10],396[+10],432[+11]// [90,180,270,360,450,540,600,720,810,900,990,1080]
    {
      Angle = true;
      TurningCounter = 0;
    }
    if (TurningCounterL == 32)
    {
      AngleL = true;
      TurningCounterL = 0;
    }
    EndRPMTimerMR = micros();
    RPMTimerMR = (EndRPMTimerMR - StartRPMTimerMR) / 10.00;
    mrRPM = calculateRPM(RPMTimerMR);
    RightMotorCounter = 0;
  }
}
double calculateRPM (double encoderValue) {
  if (encoderValue == 0) {
    return 0;
  }
  else {
    return (60.00 / ((encoderValue  * 562.25) / 1000000.00));
  }
}
