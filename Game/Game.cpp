//
// Created by Marco on 30/05/2018.
//

#include "Game.h"
#include <iostream>
game::game(){
    int winner = 0, dice;
    welcome();
    for (int i = 1; player_.getSquare_(i) < map_.getMapDimensions() && winner == 0; i++){
        Util::clear();
        if (i == (player_.getNum_player_() + 1))
            i = 1;
        dice = dice_.throwDice(player_.getDice_(i));
        cout << player_.getName_(i) << " avanza di " << dice << " caselle" << endl;
        if(map_.getMapDimensions() <= (dice + player_.getSquare_(i))){
            player_.setSquare_(i, map_.getMapDimensions() - 2) ;
            winner = i;
        }
        else
            player_.setSquare_(i, dice);
//        map_.displayMap(player_);//TODO Da togliere il commento dopo che viene implementato in MAP
        cinClear();
    }
    cout << endl << "Bravo " << player_.getName_(winner) << " hai vinto!";
    cin.get();
}

void game::welcome() {
    cout << color_.kWhite << "\n\t\t\t\t\tBenvenuti in GOP!!\n" << color_.kStop << endl;
    mSleep(2000);
    cout << "Conosci già i vincoli imposti e le caratteristiche del gioco? ";
    string check;
    cin >> check;
    if(inputCheck(check) == "negative"){
        vincoli();
        mSleep(10000);
        caratteristica();
        cinClear();
        cout << endl << "\tProcediamo? " ;
        if(cin.get());
//        joke1();
    }
    else{
        cout << "Va bene, allora iniziamo ☺" << endl;
        mSleep(1800);
    }
    cinClear();
    Util::clear();
    start();
}

void game::vincoli(){
    cout << endl << "Per un'esperienza di gioco migliore ci sono i seguenti vincoli: " << endl
         << "(1) Numero di giocatore da 1 a 4" << endl
         << "(2) Nome del giocatore con non più di 10 caratteri" << endl
         << "(3) Nomi dei giocatore diversi tra di loro" << endl << endl;
}
void game::caratteristica(){
    cout << endl << "Inoltre, GOP avrà le seguenti caratteristiche:" << endl
         << "(1) Si gioca, normalmente, con 2 dadi" << endl
         << "(2) Si avrà una mappa fino a " << map_.getMapDimensions() << " caselle, in questa partita" << endl
         << "(3) I giocatori avranno un simbolo identificati con colori diversi" <<endl
         << "(4) Per gli effetti di carte o caselle, il simbolo può venire cambiato" << endl;
}
void game::start(){
//    Deck deck(20); TODO
    initPlayers init;
    player_ = init.returnP_();
//    map_.displayMap(player_);
    cout << "Inserire qualcosa per proseguire: ";
    cin.get();
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
