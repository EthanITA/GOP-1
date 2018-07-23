//
// Created by vecr on 10/05/18.
//

#include "Deck.h"

std::vector<Card> Deck::cards(80);

Deck::Deck() {
    int i;
    numberOfCards=(int)cards.size();
    int noOfEffects= Effects::numberOfEffects();
//Creating DECK
    for(i=0;i<numberOfCards;i++){
       cards.at(i).setEverything(i,Util::random(1,noOfEffects));
    }

//    USED FOR DEBUG
//    for(i=0;i<numberOfCards;i++){
//        std::cout<<"Number "<<cards.at(i).getNumber()<<" Effect "<<cards.at(i).getEffectNumber()<<" "<< e.getEffectsStringFromNumber(
//                cards.at(i).getEffectNumber())<<std::endl;
//    }
}


int Deck::getCard() {
    int i= Util::randomFrom1(numberOfCards);
    return cards.at(static_cast<unsigned long>(i)).getNumber();
}

int Deck::getEffectFromCardNumber(int cardNumber) {

    return cards.at(static_cast<unsigned long>(cardNumber)).getEffectNumber();
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
//  The effects are available in Effects.h
        case 1: { //"Pesca una carta"
            std::cout<<e.getEffectsStringFromNumber(1)<<std::endl;
            p.setCard(getCard(),playerNumber);
            break;
        }

        case 2: {//"Fai un altro lancio"
            std::cout<<e.getEffectsStringFromNumber(2)<<std::endl;
            p.addSquare_(playerNumber, d.throwDice(p.getDice_(playerNumber)));
            break;
        }

        case 3: {// "Vai avanti di 1"
            std::cout<<e.getEffectsStringFromNumber(3)<<std::endl;
            p.addSquare_(playerNumber, 1);
            break;
        }

        case 4: {// "Vai indietro di 1"
            std::cout<<e.getEffectsStringFromNumber(4)<<std::endl;
            if(p.getSquare_(playerNumber) != 0)
                p.addSquare_(playerNumber, -1);
            break;
        }

        case 5: {// "Avanti a seconda di quanto esce sul dado"
            std::cout<<e.getEffectsStringFromNumber(5)<<std::endl;
            p.addSquare_(playerNumber, d.throwDice(1));
            break;
        }

        case 6: {// "Indietro a seconda di quanto esce sul dado"
            std::cout<<e.getEffectsStringFromNumber(6)<<std::endl;
            int dice = d.throwDice(1);
            p.addSquare_(playerNumber, -dice);
            if(p.getSquare_(playerNumber) < 0)
                p.addSquare_(playerNumber, 0);
            break;
        }

        case 7: {// "Scambia la posizione con un altro giocatore"
            int otherPlayerNumber=Util::randomFrom1(p.getNum_player_()), temp, squarePlayer, squareOtherPlayer;//Da finire per bene
            std::cout<<e.getEffectsStringFromNumber(7)<<std::endl;


            if(p.getNum_player_()!=1){
                if(p.getNum_player_()==2){
                    switch (playerNumber){
                        case 1:{
                            otherPlayerNumber=2;
                        break;
                        }
                        case 2:{
                            otherPlayerNumber=1;
                        break;
                        }
                        default:{

                        }
                    }
                }else{
                    while (otherPlayerNumber == playerNumber)
                        otherPlayerNumber = Util::randomFrom1(p.getNum_player_());
                }

                temp=p.getSquare_(playerNumber);
                p.setSquare_(playerNumber, p.getSquare_(otherPlayerNumber));//Exchange the 2 players square number
                p.setSquare_(otherPlayerNumber, temp);


                Colors c;

                p.switchBold(otherPlayerNumber);
                std::cout<< p.getColor(playerNumber)<<p.getName_(playerNumber)
                         << c.kStop + " si è cambiato di posizione con " + p.getColor(otherPlayerNumber)
                         <<p.getName_(otherPlayerNumber)<<c.kStop + "!"  <<std::endl;
                p.switchBold(otherPlayerNumber);
            }
            else{
                std::cout<<"Eh, però non funziona con un solo giocatore."<<std::endl;
            }
            break;
        }

        case 8: {// "Fermo un turno"
            std::cout<<e.getEffectsStringFromNumber(8)<<std::endl;
            p.switchStop_(playerNumber);
            p.setTurnsStopped(1,playerNumber);
            break;
        }

//        case 9: {// "Sta fermo per x turni a seconda di quanto esce sul dado"
//            int dice=d.throwDice(1);
//            std::cout<<e.getEffectsStringFromNumber(9)<<std::endl;
//            p.switchStop_(playerNumber);
//            p.setTurnsStopped(dice,playerNumber);
//            std::cout<<p.getName_(playerNumber)<<" starà fermo per "<<dice<<" turni"<<std::endl;
//            break;
//        }

        case 9:{// "Gioco con 1 dado per X turni a seconda di quanto esce sul dado"
            std::cout<<e.getEffectsStringFromNumber(10)<<std::endl;
            p.setTurnsOneDice(d.throwDice(1), playerNumber);
            p.switchDice_(playerNumber);
        }


        default:{
            std::cout<<"ERROR ACTION NOT FOUND!"<<std::endl;
            break;
        }
    }
    return p;
}