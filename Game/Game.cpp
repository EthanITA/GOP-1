//
// Created by Marco on 30/05/2018.
//

#include "Game.h"
#include <iostream>
game::game(){
    int winner = 0, step, player_number = 1;
    welcome();

    while (noWinner(player_number)){//ciclo del gioco
        cinClear();
        redoLoopCondition(player_number);
        player_.switchBold(player_number); //colore bold
        animationSteps(winner, step, player_number);
        stepsMessage(player_number, step);
        if(!winner)
            checkSquare(player_number);
        player_.switchBold(player_number);
        player_number++;
    }

    player_.switchBold(winner);
    winMessage(winner);
    cinClear();
}

void game::welcome() {
    cout << color_.kWhite << "\n\t\t\t\t\tBenvenuti in GOP!!\n" << color_.kStop << endl;
    mSleep(2000);
    cout << "Conosci già i vincoli imposti e le caratteristiche del gioco? ";

    string check;
    cin >> check;
    if(inputCheck(check) == "negative"){
        vincoli();
        mSleep(9000);
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
    updateMap();
    cout << "Ridimensiona la finestra in modo da vedere tutta la mappa!";
    mSleep(3000);
    cout << endl << "Premi invio per proseguire";
}

void game::checkSquare(int n_pl) {
    //per non eseguire l'effetto se si è fermi
    if(!player_.getStop_(n_pl)){
        if(cellEffect(n_pl)){ //se c'è un effetto cella
            executeCell(n_pl);
        }

        if(drawACard(n_pl)){//se c'è pesca carta
            executeCard(n_pl);
        }
    }

}

void game::mapWaitEffect(){
    cout << endl << "Premi invio per confermare!\n";
    cinClear();
    updateMap();
}

void game::updateMap(){
    Util::clear();
    map_.displayMap(player_);
}

void game::redoLoopCondition(int &n){
    if (n > (player_.getNum_player_())) //ricomincia il ciclo 1 - numeri di gioc
        n = 1;
}

void game::animationSteps(int& winner, int &step, int player_number){

    int dice = dice_.throwDice(player_.getDice_(player_number));//steps animation
    for(int j = 1; j <= dice && winner == 0; j++){
        player_.addSquare_(player_number, 1);
        if (player_.getSquare_(player_number) == map_.getMapDimensions())
            winner = player_number;
        updateMap();
        mSleep(350);
        step = j;
    }
    if(dice == 0){ //0 step animation
        step = 0;
        updateMap();
    }
}
void game::stepsMessage(int player_number, int step) {
    cout << "\t\t\t\t" << player_.getColor(player_number) << player_.getName_(player_number) << color_.kStop << " è avanzato di " << color_.kWhite
         << step << color_.kStop << " caselle!" << endl;}

void game::winMessage(int winner) {
    cout << color_.kWhite << "\n\n\t\t\t\tBravo " << player_.getColor(winner) << player_.getName_(winner)
         << color_.kStop << color_.kWhite << " hai vinto!" << color_.kStop;}

void game::executeCard(int n_pl) {
    cout << endl << "Effetto carta! -> ";
    //aggiorna player
    player_ = deck_.executeCardAction(player_, n_pl);
    mapWaitEffect();
}

void game::executeCell(int n_pl) {
    cout << endl << "Effetto casella! -> ";
    //aggiorna player
    player_ = deck_.executeCellAction(player_, n_pl,
                                      map_.getCellEffect(player_.getSquare_(n_pl)));
    mapWaitEffect();
}


bool game::noWinner(int n_pl){
    return player_.getSquare_(n_pl) < map_.getMapDimensions();
}
bool game::cellEffect(int n_pl){
    return map_.getCellEffect(player_.getSquare_(n_pl)) != 0;
}

bool game::drawACard(int n_pl){
    return map_.getDrawACard(player_.getSquare_(n_pl)) != 0;
}