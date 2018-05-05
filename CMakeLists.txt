cmake_minimum_required(VERSION 3.05)
project(GOP)

set(CMAKE_CXX_STANDARD 17)

add_executable(GOP main.cpp Util.cpp Util.h Deck/Card.cpp Deck/Card.h Deck/Effects.cpp Deck/Effects.h)