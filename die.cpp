//
// Created by administrator on 2/13/25.
//
#include "die.h"
using namespace std;


void Die::rollF() {
    srand(time(0));
    value = rand() %sides+1;
    cout << "Die: " << value << endl;
};
Die::Die() {
    sides = 6;
}
Die::Die(int sides) {
    this->sides = sides;
}
int Die::out() {
    rollF();
    return value;
}