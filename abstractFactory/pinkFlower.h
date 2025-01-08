#include "flower.h"

class PinkFlower : public Flower{
    public:
        void showPetalsColor();
    
    private: 
        std::string color{"pink"};
};