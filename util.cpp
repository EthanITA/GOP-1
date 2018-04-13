//
// Created by vecr on 10/04/18.
//

#include <iostream>
#include <cstdlib>

#include "util.h"
using namespace std;

void util::clear(){
    #ifdef WINDOWS
                system ( "CLS" );
//               WINDOWS
    #else
                system ( "clear");
//              UNIX

    #endif
}



