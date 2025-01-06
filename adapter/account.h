#include <iostream>

class Account {
    public:
        virtual ~Account() = default;
        virtual void checkBalance() = 0;
        virtual void withdrawMoney(int quantity) = 0;
        virtual void makeDeposit(int quantity) = 0;
};