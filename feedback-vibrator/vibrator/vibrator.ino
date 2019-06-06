#define Sensor A0
#define motorpin1 9
#define motorpin2 7
#define LED1 5
#define LED2 3
#define LED3 6

int S;
long int value;

void setup() {
  // put your setup code here, to run once:
pinMode(Sensor,INPUT);
pinMode(motorpin1, OUTPUT);
pinMode(motorpin2, OUTPUT);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);


Serial.begin(9600);
digitalWrite(LED1, LOW);
digitalWrite(LED2, LOW);
digitalWrite(LED3, LOW);


}

void loop() {
  // put your main code here, to run repeatedly:
 S= analogRead(Sensor);
 value= map(S,0,1023,0,255);
    Serial.println(value);
    delay(100);
    
    if(value>10)
     { 
      analogWrite(motorpin1,value);
      analogWrite(LED1,value);  
      if(value>50 && value<90)
       analogWrite(LED2,value);
        else if(value>100)
        analogWrite(LED3,value);
       
     }
     
    else{
      analogWrite(motorpin1,0);
      analogWrite(LED1,0);
     analogWrite(LED2,0);
     analogWrite(LED3,0);
    }
}



      
