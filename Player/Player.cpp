//
// Created by Marco on 15/04/2018.
//

#include "Player.h"

Player::Player(){}
Player::Player(int n){
    Colors c;
    num_Player_ = n;
    for(int i = 4; i > num_Player_; i--)
        draw += " ";
    player_[1].color_ = c.kGreen;
    player_[2].color_ = c.kYellow;
    player_[3].color_ = c.kMagenta;
    player_[4].color_ = c.kCyan;

    player_[1].color_no_bold = c.kGreenNoBold;
    player_[2].color_no_bold = c.kYellowNoBold;
    player_[3].color_no_bold = c.kMagentaNoBold;
    player_[4].color_no_bold = c.kCyanNoBold;

    for(int i = 1; i<=4; i++)
        player_[i].color_switched_ = player_[i].color_no_bold;

}


int Player::getNum_player_(){
    return num_Player_;
}

void Player::setSquare_(int turn, int square) {
    player_[turn].square_ += square;
}
int Player::getSquare_(int Turn){
    return player_[Turn].square_;
}


int Player::getDice_(int Turn) {
    if(player_[Turn].stop_)
        return 0;
    else
        return (player_[Turn].two_dice_ + 1);
}
void Player::switchDice_(int Turn) {
    player_[Turn].two_dice_ = !player_[Turn].two_dice_;
}


bool Player::getStop_(int Turn) {
    return player_[Turn].stop_;
}
void Player::switchStop_(int Turn) {
    player_[Turn].stop_ = !player_[Turn].stop_;
}



void Player::setPlayer_(int i, std::string name){
    player_ [i].name_ = move(name);
}
std::string Player::getName_(int Turn) {
    return player_[Turn].name_;
}
std::string Player::getColor(int Turn) {
    return player_[Turn].color_switched_;
}
std::string Player::getSymbol(int Turn) {
    if(getStop_(Turn))
        return player_[Turn].symbol_.stop_;
    else if(!player_[Turn].two_dice_)
        return player_[Turn].symbol_.one_dice_;
    else
        return player_[Turn].symbol_.normal_;

}


std::string Player::getSymbolsForDraw(int Square) {
    Colors c;
    std::string ret = draw;
    for (int i = 1; i<= getNum_player_(); i++){
        if (Square == player_[i].square_)
            ret += getColor(i) + getSymbol(i) + c.kStop;
        else
            ret += " ";
    }
    return ret;
}


void Player::switchBold(int a){
    if(color_bold_)
        player_[a].color_switched_ = player_[a].color_;
    else
        player_[a].color_switched_ = player_[a].color_no_bold;

    color_bold_ = !color_bold_;
    }