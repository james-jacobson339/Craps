//
// Created by User on 2/14/2020.
//

#include "die.h"
#include <cstdlib>

Die (int startingNumberOfSides, int startingIncrement, int startingStartingValue) {

}
    int Die :: roll() {
        value = random() % numberOfSides;
    }
    void Die :: setNumberOfSides(int newNumberOfSides) {
        numberOfSides = newNumberOfSides;
    }
    int Die :: getNumberOfSides() {
        return numberOfSides;
    }
    void Die :: setIncrement(int newIncrement) {
        increment = newIncrement;
    }
    int Die :: getIncrement() {
        return increment;
    }
    void Die :: setStartingValue(int newStartingValue) {
        startingValue = newStartingValue;
    }
    void Die :: getStartingValue(){
        return startingValue;
    }
    void Die :: setValue(int newValue) {
        value = newValue;
    }
    int Die :: getValue() {
        return value;
    }

