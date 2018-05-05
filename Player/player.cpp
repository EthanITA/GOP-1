//
// Created by Marco on 15/04/2018.
//

#include "player.h"


player::player(){}
player::player(std::string name, int turn){
	turn_ [name]= turn;
	player_ [turn] = name;
	player_square_[name] = 0;
}

int player::getTurn_(std::string Name)  {
    return turn_[Name];
}

std::string player::player_Get(int Turn) {
    return player_[Turn];
}

int player::player_square_Get(std::string Name) {
    return player_square_[Name];
}
