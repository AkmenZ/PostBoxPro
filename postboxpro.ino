#include <Bridge.h>
#include <YunClient.h>
#include <YunServer.h>
#include <BlynkSimpleYun.h>

char auth[] = "AZdNFqozecv1UXCzuUqgBmkaM08fQvZS";
char ssid[] = "VODAFONE-9416-2.4ghz";
char pass[] = "6C3U9P8U3MCMA4XY";

const int buttonPin = 2;
const int ledPin =  3;
const int buzzerPin = 4;

int buttonState = 0;

void setup(void) {
    
    Blynk.begin(auth);
    pinMode(buttonPin, INPUT);
    pinMode(ledPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
}

void loop(void) {
 buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, LOW);
    Blynk.notify("You've Got Mail!");
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
    Blynk.run();
}
