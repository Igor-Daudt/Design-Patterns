#include "chocolateIcecream.h"
#include "localStore.h"
#include "franchiseStore.h"
#include "strawberryIcecream.h"
#include "store.h"

int main(){
    Store *localStore = new LocalStore(new ChocolateIcecream("Sugar cone"));
    localStore->makeIcecream();

    Store *franchiseStore = new FranchiseStore(new StrawberryIcecream("Dipped cone"));
    franchiseStore->makeIcecream();
}