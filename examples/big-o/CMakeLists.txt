cmake_minimum_required(VERSION 3.12)
project(big-o)

set(CMAKE_CXX_STANDARD 14)

add_executable(big-o main.cpp src/BigO.cpp Headers/BigO.h src/RandomArrayFactory.cpp Headers/RandomArrayFactory.h)