#ifndef STORE_H
#define STORE_H

#include "icecream.h"

class Store{
    protected:
        virtual void addToppings() = 0;
        Icecream *icecream;
    
    public:
        virtual void makeIcecream() = 0;
        Store(Icecream *icecream);
};

#endif 





