/**
 * Author: Mark Chesney
 * File name: Sequence.h
 * Version: 1.0
 * References: none
 * Description: encapsulates a word, encapsulates an index when executing 
 *      the invert() function, and responds to inquiries.
 * Dependencies: A Sequence is-an Inverter.
 * - Sequence inherits all methods from Inverter.
 * - Sequence implements Inverter's abstract method invert()
 * State: sequence enters active state when word is of proper length
 * Assumptions:
 * - A sequence is active when its word is at least 3 characters long
 * - valid guesses will only be entered in ALL CAPS
 */
#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <iostream>
#include "Inverter.h"
using namespace std;

class Sequence: public Inverter {
public:
    // No-args constructor
    // Precondition: none
    // Postcondition: sequence object initialized with word and index.
    Sequence();

    // Constructor
    // Precondition: one word (without blank spaces / punctuation) is passed in
    // Postcondition: sequence object initialized with word and index.
    Sequence(string);

    // Returns whether state is active or not.
    // Precondition: none
    // Postcondition: returns boolean -- true if sequence is active,
    //                                   otherwise false.    
    bool isActive();

    // Returns whether guess word matches encapsulated word or not.
    // Precondition: sequence is active.
    // Postcondition: returns boolean, true if correct, false otherwise.
    bool guess(string);

    // Swaps two characters of word of a given sequence at indices i and i+1.
    // Precondition: sequence is active.
    // Postcondition: returns sequence with indices i and i+1 swapped.
    string invert() override;

    // Emit a string variant of encapsulated word.
    // Precondition: child class inherits Sequence and implements emit()
    // Postcondition: determined within child class.
    virtual string emit() = 0;  // abstract method, implemented by child class.

    // DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_
    // Precondition: _______TODO_______TODO_______TODO_______TODO_______TODO
    // Postcondition: _______TODO_______TODO_______TODO_______TODO_______TODO
    static int incrementGuessingRound();

    // DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_DESCRIPTION_
    // Precondition: _______TODO_______TODO_______TODO_______TODO_______TODO
    // Postcondition: _______TODO_______TODO_______TODO_______TODO_______TODO
    static bool correctGuess(string);

    // sets encapsulated sequence word, shared commonly among sequences
    //      receives array of words and array length 
    // Precondition: none
    // Postcondition: sequence word is set
    static void setWord(string[], int);

protected:
    static int getRandomIndex(int, int);  // helper function
    string getWord();   // returns word

private:
    const int MIN_LENGTH = 3;   // minimum length of word for active sequence
    static bool isSeeded;       // whether to generate new seed for random int
    static string word;  // encapsulated word, shared commonly among sequences
    static int countOfGuessedWords;  // keeps track of guess-word rounds
    int index;                  // index of character to be inverted
};

#endif