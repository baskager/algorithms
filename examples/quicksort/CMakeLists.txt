cmake_minimum_required(VERSION 3.12)
project(quicksort)

set(CMAKE_CXX_STANDARD 14)

add_executable(quicksort main.cpp src/Quicksort.cpp Headers/Quicksort.h Headers/RandomArrayFactory.h src/RandomArrayFactory.cpp src/Stepper.cpp Headers/Stepper.h src/Timer.cpp Headers/Timer.h)