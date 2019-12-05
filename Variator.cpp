// Implementation file for the Variator class
// Created by Mark Chesney on 11/30/2019.
#include "Variator.h"
#include <iostream>
using namespace std;

// Constructor
Variator::Variator() { }

string Variator::emit() {
    if (isActive()) {
        string word = getWord();
        int index1 = getRandomIndex(0, word.length() - 1);
        int index2 = index1;
        while (index1 == index2) {
            index2 = getRandomIndex(0, word.length() - 1);
        }
        if (index1 > index2) {
            int tmp = index1;
            index1 = index2;
            index2 = tmp;
        }
        return getWord() + getWord().substr(index1, index2);
    } else {
        // inactive state
        return getWord();
    }
}
