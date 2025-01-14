#ifndef TELESCOPE_H
#define TELESCOPE_H

#include "observer.h"

class Telescope : public Observer{
    public:
        void update(bool data);
};

#endif