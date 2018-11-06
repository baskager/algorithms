cmake_minimum_required(VERSION 3.12)
project(week2)

set(CMAKE_CXX_STANDARD 14)

add_executable(quicksort main.cpp src/Quicksort.cpp Headers/Quicksort.h Headers/RandomArrayFactory.h src/RandomArrayFactory.cpp src/Stepper.cpp Headers/Stepper.h src/Timer.cpp Headers/Timer.h src/Mergesort.cpp Headers/Mergesort.h src/Heapsort.cpp Headers/Heapsort.h)