//
// Created by vecr on 10/05/18.
//

#ifndef GOP_DECK_H
#define GOP_DECK_H


#include "Card.h"
#include "../Utils/Util.h"
#include "../Utils/Effects.h"
#include <vector>

class Deck {
private:
    unsigned long numberOfCards;
    static std::vector<Card> cards;
    int noOfEffects;
public:
    Deck();
    int getCard();
    int getEffectFromCardNumber (int cardNumber);
    void executeAction (int cardNumber);
    std::string getEffectString (int cardNumber);
};


#endif //GOP_DECK_H
