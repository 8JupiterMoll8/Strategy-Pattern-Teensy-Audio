#ifndef EMO
#define EMO
#include "ChainConnector.h"
#include "IAudioPlay.h"

    class Emo
    {
        public:
            Emo(ChainConnector &ChainConnector,IAudioPlay &IAudioPlay)
            :ChainConnector_{ &ChainConnector }
            ,IAudioPlay_    { &IAudioPlay     }
            {}

            void executeInit()
            {
                IAudioPlay_->init();
               
            }

            void executePlay()
            {
                IAudioPlay_->play();
               
            }

            void executeConnect()
            {
                ChainConnector_->connect();

            }

            void executeDisconnect()
            {
                ChainConnector_->disconnect();
            }
        
        private:
                ChainConnector *ChainConnector_;
                IAudioPlay     *IAudioPlay_; 
       
    };

#endif /* EMO */
