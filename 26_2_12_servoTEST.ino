#include "constant.h"
void setup() {
  Serial.begin(115200);
  Serial2.begin(1000000,SERIAL_8N1,16,17);        // 16Tx,17Rx Mega  18-RX1,17-RX2  serial 1
  pinMode(PIN_PE0, OUTPUT);   // In 
  pinMode(PIN_PE1, OUTPUT);   // In 
  pinMode(PIN_PE2, OUTPUT);   // Out      
  pinMode(PIN_PE3, OUTPUT);   // Out
  //---------------------------------SUB------------------------------
  digitalWrite(PIN_PE2, HIGH);    //23 //nano 5
  digitalWrite(PIN_PE3, LOW);     //19 //nano 4       // LOOP_SUB　緑19
  delay(10);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
  Serial.println("OUT==1");
  //-----------------------------------SUB-----------------------
  delay(2000);
  //----------------------------------MAIN-----------------------------
  digitalWrite(PIN_PE2, LOW);    // 23 //nano 5
  digitalWrite(PIN_PE3, HIGH);   //19  //nano 4       // LOOP_MAIN　緑19
  delay(10);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
   Serial.println("OUT==2");
  //----------------------------------MAIN---------------------------
}

void loop() {
  delay(1);
  // put your main code here, to run repeatedly:

}
