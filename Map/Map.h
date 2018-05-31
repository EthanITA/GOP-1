//
// Created by vecr on 26/05/18.
//

#ifndef GOP_MAP_H
#define GOP_MAP_H


#include <vector>

class Map {
private:
    const int dimensions=41;
    int map[41][2];
   // std::vector map;
   // struct mapStruct;
public:
    Map();
    void displayMap();

};


#endif //GOP_MAP_H
