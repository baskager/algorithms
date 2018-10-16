//
// Created by bas on 8-10-18.
//

#include "../Headers/Timer.h"
void Timer::start() {
    this->startTime = std::chrono::high_resolution_clock::now();
}
void Timer::stop() {
    this->endTime = std::chrono::high_resolution_clock::now();
}
void Timer::reset() {
    this->startTime = std::chrono::high_resolution_clock::time_point();
    this->endTime = std::chrono::high_resolution_clock::time_point();
}
long Timer::getEllapsedTimeInMicroseconds() {
    return std::chrono::duration_cast<std::chrono::microseconds>( endTime - startTime ).count();
}