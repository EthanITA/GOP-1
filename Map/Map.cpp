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
#include "../Game/Game.h"
#include <iomanip>


Map::Map() {
    int i,j=0,cellNumber=0, nEffects=Effects::numberOfEffects(), distanceBtwnEffects=8; //TODO Decidere ogni quante celle avere un effetto
    int min=40,max=80;
    dimensions=Util::random(min,max);
//     dimensions=99;
    dimensionsTrunc=trunc((double)dimensions/10);
//    std::cout<<"Dimensions "<<dimensionsTrunc<<std::endl;



    for (auto &i : mapMatrix) {
        while(j<10&&cellNumber<=dimensions){
            i[j]=cellNumber;
            cellNumber++;
            j++;
        }
        j=0;
    }
}

void Map::displayMap(player p) {
    int cellNumber=0,j=0,remainingCellsToFill=0;
    std::string dio;

    std::cout<<"╔═════════╤═════════╤═════════╤═════════╤═════════╤═════════╤═════════╤═════════╤═════════╤═════════╗"<<std::endl;
    for (auto &i : mapMatrix) {
        while(j<10&&cellNumber<=dimensions){
            if(j==0)
                std::cout<<"║";
            if(cellNumber>9&&cellNumber<=dimensions){
                if(j!=9){
                    std::cout<<" "<< i[j]<<"  " << p.getSymbolsForDraw(cellNumber)<< "│";
                }
                else{
                    std::cout<<" "<< i[j]<<"  " << p.getSymbolsForDraw(cellNumber);
                }
            }else{
                if(cellNumber!=0){
                    if(j!=9){
                        std::cout<<" 0"<< i[j]<<"  " << p.getSymbolsForDraw(cellNumber)<< "│";
                    }
                    else{
                        std::cout<<" 0"<< i[j]<<"  " << p.getSymbolsForDraw(cellNumber);
                    }
                }else{
                    std::cout<<" GO  " << p.getSymbolsForDraw(cellNumber) << "│";
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
            }else if(cellNumber>=dimensions){
//                std::cout<<"DENTRO "<<std::endl;
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
//    std::cout<<"RemaingCellsToFill"<<remainingCellsToFill<<std::endl;
//    dio=constructCellString();
//    std::cout<<constructCellString()<<std::endl;
}

int Map::getCellEffect(int cellNumber) {
    return 1;
}

int Map::getMapDimensions() {
    return dimensions;
}

std::string Map::constructCellString(){
    std::string complete="asdasd";

    return complete;
};