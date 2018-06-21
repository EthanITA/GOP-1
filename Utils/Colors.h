//
// Created by Marco on 30/05/2018.
//

#ifndef GOP_COLORS_H
#define GOP_COLORS_H


#include <string>
/*
          foreground background
black        30         40
red          31         41
green        32         42
yellow       33         43
blue         34         44
magenta      35         45
cyan         36         46
white        37         47
 */



//  per usarlo fare cosi:
/// cout << kRed << .... << kStop << ...


struct Colors{
    const std::string kRed = "\033[1;31m", kGreen = "\033[1;32m", kYellow = "\033[1;33m",
            kBlue = "\033[1;34m", kMagenta = "\033[1;35m", kCyan = "\033[1;36m", kWhite = "\033[1;37m",
            kStop ="\033[0m", kRedNoBold = "\033[0;31m", kGreenNoBold = "\033[0;32m", kYellowNoBold = "\033[0;33m",
            kBlueNoBold = "\033[0;34m", kMagentaNoBold = "\033[0;35m", kCyanNoBold = "\033[0;36m";
};


#endif //GOP_COLORS_H
