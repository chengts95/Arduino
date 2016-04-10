/*
  Fade

  This example shows how to fade an LED on pin 9
  using the analogWrite() function.

  This example code is in the public domain.
*/

int led = 9;           // the pin that the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {

  while (Serial.available()) {

    if (Serial.read()  == '0') {
      brightness = 0;
    }
    if (Serial.read()  == '5') {
      brightness = 125;
    }
    if (Serial.read() == '9') {
      brightness = 255;
    }
  }
  // set the brightness of pin led:
  analogWrite(led, brightness);
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}

