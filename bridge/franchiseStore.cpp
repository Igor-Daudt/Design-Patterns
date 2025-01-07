#include "franchiseStore.h"

void  FranchiseStore::addToppings(){
    std::cout << "Turning on the machine" << std::endl;
    std::cout << "Putting the franchise toppings" << std::endl;
}

void FranchiseStore::makeIcecream(){
    this->icecream->buildIcecream();
    this->addToppings();
}