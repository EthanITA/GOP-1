//
// Created by vecr on 05/05/18.
//
#include "Effects.h"
#include <string>
#include <iostream>



//Given an INT with the code of the instruction returns a string with the effect
std::string Effects::getEffectsStringFromNumber(int stringNumber) {
    return effects[stringNumber];
}


Player Effects::executeAction(Player p,int playerNumber, int effectNumber){

}


int Effects::numberOfEffects(){
    return sizeof( effects ) / sizeof( effects[ 0 ] )-1;
}