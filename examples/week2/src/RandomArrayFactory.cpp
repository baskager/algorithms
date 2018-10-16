//
// Created by bas on 18-9-18.
//

#include "../Headers/RandomArrayFactory.h"
#include <cstdlib>
#include <iostream>
#include <vector>

int * RandomArrayFactory::getRandomArray(int size, int min, int max) {
    // Seed number randomizer
    srand(time(NULL));
    int * randomArray =  new int[size];


    for(int i = 0; i < size; i++) {
        randomArray[i] = min + (rand() % (max-min));
    }

    return randomArray;
}