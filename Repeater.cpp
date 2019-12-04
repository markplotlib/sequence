// Implementation file for the Repeater class
// Created by Mark Chesney on 11/27/2019.
#include "Repeater.h"
#include <iostream>
using namespace std;

// Constructor
Repeater::Repeater() {
    
}

string Repeater::emit() {
    if (isActive()) {
        string word = getWord();
        int index = getRandomIndex(0, word.length() - 1);
        return word.substr(0, index) + word[index] + word.substr(index, word.length());
    } else {
        return getWord();
    }
}
