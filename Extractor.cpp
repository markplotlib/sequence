// Implementation file for the Extractor class
// Created by Mark Chesney on 11/29/2019.
#include "Extractor.h"
#include <iostream>
using namespace std;

// Constructor
Extractor::Extractor() {
    
}

string Extractor::emit() {
    if (isActive()) {
        return getWord().substr(1,2);
    }
    cout << "<<<object state is INACTIVE. emit the word itself.>>>" << endl;
    return getWord();
}
