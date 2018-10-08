//
// Created by bas on 8-10-18.
//

#ifndef QUICKSORT_STEPPER_H
#define QUICKSORT_STEPPER_H


class Stepper {
private:
    int steps;
public:
    void up();
    void down();
    void reset();
    int getSteps();
};


#endif //QUICKSORT_STEPPER_H
