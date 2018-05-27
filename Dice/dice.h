//
// Created by Marco on 15/04/2018.
//

#ifndef GOP_DICE_H
#define GOP_DICE_H


#include <map>
#include "../Util.h"
#include "../Player/player.h"
#include <vector>

class dice {
public:
    int throwDice(int Number);
private:
    const int min_ = 1;
    const int max_ = 6;
};


#endif //GOP_DICE_H
