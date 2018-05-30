cmake_minimum_required(VERSION 3.05)
project(GOP)

set(CMAKE_CXX_STANDARD 11)

add_executable(GOP
        Deck/Card.cpp
        Deck/Card.h
        Deck/Deck.cpp
        Deck/Deck.h
        Utils/Effects.cpp
        Utils/Effects.h
        Dice/dice.cpp
        Dice/dice.h
        Player/initPlayers.cpp
        Player/initPlayers.h
        Player/player.cpp
        Player/player.h
        main.cpp
        Utils/Util.cpp
        Utils/Util.h Map/Map.cpp Map/Map.h Game/game.cpp Game/game.h)
