cmake_minimum_required(VERSION 3.16)
project(work LANGUAGES CXX)

option(BUILD_SHARED_LIBS OFF)

add_subdirectory(SFML SFML)
add_library(SFML STATIC IMPORTED)

link_directories(build/SFML/lib)
include_directories(SFML/include)

add_executable(work src/main.cpp)
target_link_libraries(work sfml-system sfml-window sfml-graphics sfml-audio sfml-network)