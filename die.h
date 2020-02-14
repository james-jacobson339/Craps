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
    std::string color;
    bool isSymbols;
    std::string material;
    int startingValue;
public:
    Die (int startingNumberOfSides, int startingIncrement, int startingStartingValue, std::string color, bool isSymbols = false, std::string material = "Bone");
    int roll();
    void setNumberOfSides(int newNumberOfSides);
    int getNumberOfSides();
    void setIncrement(int newIncrement);
    int getIncrement();
    void setValue(int newValue);
    int getValue();
    void setColor(std::string newColor);
    std::string getColor();
    bool isSymbol();
    void setMaterial(std::string newMaterial);
    std::string getMaterial();
};

#endif //CRAPS_DIE_H
