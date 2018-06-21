//
// Created by Marco on 15/04/2018.
//

#include "Dice.h"


int dice::throwDice(int n) {
    if (n==0)
        return 0;
    else{
    int dice = 0;

    for(int i = 1; i <= n; i++)
        dice = dice + Util::random(kMin_,kMax_);
    return dice;}
}