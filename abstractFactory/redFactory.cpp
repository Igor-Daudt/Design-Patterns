#include "redFactory.h"
#include "redFlower.h"
#include "redTree.h"

Tree *RedFactory::createTree(){
    return new RedTree();
}

Flower *RedFactory::createFlower(){
    return new RedFlower();
}