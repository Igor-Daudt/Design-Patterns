#include "pepperoniDecorator.h"
#include <iostream>

void PepperoniDecorator::makePizza(){
    std::cout << "Put pepperoni" << std::endl;
    PizzaDecorator::makePizza();
}