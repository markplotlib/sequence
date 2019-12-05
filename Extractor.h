/**
 * Author: Mark Chesney
 * File name: Extractor.h
 * Version: 1.0
 * References:
 * - https://stackoverflow.com/questions/2340281/check-if-a-string-contains-a-string-in-c
 * Description: emits a variant, or subsequence, of an encapsulated word, 
 *       if active, and if a subsequence is provided and contained in word.
 * Dependencies: A Extractor is-a Sequence.
 * + Extractor inherits all methods and fields from Sequence.
 *      - in particular, getRandomIndex() and getWord()
 * - Extractor implements Sequence's abstract method emit()
 * State: see parent class Sequence
 * Assumptions:
 * - When inactive, an extractor emits the whole word.
 * - If substring equals word, then this notification is emitted explicitly.
 * - If substring is contained in word, the word minus substring is emitted.
 * - If substring is NOT contained, emission equivalent to no-parameter emit().
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
    // Postcondition: substring returned
    string emit();

    // Emit a string variant of encapsulated word.
    // Precondition: Sequence class implements getRandomIndex() and getWord(),
    //               subsequence provided, and extractor object is active
    // Postcondition: substring returned
    string emit(string);

private:
    const int START_OFFSET = 1;  // left-most index of string variant
    const int STOP_OFFSET = 1;  // right-most index of string variant
    // in the event of a subsequence equal to sequence word:
    const string SUBSEQUENCE_MATCH = "(note: subsequence is equal to word.)";
};

#endif
