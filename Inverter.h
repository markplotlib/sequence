// Inverter.h
// Specification file for the Inverter class.
#ifndef Inverter_H
#define Inverter_H

#include <iostream>
using namespace std;

class Inverter {
public:
    virtual string invert() = 0;  // TODO: experiment with a protected method.
private:
    int i;  // TODO:
            // does this get used??  is this where i want to encapsulate i??
            // one option is to call a protected getter from Sequence, which is a child method.
            // the other is to encapsulate i within Sequence.
};

#endif
