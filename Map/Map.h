//
// Created by vecr on 26/05/18.
//

#ifndef GOP_MAP_H
#define GOP_MAP_H


#include <vector>
#include "../Player/Player.h"

class Map {
private:
    int mapMatrix[11][10], dimensions,dimensionsTrunc;
public:
    Map();
    void displayMap(player);
    int getCellEffect(int cellNumber);
    int getMapDimensions();
    std::string constructCellString();
};


#endif //GOP_MAP_H
