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
    player();
    explicit player(int Number);

    std::string getName_(int Turn);
    int getSquare_(int Turn);
    void setPlayer_(int Turn, std::string Name);
    void setSquare_turn(int Turn, int Square);
    void setSquare_name(std::string Name, int Square);
    int getNum_player_();
    int getDice_(int Turn);
    void switchDice_(int Turn);
    bool getStop_(int Turn);
    void switchStop_(int Turn);
private:
    struct type{
        std::string name_;
        int square_ = 0;
        bool two_dice_ = true;
        bool stop_ = false;
    };
    std::map<int,type> player_;
    int num_Player_ ;
};



#endif //GOP_PLAYER_H
