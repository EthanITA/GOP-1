//
// Created by Marco on 30/05/2018.
//

#ifndef GOP_GAME_H
#define GOP_GAME_H

#include "../Dice/dice.h"
#include "../Player/player.h"
#include "../Player/initPlayers.h"
#include "../Utils/Colors.h"
#include "../Map/Map.h"
#include "../Deck/Deck.h"

using namespace std;
class game {
public:
    game();
private:
    player player_;
    Colors color_;
    dice dice_;

    void initClasses();
    void welcome();
};


#endif //GOP_GAME_H
