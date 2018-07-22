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

//    cout<<"Number of effects "<<Effects::numberOfEffects()<<std::endl;
    Deck d=Deck();
//    int card=d.getCard();
//    std::cout<<"Effetto n "<<card<<" effetto cose "<<d.getEffectString(card)<<std::endl;

        Player p(2);
        p.setPlayer_(0,"Giocatore 1");
        p.setPlayer_(1,"Giocatore 2");

        p.setCard(10,0);
        p=d.executeCardAction(p,0);

        cout<<"card "<<p.getCard(0)<<std::endl;
	return 0;
}