#include "pizzaDecorator.h"

PizzaDecorator::PizzaDecorator(PizzaComponent *pizza){
    this->pizza = pizza;
}

void PizzaDecorator::makePizza(){
    this->pizza->makePizza();
}

