#include <iostream>

class BankFacade{
    public:
        BankFacade(int accountId);

        bool makeDeposit(int quantity);
        bool withdrawMoney(int quantity);
        int checkBalance();
        bool investMoney(int quantity, std::string investmentType);
};