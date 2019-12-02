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
    string invert(int);
    virtual string emit() = 0;  // abstract method, implemented by children classes.
protected:
    string getWord();  // TODO: confirm (w/ Sheila?) that a protected getWord() method does NOT violate encapsulation!!
private:
    string word;
    const int MIN_LENGTH = 3;
};

#endif