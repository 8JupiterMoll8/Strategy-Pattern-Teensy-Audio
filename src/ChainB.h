#ifndef CHAINB
#define CHAINB

#include"AudioObject.h"
#include "ChainConnector.h"


class ChainB: public ChainConnector
{
  public:
    ChainB(AudioObject &audioObject)
    :audio_ {audioObject}
   {
     patchChord_[0] = new AudioConnection(audio_.SynthWaveform, audio_.SynthWaveformEnvelope);
     patchChord_[1] = new AudioConnection(audio_.SynthWaveformEnvelope,0, audio_.LineOut,0);
     patchChord_[2] = new AudioConnection(audio_.SynthWaveformEnvelope,0, audio_.LineOut,1);
   }

  private:
     AudioObject &audio_;

     static const int  MAX_CONNECTIONS = 3;
     AudioConnection *patchChord_[MAX_CONNECTIONS];

  public:

    void connect() override
    {
      for (int i = 0; i < MAX_CONNECTIONS; i++)
      {
         patchChord_[i]->connect();
      }
    }

    void disconnect() override
    {
      for (int i = 0; i <MAX_CONNECTIONS; i++)
      {
         patchChord_[i]->disconnect();
      }
    }


};

#endif /* CHAINB */
