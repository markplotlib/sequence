// Implementation file for the Sequence class
// Created by Mark Chesney on 11/23/2019.
#include "Sequence.h"
#include <iostream>
using namespace std;

// Constructor
Sequence::Sequence() {
    word = "AT";
}

string Sequence::getWord() {
    return word;
}

bool Sequence::isActive() {
    return ((int) word.length() >= MIN_LENGTH);
}
