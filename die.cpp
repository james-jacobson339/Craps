//
// Created by User on 2/14/2020.
//

#include "die.h"
#include <random>

Die::Die (int startingNumberOfSides, int startingIncrement, int startingStartingValue) {
    int numberOfSides = startingNumberOfSides;
    int increment = startingIncrement;
    int startingValue = startingStartingValue;
    int value = 6;
}

int Die::roll() {
    value = rand() % numberOfSides;
}
void Die::setNumberOfSides(int newNumberOfSides) {
    numberOfSides = newNumberOfSides;
}
int Die::getNumberOfSides() {
    return numberOfSides;
}
void Die::setIncrement(int newIncrement) {
    increment = newIncrement;
}
int Die::getIncrement() {
    return increment;
}
void Die::setStartingValue(int newStartingValue) {
    startingValue = newStartingValue;
}
int Die::getStartingValue() {
    return startingValue;
}
void Die::setValue(int newValue) {
    value = newValue;
}
int Die::getValue() {
    return value;
}

