//
// Created by Marco on 15/04/2018.
//

#ifndef GOP_PLAYER_H
#define GOP_PLAYER_H

#include <map>
#include <vector>
#include "string"


class player {
public:

    explicit player(int);

    std::string getName_(int Turn);
    int getSquare_(int Turn);
    void setPlayer_(int Turn, std::string Name);
    void setSquare_t(int Turn, int Square);
    void setSquare_n(std::string Name, int Square);
    int getNum_player_();
private:
    struct type{
        std::string name_;
        int square_;
    };
    std::map<int,type> player_;
    int num_Player_ ;
};



#endif //GOP_PLAYER_H
