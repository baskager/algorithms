//
// Created by bas on 8-10-18.
//

#include <iostream>
#include "../Headers/Quicksort.h"

/**
    Worst case time complexity: O(n^2)
    Average case time complexity: O(n log(n))
    Best case time complexity: O(n log(n))

    (recursive) Quicksort function. Sorts an array of integers.

    @param array The array of integers to sort
    @param low The lowest index of the range to sort
    @param high The highest index of the range to sort

    @return int[] A sorted array
*/
int * Quicksort::sort(int array[], int low, int high) {

    if(low < high) {
        // Partition lower numbers to the left of the array
        int pivot = this->partition(array, low, high);

        // Run this method recursively with the items left of the pivot (partioned by above method).
        this->sort(array, low, pivot-1);
        // Run this method recursively with the the items right of the pivot
        this->sort(array, pivot+1, high);
    }
    return array;
}
/**
    Notation: O(log n) logarithmic.

    Divides an array into smaller parts using a pivot
    to split lower and higher values.

    @param array The array of integers to partition
    @param low The lowest index of the range to partition
    @param high The highest index of the range to partition

    @return int The pivot used for the next iteration in the sorting process
*/
int Quicksort::partition(int array[], int low, int high) {
    int pivot = array[high];    // pivot
    int leftwall = (low - 1);  // Index of smaller element

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            leftwall++;
            this->swap(&array[leftwall], &array[j]);

            this->stepper.up();
        }
    }
    this->swap(&array[leftwall + 1], &array[high]);
    return (leftwall + 1);
}
/**
    Swaps values of two memory addresses

    @param int* Pointer of memory address a
    @param int* Pointer of memory address b

    @return void
*/
int* Quicksort::swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}