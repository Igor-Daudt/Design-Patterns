#include "store.h"

class FranchiseStore : public Store{
    public:
        using Store::Store;
        void addToppings();
        void makeIcecream();
    
};