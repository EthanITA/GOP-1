//
// Created by Marco on 15/04/2018.
//

#include <iostream>
#include "cstring"
#include "initPlayers.h"
#include "../util.h"

using namespace std;

initPlayers ::initPlayers(){
	welcome();

	numPlayers numPlayers(inputNumber()); //input players num
	for (int i = 1; i <= numPlayers.getNumPlayers_num_(); ++i) {
        cout << "Nome del giocatore " << i << ": ";
		auto p = player(inputName(i), i); //LOCAL; input player name + turn -> dictionary
        clear();
	}

}

void initPlayers::welcome() {

	//todo
	cout << "" << endl;

}

std::string initPlayers::inputName(int i){
    string name;
    string tmp;
    cin >> name;
    if(name.length() > 10){
        name.resize(10);
        cout << "Per un'esperienza di gioco migliore, massimo fino a 10 caratteri."<<endl;

        retry:
        cout << "Tenere '" << name << "'?";
        cin >> tmp;
        auto input = inputCheck(tmp); // auto type of variable
        if(input == "affermative"){

        }
        else if (input == "negative"){
            clear();
            cout << "Inserire nuovamente il nome del giocatore " << i << ": ";
            name = inputName(i);
        }
        else
            goto retry;
    }
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
        else
            cout << "Numeri da 1 a 4! ";
        clear();
    }
    return num;
}

//static player initPlayers::getPlayer (int n){
//	return p[n];
//}

