//
// Created by vecr on 10/04/18.
//

#ifndef GOP_UTIL_H
#define GOP_UTIL_H

#include <string>


class Util {
public:
    static void clear();
    static int random(int min, int max);
    static int randomFrom0(int max);
    static int randomFrom1(int max);

};

void cinClear();
std::string inputCheck(std::string);
void mSleep (int microseconds); //pause in microsec.
#endif //GOP_UTIL_H

