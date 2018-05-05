//
// Created by vecr on 10/04/18.
//

#include <iostream>
#include <cstdlib>
#include <limits>

#include "util.h"

void clear(){
#ifndef WINDOWS
	system ( "clear");
//              UNIX
#else
	system ( "CLS" );
//               WINDOWS

#endif
}
void cinClear(){
	cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}
int Random (int min, int max){
	return rand() % max + min;
}
string inputCheck(std::string tmp){
	if (tmp == "Y" || tmp == "y" || tmp == "si" || tmp == "SI" || tmp == "Si" || tmp == "s" || tmp == "S" || tmp == "Ok" || tmp == "ok" || tmp =="OK"){
		return "affermative";
	}
	else if (tmp == "N" || tmp == "n" || tmp == "no" || tmp == "NO" || tmp == "No"){
		return "negative";
	}
	else return " ";
}
