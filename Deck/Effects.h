//
// Created by vecr on 05/05/18.
//

#ifndef GOP_EFFECTS_H
#define GOP_EFFECTS_H

#include <string>
#include <vector>

using namespace std;

class Effects {
private:
     string effects[20]={
     "Fai un altro lancio","Fai un altro lancio",
     "Vai avanti di 1","Vai indietro di 1",
     "Avanti a seconda di quanto esce sul dado","Indietro a seconda di quanto esce sul dado",
     "Scambia la posizione con un altro giocatore","Fermo un turno",
     "Gioco con 1 dado per X turni a seconda di quanto esce sul dado"};
     //TODO Cercare se c'è un modo migliore di fare questa cosa ^^

public:
    string getEffects(int code);
    bool getAction (int code);
};


#endif //GOP_EFFECTS_H
