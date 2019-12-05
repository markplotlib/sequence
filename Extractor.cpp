// Implementation file for the Extractor class
// Created by Mark Chesney on 11/29/2019.
#include "Extractor.h"
#include <iostream>
using namespace std;

// Constructor
Extractor::Extractor() {
    
}

string Extractor::emit() {
                                                                cout << "Extractor::emit" << endl;
    if (isActive()) {
        string word = getWord();
        int index = getRandomIndex(START_OFFSET, word.length() - STOP_OFFSET);
        return getWord().substr(index, word.length() - 1);
    } else {
        return getWord();
    }
}
