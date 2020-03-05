#include "Play_B.h"


Play_B::Play_B(AudioObject &audio)
    :audio_{audio}
    {
     
    }

void Play_B::init()
{
 audio_.SynthWaveform.begin(WAVEFORM_TRIANGLE); 
}

void Play_B::play() 
{

     
      Serial.println("EMO_B");
      //Voice
      //audio_.MixerInput.gain(1,0.7);//voice volume
      
      //Synth
      audio_.MixerInput.gain(0,0.5);// synthVolume;
      audio_.SynthWaveform.amplitude(0.9);
      audio_.SynthWaveform.frequency(random(50,100));
      
      audio_.Distortion.bits(random(9,16));
      audio_.Distortion.sampleRate(4400);
      audio_.Filter.setLowpass(0,random(4000));
      audio_.Delay.delay(0,random(1000));
      audio_.MixerInput.gain(2,0.7);//Feedback
      audio_.Reverb.roomsize(random(2));

      // Envelope
      audio_.SynthWaveformEnvelope.noteOn();
      delay(random(1000));
      audio_.SynthWaveformEnvelope.noteOff();
     delay(random(1000));
      //FX
  



    /*   VoiceVolune(0.7);
      SimpleDrumVolume(0.0);
      SynthVolume(0.0);
      Distortion(1,30000);
      Delay(100,0.5);
      Filter(500,0.6); */
   
}

// Input
/* void Play_B::VoiceVolune(float volume) 
{
    audio_.MixerInput.gain(0,volume);
}

void Play_B::SimpleDrumVolume(float volume) {
    audio_.MixerInput.gain(1,volume);
}

void Play_B::SynthVolume(float volume) {
    audio_.MixerInput.gain(2,volume);
} */


// FX CHAIN
/* void Play_B::Distortion(int bit, int sampleRate)
{     
      audio_.Distortion.bits(bit);
      audio_.Distortion.sampleRate(sampleRate);
}

void Play_B::Delay(int time, float feedback)
{
      audio_.Delay.delay(0,time);
      audio_.MixerInput.gain(3,feedback);// Echo
}

void Play_B::Reverb( byte roomsize, float damping)
{
      audio_.Reverb.roomsize(roomsize);
      audio_.Reverb.damping(damping);
}

void Play_B::Filter( int freq, float gain)
{
      audio_.Filter.setLowpass(0,freq,gain);
      //Filter.setHighPass(); 
      //Filter.setBandpass(0,44,1);
      // Filter.setNotch();
      // Filter.setLowShelf();
      // Filter.setHighShelf(); 
 }     */


// OutPut




