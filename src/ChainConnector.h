#ifndef CHAINCONNECTOR
#define CHAINCONNECTOR

    class ChainConnector
    {
    public:
    
        ~ChainConnector(){}
        virtual void connect()   =0;
        virtual void disconnect()=0;
        //virtual void init()=0;
        //virtual void update()=0;
    };

#endif /* CHAINCONNECTOR */
