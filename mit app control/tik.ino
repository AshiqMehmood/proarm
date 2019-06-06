#include <SoftwareSerial.h>
#include <Servo.h>
Servo index;
Servo middle;
Servo ring;
Servo tiny;
Servo thumb;
Servo T360;
char state = 0;
void setup() {

  index.attach(4);
  middle.attach(5);
  ring.attach(6);
  tiny.attach(7);
  thumb.attach(2);
  T360.attach(3);
  Serial.begin(9600); // Default communication rate of the Bluetooth module
}
void loop() {
  if(Serial.available() > 0){    // Checks whether data is comming from the serial port
    state = Serial.read();       // Reads the data from the serial port
 
    /*  unsigned int pos=Serial.read();   //to rotate thumb finger
      unsigned int pos2=Serial.read();
      unsigned int realservo = (pos2*256) + pos;
      Serial.println(realservo); 

      if(realservo>= 1000 && realservo<= 1180)
   {
      unsigned int servo1=realservo;
      servo1= map(servo1,1000,1180,0,180);
      T360.write(servo1);
      Serial.println("T360 ON");
      delay(10);
    }*/
    
 }
 //to curl index finger
       if (state == '0') {
        index.write(180);
        Serial.println("index finger ON"); // Send back, to the phone, the String 
        Serial.println(state);
        state = 0;
       }
       else if (state == '1') {
        index.write(0);        
        Serial.println("index finger off");
        Serial.println(state);
        state = 0;
       } 
 
 //to curl middle finger
       if (state == '2') {
        middle.write(180); 
        Serial.println("middle finger on"); // Send back, to the phone, the String
        Serial.println(state);
        state = 0;
       }
       else if (state == '3') {
        middle.write(0);
        Serial.println("middle finger off");
        Serial.println(state);
        state = 0;
       } 
//to curl ring finger       
      if (state == '4') {
        ring.write(180); 
        Serial.println("ring finger on"); // Send back, to the phone, the String
        state = 0;
       }
       else if (state == '5') {
       ring.write(0);
        Serial.println("ring finger off");
        Serial.println(state);
        state = 0;
       } 
//to curl tiny finger       
     if (state == '6') {
        tiny.write(180); 
        Serial.println("tiny finger on"); // Send back, to the phone, the String
        Serial.println(state);
        state = 0;
       }
       else if (state == '7') {
       tiny.write(0);
        Serial.println("tiny finger off");
        Serial.println(state);
        state = 0;
       } 
  //to curl thumb finger     
     if (state == '8') {
        thumb.write(180); 
        Serial.println("thumb finger on"); // Send back, to the phone, the String
        state = 0;
       }
       else if (state == '9') {
       tiny.write(0);
        Serial.println("thumb finger off");
        Serial.println(state);
        state = 0;
       } 
   //to activate fist gesture
    if(state == 'A')  {
       index.write(180);
       middle.write(180);
       ring.write(180);
       tiny.write(180);
       thumb.write(180);
       Serial.println("fist on");
       Serial.println(state);
       state=0; }
       else if(state == 'B') {
       index.write(0);
       middle.write(0);
       ring.write(0);
       tiny.write(0);
       thumb.write(0); 
       Serial.println("fist off");
       Serial.println(state);
       state=0;   
       }
     //to activate PEN gesture
     if(state == 'C')  {
       index.write(120);
       middle.write(160);
       ring.write(180);
       tiny.write(180);
       thumb.write(160);
       Serial.println("pen on");
       Serial.println(state);
       state=0; }
       else if(state == 'D') {
       index.write(0);
       middle.write(0);
       ring.write(0);
       tiny.write(0);
       thumb.write(0); 
       Serial.println("pen off");
       Serial.println(state);
       state=0;   
       }
   //to activate indexPoint gesture
     if(state == 'E')  {
       index.write(0);
       middle.write(180);
       ring.write(180);
       tiny.write(180);
       thumb.write(180);
       Serial.println("indexPoint on");
       Serial.println(state);
       state=0; }
       else if(state == 'F') {
       index.write(0);
       middle.write(0);
       ring.write(0);
       tiny.write(0);
       thumb.write(0); 
       Serial.println("indexPoint off");
       Serial.println(state);
       state=0;   
       } 
   //to activate cylindrical gesture    
    if(state == 'G')  {
       index.write(150);
       middle.write(150);
       ring.write(150);
       tiny.write(150);
       thumb.write(160);
       Serial.println("cylindrical on");
       Serial.println(state);
       state=0; }
       else if(state == 'H') {
       index.write(0);
       middle.write(0);
       ring.write(0);
       tiny.write(0);
       thumb.write(0); 
       Serial.println("cylindrical off");
       Serial.println(state);
       state=0;   
       }
 //to activate YO gesture
     if(state == 'I')  {
       index.write(0);
       middle.write(180);
       ring.write(180);
       tiny.write(0);
       thumb.write(120);
       Serial.println("YO on");
       Serial.println(state);
       state=0; }
       else if(state == 'J') {
       index.write(0);
       middle.write(0);
       ring.write(0);
       tiny.write(0);
       thumb.write(0); 
       Serial.println("YO off");
       Serial.println(state);
       state=0;   
       }
//to activate spherical gesture
     if(state == 'K')  {
       index.write(120);
       middle.write(120);
       ring.write(120);
       tiny.write(120);
       thumb.write(120);
       Serial.println("spherical on");
       Serial.println(state);
       state=0; }
       else if(state == 'L') {
       index.write(0);
       middle.write(0);
       ring.write(0);
       tiny.write(0);
       thumb.write(0); 
       Serial.println("spherical off");
       Serial.println(state);
       state=0;   
       }
//to activate pinch gesture
     if(state == 'M')  {
       index.write(160);
       middle.write(170);
       ring.write(180);
       tiny.write(180);
       thumb.write(180);
       Serial.println("pinch on");
       Serial.println(state);
       state=0; }
       else if(state == 'N') {
       index.write(0);
       middle.write(0);
       ring.write(0);
       tiny.write(0);
       thumb.write(0); 
       Serial.println("pinch off");
       Serial.println(state);
       state=0;   
       }
//to activate thumbs_up gesture
     if(state == 'O')  {
       index.write(180);
       middle.write(180);
       ring.write(180);
       tiny.write(180);
       thumb.write(0);
       Serial.println("thumbs up on");
       Serial.println(state);
       state=0; }
       else if(state == 'P') {
       index.write(0);
       middle.write(0);
       ring.write(0);
       tiny.write(0);
       thumb.write(0); 
       Serial.println("thumbs up off");
       Serial.println(state);
       state=0;   
       }
//to activate victory gesture
     if(state == 'Q')  {
       index.write(0);
       middle.write(0);
       ring.write(180);
       tiny.write(180);
       thumb.write(180);
       Serial.println("victory on");
       Serial.println(state);
       state=0; }
       else if(state == 'R') {
       index.write(0);
       middle.write(0);
       ring.write(0);
       tiny.write(0);
       thumb.write(0); 
       Serial.println("victory off");
       Serial.println(state);
       state=0;   
       }
if(state == 'a')
{Serial.println("initialising");
state=0;
  }
  if(state == 'b')
  {Serial.println("calibrating");
  state=0;
    }

       
       
} 
