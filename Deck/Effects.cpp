//
// Created by vecr on 05/05/18.
//
#include "Effects.h"
#include <string>
#include <iostream>



//Given an INT with the code of the instruction returns a string with the effect
std::string Effects::getEffects(int code) {
    return effects[code];
}


bool Effects::executeAction(int code){
    switch (code) {
        case (1): {
            std::cout<<"EFFETTO 1"<<std::endl;
            return true;
        }
        default:{
            std::cout<<"ERROR ACTION NOT FOUND!";
            return false;
        }
    }
}


int Effects::numberOfEffects(){
    return sizeof( effects ) / sizeof( effects[ 0 ] );
}