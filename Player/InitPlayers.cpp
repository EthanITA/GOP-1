//
// Created by Marco on 15/04/2018.
//

#include <iostream>
#include "cstring"
#include "InitPlayers.h"
#include "../Utils/Util.h"

using namespace std;

initPlayers ::initPlayers(){
    Player p = Player(inputNumber()); //chiama il costruttore di player
    p_ = p; //non era possibile chiamare il costruttore all'interno di initPlayers.h
    for (int i = 1; i <= p_.getNum_player_(); ++i) {
        Util::clear();
        cout << "Nome del giocatore " << i << ": ";
        p_.setPlayer_(i, inputName(i)); //"crea" il giocatore
        cinClear();
        int val = checkSameNickname(p_, i); //controllo nome se è identico
        while(val != 0){
            Util::clear();
            cout << "Il nome '"<< p_.getName_(i)<<"' è identico a quello del giocatore " <<val<<", inseriscine un altro: ";
            p_.setPlayer_(i,inputName(i));
            val = checkSameNickname(p_, i);
        }
    }

}

int initPlayers::inputNumber(){
    std::cout << "Inserire il numero di giocatori: ";
    bool flag = true;
    int num;
    while (flag){
        cin>>num; //ciclo finchè non è 1 <= num <= 4
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
std::string initPlayers::inputName(int i){
    string name, tmp;
    cin >> name;
    if(name.length() > 10){ //se la stringa è maggiore di 10
        name.resize(10); //ridimensione a 10
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
            Util::clear();
            cout << "Inserire nuovamente il nome del giocatore " << i << ": ";
            name = inputName(i);
        }
        else{
            Util::clear();
            cinClear();
            goto retry;}
    }
    return name;
}

int initPlayers::checkSameNickname(Player p, int key){
    int value = 0;
    for (int i = 1; i < key; ++i) {
        if (p.getName_(i) == p.getName_(key))
            value = i;
    }
    return value; }

Player initPlayers::returnP_() {//dà la variabile player
    return p_;
}

