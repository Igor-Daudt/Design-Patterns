#include "tree.h"

class PinkTree : public Tree{
    public:
        void showLeavesColor();
    
    private: 
        std::string color{"pink"};
};