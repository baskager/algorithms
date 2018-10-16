//
// Created by bas on 11-10-18.
//

#include <iostream>
#include "../Headers/Mergesort.h"
void Mergesort::sort(int array[], int low, int high) {
    if(low < high) {
        // Same as (low+high)/2, but avoids overflow for
        // large low and high
        int middle = low+(high-low)/2;

        // Sort first half of arrays
        this->sort(array, low, middle);
        // Sort second half of array
        this->sort(array, middle+1, high);
        this->merge(array, low, middle, high);
    }
}

void  Mergesort::merge(int array[], int low, int middle, int high) {
    int i, j, k;

    int n1 = middle - low + 1;
    int n2 =  high - middle;

    /* create temp arrays */
    int left[n1], right[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        left[i] = array[low + i];
    for (j = 0; j < n2; j++)
        right[j] = array[middle + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = low; // Initial index of merged subarray


    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of left[], if there
       are any */
    while (i < n1)
    {
        array[k] = left[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of right[], if there
       are any */
    while (j < n2)
    {
        array[k] = right[j];
        j++;
        k++;
    }
}