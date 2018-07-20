//
// Created by vecr on 05/05/18.
//

#ifndef GOP_EFFECTS_H
#define GOP_EFFECTS_H

#include <string>
#include <vector>
#include <map>
#include "Util.h"


class Effects {
private:
    struct structure_{
        std::string effect; //azione effetto
        int random_start, random_end; //per Util::random
        bool random; //fare random si o no
    };
    std::map<int, structure_> effects_of_cards_ ={
            {1, {"", 0, 0, false}}, //vuoto
            {2, {"Lancio di un altro dado! Indietro -> ", 1, 6, true}}, // 1-6
            {3, {"Lancio di un altro dado! Avanti -> ", 1, 6, true}}, // 1-6
            {4, {"Avanza, retrocedi o fermo! -> ", -1, 1, true}}, // -1 a 1
            {5, {"Teletrasporto! Casella -> ", 0, 40, true}}, // 0 - getMapDImensions()
            {6, {"Fermo il prossimo turno!", 0, 0, false}},
            {7, {"Un dado! -> ", 1, 3, true}}, // 1-3
    };
    std:: string effect_of_square_;
public:
    std::string getEffects(int effectNumber);
    static void executeAction(int effectNumber);
    static int numberOfEffects();
};


#endif //GOP_EFFECTS_H
