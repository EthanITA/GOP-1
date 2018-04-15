//
// Created by Marco on 15/04/2018.
//

#ifndef GOP_PLAYER_H
#define GOP_PLAYER_H

#include "string"
class player {
public:
	player(std::string , int );

	void setNickname(const std::string nickname);

	void setTurn(int turn);

	const std::string &getNickname_() const;

	int getTurn_() const;

private:
	std::string nickname_;
	int turn_;
};


#endif //GOP_PLAYER_H
