#include <iostream>
#include <cstdlib>

#include "Utils/Util.h"
#include "Deck/Card.h"
#include "Player/Player.h"
#include "Player/InitPlayers.h"
#include "Utils/Effects.h"
#include "Deck/Deck.h"
#include "Dice/Dice.h"
#include "Game/Game.h"


int main() {
    //game game;
    Colors c;
    Player p;
    for(int i = 1; i<=4; i++)
        p.setPlayer_(i, to_string(i));
    for (int i = 1; i <= 4; i++)
        cout << p.getColor(i) << p.getSymbol(i) << c.kStop << endl;
//    int i;
//    Effects e = Effects();
//
//    Map m=Map();
//    m.displayMap();

//    for(i=0;i<41;i++){
//        std::cout<<i<<"- Get cell effect number "<<m.getCellEffect(i)<<std::endl;
//        if(m.getCellEffect(i)!=0){
//           std::cout<<"Effettto: "<<e.getEffects(m.getCellEffect(i))<<std::endl;
//        }
//    }

//    Effects e1= Effects();
//   // cout<<"EFFETTI "<<e1.getEffects(1)<<endl;
//    Deck d = Deck(5);
//    d.getCard();
//    std::cout<<"Card "<<d.getCard()<<std::endl;
//    std::cout<<"R FROM !" <<Util::randomFrom1(8);
	return 0;
}