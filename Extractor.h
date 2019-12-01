// Extractor.h
// Specification file for the Extractor class.
#ifndef Extractor_H
#define Extractor_H

#include <iostream>
#include "Sequence.h"
using namespace std;

class Extractor: public Sequence {
public:
    Extractor();
    void emit();
private:

};

#endif
