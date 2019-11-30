// Sequence.h
// Specification file for the Sequence class.
#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <iostream>
using namespace std;

class Sequence {
public:
    Sequence();
    bool isActive();
    bool guess(string);
    string getWord();
private:
    string word;
    const int MIN_LENGTH = 3;
};

#endif