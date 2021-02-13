double FrontLeftSensorGradient = 0.00009970086809307146;
double FrontLeftSensorConstant = 0.0069877416894059425;

double FrontRightSensorGradient = 0.00009474947099698279;
double FrontRightSensorConstant = 0.008744034252092175;

double LeftLongSensorGradient = 0.00005906753070398123;
double LeftLongSensorConstant = 0.0018207458851631705;

double RightLongSensorGradient = 0.00005927360258001428;
double RightLongSensorConstant = 0.0013105855804162359;

double LeftShortSensorGradient = 0.00009553611726362321;
double LeftShortSensorConstant = 0.007772562954454363;

//need recalibrate left long sensor
double CalibrateFrontLeftShortSensor()
{
  double M = 1 / FrontLeftSensorGradient;
  double q = FrontLeftSensorConstant / FrontLeftSensorGradient;
  double Output = (M / (analogRead(A0) + q)) - 8;
  if(Output <11)
  {
    return 10;
  }
  else if(Output <= 23)
  {
    return 20;
  }
  else if(Output <33)
  {
    return 30;
  }
  else if(Output < 43)
  {
    return 40;
  }
  else if(Output < 53)
  {
    return 50;
  }
  else
  {
  return Output;    
  }

}
double CalibrateFrontRightShortSensor()
{
  double M = 1 / FrontRightSensorGradient;
  double q = FrontRightSensorConstant / FrontRightSensorGradient;
  double Output = (M / (analogRead(A1) + q)) - 8;
  if(Output <11)
  {
    return 10;
  }
  else if(Output <= 23)
  {
    return 20;
  }
  else if(Output <33)
  {
    return 30;
  }
  else if(Output < 43)
  {
    return 40;
  }
  else if(Output < 53)
  {
    return 50;
  }
  else
  {
  return Output;    
  }
}
double CalibrateLeftLongSensor()
{
  double M = 1 / LeftLongSensorGradient;
  double q = LeftLongSensorConstant / LeftLongSensorGradient;
  double Output = (M / (analogRead(A5) + q)) - 11;

 if(Output <= 23)
  {
    return 20;
  }
  else
  {
  return Output;    
  }
}
double CalibrateRightLongSensor()
{
  double M = 1 / RightLongSensorGradient;
  double q = RightLongSensorConstant / RightLongSensorGradient;
  double Output = (M / (analogRead(A2) + q)) - 8;
  return Output;
}
double CalibrateLeftShortSensor()
{
  double M = 1 / LeftShortSensorGradient;
  double q = LeftShortSensorConstant / LeftShortSensorGradient;
  double Output = (M / (analogRead(A3) + q)) - 8;
    if(Output <11)
  {
    return 10;
  }
  else if(Output <= 20)
  {
    return 20;
  }
  else if(Output <=32)
  {
    return 30;
  }
  else if(Output <=42)
  {
    return 40;
  }
  else if(Output <=52)
  {
    return 50;
  }
  else
  {
  return Output;    
  }
  
}
