#ifndef PLAY_A
#define PLAY_A
#include "IAudioPlay.h"
#include "AudioObject.h"

    class Play_A : public IAudioPlay {
        
        public:
            Play_A(AudioObject &audio);
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
