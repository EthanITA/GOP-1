//
// Created by vecr on 05/05/18.
//

#ifndef GOP_CARD_H
#define GOP_CARD_H
class Card{
private:
    int number,effectNumber;

public:
    Card(int number, int effectNumber);
    int getNumber();
    int getEffectNumber();
};

#endif //GOP_CARD_H
