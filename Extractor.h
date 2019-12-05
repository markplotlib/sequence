/**
 * Author: Mark Chesney
 * File name: Extractor.h
 * Version: 1.0
 * References: none
 * Description: emits a variant, or subsequence, of an encapsulated word, 
 *       if active, and if a subsequence is provided and contained in word.
 * Dependencies: A Extractor is-a Sequence.
 * + Extractor inherits all methods and fields from Sequence.
 *      - in particular, getRandomIndex() and getWord()
 * - Extractor implements Sequence's abstract method emit()
 * State: see parent class Sequence
 * Assumptions:
 * - When inactive, an extractor emits the whole word.
 */
#ifndef EXTRACTOR_H
#define EXTRACTOR_H

#include <iostream>
#include "Sequence.h"
using namespace std;

class Extractor: public Sequence {
public:
    // No-args constructor
    // Precondition: Sequence class defined.
    // Postcondition: extractor object initialized with word and index.
    Extractor();

    // Emit a string variant of encapsulated word.
    // Precondition: Sequence class implements getRandomIndex() and getWord(),
    //               extractor object is active
    // Postcondition: string returned, under following conditions:
    //               - if no subsequence provided, return substring of word
    string emit();
private:
    const int START_OFFSET = 1;  // left-most index of string variant
    const int STOP_OFFSET = 2;  // right-most index of string variant
};

#endif
