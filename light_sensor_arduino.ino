#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);  //lcd(RS,E,D4,D5,D6,D7);
//
int ledPin=13;
int ldrPin=A0;
//
void setup(){
  lcd.begin(2,16);
  lcd.clear();
  //
  lcd.setCursor(0,2);
  lcd.print("Light sensor");
  delay(2000);
  lcd.clear(); 
  //
  pinMode(ledPin,OUTPUT);
  pinMode(ldrPin,INPUT);
  //
}
void loop(){
  //
  int ldrStatus=analogRead(ldrPin);
  if(ldrStatus<=110){
    digitalWrite(ledPin,HIGH);
    //
    lcd.setCursor(0,0);
    lcd.print("Its dark, LED ON");
    l
    cd.setCursor(0,1);
    lcd.print("Intensity: ");
    lcd.setCursor(11,1);
    lcd.print(ldrStatus);
  }
  else{
    digitalWrite(ledPin,LOW);
    //
    lcd.setCursor(0,0);
    lcd.print("LED OFF");
    lcd.setCursor(0,1);
    lcd.print("Intensity: ");
    lcd.setCursor(11,1);
    lcd.print(ldrStatus);
  }
}
