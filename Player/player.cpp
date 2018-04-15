//
// Created by Marco on 15/04/2018.
//

#include "player.h"
#include "numPlayers.h"

player::player(std::string nickname, int turn){
	setNickname(nickname);
	setTurn(turn);
}

void player::setNickname(const std::string nickname) {
	player::nickname_ = nickname;
}

void player::setTurn(int turn) {
	player::turn_ = turn;
}

const std::string &player::getNickname_() const {
	return nickname_;
}

int player::getTurn_() const {
	return turn_;
}
