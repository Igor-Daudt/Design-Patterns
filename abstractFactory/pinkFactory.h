#include "plantsFactory.h"

class PinkFactory : public PlantsFactory{
    public:
        using PlantsFactory::PlantsFactory;
        Tree *createTree();
        Flower *createFlower();
};