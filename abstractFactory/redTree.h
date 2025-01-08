#include "tree.h"

class RedTree : public Tree{
    public:
        void showLeavesColor();

    private: 
        std::string color{"red"};
};