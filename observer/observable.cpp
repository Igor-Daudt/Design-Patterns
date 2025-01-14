#include "observable.h"
#include <iostream>
#include <bits/stdc++.h>
#include "observer.h"

std::vector<Observer*> Observable::listObservers;

void Observable::notify(bool data){
    for(Observer *i : this->listObservers){
        i->update(data);
    }
}

void Observable::addObserver(Observer *obs){
    listObservers.push_back(obs);
}

void Observable::deleteObserver(Observer *obs){
    listObservers.erase(std::find(listObservers.begin(), listObservers.end(), obs));
}
