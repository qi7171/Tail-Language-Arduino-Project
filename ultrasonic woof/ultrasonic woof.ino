
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
int trig = 9;
int echo = 13;


SoftwareSerial mySoftwareSerial(10, 11);
DFRobotDFPlayerMini myDFPlayer;

void setup ()
{
  Serial.begin (9600);

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  Serial.println("Setting up software serial");
  mySoftwareSerial.begin(9600);

  Serial.println("check dfplayer");
  if (!myDFPlayer.begin(mySoftwareSerial))   //Use softwareSerial to communicate with mp3.
  {
    Serial.println(F("DFPlayer error."));
    while (true);
  }
  Serial.println("Setting up software serial —- done");

  //—-mp3 play—-
  Serial.println("Setup mp3 player settings");
  myDFPlayer.volume(40);
  myDFPlayer.setTimeOut(200);
}


//
void loop ()
{
  // If you re-trigger the sonar too soon you might receive echoes from the previous trigger
  delay(30);

  // Send a sonar ping
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // Measure the echo pulse which represents the echo time.  0 = no echo
  unsigned long  duration = pulseIn(echo, HIGH, 30000UL);
  int distance = (duration / 2) / 21.9;
  Serial.print(distance);
  Serial.println("cm");

  //something in range
  bool isInRange = distance != 0 && distance < 30;
  
  static bool wasInRange = false;  // 'static' sticks around, like a global

  if (isInRange != wasInRange)
  {
    // The state has changed
    wasInRange = isInRange;

    if (isInRange)
    {
      //entered range start playing
      myDFPlayer.play(0001); // WARNING: 0001 == 1 but 0010 == 8 because the leadin 0 means OCTAL.
    }
    else
    {
      // Just left range
      myDFPlayer.pause();
      Serial.println("pause");
    }
  }
}

