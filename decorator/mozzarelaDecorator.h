#include "pizzaDecorator.h"

class MozzarelaDecorator : public PizzaDecorator{
    public:
        using PizzaDecorator::PizzaDecorator;
        void makePizza();

};