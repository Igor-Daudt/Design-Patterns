#ifndef PLANTSFACTORY_H
#define PLANTSFACTORY_H

#include "tree.h"
#include "flower.h"

class PlantsFactory{
    public:
        PlantsFactory(){};

        virtual Tree *createTree() = 0;
        virtual Flower *createFlower() = 0;
};

#endif