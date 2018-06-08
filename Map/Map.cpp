//
// Created by vecr on 26/05/18.
//

#include <iostream>
#include <array>
#include <cmath>
#include "Map.h"
#include "../Utils/Effects.h"
#include "../Utils/Util.h"
#include "../Utils/Colors.h"
#include <iomanip>


Map::Map(int dimensions) {
    this->dimensions=dimensions;
    int i, nEffects=Effects::numberOfEffects(), distanceBtwnEffects=8; //TODO Decidere ogni quante celle avere un effetto
    double dim = (double)dimensions;
    nColumns=trunc(dim/10);

    for(i=0;i<=dimensions;i++){
        if(i%distanceBtwnEffects==0) {
            map.push_back(Util::randomFrom1(nEffects));
        } else{
            map.push_back(0);
        }
//        std::cout<<i<<" - "<<map.at(i)<<std::endl;
    }

}

void Map::displayMap() {
    int i,j;
    Colors k;
    std::cout<<"N colums "<<nColumns<<std::endl;
    std::cout<<"┌";
    for(j=0;j<=nColumns;j++)
        std::cout<<"──";
    std::cout<<"┐"<<std::endl;
    for(i=0;i<10;i++){
        if(i!=0){
            std::cout<<"│";
            for(j=0;j<=nColumns;j++){
                std::cout<<i<<" ";
            }
           std::cout<<"│"<<std::endl;
        }else {
        }

    }
    std::cout<<"└";
    for(j=0;j<=nColumns;j++)
        std::cout<<"──";
    std::cout<<"┘"<<std::endl;

}

int Map::getCellEffect(int cellNumber) {
    return map.at(cellNumber);
}

void Map::displayCell(int cellNumber) {
    int i;

    for (i = 0; i < 10; i++) {

    }
}

std::string Map::stringConstructor() {
    std::string initial[nColumns];
    std::string stringResources[]={
      "┌────┬──────┐",//0
      "└────┴──────┘"//1
    };
}

int Map::getMapDimensions() {
    return dimensions;
}
