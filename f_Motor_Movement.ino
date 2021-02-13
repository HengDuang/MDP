void MoveRobotForward()
{
  
  //Compute MotorError
  ComputeMotorError();

  //Compute PID
  ComputePID();


  //StoreMotorError
  ComputePreviousMotorError();

  //SumofAllPreviousMotorError
  ComputeAllPreviousMotorError();

  //Setting Speed
  md.setM2Speed(-newRightMotorRPM);
  md.setM1Speed(-newLeftMotorRPM);

  //Printing Speed
//  Serial.print(mrRPM);
//  Serial.print(" ");
//  Serial.println(mlRPM);
}
void MoveRobotClockWise()
{
  //Compute MotorError
  ComputeMotorError();

  //Compute PID
  ComputePID();

  //StoreMotorError
  ComputePreviousMotorError();

  //SumofAllPreviousMotorError
  ComputeAllPreviousMotorError();

  //Setting Speed
  md.setM2Speed(newRightMotorRPM);
  md.setM1Speed(-1 * newLeftMotorRPM);

  //Printing Speed
//  Serial.print(mrRPM);
//  Serial.print(" ");
//  Serial.println(mlRPM);
}
void MoveRobotAntiClockWise()
{
  //Compute MotorError
  ComputeMotorError();

  //Compute PID
  ComputePID();

  //StoreMotorError
  ComputePreviousMotorError();

  //SumofAllPreviousMotorError
  ComputeAllPreviousMotorError();

  //Setting Speed
  md.setM2Speed(-1 * newRightMotorRPM);
  md.setM1Speed(newLeftMotorRPM);

  //printing Speed
//  Serial.print(mrRPM);
//  Serial.print(" ");
//  Serial.println(mlRPM);
}
void MoveRobotBackward()
{
  //Compute MotorError
  ComputeMotorError();

  //Compute PID
  ComputePID();

  //StoreMotorError
  ComputePreviousMotorError();

  //SumofAllPreviousMotorError
  
  ComputeAllPreviousMotorError();

  //Setting Speed
  md.setM2Speed(newRightMotorRPM);
  md.setM1Speed(newLeftMotorRPM);

  //Printing Speed
//  Serial.print(mrRPM);
//  Serial.print(" ");
//  Serial.println(mlRPM);
}

void RobotStop()
{
  md.setBrakes(400,400);
}
