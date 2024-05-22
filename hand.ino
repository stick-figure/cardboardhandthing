#include <Servo.h>

// define what indexServo is, a Servo object to tell the real servo what to do 
Servo thumbServo;
Servo indexServo;
Servo middleServo;
Servo ringServo;
Servo pinkyServo;

// Setup stuff here. Only runs this when the arduino starts up.
void setup() {
  // Attach the index finger servo to digital pin 7.
  thumbServo.attach(2);
  indexServo.attach(3);
  middleServo.attach(4);
  ringServo.attach(5);
  pinkyServo.attach(6);
}

// Runs thousands of times a second.
void loop() {
  // Measures the voltage power coming into A1. It is represented by a number between 0-1023, from 0 volts to 5 volts. 
  int thumbFingerReading = analogRead(A0);  
  int thumbServoAngle = map(thumbFingerReading, 50, 500, 10, 90);
  thumbServo.write(thumbServoAngle);
  
  int indexFingerReading = analogRead(A1);  
  int indexServoAngle = map(indexFingerReading, 50, 500, 10, 90);
  indexServo.write(indexServoAngle);
  
  int middleFingerReading = analogRead(A2);  
  int middleServoAngle = map(middleFingerReading, 50, 500, 10, 90);
  middleServo.write(middleServoAngle);
  
  int ringFingerReading = analogRead(A3);  
  int ringServoAngle = map(ringFingerReading, 50, 500, 10, 90);
  ringServo.write(ringServoAngle);
  
  int pinkyFingerReading = analogRead(A4);  
  int pinkyServoAngle = map(pinkyFingerReading, 50, 500, 10, 90);
  pinkyServo.write(pinkyServoAngle);
}
