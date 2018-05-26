//
// Created by Marco on 15/04/2018.
//

#ifndef GOP_DICE_H
#define GOP_DICE_H


#include <map>
#include "../Util.h"
#include "../Player/player.h"
#include <vector>

class dice {
public:
	explicit dice(int n);
	void setDice(int dice_);
	int throwDice();
private:
	struct type{
        int min_;
        int max_;
    };
    type dice_;
};


#endif //GOP_DICE_H
