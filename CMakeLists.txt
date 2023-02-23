cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
project(C++)
add_executable(Source source/main.cpp)
add_library(Dyn_lib_race SHARED library/race/Race.h 
library/race/IRaceAir.h library/race/IRaceAir.cpp 
library/race/IRaceAirGround.h library/race/IRaceAirGround.cpp 
library/race/IRaceGround.h library/race/IRaceGround.cpp 
library/race/RaceInAir.h library/race/RaceInAir.cpp 
library/race/RaceOnGroundAndInAir.h library/race/RaceOnGroundAndInAir.cpp 
library/race/RaceOnGround.h library/race/RaceOnGround.cpp)

add_library(Dyn_lib_transport SHARED library/transport/TransportVehicle.h 
library/transport/AllTerrainBoots.h library/transport/AllTerrainBoots.cpp 
library/transport/Broomstick.h library/transport/Broomstick.cpp 
library/transport/Camel.h library/transport/Camel.cpp 
library/transport/CamelIsFast.h library/transport/CamelIsFast.cpp 
library/transport/Centaur.h library/transport/Centaur.cpp 
library/transport/Eagle.h library/transport/Eagle.cpp 
library/transport/ITransportAir.h library/transport/ITransportAir.cpp 
library/transport/ITransportGround.h library/transport/ITransportGround.cpp 
library/transport/MagicCarpet.h library/transport/MagicCarpet.cpp 
library/transport/TransportVehicleInAir.h library/transport/TransportVehicleInAir.cpp 
library/transport/TransportVehicleGround.h library/transport/TransportVehicleGround.cpp)
target_link_libraries(Source Dyn_lib_race)
target_link_libraries(Source Dyn_lib_transport)