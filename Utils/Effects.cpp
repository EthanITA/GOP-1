//
// Created by vecr on 05/05/18.
//
#include "Effects.h"
#include <string>
#include <iostream>



//Given an INT with the code of the instruction returns a string with the effect
std::string Effects::getEffectsStringFromNumber(int efffectNumber) {
    return effects[efffectNumber];
}


void Effects::executeAction(int effectNumber){
    //TODO Implementaione degli effetti dopo che si è implementata la mappa
    switch (effectNumber) {
        case (1): {
            std::cout<<"EFFETTO 1"<<std::endl;
        }
        case (2): {
            std::cout<<"EFFETTO 2"<<std::endl;
        }
        default:{
            std::cout<<"ERROR ACTION NOT FOUND!"<<std::endl;
        }
    }
}


int Effects::numberOfEffects(){
    return sizeof( effects ) / sizeof( effects[ 0 ] )-1;
}