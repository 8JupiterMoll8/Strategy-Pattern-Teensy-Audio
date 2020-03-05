#include "Arduino.h"
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

#include "AudioObject.h"
#include "ChainA.h"
#include "ChainB.h"
#include "Play_A.h"
#include "Play_B.h"
#include "Emo.h"


auto audioObj = AudioObject();
//EmoA
auto chainA   = ChainA(audioObj);
auto playA    = Play_A(audioObj);
auto emoA     = Emo(chainA,playA);

//EmoB
auto chainB   = ChainB(audioObj);
auto playB    = Play_B(audioObj);
auto emoB     = Emo(chainB,playB);





//
AudioControlSGTL5000 sgtl5000_1; 

void setup()
{
  Serial.begin(9600);
  while (!Serial) {};
  AudioMemory(800);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.8);
  sgtl5000_1.inputSelect(AUDIO_INPUT_MIC);
  sgtl5000_1.micGain(36);
  
}

void loop() 
{
  emoA.executeInit();
  emoA.executeConnect();
  emoA.executePlay();
  emoA.executeDisconnect();

  emoB.executeInit();
  emoB.executeConnect();
  emoB.executePlay();
  emoB.executeDisconnect();


}