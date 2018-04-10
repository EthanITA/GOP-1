//
// Created by vecr on 10/04/18.
//

#include <iostream>
#include "util.h"
using namespace std;

void util::clear(){
    #ifdef WINDOWS
                system ( "CLS" );
    #else
                system ( "clear");
              //  cout<< "Linux"<<endl;

    #endif
}



