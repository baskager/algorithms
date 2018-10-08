#include <iostream>
#include "Headers/Quicksort.h"
#include "Headers/RandomArrayFactory.h"
#include "Headers/Timer.h"

int main() {
    RandomArrayFactory randomArrayFct1(10000, 1, 1000000);

    Quicksort quicksort;
    Timer timer;

    timer.start();
    int* sortedArray = quicksort.sort(randomArrayFct1.getArray(), 0, randomArrayFct1.getArrayLength()-1);
    timer.stop();

    for(int i = 0; i < randomArrayFct1.getArrayLength(); i++)
        std::cout << sortedArray[i] << " ";

    std::cout << std::endl;

//    std::cout << "Steps: " << quicksort.stepper.getSteps() << std::endl;
    std::cout << "Quicksort took: " << timer.getEllapsedTimeInMicroseconds() << "ms" << std::endl;
    return 0;
}