#ifndef ICECREAM_H
#define ICECREAM_H

#include <iostream>

class Icecream{
    public:
        Icecream(std::string coneType);
        virtual void buildIcecream() = 0;

    protected:
        std::string coneType; 
};

#endif 



