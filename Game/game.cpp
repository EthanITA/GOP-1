//
// Created by Marco on 30/05/2018.
//

#include "game.h"
#include <iostream>
#include "../Utils/Util.h"
game::game(){
    welcome();
    cout << player_.getNum_player_();
}

void game::welcome() {
    cout << color_.kWhite << "\n\t\t\t\t\tBenvenuti in GOP!!\n" << color_.kStop << endl;
    mSleep(2000);
    fflush(stdout);
    cout << "Per un'esperienza di gioco migliore ci sono i seguenti vincoli: " << endl
         << "(1) Numero di giocatore da 1 a 4" << endl
         << "(2) Nome del giocatore con non più di 10 caratteri" << endl
         << "(3) Nomi dei giocatore diversi tra di loro" << endl
         << "Va bene? "   ;
    std::string abc;
    cin >> abc;
    cout << endl;
    if (inputCheck(abc) == "negative"){
        for (int i = 0; i < 3; ++i) {
            if (i == 0)
                cout << "\t\tHA";
            else
                cout << "-HA";
            mSleep(1000);
        }
    }
    else
        cout << "Perfetto!" ;
    mSleep(1000);
    cout << endl;

    ////DA FINIRE


    initClasses();
    cout << "";
}
void game::initClasses(){
//    Map map(80); TODO
//    Deck deck(20); TODO
    initPlayers init;
    player_ = init.returnP_();
}