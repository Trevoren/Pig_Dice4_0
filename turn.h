//
// Created by administrator on 2/13/25.
//

#ifndef TURN_H
#define TURN_H
#include <iostream>
#include "die.h"

class Turn {
private:
    int score_this_turn =0;
    int turn=1;
    int score =0;
    bool turn_over=false;
    Die die;
    void roll(int val);
    void hold();

    public:
    void Choice();
    int getScore();
};

#endif //TURN_H
