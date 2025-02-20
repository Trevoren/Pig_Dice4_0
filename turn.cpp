//
// Created by administrator on 2/13/25.
//
 #include "turn.h"
using namespace std;

void Turn::roll(int val) {
 if(val == 1) {
  score_this_turn = 0;
  cout << "Turn Over. No Score." << endl;
  turn++;
  cout << "Score for turn:" << score_this_turn << endl;
  cout << "Total score:" << score << endl<<endl;
  cout << "TURN " << turn << endl;
 }else {
  score_this_turn += val;
 }
}

void Turn::hold() {
 score += score_this_turn;
 cout << "Score for turn:" << score_this_turn << endl;
 cout << "Total score:" << score << endl<<endl;
 score_this_turn = 0;
 if(score >= 20) {
  cout << "You finished with a final score of 20 or more in " << turn << " turns!";
 }else {
  turn++;
  cout << "TURN " << turn << endl;
 }
}
void Turn::Choice() {
 char choice;
 cout << "roll or hold? (r/h): ";
 cin >> choice;
 if (choice == 'r') {
  roll(die.out());
 }else if (choice == 'h'){
  hold();
 }else {
  cout << "Invalid choice! Try again." << endl;
 }
}
