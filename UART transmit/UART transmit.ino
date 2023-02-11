#include <SoftwareSerial.h>

int i = 0;
SoftwareSerial mySerial(8, 9); // RX, TX

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mySerial.begin(9600);

}

void loop() {
  i = i % 2;
  // if (mySerial.available()) {
  //   Serial.write(mySerial.read());
  // }
  delay(1000);
  mySerial.print(i);
  Serial.println(i);
  i += 1;

}

