//
// Created by administrator on 2/13/25.
//

#ifndef GAME_H
#define GAME_H
#include "turn.h"
#include "die.h"

class Game {
    void display_rules();
    bool gameOver;
    Turn turn;
    public:
    Game();
};
#endif //GAME_H
