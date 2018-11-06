//
// Created by bas on 18-10-18.
//

#ifndef WEEK2_HEAPSORT_H
#define WEEK2_HEAPSORT_H


class Heapsort {
public:
    void heapify(int array[], int size, int root);
    int* swap(int* a, int* b);
    void sort(int array[], int size);
};


#endif //WEEK2_HEAPSORT_H
