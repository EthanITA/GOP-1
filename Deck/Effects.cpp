//
// Created by vecr on 05/05/18.
//
#include "Effects.h"
#include <string>
#include <iostream>
#include <algorithm>



//Given an INT with the code of the instruction returns a string with the effect
string Effects::getEffects(int code) {
    return effects[code];
}


bool Effects::getAction(int code){
    switch (code) {
        case (1): {
            cout<<"EFFETTO 1"<<endl;
            return true;
        }
            break;
        default:{
            cout<<"ERROR ACTION NOT FOUND!";
            return false;
        }
    }
}

