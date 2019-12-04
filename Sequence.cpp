// Implementation file for the Sequence class
// Created by Mark Chesney on 11/23/2019.
#include "Sequence.h"
#include <iostream>
#include <ctime>
using namespace std;

bool Sequence::isSeeded = false;

// Constructor
Sequence::Sequence() {
    // TODO: SWITCH THIS OUT !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    // TODO: read from simple file, then full file
    word = "CAT";
    index = getIndex();
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
    char tmp = inversion[i];
    inversion[i] = inversion[i + 1];
    inversion[i + 1] = tmp;
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
    int i = rand() % (word.length() - 1);
    cout << "i = " << i << endl;
    return i;
}
