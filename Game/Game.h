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

protected:
    Player player_;
    Colors color_;
    dice dice_;
    Map map_;
    Deck deck_;
    void welcome();
    void vincoli();
    void caratteristica();
    void start();
    void checkSquare(int);
    void mapWaitEffect();
    void updateMap();
    void redoLoopCondition(int&);
    void animationSteps(int&, int&, int);
    void winMessage(int);
    void stepsMessage(int, int);
    void executeCell(int);
    void executeCard(int);
    void checkAndRemoveDebuff(int);
    bool noWinner(int, int);
    bool cellEffect(int);
    bool drawACard(int);

private:
    bool local_stop_[5];
    bool local_dice_[5];
};


#endif //GOP_GAME_H
