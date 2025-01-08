#include "flower.h"

class RedFlower : public Flower{
    public:
        void showPetalsColor();

    private: 
        std::string color{"red"};
};