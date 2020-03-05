#include "Play_A.h"


Play_A::Play_A(AudioObject &audio)
    :audio_{audio}
    {
     
    }

void Play_A::init()
{
 audio_.SynthWaveform.begin(WAVEFORM_SINE); 
}

void Play_A::play() 
{
      Serial.println("EMO_A");
      //Voice
      //audio_.MixerInput.gain(1,0.7);//voice volume
      
      //Synth
      audio_.MixerInput.gain(0,0.5);// synthVolume;
      audio_.SynthWaveform.amplitude(0.9);
      audio_.SynthWaveform.frequency(random(200));
       //FX
      audio_.Distortion.bits(random(7,16));
      audio_.Distortion.sampleRate(4400);
      audio_.Filter.setLowpass(0,random(4000));
      audio_.Delay.delay(0,10);
      audio_.MixerInput.gain(2,0.8);//Feedback
      audio_.Reverb.roomsize(random(1));


      audio_.SynthWaveformEnvelope.noteOn();
      delay(random(1000));
      audio_.SynthWaveformEnvelope.noteOff();
      delay(random(1000));
     


    /*   VoiceVolune(0.7);
      SimpleDrumVolume(0.0);
      SynthVolume(0.0);
      Distortion(1,30000);
      Delay(100,0.5);
      Filter(500,0.6); */
   
}

// Input
/* void Play_A::VoiceVolune(float volume) 
{
    audio_.MixerInput.gain(0,volume);
}

void Play_A::SimpleDrumVolume(float volume) {
    audio_.MixerInput.gain(1,volume);
}

void Play_A::SynthVolume(float volume) {
    audio_.MixerInput.gain(2,volume);
} */


// FX CHAIN
/* void Play_A::Distortion(int bit, int sampleRate)
{     
      audio_.Distortion.bits(bit);
      audio_.Distortion.sampleRate(sampleRate);
}

void Play_A::Delay(int time, float feedback)
{
      audio_.Delay.delay(0,time);
      audio_.MixerInput.gain(3,feedback);// Echo
}

void Play_A::Reverb( byte roomsize, float damping)
{
      audio_.Reverb.roomsize(roomsize);
      audio_.Reverb.damping(damping);
}

void Play_A::Filter( int freq, float gain)
{
      audio_.Filter.setLowpass(0,freq,gain);
      //Filter.setHighPass(); 
      //Filter.setBandpass(0,44,1);
      // Filter.setNotch();
      // Filter.setLowShelf();
      // Filter.setHighShelf(); 
 }     */


// OutPut




