#include <Servo.h> // includes the servo libary

Servo myservo;  // create servo object to control a servo

const int ldr = A0;  // analog pin used to connect the ldr
int val = 0;    // variable to read the value from the analog pin

void setup()
{
  myservo.attach(9);  // attaches the servo on pin 9 of the arduino board
}

void loop()
{
  val = analogRead(ldr);            // reads the value of the ldr (value between 0 and 1023)
  val = map(val, 0, 179, 0, 1023);     // scale it to use it with the servo (value between 0 and 180)
  Serial.println(val);                 // controlling the servo depending on the light value
  if (ldr > 200)  {
  val = 0;
  }
  if (ldr > 800)  {
  val = 180;
  }
  myservo.write(val);  // moves the servo to the angle specified
  delay(15);           // gives servo time to move to position
}
