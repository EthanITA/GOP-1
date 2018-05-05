//
// Created by Marco on 15/04/2018.
//

#ifndef GOP_PLAYER_H
#define GOP_PLAYER_H

#include <map>
#include "string"


class player {
public:

    player(); //è possibile chiamare player senza Name e Turn: "player p;"
    player(std::string Name, int Turn);

    std::string player_Get(int Turn);
    int player_square_Get(std::string Name);

    int getTurn_(std::string Name) ;


private:
    //dictionary: "map <key, value> variable"
    std::map<std::string,int> turn_; //player turn
    std::map<int, std::string> player_;//player name
    std::map<std::string, int> player_square_ ; //player's square
};



#endif //GOP_PLAYER_H
