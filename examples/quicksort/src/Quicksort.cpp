//
// Created by bas on 8-10-18.
//

#include <iostream>
#include "../Headers/Quicksort.h"
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
//int partition (int arr[], int low, int high)
//{
//    int pivot = arr[high];    // pivot
//    int i = (low - 1);  // Index of smaller element
//
//    for (int j = low; j <= high- 1; j++)
//    {
//        // If current element is smaller than or
//        // equal to pivot
//        if (arr[j] <= pivot)
//        {
//            i++;    // increment index of smaller element
//            swap(&arr[i], &arr[j]);
//        }
//    }
//    swap(&arr[i + 1], &arr[high]);
//    return (i + 1);
//}

int* Quicksort::swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}