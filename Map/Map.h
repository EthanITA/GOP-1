//
// Created by vecr on 26/05/18.
//

#ifndef GOP_MAP_H
#define GOP_MAP_H


#include <vector>

class Map {
private:
    std::vector <int> map;
    int dimensions;
    int nColumns;

public:
    Map(int dimensions);
    void displayMap();
    int getCellEffect(int cellNumber);
    void displayCell(int cellNumber);
    std::string stringConstructor();
    int getMapDimensions();
};


#endif //GOP_MAP_H
