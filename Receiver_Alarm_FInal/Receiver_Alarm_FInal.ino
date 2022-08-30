#include "SPI.h"
#include "nRF24L01.h"
#include "RF24.h"
int RecievedMessage[1] = {000};
RF24 radio(7,8); // CE, CSN
const byte address[6] = "00001";
int LED_GREEN = 2;
int LED_RED = 4;

void setup() {
  pinMode(LED_GREEN,OUTPUT);                                            //Reciever Setup
  pinMode(LED_RED,OUTPUT);
  Serial.begin(9600);
  radio.begin();
  radio.openReadingPipe(1, address);
  
}
void loop() {
  // put your main code here, to run repeatedly: 
   radio.startListening();
   digitalWrite(LED_GREEN,HIGH);
   while (radio.available())
   {
      radio.read(RecievedMessage,1);
      if (RecievedMessage[0] == 111)
      {
        digitalWrite(LED_GREEN,LOW);
        digitalWrite(LED_RED,HIGH);
        delay(200);
        digitalWrite(LED_RED,LOW);
   
      }
 //     else
  //    {
    //    digitalWrite(LED_GREEN,LOW); 
   //   }
     
   }
}
