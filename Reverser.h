#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>
#include <string>
#include <cmath>

class Reverser{
protected:
    int value;
    std::string characters;
public:
    Reverser();
    int reverseDigit(int value);
    std::string reverseString(std::string characters);
};


#endif
