// Implementation file for the Sequence class
// Created by Mark Chesney on 11/23/2019.
#include "Sequence.h"
#include <iostream>
#include <ctime>
using namespace std;

bool Sequence::isSeeded = false;

// Constructor
Sequence::Sequence() {
    word = "CAT";
    index = getIndex();
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

string Sequence::invert() {
    int i = index;
    string inversion = word;
    char tmp = inversion[i]; // tmp = 'A'
    inversion[i] = inversion[i + 1]; // inversion becomes "CTT"
    inversion[i + 1] = tmp;  // inversion SHOULD become "CTA"
    return inversion;
}

string Sequence::getWord() {
    return word;
}

int Sequence::getIndex() {
    if(!isSeeded) {
        srand((unsigned int)time(NULL));
        isSeeded = true;
    }
    // int low = 0;
    // int high = word.length() - 1;
    int i = rand() % (word.length() - 1);
    // int i = rand() % (high - low + 1) + low;
    cout << "i = " << i << endl;
    return i;
}
