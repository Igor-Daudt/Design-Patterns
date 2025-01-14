#ifndef OBSERVER_H
#define OBSERVER_H

#include "observable.h"

class Observer{
    public:
        virtual void update(bool data) = 0;
        virtual ~Observer() = default;
};

#endif