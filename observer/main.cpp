#include <iostream>
#include "telescope.h"
#include "star.h"

int main(){
    Star star;
    Telescope telescope1;
    Telescope telescope2;

    star.addObserver(&telescope1);
    star.addObserver(&telescope2);

    star.setState(Star::SHINING); 

    return 0; 
}