// Inverter.h
// Specification file for the Inverter class.
#ifndef Inverter_H
#define Inverter_H

#include <iostream>
using namespace std;

class Inverter {
public:
    virtual string invert(int) = 0;  // TODO: experiment with a protected method.
private:
    int i;
};

#endif
