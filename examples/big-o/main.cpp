#include <iostream>
#include "Headers/BigO.h"
#include "Headers/RandomArrayFactory.h"
#include <array>

int main() {

    RandomArrayFactory randomArrayFct1(10, 1, 10);

    BigO bigO;
    bigO.setArray(randomArrayFct1.getArray(), randomArrayFct1.getArrayLength());


    // O(n)
    bigO.linear(2);
    bigO.print();
    // O(n^2)
    bigO.bubblesort();
    bigO.print();
    // O(log n)
    bigO.binarySearch(2);
    bigO.print();

    return 0;
}