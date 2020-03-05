#ifndef PLAY_B
#define PLAY_B
#include "IAudioPlay.h"
#include "AudioObject.h"

    class Play_B : public IAudioPlay {
        
        public:
            Play_B(AudioObject &audio);
            void init() override;
            void play() override;

        private:
            AudioObject &audio_;
            //Input
        /*    void VoiceVolune(float volume);
            void SynthVolume(float volume);
            void SimpleDrumVolume(float volume);
    */
            //Fx
        /*   void Distortion(int bit, int sampleRate);
            void Delay(int time, float feedback);
            void Reverb( byte roomsize, float damping);
            void Filter( int freq, float gain); */
        
    };

#endif /* PLAY_A */
