#include "constant.h"
void setup() {
  Serial.begin(115200);
  Serial2.begin(1000000,SERIAL_8N1,16,17);        // 16Tx,17Rx Mega  18-RX1,17-RX2  serial 1
  pinMode(PIN_PE0, OUTPUT);   // In 
  pinMode(PIN_PE1, OUTPUT);   // In 
  pinMode(PIN_PE2, OUTPUT);   // Out      
  pinMode(PIN_PE3, OUTPUT);   // Out
  pinMode(StartSW ,INPUT_PULLUP);
  pinMode(servoInt ,OUTPUT);
  START_SW();
}

void loop() {
  delay(1);
  // put your main code here, to run repeatedly:

}
