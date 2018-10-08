//
// Created by bas on 18-9-18.
//

#include "../Headers/RandomArrayFactory.h"
#include <cstdlib>
#include <iostream>
RandomArrayFactory::RandomArrayFactory(int arrayLength, int lowest, int highest) {
    // Seed number randomizer
    srand(time(NULL));

    this->arrayLength = arrayLength;

    this->randomArray = new int[this->arrayLength];

    for(int i = 0; i < this->arrayLength; i++) {
        int randomNumber = rand() % highest + lowest;
        if(randomNumber == 0) std::cout << randomNumber << " ZERO" << std::endl;
        this->randomArray[i] = randomNumber;
    }
}
int * RandomArrayFactory::getArray() {
    return this->randomArray;
}
int RandomArrayFactory::getArrayLength() {
    return this->arrayLength;
}