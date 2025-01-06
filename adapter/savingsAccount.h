#include <iostream>
#include "account.h"
#include "oldSavingsAccount.h"

class SavingsAccount : public Account{
    public:
        SavingsAccount(int accountId);

        void checkBalance();
        void withdrawMoney(int quantity);
        void makeDeposit(int quantity);

    private:
        oldSavingsAccount *oldAccount;
};