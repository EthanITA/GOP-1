//
// Created by vecr on 10/05/18.
//

#ifndef GOP_DECK_H
#define GOP_DECK_H


#include "Card.h"
#include "../Utils/Util.h"
#include "../Utils/Effects.h"
#include "../Player/Player.h"
#include <vector>

class Deck {
private:
    int numberOfCards, playerNumber;
    Effects e;
    Player p;
    static std::vector<Card> cards;
    int noOfEffects;
    Player executeAction(int effectNumber);
public:
    Deck();
    int getCard();
    int getEffectFromCardNumber (int cardNumber);
    Player executeCardAction (Player p, int playerNumber);
    Player executeCellAction (Player p, int playerNumber, int effectNumber);
    std::string getEffectString (int cardNumber);
};


#endif //GOP_DECK_H
