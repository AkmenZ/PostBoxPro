/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/


const int sensorPin = 2;
const int ledPin = 3; 
const int buzzerPin = 4;
int sensorState = 0;     
    
void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
    sensorState = digitalRead(2);
    Serial.println(sensorState);

  if (sensorState > 1)
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }
  else 
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
}
