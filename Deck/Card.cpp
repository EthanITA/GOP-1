//
// Created by vecr on 05/05/18.
//

#include "Card.h"
#include "Effects.h"

//Card::Card(int number, int effectNumber){
//    this->number=number;
//    this->effectNumber=effectNumber;
//}


int Card::getNumber() {
    return number;
}


int Card::getEffectNumber(){
    return effectNumber;
}


void Card::setNumber(int number){
    this->number=number;
}

void Card::setEffectNumber(int effectNumber){
    this->effectNumber=effectNumber;
}

void Card::setEverything(int number, int effectNumber) {
    setNumber(number);
    setEffectNumber(effectNumber);
}