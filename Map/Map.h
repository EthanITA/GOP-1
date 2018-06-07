//
// Created by vecr on 26/05/18.
//

#ifndef GOP_MAP_H
#define GOP_MAP_H


#include <vector>

class Map {
private:
    int map[41][2];
   // std::vector map;
   // struct mapStruct;
public:
    static const int dimensions=41;
    Map();
    void displayMap();
    int getCellEffect(int cellNumber);
};


#endif //GOP_MAP_H
