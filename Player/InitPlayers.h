//
// Created by Marco on 15/04/2018.
//

#ifndef GOP_INITPLAYERS_H
#define GOP_INITPLAYERS_H

#include "Player.h"
class initPlayers {
public:
	initPlayers();
    Player returnP_();
//	player getPlayer(int n);
//	player p[4];
private:
    Player p_;
	int checkSameNickname(Player, int);
	int inputNumber();
	std::string inputName(int);
};


#endif //GOP_INITPLAYERS_H
