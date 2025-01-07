#include "localStore.h"

void  LocalStore::addToppings(){
    std::cout << "Putting random special toppings" << std::endl;
}

void LocalStore::makeIcecream(){
    this->icecream->buildIcecream();
    this->addToppings();
}