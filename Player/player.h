//
// Created by Marco on 15/04/2018.
//

#ifndef GOP_PLAYER_H
#define GOP_PLAYER_H

#include <map>
#include "string"


class player {
public:

    explicit player(int);

    std::string getPlayer_(int Turn);
    int getPlayer_square_(std::string Name);

    int getTurn_(std::string Name) ;

    void setSquare_(std::string name, int square);
    void setPlayer_(std::string name, int);
    void setTurn_(std::string name, int);
    int getNum_player_();
private:
    //dictionary: "map <key, value> variable"
    std::map<std::string,int> turn_; //player turn
    std::map<int, std::string> player_;//player name
    std::map<std::string, int> square_ ; //player's square
    int num_Player_ ;
};



#endif //GOP_PLAYER_H
