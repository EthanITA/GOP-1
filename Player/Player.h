//
// Created by Marco on 15/04/2018.
//

#ifndef GOP_PLAYER_H
#define GOP_PLAYER_H

#include <map>
#include <vector>
#include "string"
#include "../Utils/Colors.h"


class Player {
public:
    Player();
    explicit Player(int Number);

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
    std::string getSymbol(int Turn);
    std::string getColor(int Turn);
private:
    struct symbols{
        const std::string normal_= "☻";
        const std::string stop_ = "‼";
        const std::string one_dice_ = "☺";
    };
    struct type{
        std::string name_;
        int square_ = 0;
        bool two_dice_ = true;
        bool stop_ = false;
        symbols symbol_;
        std::string color_;
    };
    std::map<int,type> player_;
    int num_Player_ ;
};



#endif //GOP_PLAYER_H
