#include <iostream>
#include "lowExp.h"
#include "mediumExp.h"
#include "bigExp.h"
#include "experience.h"

int main(){
    int monsterLevel = 50;
    double expDropped{};

    if(monsterLevel <= 10){
        expDropped = LowExp::getExp(monsterLevel);
    }
    else if(monsterLevel <= 50){
        expDropped = MediumExp::getExp(monsterLevel);
    }
    else if(monsterLevel > 50){
        expDropped = BigExp::getExp(monsterLevel);
    }

    std::cout << "Exp dropped: " << expDropped << std::endl;
}