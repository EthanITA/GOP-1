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
  dimensions=69;
    dimensionsTrunc=trunc((double)dimensions/10);
    std::cout<<"Dimensions "<<dimensionsTrunc<<std::endl;



    for (auto &i : mapMatrix) {
        while(j<10&&cellNumber<=dimensions){
            i[j]=cellNumber;
            cellNumber++;
            j++;
        }
        j=0;
    }
}

void Map::displayMap() {
    int cellNumber=0,j=0,remainingCellsToFill=0;

    std::cout<<"╔═════════╤═════════╤═════════╤═════════╤═════════╤═════════╤═════════╤═════════╤═════════╤═════════╗"<<std::endl;
    for (auto &i : mapMatrix) {
        while(j<10&&cellNumber<=dimensions){
            if(j==0)
                std::cout<<"║";
            if(cellNumber>9&&cellNumber<=dimensions){
                if(j!=9){
                    std::cout<<" "<< i[j]<<"      │";
                }
                else{
                    std::cout<<" "<< i[j]<<"      ";
                }
            }else{
                if(j!=9){
                    std::cout<<" 0"<< i[j]<<"      │";
                }
                else{
                    std::cout<<" 0"<< i[j]<<"      ";
                }
            }

//            if(cellNumber>dimensions){
//                remainingCellsToFill=10-(dimensions%10)-2;
//                for (int k = 0; k <remainingCellsToFill ; ++k) {
//                    std::cout<<"         │";
//                }
//                std::cout<<"         ║";
//                std::cout<<std::endl;
//            }
            if(j==9&&cellNumber<=dimensions)
            {
                std::cout<<"║"<<std::endl;
            }else if(cellNumber>dimensions){
                remainingCellsToFill=10-(dimensions%10)-2;
                for (int k = 0; k <remainingCellsToFill ; ++k) {
                    std::cout<<"         │";
                }
                std::cout<<"         ║";
                std::cout<<std::endl;
            }


            cellNumber++;
            j++;
        }
        j=0;

    }
    std::cout<<"╚═════════╧═════════╧═════════╧═════════╧═════════╧═════════╧═════════╧═════════╧═════════╧═════════╝"<<std::endl;
    std::cout<<"RemaingCellsToFill"<<remainingCellsToFill<<std::endl;
}

int Map::getCellEffect(int cellNumber) {
    return 1;
}

int Map::getMapDimensions() {
    return dimensions;
}
