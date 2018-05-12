//
// Created by Marco on 15/04/2018.
//

#include "player.h"


player::player(int n){
    num_Player_ = n;
}
void player::setTurn_(std::string name, int turn){
    turn_ [name]= turn;
}
void player::setPlayer_(std::string name, int i){
    player_ [i] = name;
}
void player::setSquare_(std::string name, int square){
    square_[name] = square;
}
int player::getTurn_(std::string Name)  {
    return turn_[Name];
}

std::string player::getPlayer_(int Turn) {
    return player_[Turn];
}

int player::getPlayer_square_(std::string Name) {
    return square_[Name];
}
int player::getNum_player_(){
    return num_Player_;
}
