#include "store.h"

class LocalStore : public Store{
    public:
        using Store::Store;
        void addToppings();
        void makeIcecream();
    
};