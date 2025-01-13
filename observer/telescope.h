#ifndef TELESCOPE_H
#define TELESCOPE_H

#include "observer.h"

class Telescope : public Observer{
    public:
        using Observer::Observer;
        void update(Observable *obs);
};

#endif