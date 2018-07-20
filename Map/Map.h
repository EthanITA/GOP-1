//
// Created by vecr on 26/05/18.
//

#ifndef GOP_MAP_H
#define GOP_MAP_H


#include <vector>
#include "../Player/Player.h"

class Map {
private:
    int mapMatrix[11][10], dimensions,drawACard[100][2],cellEffect[100][2];
public:
    Map();
//    Map(Player p);
    void displayMap(Player p);
    int getCellEffect(int cellNumber);
    int getMapDimensions();
    std::string constructCellString(int resource, int cellNumber);
    void checkForPlayers(int cellnumber, Player p);
    int getDrawACard(int cellNumber);
    };


#endif //GOP_MAP_H
