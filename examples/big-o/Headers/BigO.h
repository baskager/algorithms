//
// Created by bas on 17-9-18.
//
#include <iostream>
#include <ctime>
#include <string>
#include <chrono>
#include <ctime>

#ifndef WEEK1_NEW_BIGO_H
#define WEEK1_NEW_BIGO_H


class BigO {

private:
    int arrayLength = 0;
    int * itemsArray = {};
    int steps = 0;
    std::chrono::high_resolution_clock::time_point startTime;
    std::chrono::high_resolution_clock::time_point endTime;

public:

    BigO();
    void resetSteps();
    void addItemToArray(int item);
    std::string linear(int value);
    void bubblesort();
    void binarySearch(int value);
    int * getItemsArray();

    void startTimer();
    void stopTimer();
    auto getTimerDurationInMicroseconds();

    void print();
    void setArray(int * array, int arrayLength);
};


#endif //WEEK1_NEW_BIGO_H
