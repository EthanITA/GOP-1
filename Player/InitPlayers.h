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
private:
    Player p_;
	int inputNumber();
	std::string inputName(int);
	int checkSameNickname(Player, int);
};


#endif //GOP_INITPLAYERS_H
