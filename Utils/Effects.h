//
// Created by vecr on 05/05/18.
//

#ifndef GOP_EFFECTS_H
#define GOP_EFFECTS_H

#include <string>
#include <vector>


class Effects {
private:
    std::string effects[10] ={
            "NONE","Pesca una carta",
            "Fai un altro lancio",
            "Vai avanti di 1","Vai indietro di 1",
            "Avanti a seconda di quanto esce sul dado","Indietro a seconda di quanto esce sul dado",
            "Scambia la posizione con un altro giocatore","Fermo un turno",
            "Gioco con 1 dado per X turni a seconda di quanto esce sul dado"};
public:
    std::string getEffectsStringFromNumber(int stringNumber);
    void executeAction(int effectNumber);
    static int numberOfEffects();
};


#endif //GOP_EFFECTS_H
