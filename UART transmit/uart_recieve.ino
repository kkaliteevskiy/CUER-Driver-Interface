#include <SoftwareSerial.h>

SoftwareSerial mySerial(3,4); //RX, TX
int i = 0;
int n = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);//LED

  Serial.begin(9600);
  

  mySerial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(8, HIGH);   
  // delay(1000);              
  // digitalWrite(8, LOW);   
  // delay(1000);            
  if(mySerial.available()){
    i  = mySerial.read();
    digitalWrite(8,i-48);
    Serial.println(i);  
  }
}
