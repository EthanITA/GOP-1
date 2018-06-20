//
// Created by Marco on 30/05/2018.
//

#ifndef GOP_GAME_H
#define GOP_GAME_H

#include "../Dice/Dice.h"
#include "../Player/Player.h"
#include "../Player/InitPlayers.h"
#include "../Utils/Colors.h"
#include "../Map/Map.h"
#include "../Deck/Deck.h"
#include "../Utils/Util.h"

using namespace std;

class game {
public:
    game();
private:
    Player player_;
    Colors color_;
    dice dice_;
    Map map_;

    void welcome();
    void vincoli();
    void caratteristica();
    void joke1();
    void start();
};


#endif //GOP_GAME_H
