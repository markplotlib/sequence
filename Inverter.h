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
    // virtual abstract method
    // Precondition: none
    // Postcondition: none
    virtual string invert() = 0;
};

#endif
