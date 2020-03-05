#ifndef AUDIOOBJECT
#define AUDIOOBJECT
#include"Audio.h"

class AudioObject 
{
    public:
      AudioSynthWaveform       SynthWaveform;  //xy=229.1666717529297,251
      AudioSynthSimpleDrum     SimpleDrum;     //xy=231.1666717529297,197
      AudioInputI2S            Voice;          //xy=240.4167022705078,115.99998474121094
      AudioEffectEnvelope      SynthWaveformEnvelope; //xy=461.16668701171875,254
      AudioMixer4              MixerInput;     //xy=671.1666717529297,214
      AudioEffectBitcrusher    Distortion;     //xy=849.166748046875,260
      AudioFilterBiquad        Filter;         //xy=1041.166748046875,259
      AudioEffectDelay         Delay;          //xy=1203.1666717529297,255
      AudioEffectFreeverb      Reverb;         //xy=1396.1666259765625,255
      AudioOutputI2S           LineOut;        //xy=1605.6666259765625,255.49998474121094

      
    
};
#endif /* AUDIOOBJECT */
