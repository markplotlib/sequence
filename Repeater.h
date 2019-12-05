/**
 * Author: Mark Chesney
 * File name: Repeater.h
 * Version: 1.0
 * References: none
 * Description: emits a variant of an encapsulated word, repeating one randomly
 *       selected character, when active.
 * Dependencies: A Repeater is-a Sequence.
 * + Repeater inherits all methods and fields from Sequence.
 *      - in particular, getRandomIndex() and getWord()
 * - Repeater implements Sequence's abstract method emit()
 * State: see parent class Sequence
 * Assumptions:
 * - When inactive, a repeater emits the whole word.
 */
#ifndef REPEATER_H
#define REPEATER_H

#include <iostream>
#include "Sequence.h"
using namespace std;

class Repeater: public Sequence {
public:
    // No-args constructor
    // Precondition: Sequence class defined.
    // Postcondition: repeater object initialized with word and index.
    Repeater();

    // Emit a string variant of encapsulated word.
    // Precondition: Sequence class implements getRandomIndex() and getWord(),
    //               repeater object is active
    // Postcondition: string returned, with one repeating character.
    string emit() override;

private:

};

#endif
