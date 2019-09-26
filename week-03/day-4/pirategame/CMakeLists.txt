cmake_minimum_required(VERSION 3.14)
project(Pirate)

set(CMAKE_CXX_STANDARD 14)

add_executable(Pirate main.cpp Pirate.cpp Pirate.h Ship.cpp Ship.h BattleApp.cpp BattleApp.h Armada.cpp Armada.h WarApp.cpp WarApp.h)