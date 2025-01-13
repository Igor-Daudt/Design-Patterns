#include "mozzarelaDecorator.h"
#include <iostream>

void MozzarelaDecorator::makePizza(){
    std::cout << "Put mozzarela" << std::endl;
    PizzaDecorator::makePizza();
}