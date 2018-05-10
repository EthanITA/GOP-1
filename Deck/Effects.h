//
// Created by vecr on 05/05/18.
//

#ifndef GOP_EFFECTS_H
#define GOP_EFFECTS_H

#include <string>
#include <vector>


class Effects {
private:
    std::string effects[8] ={
            "Fai un altro lancio",
            "Vai avanti di 1","Vai indietro di 1",
            "Avanti a seconda di quanto esce sul dado","Indietro a seconda di quanto esce sul dado",
            "Scambia la posizione con un altro giocatore","Fermo un turno",
            "Gioco con 1 dado per X turni a seconda di quanto esce sul dado"};
     //TODO Cercare se c'è un modo migliore di fare questa cosa ^^
public:
    std::string getEffects(int code);
    bool executeAction(int code);
    static int numberOfEffects();
};


#endif //GOP_EFFECTS_H
