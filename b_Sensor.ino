double FrontLeftSensorGradient = 0.00009433724900356394;
double FrontLeftSensorConstant = 0.01032998424387418;

double FrontRightSensorGradient = 0.00009474947099698279;
double FrontRightSensorConstant = 0.008744034252092175;

double LeftLongSensorGradient = 0.00005906753070398123;
double LeftLongSensorConstant = 0.0018207458851631705;

double RightLongSensorGradient = 0.0000636965275884001;
double RightLongSensorConstant = 0.0004925657171665529;

double LeftShortSensorGradient = 0.00009553611726362321;
double LeftShortSensorConstant = 0.007772562954454363;

//need recalibrate left long sensor
double CalibrateFrontLeftShortSensor()
{
  double M = 1 / FrontLeftSensorGradient;
  double q = FrontLeftSensorConstant / FrontLeftSensorGradient;
  
  double Output = (M / (analogRead(A0) + q)) - 8;
  //For checklist
  if (Output <= 11)
  {
    return 10;
  }
  else if(Output <=25)
  {
    return 20;
  }
  else if(Output <=35)
  {
    return 30;
  }
  
 else
 {
  return Output;
  }
//for Sensor
    if(Output <=15)
    {
      return 10;
    }
    else if(Output <=23)
    {
      return 20;
    }
    else if (Output <=31)
    {
      return 30;
    }
    else
    {
      return Output;
    }
}
double CalibrateFrontRightShortSensor() //lousy until 24 cm toh
{
  double M = 1 / FrontRightSensorGradient;
  double q = FrontRightSensorConstant / FrontRightSensorGradient;
  double Output = (M / (analogRead(A1) + q)) - 8;
//For Checklist obstacles
//  if (Output <= 11)
//  {
//    return 10;
//  }
//  else if(Output <=26)
//  {
//    return 20;
//  }
//  else if (Output <=38)
//  {
//    return 30;
//  }
//  else
//  {
//    return Output;
//  }
// for sensor 
    if(Output <=15)
    {
      return 10;
    }
    else if(Output <=23)
    {
      return 20;
    }
    else if(Output <= 31)
    {
      return 30;
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

  if (Output <= 24)
  {
    return 20;
  }
  else if(Output <= 28)
  {
    return 30;
  }
  else if(Output <=40)
  {
    return 40;
  }
  else if (Output <= 48)
  {
    return 50;
  }
 else
 {
  return Output;
 }
////  else
////  {
//    return Output;
////  }
}
double CalibrateRightLongSensor()
{
  double M = 1 / RightLongSensorGradient;
  double q = RightLongSensorConstant / RightLongSensorGradient;
  double Output = (M / (analogRead(A2) + q)) - 8;
  if(Output <= 22)
  {
    return 20;
  }
 else if(Output <= 41)
 {
   return 30; 
 }
 else if(Output <=57)
 {
  return 40;
 }
 else if(Output <=67)
 {
  return 50;
 }
 else if(Output <= 75)
 {
  return 60;
 }
 else if(Output <= 85)
 {
  return 70;
 }
 else
 {
  return Output;
 }
}
double CalibrateLeftShortSensor()
{
  double M = 1 / LeftShortSensorGradient;
  double q = LeftShortSensorConstant / LeftShortSensorGradient;
  double Output = (M / (analogRead(A3) + q)) - 8;
  if (Output < 11 )
  {
    return 10;
  }
  else
  {
    return Output;
  }
  //
}
