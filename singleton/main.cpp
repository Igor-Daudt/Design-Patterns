#include <iostream>
#include "player.h"

using namespace std;

int main(){
    Player *player1 = Player::getInstance();
    cout << player1 << endl;

    Player *player2 = Player::getInstance();
    cout << player2 << endl;
    // Both need to point to the same adress
}