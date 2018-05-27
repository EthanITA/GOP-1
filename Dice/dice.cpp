//
// Created by Marco on 15/04/2018.
//

#include "dice.h"


int dice::throwDice(int n) {
    return Util::random(min_*n, max_*n);
}