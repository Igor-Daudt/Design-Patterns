#include "observable.h"

class Star : public Observable {
    private:
        int state; // Estado interno do sensor

    public:
        void setState(int newState);    
        int getState();

        static const bool SHINING = true;
        static const bool DARK = false;
};