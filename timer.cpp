#include <LiquidCrystal.h>  
int Contrast=20;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   
 
int VRx = A0;
int VRy = A1;
int SW = 10;

int xPosition = 0;
int yPosition = 0;
int SW_state = 0;
int mapX = 0;
int mapY = 0;

int time = 0;
String str = "";
int yes = 1;
int time2 = 0;
int b1 = 0;

int state = 1;

int dl = 0;

int s = 1000;

int m = 60000;

int h = 6;

 void setup()
 { 
    analogWrite(6,Contrast);
    lcd.begin(16, 2);
    pinMode(13,INPUT);
    pinMode(8,OUTPUT);
    Serial.begin(9600);
    pinMode(VRx, INPUT);
    pinMode(VRy, INPUT);
    pinMode(SW, INPUT_PULLUP);
 }  
  
     void loop()
 {  
   Serial.print("c state ");
   Serial.println(state);
   b1 = digitalRead(13);
   time = time2;
   Serial.print("time : ");
   Serial.println(time);
   Serial.print("buttonstate");
   Serial.println(b1);
  if (b1 == 1) {
    // read the incoming byte:

    Serial.print("time ");
    Serial.println(time);
    
    if (time > 0){
      
      while (yes == 1){
      lcd.setCursor(0, 0);
      lcd.print("                 ");
      lcd.setCursor(0, 0);
      lcd.print(time);
      
      Serial.print(dl);
      if (state == 1){
         delay(1000);
         Serial.print("s");
      }
      if (state == 2){
         delay(10000);
         Serial.print("m");
         delay(10000);
         Serial.print("m");
         delay(10000);
         Serial.print("m");
         delay(10000);
         Serial.print("m");
         delay(10000);
         Serial.print("m");
         delay(10000);
         Serial.print("m");
         
      }
      if (state == 3){
         delay(360000);
         Serial.print("h");
         delay(360000);
         Serial.print("h");
         delay(360000);
         Serial.print("h");
         delay(360000);
         Serial.print("h");
         delay(360000);
         Serial.print("h");
         delay(360000);
         Serial.print("h");
         delay(360000);
         Serial.print("h");
         delay(360000);
         Serial.print("h");
         delay(360000);
         Serial.print("h");
         delay(360000);
         Serial.print("h");
      }
      delay(dl);
      time = time - 1;
      if (time == 0){
        lcd.setCursor(0, 0);
        lcd.print("                 ");
        lcd.setCursor(0, 0);
        lcd.print("time's up");
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        delay(100);
        digitalWrite(8,HIGH);
        delay(100);
        digitalWrite(8,LOW);
        lcd.setCursor(0, 0);
        lcd.print("                           ");
        time = 0;
        time2 = 0;

        break;
      
      }
     }
    
    
    }
  }
    
      
    lcd.setCursor(0, 0);
    lcd.print("ct ");

    
    lcd.setCursor(0, 1);
    lcd.print("j.co");
  xPosition = analogRead(VRx);
  yPosition = analogRead(VRy);
  SW_state = digitalRead(SW);
  mapX = map(xPosition, 0, 1023, -512, 512);
  mapY = map(yPosition, 0, 1023, -512, 512);
  
  Serial.print("X: ");
  Serial.print(mapX);
  Serial.print(" | Y: ");
  Serial.print(mapY);
  Serial.print(" | Button: ");
  Serial.println(SW_state);
  if (mapX < -500){
    time2 = time2 + 1;
    Serial.print("time : ");
    Serial.println(time2);
    lcd.setCursor(3, 0);
    lcd.print(time2);
    delay(100);
    
  
  }
  if (mapX > 500 and time2 > 0){
    time2 = time2 - 1;
    Serial.print("time : ");
    Serial.println(time2);
    lcd.setCursor(3, 0);
    lcd.print(time2);
    delay(100);
    
  
  }
  if (mapY < -500){
    Serial.print("c state");
    Serial.println(state);

    if (state == 1){
      
      state = 2;
      lcd.setCursor(5, 1);
      lcd.print("m");
    
    }
    else if (state == 2){
      
      state = 3;
      lcd.setCursor(5, 1);
      lcd.print("h");
    
    }
  
  }
  if (mapY > 500){
    Serial.print("c state");
    Serial.println(state);
    
    if (state == 3){
      
      state = 2;
      lcd.setCursor(5, 1);
      lcd.print("m");    
    }
    else if (state == 2){
      
      state = 1;
      lcd.setCursor(5, 1);
      lcd.print("s"); 
    
    }
  
  }
  if (state == 1){
    
    lcd.setCursor(5, 1);
    lcd.print("s");
  
  }
  

  delay(100);
}
