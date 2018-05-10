//
// Created by vecr on 05/05/18.
//

#include "Card.h"
#include "Effects.h"

Card::Card(int number, int effectNumber){
    this->number=number;
    this->effectNumber=effectNumber;
}


int Card::getNumber() {
    return number;
}


int Card::getEffectNumber(){
    return effectNumber;
}

