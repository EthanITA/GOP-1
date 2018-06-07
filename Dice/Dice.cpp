//
// Created by Marco on 15/04/2018.
//

#include "Dice.h"


int dice::throwDice(int n) {
    return Util::random(kMin_*n, kMax_*n);
}