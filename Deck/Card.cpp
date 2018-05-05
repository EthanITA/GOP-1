//
// Created by vecr on 05/05/18.
//

#include "Card.h"

card::card(int number, char* code){
    this->number=number;
    this->code=code;
}


int card::getNumber()
{
    return number;
}



char* card::getCode(){
    return code;
}

