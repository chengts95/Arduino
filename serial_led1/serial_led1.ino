/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor

 This example code is in the public domain.
 */

// digital pin 2 has a pushbutton attached to it. Give it a name:
int led= 12;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:

  while(Serial.available()){
      if (Serial.read() == 'l'){
             digitalWrite(led, LOW);   
              delay(5000);     
              digitalWrite(led, HIGH);  
                    
                
        } 
        delay(10);      
  }
  // print out the state of the button:
    // delay in between reads for stability
}



