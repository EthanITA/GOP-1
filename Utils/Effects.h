//
// Created by vecr on 05/05/18.
//

#ifndef GOP_EFFECTS_H
#define GOP_EFFECTS_H

#include <string>
#include <vector>
#include <iostream>
#include "../Player/Player.h"

class Effects {
private:
     std::string effects[11] ={
            "NONE",//0
            "Pesca una carta",//1
            "Fai un altro lancio",//2
            "Vai avanti di 1",//3
            "Vai indietro di 1",//4
            "Avanti a seconda di quanto esce sul dado",//5
            "Indietro a seconda di quanto esce sul dado",//6
            "Scambia la posizione con un altro giocatore",//7
            "Fermo un turno",//8
            "Sta fermo per x turni a seconda di quanto esce sul dado",//9
            "Gioco con 1 dado per X turni a seconda di quanto esce sul dado"//10
     };


public:
    std::string getEffectsStringFromNumber(int stringNumber);
    static int numberOfEffects();
};


#endif //GOP_EFFECTS_H
