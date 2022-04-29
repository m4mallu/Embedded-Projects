int DataPin = 7; 
int AlarmPin = 13;   
int ResetPin = 8;
int Data =0;
int RSTData = 0;
void setup() 
{
    pinMode(AlarmPin, OUTPUT);
    pinMode(DataPin, INPUT);
    pinMode(ResetPin, INPUT);
   }

void loop() {
     stage1();
  }
// Reading the supplay once     
int stage1(){
  Data = digitalRead(DataPin);
      if (Data == LOW){
         digitalWrite(AlarmPin, HIGH);
         stage2();
    } else { stage1() ;}
  }
//Reading the Reset State  
int stage2() {  
  RSTData= digitalRead(ResetPin);
      if (RSTData == HIGH){
         digitalWrite(AlarmPin, LOW);
         stage3();
     }else {stage2();}
  }
// Reading the Supplay again       
int stage3(){
  Data = digitalRead(DataPin);
      if ( Data == HIGH){
          stage1();
     }else{stage3();}
   }
  
