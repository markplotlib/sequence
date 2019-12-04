// Implementation file for the Sequence class
// Created by Mark Chesney on 11/23/2019.
#include "Sequence.h"
#include <iostream>
#include <ctime>
using namespace std;

bool Sequence::isSeeded = false;

int Sequence::countOfGuessedWords = 0;

// Constructor
Sequence::Sequence() {
    // TODO: SWITCH THIS OUT !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    // TODO: read from simple file, then full file
    word = "JAMESTOWN";
    index = getRandomIndex(0, word.length() - 1);
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

int Sequence::getRandomIndex(int low, int high) {
    if(!isSeeded) {
        srand((unsigned int)time(NULL));
        isSeeded = true;
    }
    int i = rand() % (high - low) + low;
    return i;
}

int Sequence::incrementGuessingRound() {
    return ++countOfGuessedWords;
}