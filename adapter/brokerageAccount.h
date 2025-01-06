#include <iostream>
#include "account.h"

class BrokerageAccount : public Account{
    public:
        BrokerageAccount(int accountId);

        virtual void checkBalance();
        virtual void withdrawMoney(int quantity);
        virtual void makeDeposit(int quantity);
};