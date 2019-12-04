/**
 * Author: Mark Chesney
 * File name: Inverter.h
 * Version: 1.0
 * References: none
 * Description: specifies the inversion of two characters in a string
 * Dependencies: none
 * State: none
 * Assumptions:
 * - indices for inversion are contained in child class
 */
#ifndef INVERTER_H
#define INVERTER_H

#include <iostream>
using namespace std;

class Inverter {
public:
    // Swaps two characters of word of a given sequence at indices i and i+1.
    // Precondition: child class inherits Inverter and implements invert()
    // Postcondition: returns string with indices i and i+1 swapped.
    virtual string invert() = 0;
};

#endif
