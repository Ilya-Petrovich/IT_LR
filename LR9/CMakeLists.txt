cmake_minimum_required(VERSION 3.16)

project(WORK LANGUAGES CXX)

#add_executable(exe_file src/main.cpp)

option(BUILD_SHARED_LIBS OFF)

add_subdirectory(SFML SFML)
add_library(SFML STATIC IMPORTED)

link_directories(build/SFML/lib)
include_directories(SFML/include)

add_executable(main ${PROJECT_SOURCE_DIR} src/main.cpp)
target_link_libraries(main ${PROJECT_SOURCE_DIR} sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
