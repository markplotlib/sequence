// Implementation file for the Sequence class
// Created by Mark Chesney on 11/23/2019.
#include "Sequence.h"
#include <iostream>
#include <ctime>
using namespace std;

bool Sequence::isSeeded = false;
string Sequence::word = "";

Sequence::Sequence() {
    if (isActive()) {
        index = getRandomIndex(0, word.length() - 1);
    } else {
        index = 0;
    }
}

Sequence::Sequence(string thatWord) {
    word = thatWord;
    index = getRandomIndex(0, word.length() - 1);
}

Sequence::~Sequence() { }

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
    if (isActive()) {
        int i = index;
        string inversion = word;
        char tmp = inversion[i];
        inversion[i] = inversion[i + 1];
        inversion[i + 1] = tmp;
        return inversion;
    } else {
        return word;
    }
}

bool Sequence::correctGuess(string guess) {
    return guess == word;
}

int Sequence::getRandomIndex(int low, int high) {
    if(!isSeeded) {
        srand((unsigned int)time(NULL));
        isSeeded = true;
    }
    int i = rand() % (high - low) + low;
    return i;
}

void Sequence::setWord(string arr[], int num) {
    word = arr[getRandomIndex(0, num)];
}

string Sequence::getWord() {
    return word;
}
