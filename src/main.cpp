#include <Arduino.h>
//I Noris Singa, 000812720 certify that this material is my original work. No other person's work has been 
//used without due acknowledgement. I have not made my work available to anyone else.

int dim_value;

void setup() {
  // put your setup code here, to run once:
  // configure the USB serial monitor 
  Serial.begin(115200); 
 
  // configure pin D5 as digital input - this is the pushbutton 
  pinMode(D5, INPUT_PULLUP); 
 
  // configure pin D4 as a digital output - this is the LED 
  pinMode(D4, OUTPUT); 
}

void loop() {

  int button = digitalRead(D5);


  
  // put your main code here, to run repeatedly:
  if(button == HIGH){
    if(dim_value > 225){
      dim_value = dim_value;
    }
    else if(dim_value<0){
      dim_value =0;
      
    }
    else{
      dim_value +=50;
      delay(300);
    }
  }

   dim_value = analogRead(A0);
  analogWrite(D4, dim_value);
  delay(1);
}