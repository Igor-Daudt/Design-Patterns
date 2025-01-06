#include "savingsAccount.h"

SavingsAccount::SavingsAccount(int accountId){
    this->oldAccount = new oldSavingsAccount(accountId);
}

void SavingsAccount::checkBalance(){
    this->oldAccount->checkMoney();
}
void SavingsAccount::withdrawMoney(int quantity){
    this->oldAccount->takeMoney(quantity);
}
void SavingsAccount::makeDeposit(int quantity){
    this->oldAccount->putMoney(quantity);
}