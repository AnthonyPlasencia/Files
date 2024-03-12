#include <Arduino.h>

//LOW MEANS ON
//HIGH MEANS OFF


#define TopRed 25
#define TopYellow 33
#define TopGreen 32

#define BottomRed 19
#define BottomYellow 18
#define BottomGreen 5

#define Button 0




int delayTime = 10000;


void changeDelay(){
// if delay time is 10 seconds, change it to 20 seconds
  if (delayTime == 1000)
    delayTime = 20000;
  else
    delayTime = 10000;
}

void setup() {
 pinMode(TopGreen,OUTPUT);
 pinMode(TopYellow,OUTPUT);

pinMode(TopRed,OUTPUT);

pinMode(BottomGreen,OUTPUT);
pinMode(BottomRed,OUTPUT);
pinMode(BottomYellow,OUTPUT);

digitalWrite(TopGreen,HIGH);
digitalWrite(TopYellow,HIGH);
digitalWrite(TopRed,HIGH);
digitalWrite(BottomGreen,HIGH);
digitalWrite(BottomYellow,HIGH);
digitalWrite(BottomRed,HIGH);

pinMode(Button,INPUT_PULLDOWN);
attachInterrupt(digitalPinToInterrupt(Button),changeDelay,HIGH);
}




void loop() {
  digitalWrite(TopRed,LOW);     // top red stays on
  digitalWrite(BottomGreen,LOW),  //Bottom  green on
  delay(2000);

  digitalWrite(BottomGreen,HIGH); //Bottom green off
  digitalWrite(BottomYellow,LOW); //Bottom yellow on
  delay(2000);

  digitalWrite(BottomYellow,HIGH); // yellow off
  digitalWrite(BottomRed,LOW);     //Bottom red on
  delay(delayTime);

  digitalWrite(TopRed,HIGH);     //top red off
  digitalWrite(TopGreen,LOW),  //top  green on
  delay(2000);

  digitalWrite(TopGreen,HIGH); //top green off
  digitalWrite(TopYellow,LOW); //top yellow on
  delay(2000);

  digitalWrite(TopYellow,HIGH); //top yellow off
   digitalWrite(TopRed,LOW);     //top red stays on
   delay(delayTime);
  digitalWrite(BottomRed,HIGH);  //Bottom Red off


  // digitalWrite(BottomGreen,LOW),  //Bottom  green on
  // //delay

  // digitalWrite(BottomGreen,HIGH); //Bottom green off
  // digitalWrite(BottomYellow,LOW); //Bottom yellow on
  // delay(2000);

  // digitalWrite(BottomYellow,HIGH); // yellow off
  // digitalWrite(BottomRed,LOW);     //Bottom red on
  // delay(delayTime);

  // digitalWrite(TopRed,HIGH);     //top red off
}
