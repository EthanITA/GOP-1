//
// Created by Marco on 15/04/2018.
//

#include "player.h"


player::player(int n){
    num_Player_ = n;
}
void player::setPlayer_(int i, std::string name){
    player_ [i] = {name, 0};
}
void player::setSquare_n(std::string Name, int Square) {
    bool flag = true;
    for (int i = 1; i <= num_Player_ && flag; ++i) {
        if (player_[i].name_ == Name){
            flag = false;
            player_[i].square_ = Square;
        }
    }
}
void player::setSquare_t(int turn, int square) {
    player_[turn].square_ = square;
}

std::string player::getName_(int Turn) {
    return player_[Turn].name_;
}
int player::getSquare_(int Turn){
    return player_[Turn].square_;
}
int player::getNum_player_(){
    return num_Player_;
}
