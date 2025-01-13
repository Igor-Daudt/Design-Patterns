#include "telescope.h"
#include <iostream>

void Telescope::update(Observable *obs){
    if(obs->getState() == obs->SHINING){
        std::cout << "Telescope pointing at " << obs << std::endl;
    }
}