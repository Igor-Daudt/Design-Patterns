#pragma once

class Observer;

#include <vector>

class Observable{
    public:
        virtual ~Observable() = default;
        void addObserver(Observer *obs);
        void deleteObserver(Observer *obs);
        void notify(bool data);
    
    private:
        
        static std::vector<Observer*> listObservers;
};