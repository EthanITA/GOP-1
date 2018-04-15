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
	int a;
	string aa;
	std::cout << "Inserire il numero di giocatori: ";
	std:: cin >> a;
	while (!(a<=4 && a>=1)){
		// [1, 4] !!
		clear();

		//todo
		cout << "";
		cin>>a;

	}
	numPlayers numPlayers(a);
	player p[a];// giocatore [1], giocatore [2]...

	for (int i = 0; i < numPlayers.getNumPlayers_num_(); ++i) {
		cin >> aa;
		p[i] = player(aa, i+1);
		//giocatore [i] <- a=nickname, i+1 = turno
	}
}

void initPlayers::welcome() {
	//welcome message and rules

	//todo
	cout << "";

}
