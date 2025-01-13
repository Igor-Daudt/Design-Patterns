#include "observer.h"

Observer::Observer(){
    Observable::addObserver(this);
}

