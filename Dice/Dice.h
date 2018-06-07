//
// Created by Marco on 15/04/2018.
//

#ifndef GOP_DICE_H
#define GOP_DICE_H


#include <map>
#include "../Utils/Util.h"
#include "../Player/player.h"
#include <vector>

class dice {
public:
    int throwDice(int Number);
private:
    const int kMin_ = 1;
    const int kMax_ = 6;
};


#endif //GOP_DICE_H
