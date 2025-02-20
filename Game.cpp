//
// Created by administrator on 2/13/25.
//
#include "Game.h"
using namespace std;
void Game::display_rules() {
    cout << "Let's Play PIG Dice!" << endl<< endl;
    cout <<"* See how many turns it takes you to get to 20."<< endl;
    cout <<"* Turn ends when you hold or roll a 1." << endl;
    cout <<"* If you roll a 1, you lose all your points for the turn." << endl;
    cout <<"* If you hold, you save all points for the turn" << endl<<endl;
    cout << "TURN 1" << endl;
}
Game::Game() {
    display_rules();
    gameOver=false;
    while(gameOver==false) {
        turn.Choice();
        if(turn.score >= 20) {
            gameOver=true;
        }
    }
}
