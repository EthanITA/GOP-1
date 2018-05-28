//
// Created by vecr on 26/05/18.
//

#include "Map.h"
#include "../Utils/Effects.h"
#include "../Utils/Util.h"


Map::Map(int dimensions) {
    int i;
    this->dimensions=dimensions;
    int map[dimensions][2];

    for(i=0;i<dimensions;i++){
        map[i][1]=Util::randomFrom1(Effects::numberOfEffects());
    }
}

