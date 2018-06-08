//
// Created by Marco on 15/04/2018.
//

#include "Player.h"

Player::Player(){}
Player::Player(int n){
    num_Player_ = n;
}

bool Player::getStop_(int Turn) {
    return player_[Turn].stop_;
}

void Player::switchStop_(int Turn) {
    player_[Turn].stop_ = !player_[Turn].stop_;
}

int Player::getDice_(int Turn) {
    return (player_[Turn].two_dice_ + 1);
}

void Player::switchDice_(int Turn) {
    player_[Turn].two_dice_ = !player_[Turn].two_dice_;
}
void Player::setPlayer_(int i, std::string name){
    Colors c_;
    player_ [i].name_ = move(name);
    switch (i){
        case 1:
            player_[i].color_ = c_.kBlue;
            break;
        case 2:
            player_[i].color_ = c_.kYellow;
            break;
        case 3:
            player_[i].color_ = c_.kMagenta;
            break;
        case 4:
            player_[i].color_ = c_.kCyan;
            break;
    }
}

void Player::setSquare_(int turn, int square) {
    player_[turn].square_ += square;
}

std::string Player::getName_(int Turn) {
    return player_[Turn].name_;
}
int Player::getSquare_(int Turn){
    return player_[Turn].square_;
}
int Player::getNum_player_(){
    return num_Player_;
}

std::string Player::getColor(int Turn) {
    return player_[Turn].color_;
}

std::string Player::getSymbol(int Turn) {
    if(getStop_(Turn))
        return player_[Turn].symbol_.stop_;
    else if(getDice_(Turn) == 1)
        return player_[Turn].symbol_.one_dice_;
    else
        return player_[Turn].symbol_.normal_;

}
std::string Player::square_ToPrint(int turn){
    std::string ret_string;
    for(int i = 1; i<= (player_[turn].square_/10); i++) //ogni 10 aggiunge \t
        ret_string += "\t";
    for (int i=1; i<=((player_[turn].square_/10.0 - player_[turn].square_/10)*10); i++)//ogni 1 aggiunge \n
        ret_string += "\n";
    return ret_string;
}