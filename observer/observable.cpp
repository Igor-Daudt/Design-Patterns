#include "observable.h"
#include <iostream>
#include <bits/stdc++.h>

Observable::Observable(){
}

void Observable::notify(){
    for(Observer &i : this->listObservers){
        i.update(this);
    }
}

bool Observable::getState(){
    return state;
}

void Observable::setState(bool newState){
    this->state = newState;
    this->notify();
}

void Observable::addObserver(Observer *obs){
    listObservers.push_back(*obs);
}

void Observable::deleteObserver(Observer *obs){
    listObservers.erase(std::find(listObservers.begin(), listObservers.end(), *obs));
}
