//
// Created by vecr on 10/05/18.
//

#include "Deck.h"
#include <iostream>
#include "Effects.h"

std::vector<Card> Deck::cards((unsigned long)Effects::numberOfEffects());

Deck::Deck(int numberOfCards) {
    int i;
    noOfEffects=Effects::numberOfEffects();

    Effects e = Effects();



    std::cout<<"GET NUMBER "<<noOfEffects<<std::endl;
//Creating DECK
    for(i=1;i<=numberOfCards;i++){
       cards.at(i).setEverything(i,Util::random(0,noOfEffects));
    }

//    for(i=1;i<=numberOfCards;i++){
//        std::cout<<"Number "<<cards.at(i).getNumber()<<" Effect "<<cards.at(i).getEffectNumber()<<" "<<e.getEffects(cards.at(i).getEffectNumber())<<std::endl;
//    }
}


int Deck::getCard() {
    int i= Util::randomFrom1(noOfEffects);
    return cards.at(i).getNumber();
}
