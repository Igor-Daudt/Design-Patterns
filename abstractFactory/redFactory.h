#include "plantsFactory.h"

class RedFactory : public PlantsFactory{
    public:
        using PlantsFactory::PlantsFactory;
        Tree *createTree();
        Flower *createFlower();
};