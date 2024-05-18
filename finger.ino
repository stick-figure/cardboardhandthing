#include <Servo.h>

// define what indexServo is, a Servo object to tell the real servo what to do 
Servo indexServo;

// Setup stuff here. Only runs this when the arduino starts up.
void setup() {
  // Attach the index finger servo to digital pin 7.
  indexServo.attach(7);
}

// Runs hundreds of times a second.
void loop() {
  // Measures the voltage power coming into A1. It is represented by a number between 0-1023, from 0 volts to 5 volts. 
  int indexFingerReading = analogRead(A1);
  
  // This function "maps" the indexFingerReading to a different range, depending on where the number is between the minimum and maximum. 
  // I found that the analog reading usually stays between 50 and 800, though the max would be 1023. 
  // The servo can rotate to an angle between 0-180, but it's usually better to stay 10 degrees within that range, say, 10-170. 
  // Each of these numbers can be tweaked to fit your individual motor and sensor. These numbers will be different depending on how the sensor was constructed, since the tape and paper sensor we made is not very consistent. Play with the numbers until you find something you like. Lower the maximum value to make the finger more sensitive, or raise it to make it less so. To make the servo itself rotate less, reduce the last value of this function.
  int indexServoAngle = map(indexFingerReading, 50, 800, 10, 170);
  
  // Finally, "write" to the servo the angle you want it to turn to: indexServoAngle
  indexServo.write(indexServoAngle);
}
