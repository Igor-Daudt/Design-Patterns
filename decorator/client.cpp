#include <iostream>
#include "pepperoniDecorator.h"
#include "mozzarelaDecorator.h"
#include "pizza.h"
#include "pizzaComponent.h"

int main(){
    PizzaComponent *component = new PepperoniDecorator(new MozzarelaDecorator(new Pizza()));
    component->makePizza();

    return 0;
}