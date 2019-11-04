#include <SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);

void setup()
{
  mySerial.begin(9600);
 Serial.begin(9600);
}


void loop()
{
  int abcd=45;
  mySerial.println("AT+CMGF=1");    //To send SMS in Text Mode
  delay(1000);
  mySerial.println("AT+CMGS=\"+917668255989\"\r");  // change to the phone number you using
  delay(1000);
  mySerial.println("Gas Leaking!");//the content of the message
  mySerial.println(abcd);
  delay(200);
  mySerial.println((char)26);//the stopping character
  delay(1000);
}
