//
// Created by bas on 8-10-18.
//

#ifndef QUICKSORT_QUICKSORT_H
#define QUICKSORT_QUICKSORT_H


#include "Stepper.h"

class Quicksort {
private:
    int* swap(int* a, int* b);
    int partition(int arr[], int low, int high);
public:
    int* sort(int array[], int low, int high);
    Stepper stepper;
};


#endif //QUICKSORT_QUICKSORT_H
