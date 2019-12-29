#include<Wire.h>
const byte slaveId =2;
void setup() 
{

  
  Wire.begin(slaveId);
  
  Wire.onReceive(receiveEvent);
  pinMode(8,OUTPUT);
  digitalWrite(8,LOW);


}

void loop() 
{
  
}

void receiveEvent(int howMany)
{
  char inChar;
  while(Wire.available()>0)
  {
    inChar = Wire.read();
    if(inChar == 'H')
    {
    digitalWrite(8,HIGH);
    }
      if(inChar == 'L')
      {
    digitalWrite(8,LOW);
      }
  
  }
}
