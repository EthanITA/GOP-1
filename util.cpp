//
// Created by vecr on 10/04/18.
//

#include <iostream>
#include <cstdlib>
#include <limits>

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

void util::cinClear(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}

string util::inputCheck(std::string tmp){
	if (tmp == "Y" || tmp == "y" || tmp == "si" || tmp == "SI" || tmp == "Si" || tmp == "s" || tmp == "S" || tmp == "Ok" || tmp == "ok" || tmp =="OK"){
		return "affermative";
	}
	else if (tmp == "N" || tmp == "n" || tmp == "no" || tmp == "NO" || tmp == "No"){
		return "negative";
	}
	else return " ";
}
