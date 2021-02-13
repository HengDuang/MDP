double RightMotorError;
double newRightMotorRPM;
double LeftMotorError;
double newLeftMotorRPM;

double LeftPreviousMotorError;
double RightPreviousMotorError;


double AllLeftMotorError;
double AllRightMotorError;


//Left //red line
double Kp = 11.5; //10 increase to reduce spike at the start
double Ki = 0.61; //0.9 increase to pump up to able to reach desired speed
double Kd = 0.35; //increase to improve stablity and prevent overshoot from the target


//Right //blue line
double Kpr = 10.5;
double Kir = 0.6;
double Kdr = 0.35;


void ComputePID()
{
  newRightMotorRPM = (RightMotorError * Kpr) + (RightPreviousMotorError * Kdr) + (AllRightMotorError * Kir);
  newLeftMotorRPM = (LeftMotorError * Kp) + (LeftPreviousMotorError * Kd) + (AllLeftMotorError * Ki);
}
void ComputeMotorError()
{
  RightMotorError = TargetRPM - mrRPM;
  LeftMotorError = TargetRPM - mlRPM;
}

void ComputePreviousMotorError()
{
  RightPreviousMotorError = RightMotorError;
  LeftPreviousMotorError = LeftMotorError;
}
void ComputeAllPreviousMotorError()
{
  AllLeftMotorError += LeftPreviousMotorError;
  AllRightMotorError += RightPreviousMotorError;
}
