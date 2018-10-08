//
// Created by bas on 8-10-18.
//

#ifndef QUICKSORT_TIMER_H
#define QUICKSORT_TIMER_H


#include <chrono>

class Timer {
private:
    std::chrono::high_resolution_clock::time_point startTime;
    std::chrono::high_resolution_clock::time_point endTime;
public:
    void start();
    void stop();
    void reset();
    long getEllapsedTimeInMicroseconds();
};


#endif //QUICKSORT_TIMER_H
