//
// Created by bas on 11-10-18.
//

#ifndef QUICKSORT_MERGESORT_H
#define QUICKSORT_MERGESORT_H

#include "iostream"
#include "vector"


class Mergesort {
private:
    void merge(int array[], int l, int m, int r);
public:
    void sort(int array[], int low, int high);
};


#endif //QUICKSORT_MERGESORT_H
