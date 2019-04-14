//
// Created by bas on 6-11-18.
//

#include "../Headers/HashTable.h"
HashTable::HashTable(int size) {
    this->valueArray = new std::string[size];
    this->arraySize = size;
    this->collisions = 0;
    this->amountOfElements = 0;
}

int HashTable::getSize() {
    return this->arraySize;
}

int HashTable::getHashCode(int value) {
    return value % this->arraySize;
}

int HashTable::getDoubleHashCode(int index) {
    int stepDistance = 7 - index % 7;
    int hash = stepDistance + index;

    return stepDistance + index;
}

void HashTable::put(std::string input) {
    this->amountOfElements++;

    int value = std::stoi(input);
    int hash = this->getHashCode(value);

    // Distance of steps to take with linear probing
    int stepDistance = 7 - hash % 7;

    int arrayIndex = hash;

    // Double hash on collisions
    while(!this->valueArray[arrayIndex].empty() && arrayIndex < this->arraySize-1) {
        this->collisions++;
        std::cout << input << " | collision on: " << arrayIndex  << std::endl;

        // Double hash
        arrayIndex = this->getDoubleHashCode(arrayIndex);
    }

    std::cout << input << " | inserting on: " << arrayIndex  << std::endl;
    this->valueArray[arrayIndex] = input;

    std::cout << "--------------------------" << std::endl;
}

std::string HashTable::get(std::string input) {
    std::cout << input << " | Search started"  << std::endl;

    int value = std::stoi(input);
    int hash = this->getHashCode(value);
    std::string result = this->valueArray[hash];

    while(result != input && hash < this->arraySize) {
        std::cout << input << " | No match on: " << hash  << std::endl;
        hash = getDoubleHashCode(hash);
        result = this->valueArray[hash];
    }

    if (result == input) return result + " | found on index[" + std::to_string(hash) + "]";
    else return "Could not find: " + input;
}

float HashTable::calculateLoadfactor() {
    return (float)this->amountOfElements / (float)this->arraySize;
}

void HashTable::displayStack() {
    std::cout << "HASH | VALUE" << std::endl;
    for(int i = 0; i < this->arraySize; i++) {
        std::string value = this->valueArray[i];
        std::cout << "--------------------" << std::endl;
        std::cout << " " << i << " \t| " << value << std::endl;
    }
    std::cout << "\nThis hash table was built with " << this->collisions << " colissions" << std::endl;
    std::cout << "Load factor: " << this->calculateLoadfactor() << std::endl;
}