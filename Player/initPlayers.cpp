//
// Created by Marco on 15/04/2018.
//

#include <iostream>
#include "cstring"
#include "initPlayers.h"
#include "../Util.h"

using namespace std;

int initPlayers::checkSameNickname(player p, int key){
    int value = 0;
    for (int i = 1; i < key; ++i) {
        if (p.getName_(i) == p.getName_(key))
            value = i;
    }
    return value;
}
initPlayers ::initPlayers(){
    welcome();
    player p(inputNumber()); //input players num
    for (int i = 1; i <= p.getNum_player_(); ++i) {
        cout << "Nome del giocatore " << i << ": ";
        p.setPlayer_(i, inputName(i));
        int val = checkSameNickname(p, i);
        while(val != 0){
            Util::clear();
            cout << "Il nome '"<< p.getName_(i)<<"' è identico a quello del giocatore " <<val<<", inseriscine un altro: ";
            p.setPlayer_(i,inputName(i));
            val = checkSameNickname(p, i);
        }
        p.setSquare_n(p.getName_(i), 0);
        Util::clear();
    }

}

void initPlayers::welcome() {

    //todo
    cout << "" << endl;

}

std::string initPlayers::inputName(int i){
    string name, tmp;
    cin >> name;
    if(name.length() > 10){
        name.resize(10);
        Util::clear();
        cout << "Per un'esperienza di gioco migliore, massimo fino a 10 caratteri."<<endl;

        retry:
        cout << "Tenere '" << name << "'? ";
        cin >> tmp;
        auto input = inputCheck(tmp); // auto type of variable
        if(input == "affermative"){

            Util::clear();
        }
        else if (input == "negative"){
            cinClear();
            Util::clear();
            cout << "Inserire nuovamente il nome del giocatore " << i << ": ";
            name = inputName(i);
        }
        else{
            Util::clear();
            cinClear();
            goto retry;}
    }
    cinClear();
    return name;
}

int initPlayers::inputNumber(){
    std::cout << "Inserire il numero di giocatori: ";
    bool flag = true;
    int num;
    while (flag){
        cin>>num;
        // [1, 4]
        if (num<=4 && num>=1){
            flag = false;
        }
        else if (cin.fail()){
            cinClear();
            cout << "Solo numeri interi! ";
        }
        else{
            cinClear();
            cout << "Numeri da 1 a 4! ";}
        Util::clear();
    }
    return num;
}

//static player initPlayers::getPlayer (int n){
//	return p[n];
//}

