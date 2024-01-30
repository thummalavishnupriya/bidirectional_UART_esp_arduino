//Esp32 
// ESP32 code that sends the message to the arduino uno
#include <HardwareSerial.h>

void setup() {
  Serial.begin(9600, SERIAL_8N1, 3, 1);
  delay(100);
}
void loop()
{
    String mssage = "Hallo from esp";
    Serial.println(mssage);
    delay(2000);
    if(Serial.available()){
    String received = "";
    received = Serial.readStringUntil('\n');
    Serial.println(received);
  }
}
