//
// Created by vecr on 26/05/18.
//

#ifndef GOP_MAP_H
#define GOP_MAP_H


#include <vector>

class Map {
private:
    int rows =10;
    std::vector <int> map;
  //  std::vector <std::vector<int>> mapMatrix;
    int dimensions;
    int nColumns;

public:
    Map(); //è possibile usare map senza dare dimensions
    Map(int dimensions);
    void displayMap();
    int getCellEffect(int cellNumber);
    void displayCell(int cellNumber);
    std::string stringConstructor();
    int getMapDimensions();
};


#endif //GOP_MAP_H
