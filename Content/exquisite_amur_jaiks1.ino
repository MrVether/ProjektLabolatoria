#define TMP36 A5
#include <LiquidCrystal.h>
LiquidCrystal lcd(10, 9, 8, 7, 6, 5);
const int ledPin = 13;
const int sensor = 12;
  int nr = 0;
int state = 0;

void setup()
{
pinMode(ledPin, OUTPUT);
 digitalWrite(ledPin, LOW);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Temperatura");
  lcd.setCursor(0, 1);
  lcd.print("11");
  lcd.setCursor(2, 1);
  lcd.print("'C");
}
void loop()
{
  nr = digitalRead (sensor);
  if (nr == HIGH);
  {state == 1 - state;
  }
  if(state == 1);
     {digitalWrite(ledPin, HIGH);
     }
   if (nr == LOW);
  {state == 0 - state;
  }
  if(state == 0);
  (digitalWrite, ledPin, LOW);
}
               
  
                
