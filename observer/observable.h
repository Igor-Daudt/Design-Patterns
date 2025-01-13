#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include "observer.h"
#include <vector>

class Observable{
    public:
        Observable();
        static void addObserver(Observer *obs);
        static void deleteObserver(Observer *obs);
        bool getState();
        void setState(bool newState);
        static const bool SHINING = 1;
        static const bool DARK = 0;
    
    private:
        bool state;
        void notify();
        static std::vector<Observer> listObservers;
};

#endif