#include <iostream>
#include "pinkFactory.h"
#include "redFactory.h"
#include "plantsFactory.h"
#include "flower.h"

int main(){
    PlantsFactory *absPinkFactory = new PinkFactory();
    Flower *flower = absPinkFactory->createFlower();
    flower->showPetalsColor();

    PlantsFactory *absRedFactory = new RedFactory();
    Tree *tree = absRedFactory->createTree();
    tree->showLeavesColor();
}