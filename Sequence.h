// Sequence.h
// Specification file for the Sequence class.
#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <string>
using namespace std;

class Sequence
{
public:
    Sequence();                   // constructor
    // Sequence(const Sequence &otherSeq);  // copy constructor
    // TODO: overloaded assignment operator
    // TODO: destructor
    string getWord();
    void setWord(string);
private:
    string word;
    const int MIN_LENGTH = 3;
};

#endif
