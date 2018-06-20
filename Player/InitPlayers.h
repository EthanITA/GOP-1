//
// Created by Marco on 15/04/2018.
//

#ifndef GOP_INITPLAYERS_H
#define GOP_INITPLAYERS_H

#include "Player.h"
class initPlayers {
public:
	initPlayers();
    player returnP_();
//	player getPlayer(int n);
//	player p[4];
private:
    player p_;
	int checkSameNickname(player, int);
	int inputNumber();
	std::string inputName(int);
};


#endif //GOP_INITPLAYERS_H
