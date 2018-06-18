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


Map::Map() {
    int i,j=0,cellNumber=0, nEffects=Effects::numberOfEffects(), distanceBtwnEffects=8; //TODO Decidere ogni quante celle avere un effetto
    int min=40,max=80;
    dimensions=Util::random(min,max);
    std::cout<<"Dimensions "<<dimensions<<std::endl;



    for (i = 0; i < 11; i++) {
        while(j<10&&cellNumber<=dimensions){
            mapMatrix[i][j]=cellNumber;
            cellNumber++;
            j++;
        }
        j=0;
    }
}

void Map::displayMap() {
    int cellNumber=0,i,j=0;


    for (i = 0; i < 11; i++) {
        while(j<10&&cellNumber<=dimensions){
            std::cout<<"| i="<<i<<" j="<<j<<" "<<mapMatrix[i][j]<<"| ";
            cellNumber++;
            j++;
        }
        j=0;
        std::cout<<"\n"<<std::endl;

    }
}

int Map::getCellEffect(int cellNumber) {
    return 1;
}

int Map::getMapDimensions() {
    return dimensions;
}
