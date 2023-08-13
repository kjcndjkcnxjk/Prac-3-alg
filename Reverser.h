#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>
#include <string>
#include <cmath>

class Reverser{
private:
    int value;
    string characters;
public:
    Reverser();
    int reverseDigit(int value);
    string reverseString(string characters);
};


#endif