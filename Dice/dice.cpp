//
// Created by Marco on 15/04/2018.
//

#include "dice.h"


dice::dice(int n){
    dice_.max_= 6*n;
    dice_.min_=1*n;
}

void dice::setDice(int dice) {

}

int dice::throwDice() {
    return Util::random(dice_.min_, dice_.max_);
}