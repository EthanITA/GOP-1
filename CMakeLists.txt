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
        Dice/Dice.cpp
        Dice/Dice.h
        Player/InitPlayers.cpp
        Player/InitPlayers.h
        Player/Player.cpp
        Player/Player.h
        main.cpp
        Utils/Util.cpp
        Utils/Util.h Map/Map.cpp Map/Map.h Game/Game.cpp Game/Game.h Utils/Colors.h)
