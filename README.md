Project Name: 
Happy or Sad

Summary:
In this project I will have a face that changes between a smile and a frown depending on the light it recieves. This will be done using a servo and a photoresistor. The computer componants are put into a box and there is a flap cut for the user to open and close. When open, the face smiles. When closed, the face frowns(because there is rain on the flap). 

Componant Parts:
Servo, photoresistor, 10 ohm resistor, male to male wires, breadboard, arduino

Timeline:
Week 1: Write proposal, begin coding servo and photoresistor code.
Week 2: Rewrite code, fix bugs in code, built arduino componant 
Week 3: Build outside box/smily face componant 
Week 4: Present 

Challenges:
I had lots of trouble getting the code right. I had to rewrite it several times and I realized I was often writing too much/writing things that were unnesacary. The arduino was became short circuited and it took me a while to figure out that it was and why it was (too many wires).

Completed Work:

Code: 

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

Images/Videos: 
Seee other files

References/Links:

https://www.arduino.cc/en/reference/servo

https://forum.arduino.cc/index.php?topic=236081.0

https://www.instructables.com/id/Control-Servo-with-Light/
