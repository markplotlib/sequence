// Sequence.h
// Specification file for the Sequence class.
#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <iostream>
#include "Inverter.h"
using namespace std;

class Sequence: public Inverter {
public:
    Sequence();  // no-args constructor
    bool isActive();
    bool guess(string);
    string getWord(); // TODO: experiment with a protected getWord() method.
    string invert(int);
    virtual string emit() = 0;  // abstract method, implemented by children classes.
private:
    string word;
    const int MIN_LENGTH = 3;
};

#endif