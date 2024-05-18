#<include Servo.h>

// define what indexServo is, a Servo object to tell the real servo what to do 
Servo thumbServo;
Servo indexServo;
Servo middleServo;
Servo ringServo;
Servo pinkyServo;

// Setup stuff here. Only runs this when the arduino starts up.
void setup() {
  // Attach the index finger servo to digital pin 7.
  thumbServo.attach(7);
  indexServo.attach(6);
  middleServo.attach(5);
  ringServo.attach(4);
  pinkyServo.attach(3);
}

// Runs thousands of times a second.
void loop() {
  // Measures the voltage power coming into A1. It is represented by a number between 0-1023, from 0 volts to 5 volts. 
  int thumbFingerReading = analogRead(A0);  
  int thumbServoAngle = map(thumbFingerReading, 50, 800, 10, 170);
  thumbServo.write(thumbServoAngle);
  
  int indexFingerReading = analogRead(A1);  
  int indexServoAngle = map(indexFingerReading, 50, 800, 10, 170);
  indexServo.write(indexServoAngle);
  
  int middleFingerReading = analogRead(A2);  
  int middleServoAngle = map(middleFingerReading, 50, 800, 10, 170);
  middleServo.write(middleServoAngle);
  
  int ringFingerReading = analogRead(A3);  
  int ringServoAngle = map(ringFingerReading, 50, 800, 10, 170);
  ringServo.write(ringServoAngle);
  
  int pinkyFingerReading = analogRead(A4);  
  int pinkyServoAngle = map(pinkyFingerReading, 50, 800, 10, 170);
  pinkyServo.write(pinkyServoAngle);
}
