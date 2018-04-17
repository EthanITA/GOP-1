#include <iostream>
#include <cstdlib>

#include "util.h"


using namespace std;

int main() {
    int numeroRand;

    cout<< "cose " <<endl;
    util::clear();
    util *u = new util;

    numeroRand=u->random(12,3);
    cout<< "Cose "<< numeroRand << endl;


    return 0;

}