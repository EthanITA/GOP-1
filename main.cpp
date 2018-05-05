#include <iostream>
#include <cstdlib>

#include "util.h"
#include "Deck/Card.h"


using namespace std;

int main() {

	player p1("Marco", 1);
	cout << p1.getNickname_(), "\t",  p1.getTurn_();
	p1.setNickname("ALL");
	p1.setTurn(3);
	cout << p1.getNickname_(), "\t",  p1.getTurn_();


	return 0;
}