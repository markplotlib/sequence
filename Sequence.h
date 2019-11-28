// Sequence.h
// Specification file for the Sequence class.
#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <iostream>
using namespace std;

class Sequence
{
public:
    Sequence();  // constructor
    bool isActive();
    bool guess(string);
// string Sequence::emit() {}
string TEMPgetWord();// this is a TEMP function that won't remain
private:
    string word;
    const int MIN_LENGTH = 3;
};

#endif