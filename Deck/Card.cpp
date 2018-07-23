//
// Created by vecr on 05/05/18.
//

#include "Card.h"

int Card::getNumber() { //return card number
    return number;
}


int Card::getEffectNumber(){ //return the number of the effect of the card
    return effectNumber;
}


void Card::setNumber(int number){ //Used to change the number of the card, it should not be needed, but just in case
    this->number=number;
}

void Card::setEffectNumber(int effectNumber){ //Used to change the effect number of the card, it should not be needed.
    this->effectNumber=effectNumber;
}

void Card::setEverything(int number, int effectNumber) {//Change everything about the card
    setNumber(number);
    setEffectNumber(effectNumber);
}