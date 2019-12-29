#include<Wire.h>



void setup()
{
  Wire.begin();

}

void loop() 
{
  Wire.beginTransmission(1);
  Wire.write('H');
  Wire.endTransmission();
  delay(50);
  Wire.beginTransmission(1);
  Wire.write('L');
  Wire.endTransmission();
  delay(50);
 
  
  Wire.beginTransmission(2);
  Wire.write('H');
  Wire.endTransmission();
  delay(50);
  Wire.beginTransmission(2);
  Wire.write('L');
  Wire.endTransmission();
  delay(50);

  
   Wire.beginTransmission(1);
  Wire.write('H');
  Wire.endTransmission();
  delay(400);
  Wire.beginTransmission(1);
  Wire.write('L');
  Wire.endTransmission();
  delay(400);

  Wire.beginTransmission(2);
  Wire.write('H');
  Wire.endTransmission();
  delay(50);
  Wire.beginTransmission(2);
  Wire.write('L');
  Wire.endTransmission();
  delay(50);

  
  Wire.beginTransmission(1);
  Wire.write('H');
  Wire.endTransmission();
  delay(350);
  Wire.beginTransmission(1);
  Wire.write('L');
  Wire.endTransmission();
  delay(450);
 
  
  Wire.beginTransmission(2);
  Wire.write('H');
  Wire.endTransmission();
  delay(450);
  Wire.beginTransmission(2);
  Wire.write('L');
  Wire.endTransmission();
  delay(300);

  
   Wire.beginTransmission(1);
  Wire.write('H');
  Wire.endTransmission();
  delay(600);
  Wire.beginTransmission(1);
  Wire.write('L');
  Wire.endTransmission();
  delay(900);

  Wire.beginTransmission(2);
  Wire.write('H');
  Wire.endTransmission();
  delay(700);
  Wire.beginTransmission(2);
  Wire.write('L');
  Wire.endTransmission();
  delay(700);
    Wire.beginTransmission(1);
  Wire.write('H');
  Wire.endTransmission();
  delay(50);
  Wire.beginTransmission(1);
  Wire.write('L');
  Wire.endTransmission();
  delay(50);
  Wire.beginTransmission(1);
  Wire.write('H');
  Wire.endTransmission();
  delay(50);
  Wire.beginTransmission(1);
  Wire.write('L');
  Wire.endTransmission();
  delay(50);
  Wire.beginTransmission(1);
  Wire.write('H');
  Wire.endTransmission();
  delay(50);
  Wire.beginTransmission(1);
  Wire.write('L');
  Wire.endTransmission();
  delay(50);


}
  
 
