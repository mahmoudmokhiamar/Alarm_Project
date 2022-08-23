
#include "SPI.h"
#include "nRF24L01.h"
#include "RF24.h"
int calibrationTime = 30;
int pirPin = 3;
int SentMessage[1] = {000};
RF24 radio(7, 8); // CE, CSN
const byte address[6] = "00001"; 
void setup() {                                                  //Transmitter setup

Serial.begin(9600); 
pinMode(pirPin, INPUT); 
digitalWrite(pirPin, LOW);
Serial.print("calibrating sensor "); 
for(int i = 0; i < calibrationTime; i++)
{ 
  Serial.print("."); 
  delay(1000); 
} 
  Serial.println(" done"); Serial.println("SENSOR ACTIVE"); 
  delay(50);  
  radio.begin();
  radio.openWritingPipe(address);
}

void loop() {
  // put your main code here, to run repeatedly:
  radio.stopListening();
  if(digitalRead(pirPin) == HIGH)
  { 
  SentMessage[0] = 111;
  radio.write(SentMessage,1);
  Serial.println("Movement Detected");
  delay(200);
  digitalWrite(pirPin,LOW);
  }
  else if(digitalRead(pirPin) == LOW)
  {
    SentMessage[0] = 000;
    radio.write(SentMessage,1);
  }
  

}
