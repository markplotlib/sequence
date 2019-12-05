/**
 * Author: Mark Chesney
 * File name: Variator.h
 * Version: 1.0
 * References: none
 * Description: emits a variant of an encapsulated word, concatenating or 
 *      truncating a subsequence, when active.
 * Dependencies: A Variator is-a Sequence.
 * + Variator inherits all methods and fields from Sequence.
 *      - in particular, getRandomIndex() and getWord()
 * - Variator implements Sequence's abstract method emit()
 * State: see parent class Sequence
 * Assumptions:
 * - When inactive, a variator emits the whole word.
 */
#ifndef VARIATOR_H
#define VARIATOR_H

#include <iostream>
#include "Sequence.h"
using namespace std;

class Variator: public Sequence {
public:
    // No-args constructor
    // Precondition: Sequence class defined.
    // Postcondition: variator object initialized with word and index.
    Variator();


    string emit();
private:

};

#endif
