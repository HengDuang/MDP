#include "DualVNH5019MotorShield.h"
#include <EnableInterrupt.h>


DualVNH5019MotorShield md;


double TargetRPM;

//RPM Values stored
double mrRPM = 0;
double mlRPM = 0;

//Pin for Encoder
int RightEncoder = 3; //Right Wheel
int LeftEncoder = 11; //Left Wheel

//Encoder Counter
int LeftMotorCounter = 0;
int RightMotorCounter = 0;

//Robot Turning
boolean Angle = false;
boolean AngleL = false;
boolean DistanceStop = false;

double TotalDistanceTravelled =0;

double test =0;
double test1=0;

double DistanceCounter =0;
double TurningCounter = 0;
double TurningCounterL =0;

void setup()
{
  TurningCounter = 0;
  LeftMotorCounter =0;
  RightMotorCounter=0;
  TotalDistanceTravelled =0;
  Serial.begin(115200);
  enableInterrupt(RightEncoder, RightMotorCount, RISING); //Set Rising Edge as interrupt
  enableInterrupt(LeftEncoder, LeftMotorCount, RISING); //Set Rising Edge as interrupt
  md.init();
}

void loop()
{
  double ForwardL = CalibrateFrontLeftShortSensor();
  double ForwardR = CalibrateFrontRightShortSensor();
  double LeftLongSensor = CalibrateLeftLongSensor();
  double RightLongSensor = CalibrateRightLongSensor();
  double LeftShortSensor = CalibrateLeftShortSensor();
  double Distance = (ForwardL + ForwardR) / 2;
  ObstaclesAdvoidance(Distance,ForwardL , ForwardR);
  Serial.println(LeftShortSensor);
}
