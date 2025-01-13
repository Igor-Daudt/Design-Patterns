#include "pizzaDecorator.h"

class PepperoniDecorator : public PizzaDecorator{
    public:
        using PizzaDecorator::PizzaDecorator;
        void makePizza();

};