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
        return getWord().substr(1,2);
    } else {
        return getWord();
    }
}
