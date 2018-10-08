/**
    CS-14 g++
    BigO.cpp
    Purpose: Demonstrate the complexity of a few BigO notations.

    @author Bas Kager
    @version 1.0 20-9-2018
*/
#include <iostream>
#include "../Headers/BigO.h"
#include <chrono>
#include <ctime>


BigO::BigO() {

};

/**
    Notation: O(1) constant.

    Adds an individual item to an array.

    @param newItem The item to add to the array.
    @return void
*/

void BigO::addItemToArray(int newItem)
{
//    resetSteps();
//    startTimer();
//    this->itemsArray = {};
    this->itemsArray = nullptr;
//    this->itemsArray[this->arrayLength++] = newItem;
//    stopTimer();
}
/**
    Notation: O(n) linear.

    A linear search function.

    @param value The value to find.
    @return void
*/
std::string BigO::linear(int value)
{
    std::cout << "-----------------------\n -- Linear search --" << std::endl;
    bool valueInArray = false;
    std::string indexesWithValue = "";

    resetSteps();
    startTimer();
    // Linear search for a specific value and store all the indexes in a string
    for(int i = 0; i < this->arrayLength; i++) {
        steps++;
        if(this->itemsArray[i] == value) {
            valueInArray = true;
            indexesWithValue += std::to_string(i) + " ";
        }
    }
    std::cout << "Indexes containing " << value << ": \n\t"
              << indexesWithValue << std::endl;
    std::cout << "-----------------------" << std::endl;

    stopTimer();

    return indexesWithValue;
};

/**
    Notation: O(n^2) quadratic.

    The bubble sort sorting algorithm

    @return void
*/
void BigO::bubblesort()
{
    int next;
    int current;
    int temp;
    std::cout << "-----------------------\n -- Bubble sort --" << std::endl;

    resetSteps();
    startTimer();
    // Bubble sort code
    for(int i = 0; i < this->arrayLength; i++) {
        for(int j = 0; j < this->arrayLength-1; j++) {
            steps++;
            current = this->itemsArray[j];
            next = this->itemsArray[j + 1];

            // If the next number in the list is of lower value, swap the position in the array.
            if(next < current) {
                temp = current;
                this->itemsArray[j] = next;
                this->itemsArray[j+1] = temp;
            }
        }
    }
    stopTimer();
    for(int i = 0; i < this->arrayLength; i++) {
        std::cout << this->itemsArray[i] << " ";
    }
    std::cout << std::endl;
};

/**
    Notation: O(log n) logarithmic.

    A binary search function.

    @param value The value to find.
    @return void
*/
void BigO::binarySearch(int value)
{

    int lowIndex = 0;
    int pivot;
    int highIndex = this->arrayLength - 1;

    std::cout << "-----------------------\n -- Binary search for " << value << "--" << std::endl;

    resetSteps();
    startTimer();

    while(lowIndex < highIndex) {
        steps++;
        pivot = (highIndex + lowIndex) / 2;

        if(this->itemsArray[pivot] > value)
            // The pivot becomes the highest index, all of the indexes above the pivot are will be ignored.
            highIndex = pivot;
        if(this->itemsArray[pivot] < value)
            // The pivot becomes the lowest index, all of the indexes under the pivot will be ignored.
            lowIndex = pivot;
        if(this->itemsArray[pivot] == value)
        {
            std::cout << "MATCH - Value at index[" << pivot << "] is equal to " << value << std::endl;
            lowIndex = highIndex+1;
        }
    }

    std::cout << "-----------------------" << std::endl;

    stopTimer();
};

/**
    Overwrites the objects array with an external array.

    @param array The array to be loaded.
    @param arrayLength The length of the loaded array.
    @return void
*/
void BigO::setArray(int * array, int arrayLength) {
    this->itemsArray = array;
    this->arrayLength = arrayLength;
}
/**
    Get the objects array.

    @return The array that holds the items to be processed by the algorithms.
*/
int * BigO::getItemsArray() {
    return this->itemsArray;
}

/**
    Resets the step counter, the steps are used to see how many steps a certain BigO complexity needs.

    @return void
*/
void BigO::resetSteps() {
    steps = 0;
}
/**
    Starts the timer.

    @return void
*/
void BigO::startTimer() {
    startTime = std::chrono::high_resolution_clock::now();
}
/**
    Stops the timer.

    @return void
*/
void BigO::stopTimer() {
    endTime = std::chrono::high_resolution_clock::now();
}
/**
    Get the duration of the timer.

    @return The amount of time ellapsed by the timer in milliseconds.
*/
auto BigO::getTimerDurationInMicroseconds() {
    return std::chrono::duration_cast<std::chrono::microseconds>( endTime - startTime ).count();
}
/**
    Prints information about the last performed algorithm.

    @return void
*/
void BigO::print() {
    std::cout << "Array length: " << arrayLength << std::endl;
    std::cout << "Amount of steps needed: " << steps << std::endl;
    std::cout << "Duration: " << getTimerDurationInMicroseconds() << "ms" << std::endl;
}

