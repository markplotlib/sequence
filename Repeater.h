// Repeater.h
// Specification file for the Repeater class.
#ifndef Repeater_H
#define Repeater_H

#include <iostream>
#include "Sequence.h"
using namespace std;

class Repeater: public Sequence {
public:
    Repeater();
    string emit();
private:

};

#endif
