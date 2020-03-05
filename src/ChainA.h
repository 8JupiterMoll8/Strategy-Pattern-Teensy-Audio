#ifndef CHAINA
#define CHAINA

#include"AudioObject.h"
#include "ChainConnector.h"


class ChainA : public ChainConnector
{

  public:
    ChainA(AudioObject &audioObject)
    :audio_ {audioObject}
    // Synth to Mixer
    ,patchCord1_  { AudioConnection(audio_.SynthWaveform,           audio_.SynthWaveformEnvelope) }
    ,patchChord4_ { AudioConnection(audio_.SynthWaveformEnvelope,0, audio_.MixerInput,0)}
    // Voice to Mixer
    ,patchChord8_ { AudioConnection(audio_.Voice,0,audio_.MixerInput,1)}
    //FxChain Distortion > Filter > Delay
    ,patchChord5_  { AudioConnection(audio_.MixerInput,audio_.Distortion)}
    ,patchChord9_  { AudioConnection(audio_.Distortion,audio_.Filter)    }
    ,patchChord10_ { AudioConnection(audio_.Filter,    audio_.Delay)     }
    ,patchChord12_ { AudioConnection(audio_.Delay,     audio_.Reverb)    }
    // Delay Feedback to Mixer
    ,patchChord11_ { AudioConnection(audio_.Delay, 0,audio_.MixerInput,2)}
    ,patchChord6_  { AudioConnection(audio_.Reverb,0,audio_.LineOut,0)}
    ,patchChord7_  { AudioConnection(audio_.Reverb,0,audio_.LineOut,1)}
   {
        patchCord1_.disconnect();
        patchChord4_.disconnect();
        patchChord5_.disconnect();
        patchChord9_.disconnect();
        patchChord10_.disconnect();
        patchChord12_.disconnect();
        patchChord6_.disconnect();
        patchChord7_.disconnect();

   }//end concructor

  private:
    AudioObject &audio_;

    AudioConnection patchCord1_;
    AudioConnection patchChord4_;
    // Voice to Mixer
    AudioConnection patchChord8_;
    //FxChain Distortion > Filter > Delay
    AudioConnection patchChord5_;
    AudioConnection patchChord9_;
    AudioConnection patchChord10_;
    AudioConnection patchChord12_;
    // Delay Feedback to Mixer
    AudioConnection patchChord11_;
    AudioConnection patchChord6_;
    AudioConnection patchChord7_;
    

  public:
    void connect() override
    {
    
        patchCord1_.connect();
        patchChord4_.connect();
        patchChord5_.connect();
        patchChord9_.connect();
        patchChord10_.connect();
        patchChord12_.connect();
        patchChord6_.connect();
        patchChord7_.connect();
    }

    void disconnect() override
    {
        patchCord1_.disconnect();
        patchChord4_.disconnect();
        patchChord5_.disconnect();
        patchChord9_.disconnect();
        patchChord10_.disconnect();
        patchChord12_.disconnect();
        patchChord6_.disconnect();
        patchChord7_.disconnect();
    }

};

#endif /* CHAINA */
