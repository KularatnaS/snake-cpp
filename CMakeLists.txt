cmake_minimum_required(VERSION 3.16)
project(snake LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(snake main.cpp includes/snakedir.cpp includes/draw.cpp includes/input.cpp includes/logic.cpp)
