//
// Created by vecr on 10/05/18.
//

#include "Deck.h"
#include <iostream>

std::vector<Card> Deck::cards(80);

Deck::Deck() {
    int i;
    numberOfCards=(int)cards.size();
    e = Effects();
    noOfEffects=e.numberOfEffects();


//Creating DECK
    for(i=0;i<numberOfCards;i++){
//       cards.at(i).setEverything(i,Util::random(1,noOfEffects));
        cards.at(i).setEverything(i,1);
    }

    for(i=0;i<numberOfCards;i++){
        std::cout<<"Number "<<cards.at(i).getNumber()<<" Effect "<<cards.at(i).getEffectNumber()<<" "<< e.getEffectsStringFromNumber(
                cards.at(i).getEffectNumber())<<std::endl;
    }
}


int Deck::getCard() {
    int i= Util::randomFrom1(numberOfCards);
    return cards.at(i).getNumber();
}

int Deck::getEffectFromCardNumber(int cardNumber) {
    return cards.at(cardNumber).getEffectNumber();
}

Player Deck::executeCardAction(Player p, int playerNumber) {
    int effectNumber=getEffectFromCardNumber(p.getCard(playerNumber));
    this->p=p;
    this->playerNumber=playerNumber;
    return  executeAction(effectNumber);
}

Player Deck::executeCellAction(Player p, int playerNumber, int effectNumber) {
    this->p=p;
    this->playerNumber=playerNumber;
    return executeAction(effectNumber);
}

Player Deck::executeAction(int effectNumber) {
    switch (effectNumber) {
        case 1: { //"Pesca una carta"
            std::cout<<"\n"<<e.getEffectsStringFromNumber(1)<<std::endl;
            p.setCard(getCard(),playerNumber);
            break;
        }
        case 2: {
            std::cout<<"EFFETTO 2"<<std::endl;
            break;
        }
        default:{
            std::cout<<"ERROR ACTION NOT FOUND!"<<std::endl;
            break;
        }
    }
    return p;
}

std::string Deck::getEffectString(int cardNumber) {
    Effects e=Effects();
    int effectNumber=getEffectFromCardNumber(cardNumber);
    return e.getEffectsStringFromNumber(effectNumber);
}