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
        cards.at(i).setEverything(i,7);
    }

//    for(i=0;i<numberOfCards;i++){
//        std::cout<<"Number "<<cards.at(i).getNumber()<<" Effect "<<cards.at(i).getEffectNumber()<<" "<< e.getEffectsStringFromNumber(
//                cards.at(i).getEffectNumber())<<std::endl;
//    }
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

Player Deck::executeAction(int effectNumber) { //Private method
    switch (effectNumber) {
        case 1: { //"Pesca una carta"
            std::cout<<"\n"<<e.getEffectsStringFromNumber(1)<<std::endl;
            p.setCard(getCard(),playerNumber);
            break;
        }

        case 2: {//"Fai un altro lancio"
            int square;
            std::cout<<"\n"<<e.getEffectsStringFromNumber(2)<<std::endl;
            square=p.getSquare_(playerNumber);
            square+=d.throwDice(p.getDice_(playerNumber));
            p.setSquare_(playerNumber,square);
            break;
        }

        case 3: {// "Vai avanti di 1"
            int square;
            std::cout<<"\n"<<e.getEffectsStringFromNumber(3)<<std::endl;
            square=p.getSquare_(playerNumber)+1;
            p.setSquare_(playerNumber,square);
            break;
        }

        case 4: {// "Vai indietro di 1"
            int square;
            std::cout<<"\n"<<e.getEffectsStringFromNumber(4)<<std::endl;
            square=p.getSquare_(playerNumber);
            if(square>=1){
                square--;
            }
            p.setSquare_(playerNumber,square);
            break;
        }

        case 5: {// "Avanti a seconda di quanto esce sul dado"
            int square;
            std::cout<<"\n"<<e.getEffectsStringFromNumber(5)<<std::endl;
            square=p.getSquare_(playerNumber);
            square+=d.throwDice(p.getDice_(playerNumber));
            p.setSquare_(playerNumber,square);
            break;
        }

        case 6: {// "Indietro a seconda di quanto esce sul dado"
            int square;
            std::cout<<"\n"<<e.getEffectsStringFromNumber(6)<<std::endl;
            square=p.getSquare_(playerNumber);
            square=35;
            square-=d.throwDice(p.getDice_(playerNumber));
            if(square<0)
                square=0;
            p.setSquare_(playerNumber,square);
            break;
        }

        case 7: {// "Scambia la posizione con un altro giocatore"
            int squarePlayerWithEffect, squareOtherPlayer, otherPlayerNumber=Util::randomFrom0(p.getNum_player_()-1);
            std::cout<<"\n"<<e.getEffectsStringFromNumber(7)<<std::endl;
            if(p.getNum_player_()!=1){
                squarePlayerWithEffect=p.getSquare_(playerNumber);
                squareOtherPlayer=p.getSquare_(otherPlayerNumber);
                p.setSquare_(playerNumber,squareOtherPlayer);
                p.setSquare_(otherPlayerNumber,squarePlayerWithEffect);
                std::cout<<"\n"<<p.getName_(playerNumber)<<" si è cambiato di posizione con "<<p.getName_(otherPlayerNumber)<<"!"<<std::endl;
            }
            else{
                std::cout<<"Questo effetto non funziona con un solo giocatore."<<std::endl;
            }
            break;
        }

        case 8: {// "Fermo un turno"
            std::cout<<"\n"<<e.getEffectsStringFromNumber(8)<<std::endl;
            p.switchStop_(playerNumber);
            break;
        }

        case 9: {// "Gioco con 1 dado per X turni a seconda di quanto esce sul dado"
            std::cout<<"\n"<<e.getEffectsStringFromNumber(9)<<std::endl;
            p.setTurnsStopped(d.throwDice(p.getDice_(playerNumber)),playerNumber);
            p.switchStop_(playerNumber);
            break;
        }


        default:{
            std::cout<<"ERROR ACTION NOT FOUND!"<<std::endl;
            break;
        }
    }
    return p;
}