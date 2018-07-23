//
// Created by vecr on 05/05/18.
//
#include "Effects.h"

//Given an INT with the code of the instruction returns a string with the effect
std::string Effects::getEffectsStringFromNumber(int stringNumber) {
    return effects[stringNumber];
}

int Effects::numberOfEffects(){
    return sizeof( effects ) / sizeof( effects[ 0 ] )-1;
}