#ifndef IAUDIOPLAY
#define IAUDIOPLAY

    class IAudioPlay
    {
        public:
        
            ~IAudioPlay();
            virtual void init() = 0;
            virtual void play() = 0;

        
    };

#endif /* IAUDIOPLAY */
