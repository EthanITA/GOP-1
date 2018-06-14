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
Map::Map(){}

Map::Map(int dimensions) {
    int i,j,cellNumber=0, nEffects=Effects::numberOfEffects(), distanceBtwnEffects=8; //TODO Decidere ogni quante celle avere un effetto
    double dim = (double)dimensions;
    this->dimensions=dimensions;
    nColumns=trunc(dim/10);

    int** matrix = new int*[rows];
    if (rows)
    {
        matrix[0] = new int[rows * nColumns];
        for ( i = 1; i < rows; ++i)
            matrix[i] = matrix[0] + i * nColumns;
    }

    for(j=0;j<=nColumns;j++){
        for(i=0;i<rows;i++){
          if(cellNumber<=dimensions){
              matrix[i][j]=cellNumber;
              std::cout<<matrix[i][j]<<" ";
              cellNumber++;
          }
          else{
              break;
          }
        }
        std::cout<<"\n"<<std::endl;
    }
}

void Map::displayMap() {
    int i,j,column;
    //TODO IMPLEMENTAZIONE FIGA

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
