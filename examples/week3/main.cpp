#include <iostream>
#include "Headers/HashTable.h"

int main(){
//     Load factor = N/K, Where:
//     N = Amount of items to be stored
//     K = Size of hash table
//
//     In the underlying example, the load factor is 1 (7/7)

//     It is generally more efficient to use prime numbers in the size of your hash table.
    HashTable hashTable(7);

    hashTable.put("0630123940");
    hashTable.put("0623562345");
    hashTable.put("0634624622");
    hashTable.put("0615241532");
    hashTable.put("0630123936");
    hashTable.put("0630162516");
    hashTable.put("0630123934");

    hashTable.displayStack();

    std::cout << "--------------" << std::endl;
    std::cout<< hashTable.get("0630162516") << std::endl;

    return 0;
}
