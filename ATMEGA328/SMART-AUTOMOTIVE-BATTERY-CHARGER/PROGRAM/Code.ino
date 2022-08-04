/*
#################################################################################
# Credits goes to Mr. Renjith Mangal                                             #
# Thanks FISAT Management, Higher officials, My Colleagues for the well wishes  #
# The code is open in my github (https://github.com/m4mallu                     #
# For any suggestions and feedbacks, feel free to contact @ renju700@gmail.com  #
#################################################################################
*/

#include <LiquidCrystal.h>
#include <millisDelay.h>
const int RelayPinA1 = 2;     //24V Relay -1
const int RelayPinA2 = 3;     //24V Relay -2
const int RelayPinA3 = 4;     //24V Relay -3
const int RelayPinA4 = 5;     //24V Relay -4

const int RelayPinB1 = 6;     //12V Relay -1
const int RelayPinB2 = 7;     //12V Relay -2
const int RelayPinB3 = 8;     //12V Relay -3
const int RelayPinB4 = 9;     //12V Relay -4
int ManualPin = 10;           // Mode selection pin (Manual/ Auto run)
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5); // Initialize LDC Pins as 8Bit
millisDelay TimeDelay; //MillisDelay library used for auto mode operation to avoid code pause
int Mode = 0;
bool RelayOn = false;

void setup()
{
  TimeDelay.start(15000);       // 1 Hour delay in milliseconds (60x60x1000)
  lcd.begin(16, 2);             // Initialize LCD
  //Serial.begin(9600);
  pinMode(RelayPinA1, OUTPUT);
  pinMode(RelayPinA2, OUTPUT);
  pinMode(RelayPinA3, OUTPUT);
  pinMode(RelayPinA4, OUTPUT);
  pinMode(RelayPinB1, OUTPUT);
  pinMode(RelayPinB2, OUTPUT);
  pinMode(RelayPinB3, OUTPUT);
  pinMode(RelayPinB4, OUTPUT);
  pinMode(ManualPin, INPUT);

  digitalWrite(RelayPinA1, HIGH);
  digitalWrite(RelayPinA2, HIGH);
  digitalWrite(RelayPinA3, HIGH);
  digitalWrite(RelayPinA4, HIGH);
  digitalWrite(RelayPinB1, HIGH);
  digitalWrite(RelayPinB2, HIGH);
  digitalWrite(RelayPinB3, HIGH);
  digitalWrite(RelayPinB4, HIGH);
  lcd.setCursor(0,0);
  lcd.print("Battery Charger");
  lcd.setCursor(0,1);
  lcd.print("Designed @Fablab");
  delay(5000);                      // Let's give a short delay to Show welcome screen
}
void loop(){
  Mode = digitalRead(ManualPin);
  if (Mode == HIGH){                // Activets manual mode in Mode switch HIGH
    lcd.setCursor(0,0);
    lcd.print("> Manual Mode");
    lcd.setCursor(12,1);
    lcd.print("--ON");
    digitalWrite(RelayPinA1, LOW);  // In Manual mode, activate all the relay pins 
    digitalWrite(RelayPinA2, LOW);  //        "
    digitalWrite(RelayPinA3, LOW);  //        "
    digitalWrite(RelayPinA4, LOW);  //        "
    digitalWrite(RelayPinB1, LOW);  //        "
    digitalWrite(RelayPinB2, LOW);  //        "
    digitalWrite(RelayPinB3, LOW);  //        "
    digitalWrite(RelayPinB4, LOW);  //        "
    delay(1000);
    lcd.clear();
  } 
  else {                            // Activets Auto mode in Mode switch LOW
    // As the relay module is operated on active low region,
    // we need to initialize all the iputs as HIGH to turn of 
    // all the relay units in the start up!
    digitalWrite(RelayPinA1, LOW);
    digitalWrite(RelayPinA2, HIGH);
    digitalWrite(RelayPinA3, HIGH);
    digitalWrite(RelayPinA4, LOW);
    digitalWrite(RelayPinB1, LOW);
    digitalWrite(RelayPinB2, HIGH);
    digitalWrite(RelayPinB3, HIGH);
    digitalWrite(RelayPinB4, LOW);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("> Auto Mode");
    lcd.setCursor(0,1);
    lcd.print("TER: 1 & 4");
    lcd.setCursor(12,1);
    lcd.print("--ON");
    while (digitalRead(10) == 0 ) { // A loop runs as auto mode until mode switch turns LOW
      if (TimeDelay.justFinished()) {
        //Serial.println("Auto Mode");
        TimeDelay.repeat();         // Repeat the delay with toggled outputs
        RelayOn = !RelayOn;
        if (RelayOn) {
          digitalWrite(RelayPinA1, HIGH);
          digitalWrite(RelayPinA4, HIGH);
          digitalWrite(RelayPinB1, HIGH);
          digitalWrite(RelayPinB4, HIGH);
          digitalWrite(RelayPinA2, LOW);
          digitalWrite(RelayPinB2, LOW);
          digitalWrite(RelayPinA3, LOW);
          digitalWrite(RelayPinB3, LOW);          
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("> Auto Mode");
          lcd.setCursor(0,1);
          lcd.print("TER: 2 & 3");
          lcd.setCursor(12,1);
          lcd.print("--ON");
        } 
        else {
            digitalWrite(RelayPinA1, LOW);
            digitalWrite(RelayPinB1, LOW);
            digitalWrite(RelayPinA4, LOW);
            digitalWrite(RelayPinB4, LOW);
            digitalWrite(RelayPinA2, HIGH);
            digitalWrite(RelayPinB2, HIGH);
            digitalWrite(RelayPinA3, HIGH);
            digitalWrite(RelayPinB3, HIGH);
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print("> Auto Mode");
            lcd.setCursor(0,1);
            lcd.print("TER: 1 & 4");
            lcd.setCursor(12,1);
            lcd.print("--ON");
          }
        }
      }
    }
  }
