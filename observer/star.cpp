#include "star.h"

void Star::setState(int newState){
    this->state = newState;
    this->notify(state);
}

int Star::getState(){
    return this->state;
}