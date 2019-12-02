// Implementation file for the Sequence class
// Created by Mark Chesney on 11/23/2019.
#include "Sequence.h"
#include <iostream>
using namespace std;

// Constructor
Sequence::Sequence() {
    word = "CAT";
    // TODO: read from simple file, then full file
}

bool Sequence::isActive() {
    return ((int) word.length() >= MIN_LENGTH);
}

bool Sequence::guess(string guessWord) {
    if (isActive()) {
        return word == guessWord;
    }
    return false;
}

string Sequence::getWord() {
    return word;
}

string Sequence::invert(int i) {
    string inversion = word;
    char tmp = inversion[i]; // tmp = 'A'
    inversion[i] = inversion[i + 1]; // inversion becomes "CTT"
    inversion[i + 1] = tmp;
    return inversion;
}