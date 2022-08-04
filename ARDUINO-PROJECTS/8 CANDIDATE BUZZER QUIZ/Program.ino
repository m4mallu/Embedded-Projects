/**************************************************
Title   : 8 Candidate Buzer Quiz Setup Programme
Auther  : Renjith R
Company : FABLAB FISAT
Mail    : renjith113@fisat.ac.in
***************************************************/
//Assign 8 buzer buttons 
int But1 = 2;
int But2 = 3;
int But3 = 4;
int But4 = 5;
int But5 = 6;
int But6 = 7;
int But7 = 8;
int But8 = 9;

//Assign 8 indication ligh Outputs
int LED1 = 10;
int LED2 = 11;
int LED3 = 12;
int LED4 = A0;
int LED5 = A1;
int LED6 = A2;
int LED7 = A3;
int LED8 = A4;

//initialize 8 button state to 0
int But1State = 0;
int But2State = 0;
int But3State = 0;
int But4State = 0;
int But5State = 0;
int But6State = 0;
int But7State = 0;
int But8State = 0;

//locked out state variables
boolean pause = false;
int secs = 5000;

//assign speaker pin
int sound = 13;
int soundSecs = 900;

//initialize Buzer or Lights pop up time
int buztime = 10;

void setup() {
//initialize button pins to input
  pinMode(But1, INPUT);
  pinMode(But2, INPUT);
  pinMode(But3, INPUT);
  pinMode(But4, INPUT);
  pinMode(But5, INPUT);
  pinMode(But6, INPUT);
  pinMode(But7, INPUT);
  pinMode(But8, INPUT);

//initialize LEDs to output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);

//initilize LEDs to Off
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
}
void loop() {

 if (pause == false) { //only works when buzzers are unlocked
    
//read button states
    But1State = digitalRead(But1);
    But2State = digitalRead(But2);
    But3State = digitalRead(But3);
    But4State = digitalRead(But4);
    But5State = digitalRead(But5);
    But6State = digitalRead(But6);
    But7State = digitalRead(But7);
    But8State = digitalRead(But8);


  if (But1State == 1) { //if red button is pushed
      pause == true; //puts program into lock mode so other players cannot buzz in
      for (int i = 0; i < buztime; i++)    // Blink the LEDs for 8 times
      {digitalWrite(LED1, HIGH);
       tone(sound, soundSecs); // Generate tone sound
       delay(200);
       digitalWrite(LED1, LOW);
       noTone(sound); // Cut off tone sound
       delay(200);}
  pause == false;  } //turn off lockout mode

/*****************************************************************
Repeat the above step for remaining buttons , as follows..
*****************************************************************/

  if (But2State == 1) { 
      pause == true; 
      for (int i = 0; i < buztime; i++)
     {digitalWrite(LED2, HIGH);
      tone(sound, soundSecs);
      delay(200);
      digitalWrite(LED2, LOW);
      noTone(sound);
      delay(200);}
  pause == false; }
  
  if (But3State == 1) { 
      pause == true; 
      for (int i = 0; i < buztime; i++)
     {digitalWrite(LED3, HIGH);
      tone(sound, soundSecs);
      delay(200);
      digitalWrite(LED3, LOW);
      noTone(sound);
      delay(200);}
  pause == false; }
   
  if (But4State == 1) { 
      pause == true; 
      for (int i = 0; i < buztime; i++)
     {digitalWrite(LED4, HIGH);
      tone(sound, soundSecs);
      delay(200);
      digitalWrite(LED4, LOW);
      noTone(sound);
      delay(200);}
  pause == false; }
  
  if (But5State == 1) { 
      pause == true; 
      for (int i = 0; i < buztime; i++)
     {digitalWrite(LED5, HIGH);
      tone(sound, soundSecs);
      delay(200);
      digitalWrite(LED5, LOW);
      noTone(sound);
      delay(200);}
  pause == false; }
  
  if (But6State == 1) { 
      pause == true; 
      for (int i = 0; i < buztime; i++)
     {digitalWrite(LED6, HIGH);
      tone(sound, soundSecs);
      delay(200);
      digitalWrite(LED6, LOW);
      noTone(sound);
      delay(200);}
  pause == false; }
  
  if (But7State == 1) { 
      pause == true; 
      for (int i = 0; i < buztime; i++)
     {digitalWrite(LED7, HIGH);
      tone(sound, soundSecs);
      delay(200);
      digitalWrite(LED7, LOW);
      noTone(sound);
      delay(200);}
  pause == false; }
  
  if (But8State == 1) { 
      pause == true; 
      for (int i = 0; i < buztime; i++)
     {digitalWrite(LED8, HIGH);
      tone(sound, soundSecs);
      delay(200);
      digitalWrite(LED8, LOW);
      noTone(sound);
      delay(200);}
  pause == false; }

  }
}
