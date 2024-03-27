#include <LiquidCrystal.h>
LiquidCrystal lcd (2,3,4,5,6,7);
int End=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Counter Starts: ");
}
void loop() {
  // put your main code here, to run repeatedly:
  if(End<=255)
  {
    lcd.setCursor(0,1);
    lcd.print(End);
    End=End+1;
    delay(200);
  }
  else
  {
    End=0;
  }
}
