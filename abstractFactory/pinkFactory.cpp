#include "pinkFactory.h"
#include "pinkFlower.h"
#include "pinkTree.h"

Tree *PinkFactory::createTree(){
    return new PinkTree();
}

Flower *PinkFactory::createFlower(){
    return new PinkFlower();
}