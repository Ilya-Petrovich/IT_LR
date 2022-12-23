cmake_minimum_required(VERSION 3.16)

project(allayarova LANGUAGES CXX)

option(BUILD_SHARED_LIBS OFF)

add_subdirectory(SFML SFML)
add_library(SFML STATIC IMPORTED)

link_directories(build/SFML/lib)
include_directories(SFML/include)

add_executable(allayarova src/main.cpp)
target_link_libraries(allayarova sfml-system sfml-window sfml-graphics sfml-audio sfml-network)