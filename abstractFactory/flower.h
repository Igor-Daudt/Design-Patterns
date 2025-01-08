#ifndef FLOWER_H
#define FLOWER_H

#include "iostream"

class Flower{
    public:
        virtual void showPetalsColor() = 0;

    protected:
        std::string color;
};

#endif