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
    Player(int Number);

    int getNum_player_();

    int getSquare_(int Turn);
    void setSquare_(int Turn, int Square);

    int getDice_(int Turn);
    void switchDice_(int Turn);

    bool getStop_(int Turn);
    void switchStop_(int Turn);

    void setPlayer_(int Turn, std::string Name);
    std::string getName_(int Turn);
    std::string getColor(int Turn);
    std::string getSymbol(int Turn);

    std::string getSymbolsForDraw(int Square);

private:
    struct symbols{
        const std::string normal_= "▓";
        const std::string one_dice_ = "▒";
        const std::string stop_ = "░";
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
    int num_Player_;
};



#endif //GOP_PLAYER_H
