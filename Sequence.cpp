// Implementation file for the Sequence class
// Created by Mark Chesney on 11/23/2019.
#include "Sequence.h"
#include <iostream>
using namespace std;

// Constructor
Sequence::Sequence() {
    word = "AT";
    // TODO: read from simple file, then full file
}

bool Sequence::isActive() {
    return ((int) word.length() >= MIN_LENGTH);
}

bool Sequence::guess(string guessWord) {
    if (isActive()) {
        cout << "I'm in the guess function. ";
        return word == guessWord;
    }
    return false;
}

string Sequence::getWord() {
    cout << "I am in Sequence.emit." << endl;
    return word;
}

