//
// Created by Marco on 15/04/2018.
//

#ifndef GOP_INITPLAYERS_H
#define GOP_INITPLAYERS_H

#include "numPlayers.h"
#include "player.h"
class initPlayers {
public:
	initPlayers();
//	player getPlayer(int n);
//	player p[4];
private:
    int inputNumber();
	void welcome();
    std::string inputName(int);
};


#endif //GOP_INITPLAYERS_H
