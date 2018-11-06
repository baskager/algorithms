#include <iostream>
#include "Headers/Quicksort.h"
#include "Headers/RandomArrayFactory.h"
#include "Headers/Timer.h"
#include "Headers/Mergesort.h"
#include "Headers/Heapsort.h"

int main() {
    int randomArraySize = 10000;
    int * randomArray = RandomArrayFactory::getRandomArray(randomArraySize,1,1000);


//    int randomArray[] = {12, 11, 13, 5, 6, 7};
//    int randomArraySize = sizeof(randomArray)/sizeof(randomArray[0]);

    Quicksort quicksort;
    Mergesort mergesort;
    Heapsort heapsort;
    Timer timer;

    // QUICKSORT
    timer.start();
    int* sortedArray = quicksort.sort(randomArray, 0, randomArraySize-1);
    timer.stop();

    std::cout << "Quicksort took: " << timer.getEllapsedTimeInMicroseconds() << "ms" << std::endl;

    for(int i = 0; i < randomArraySize; i++)
        std::cout << sortedArray[i] << " ";

    std::cout << std::endl;

    // MERGE SORT
    timer.start();
    mergesort.sort(randomArray, 0, randomArraySize-1);
    timer.stop();

    std::cout << std::endl;

    std::cout << "Merge sort took: " << timer.getEllapsedTimeInMicroseconds() << "ms" << std::endl;

    for(int i = 0; i < randomArraySize; i++)
        std::cout << randomArray[i] << " ";

    std::cout << std::endl;
    std::cout << std::endl;

    // randomize array
    randomArray = RandomArrayFactory::getRandomArray(randomArraySize,1,100);

    timer.start();
    heapsort.sort(randomArray, randomArraySize);
    timer.stop();

    std::cout << "Heap sort took: " << timer.getEllapsedTimeInMicroseconds() << "ms" << std::endl;

    for(int i = 0; i < randomArraySize; i++)
        std::cout << randomArray[i] << " ";

    std::cout << std::endl;

    return 0;
}