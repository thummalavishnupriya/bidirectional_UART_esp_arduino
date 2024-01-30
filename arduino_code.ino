#include <SoftwareSerial.h>
SoftwareSerial mySerial(0,1);
void setup(){
  mySerial.begin(9600);
  Serial.begin(9600);
  delay(100);
}

// Arduino Uno code to receive the message
void loop(){
  if(mySerial.available()){
    String received = "";
    received = Serial.readStringUntil('\n');
    Serial.println(received);
  }
  String mssage = "Hallo from arduino";
  Serial.println(mssage);
  delay(2000);
}
