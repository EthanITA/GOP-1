//
// Created by vecr on 10/04/18.
//

#include <iostream>
#include <cstdlib>

#include "util.h"
using namespace std;

void util::clear(){
    #ifndef WINDOWS
    system ( "clear");
//              UNIX
#else
    system ( "CLS" );
//               WINDOWS

    #endif
}

int util::Random (int min, int max){
    return rand() % max + min;
}
