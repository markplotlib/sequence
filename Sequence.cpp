// Implementation file for the Sequence class
// Created by Mark Chesney on 11/23/2019.
#include "Sequence.h"
#include <string>
using namespace std;

// Constructor
Sequence::Sequence() {
    string word = "";
}

// Copy Constructor
// Sequence::Sequence(const Sequence &otherSeq) {}

string Sequence::getWord() {
    return word;
}

void Sequence::getWord(string input) {
    word = input;
}

