//
// Created by bas on 8-10-18.
//

#include "../Headers/Stepper.h"
void Stepper::up() {
    this->steps++;
}
void Stepper::down() {
    this->steps--;
};
void Stepper::reset() {
    this->steps = 0;
}
int Stepper::getSteps() {
    return this->steps;
}