#ifndef PIZZADECORATOR_H
#define PIZZADECORATOR_H

#include "pizzaComponent.h"

class PizzaDecorator : public PizzaComponent{
    public:
        PizzaDecorator(PizzaComponent *pizza);
        void makePizza();
    
    private:
        PizzaComponent *pizza;
    
};

#endif