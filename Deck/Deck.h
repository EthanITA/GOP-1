//
// Created by vecr on 10/05/18.
//

#ifndef GOP_DECK_H
#define GOP_DECK_H


#include "Card.h"
#include "../Util.h"
#include "Effects.h"
#include <vector>

class Deck {
private:
    static std::vector<Card> cards;
    int noOfEffects;
public:
    Deck(int numberOfCards);
    int getCard();
};


#endif //GOP_DECK_H
