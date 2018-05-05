#include <iostream>
#include <cstdlib>

#include "util.h"
#include "Deck/Card.h"


using namespace std;

int main() {
    int numeroRand;
    util u;
    card c1(1,"asad");

    cout<<"Number"<< c1.getNumber()<<" Code"<< c1.getCode()<<endl;

    cout<< "cose " <<endl;
    //u.clear();


    numeroRand=u.random(12,3);
    cout<< "Cose "<< numeroRand << endl;


    return 0;

}