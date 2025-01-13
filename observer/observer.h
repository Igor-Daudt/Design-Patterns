#ifndef OBSERVER_H
#define OBSERVER_H

#include "observable.h"

class Observer{
    public:
        Observer();
        virtual void update(Observable *obs) = 0;
};

#endif