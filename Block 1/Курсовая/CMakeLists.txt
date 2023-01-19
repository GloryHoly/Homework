cmake_minimum_required(VERSION 3.22.0)
project(Race)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(DinamikLibrary SHARED AirTransport.h
AirTransport.cpp
Boots.h
Boots.cpp
Broom.h
Broom.cpp
Camel.h
Camel.cpp
CarpetPlane.h
CarpetPlane.cpp
Centaur.h
Centaur.cpp
Eagle.h
Eagle.cpp
GroundTransport.h
GroundTransport.cpp
Metod.h
Metod.cpp
TurboCamel.h
TurboCamel.cpp)
add_executable(RaceExe MonsterRace.cpp)
target_link_libraries(RaceExe DinamikLibrary)

