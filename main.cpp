#include <iostream>
#include <cstdlib>

#include "Util.h"
#include "Deck/Card.h"
#include "Player/player.h"
#include "Player/initPlayers.h"
#include "Player/numPlayers.h"
#include "Deck/Effects.h"

using namespace std;

int main() {

//	player p1("Marco", 1);
//	cout << p1.getNickname_(), "\t",  p1.getTurn_();
//	p1.setNickname("ALL");
//	p1.setTurn(3);
//	cout << p1.getNickname_(), "\t",  p1.getTurn_();

    Effects e1= Effects();
    cout<<"EFFETTI "<<e1.getEffects(1)<<endl;
    e1.getAction(1);

	return 0;
}