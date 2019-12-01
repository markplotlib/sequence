// Implementation file for the Extractor class
// Created by Mark Chesney on 11/29/2019.
#include "Extractor.h"
#include <iostream>
using namespace std;

// Constructor
Extractor::Extractor() {
    
}

void Extractor::emit() {
    if (isActive()) {
        cout << "emit: " << getWord().substr(1,2) << endl;
    } else {
        cout << "<<<object state is INACTIVE. emit the word itself.>>>" << endl;
        cout << getWord() << endl;
    }
}
