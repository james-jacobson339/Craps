//
// Created by User on 2/14/2020.
//

#ifndef CRAPS_DIE_H
#define CRAPS_DIE_H
#include <string>
#include <iostream

class Die {
private:
    int numberOfSides;
    int increment;
    int value;
    int startingValue;
public:
    Die (int startingNumberOfSides, int startingIncrement, int startingStartingValue);
    int roll();
    void setNumberOfSides(int newNumberOfSides);
    int getNumberOfSides();
    void setIncrement(int newIncrement);
    int getIncrement();
    void setStartingValue(int newStartingValue);
    int getStartingValue();
    void setValue(int newValue);
    int getValue();

};

#endif //CRAPS_DIE_H
