//
// Created by Marco on 30/05/2018.
//

#include "Game.h"
#include <iostream>
game::game(){
    int winner;
    welcome();
    cout << map_.getMapDimensions();
    for (int i = 1; player_.getSquare_(i) < map_.getMapDimensions(); i++){ //// implementato per testare, verrà rimosso!!
        if(i > player_.getNum_player_()){
            i = 1;
            Util::clear();
        }
        player_.setSquare_(i, dice_.throwDice(player_.getDice_(i)));
        cinClear();
        if(player_.getSquare_(i) >= map_.getMapDimensions()) {
            cout << color_.kWhite << "♪ Congratulazioni‼ \n\t" << player_.getName_(i) << ", hai vinto!\n\n";
        }
        else{
            cout << player_.getName_(i) << " è alla casella " << player_.getSquare_(i) << "\n";
        }
        cin.get();
    }
}

void game::printPlayers() {
    for (int i = 1; i <= 4; ++i) {
        for (int i =0; i<= player_.getSquare_(i); i++){
            ////da finire
        }
    }
}
void game::welcome() {
    cout << color_.kWhite << "\n\t\t\t\t\tBenvenuti in GOP!!\n" << color_.kStop << endl;
    mSleep(2000);
    cout << "Conosci già i vincoli imposti e le caratteristiche del gioco? ";
    string check;
    cin >> check;
    if(inputCheck(check) == "negative"){
        vincoli();
        Util::clear();
        caratteristica();
        cout << endl << "\tProcediamo? " ;
        joke1();
    }
    else{
        cout << "Va bene, allora iniziamo ☺" << endl;
        mSleep(1800);
    }
    cinClear();
    Util::clear();
    start();
}

void game::start(){
//    Deck deck(20); TODO
    initPlayers init;
    player_ = init.returnP_();
    for(int i = 1; i<=player_.getNum_player_(); i++){
        cout << player_.getColor(i) << player_.getSymbol(i) << color_.kStop;
    }
    map_.displayMap();
}
void game::vincoli(){
    cout << endl << "Per un'esperienza di gioco migliore ci sono i seguenti vincoli: " << endl
         << "(1) Numero di giocatore da 1 a 4" << endl
         << "(2) Nome del giocatore con non più di 10 caratteri" << endl
         << "(3) Nomi dei giocatore diversi tra di loro" << endl;
}
void game::joke1(){
    std::string abc;
    cin >> abc;
    if (inputCheck(abc) == "negative"){
        for (int i = 0; i < 3; ++i) {
            if (i == 0)
                cout << "\tHA";
            else
                cout << "-HA";
            mSleep(850);
        }
    }
    else
        cout << "\tPerfetto!" ;
    cout << endl;
}
void game::caratteristica(){
    cout << endl << "Inoltre, GOP avrà le seguenti caratteristiche:" << endl
         << "(1) Si gioca, normalmente, con 2 dadi" << endl
         << "(2) Si avrà una mappa di " << "" << " caselle, in questa partita" << endl //TODO dimensions
         << "(3) I giocatori avranno un simbolo identificati con colori diversi" <<endl
         << "(4) Per gli effetti di carte o caselle, il simbolo può venire cambiato" << endl;
}