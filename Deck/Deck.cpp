//
// Created by vecr on 10/05/18.
//

#include "Deck.h"
#include <iostream>
#include "../Utils/Effects.h"

std::vector<Card> Deck::cards(80);

Deck::Deck() {
    int i;
    numberOfCards=cards.size();
    noOfEffects=Effects::numberOfEffects();
    Effects e = Effects();

//Creating DECK
    for(i=0;i<numberOfCards;i++){
       cards.at(i).setEverything(i,Util::random(1,noOfEffects));
    }
//
//    for(i=0;i<numberOfCards;i++){
//        std::cout<<"Number "<<cards.at(i).getNumber()<<" Effect "<<cards.at(i).getEffectNumber()<<" "<< e.getEffectsStringFromNumber(
//                cards.at(i).getEffectNumber())<<std::endl;
//    }
}


int Deck::getCard() {
    int i= Util::randomFrom1(noOfEffects);
    return cards.at(i).getNumber();
}

int Deck::getEffectFromCardNumber(int cardNumber) {
    return cards.at(cardNumber).getEffectNumber();
}

void Deck::executeAction(int cardNumber) {
    int effectNumber=getEffectFromCardNumber(cardNumber);
    Effects::executeAction(effectNumber);
}

std::string Deck::getEffectString(int cardNumber) {
    Effects e=Effects();
    int effectNumber=getEffectFromCardNumber(cardNumber);
    return e.getEffectsStringFromNumber(effectNumber);
}