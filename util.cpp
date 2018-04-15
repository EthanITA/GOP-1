//
// Created by vecr on 10/04/18.
//

#include <iostream>
#include <cstdlib>

#include "util.h"
using namespace std;

void clear(){
    #ifndef WINDOWS
    system ( "clear");
//              UNIX
#else
    system ( "CLS" );
//               WINDOWS

    #endif
}

int Random (int min, int max){
    return rand() % max + min;
}
