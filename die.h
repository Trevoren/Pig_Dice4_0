//
// Created by administrator on 2/13/25.
//

#ifndef DIE_H
#define DIE_H
#include <cstdlib>
#include <ctime>
#include <iostream>

class Die {
private:
    int value;
    int sides;
    void rollF() ;
public:
    Die() ;
    Die(int sides) ;
    int out() ;
};

#endif //DIE_H
