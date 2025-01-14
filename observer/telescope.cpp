#include "telescope.h"
#include <iostream>
#include "star.h"

void Telescope::update(bool data){
    if(data == Star::SHINING){
        std::cout << "Telescope pointing at star" << std::endl;
    }
}