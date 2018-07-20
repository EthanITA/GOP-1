//
// Created by vecr on 05/05/18.
//
#include "Effects.h"
#include <string>
#include <iostream>



//Given an INT with the code of the instruction returns a string with the effect
std::string Effects::getEffects(int effectNumber) {
    if(effects_of_cards_[effectNumber].random) //serve random
        return effects_of_cards_[effectNumber].effect +
                std::to_string(Util::random(effects_of_cards_[effectNumber].random_start,
                                            effects_of_cards_[effectNumber].random_end));
    return effects_of_cards_[effectNumber].effect; //non serve random
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
    return sizeof( effects_of_cards_ ) / sizeof( effects_of_cards_[ 0 ] )-1;
}