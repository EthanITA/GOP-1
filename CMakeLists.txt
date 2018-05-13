cmake_minimum_required(VERSION 3.05)
project(GOP)

set(CMAKE_CXX_STANDARD 11)

add_executable(GOP
        Deck/Card.cpp
        Deck/Card.h
        Deck/Deck.cpp
        Deck/Deck.h
        Deck/Effects.cpp
        Deck/Effects.h
        Dice/dice.cpp
        Dice/dice.h
        Player/initPlayers.cpp
        Player/initPlayers.h
        Player/player.cpp
        Player/player.h
        main.cpp
        Util.cpp
        Util.h)
