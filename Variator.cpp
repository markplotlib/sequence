// Implementation file for the Variator class
// Created by Mark Chesney on 11/30/2019.
#include "Variator.h"
#include <iostream>
using namespace std;

// Constructor
Variator::Variator() {
    
}

void Variator::emit() {
    if (isActive()) {
        cout << "emit: " << getWord() + getWord().substr(1,2) << endl;
    } else {
        cout << "<<<object state is INACTIVE. emit the word itself.>>>" << endl;
        cout << getWord() << endl;
    }
}
