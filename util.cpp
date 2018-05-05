//
// Created by vecr on 10/04/18.
//

#include <iostream>
#include <cstdlib>

#include "util.h"
using namespace std;

/*If compiling for the windows environment uncomment the line  "#define WINDOWS"
 * and comment the line "#define UNIX", and the other way around for the UNIX based environment
 * */
#define UNIX
//#define WINDOWS



void util::clear(){
    #ifdef WINDOWS
            system ( "CLS" ); //WINDOWS
    #elif defined(UNIX)
            system("clear"); //UNIX
    #endif
}


int util::random(int min, int max) {
    int number;
    number = rand() % max + min;
    return number;
}




