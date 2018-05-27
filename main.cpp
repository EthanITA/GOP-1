#include <iostream>
#include <cstdlib>

#include "Util.h"
#include "Deck/Card.h"
#include "Player/player.h"
#include "Player/initPlayers.h"
#include "Deck/Effects.h"
#include "Deck/Deck.h"
#include "Dice/dice.h"
using namespace std;

int main() {
    initPlayers init;
    dice d;
    player player = init.returnP_();
    for (int i = 0; i<=100; i++)
            if(d.throwDice(player.getDice_(player.getNum_player_())) == 12)
                cout << i << "\t";
    cout << endl<<endl << player.getName_(player.getNum_player_())<< " ha fatto: " << d.throwDice(player.getDice_(player.getNum_player_()));
    cin.get();
//    Effects e1= Effects();
//   // cout<<"EFFETTI "<<e1.getEffects(1)<<endl;
//    Deck d = Deck(5);
//    d.getCard();
//    std::cout<<"Card "<<d.getCard()<<std::endl;
//    std::cout<<"R FROM !" <<Util::randomFrom1(8);
	return 0;
}