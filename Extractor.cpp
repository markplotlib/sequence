// Implementation file for the Extractor class
// Created by Mark Chesney on 11/29/2019.
#include "Extractor.h"
#include <iostream>
using namespace std;

// Constructor
Extractor::Extractor() { }

string Extractor::emit() {
    if (isActive()) {
        string word = getWord();
        int index = getRandomIndex(START_OFFSET, word.length() - STOP_OFFSET);
        return getWord().substr(index, word.length() - 1);
    } else {
        // inactive state
        return getWord();
    }
}

string Extractor::emit(string subseq) {
    if (isActive()) {

        if (getWord() == subseq) {
            // substring equals word
            return SUBSEQUENCE_MATCH;

        } else if (getWord().find(subseq) != string::npos) {
            // substring is contained in word
            int start = getWord().find(subseq);
            return getWord().erase(start, subseq.length());
        } else {
            // substring NOT contained -> emission treated as no-param emit
            return emit();
        }
    } else {
        // inactive state
        return getWord();
    }
}
