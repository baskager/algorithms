//
// Created by bas on 18-9-18.
//

#ifndef WEEK1_NEW_RANDOMARRAYFACTORY_H
#define WEEK1_NEW_RANDOMARRAYFACTORY_H


class RandomArrayFactory {
private:
    int arrayLength = 0;
    int * randomArray;
public:
    RandomArrayFactory(int arraySize, int min, int max);
    int * getArray();
    int getArrayLength();
};


#endif //WEEK1_NEW_RANDOMARRAYFACTORY_H
