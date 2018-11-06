//
// Created by bas on 18-10-18.
//

#include "../Headers/Heapsort.h"
#include <iostream>

void Heapsort::heapify(int array[], int size, int root) {
    int largest = root;
    int left = 2*root + 1;
    int right = 2*root + 2;

    // If left child is larger than root
    if(left < size && array[left] > array[largest])
        largest = left;

    // If right child is larger than largest so far
    if(right < size && array[right] > array[largest])
        largest = right;

    // If largest is not root
    if(largest != root) {
        this->swap(&array[root], &array[largest]);

        // Recursively heapify the affected sub-tree
        this->heapify(array, size, largest);
    }
}

void Heapsort::sort(int array[], int size) {
    // Build max heap
    for (int i = size / 2; i >= 0; i--) {
        this->heapify(array, size, i);
    }

    for (int i = size - 1; i >= 0; i--) {
        // Move current root to end
        this->swap(&array[0], &array[i]);

        // call max heapify on the reduced heap
        heapify(array, i, 0);
    }


}

/**
    Swaps values of two memory addresses

    @param int* Pointer of memory address a
    @param int* Pointer of memory address b

    @return void
*/
int* Heapsort::swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
