//
// Created by bas on 6-11-18.
//

#ifndef WEEK3_HASHTABLE_H
#define WEEK3_HASHTABLE_H


#include <string>
#include <iostream>

class HashTable {
private:
    int* keyArray;
    std::string* valueArray;
    int arraySize;
    int itemsInArray = 0;
    int collisions = 0;
    int amountOfElements;
    int getHashCode(int value);
    int getDoubleHashCode(int value);
public:
    HashTable(int size);
    int getSize();
    float calculateLoadfactor();
    void put(std::string input);
    void displayStack();
    std::string get(std::string value);
};


#endif //WEEK3_HASHTABLE_H
