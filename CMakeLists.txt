cmake_minimum_required(VERSION 3.29)
project(Pig_Dice4_0)

set(CMAKE_CXX_STANDARD 20)

add_executable(Pig_Dice4_0 main.cpp
        die.h
        die.cpp
        turn.h
        turn.cpp
        Game.h
        Game.cpp)
