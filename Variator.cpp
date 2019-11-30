// Implementation file for the Variator class
// Created by Mark Chesney on 11/30/2019.
#include "Variator.h"
#include <iostream>
using namespace std;

// Constructor
Variator::Variator() {
    
}

string Variator::emit() {
    cout << "<<<I am in Variator::emit()>>>" << endl;
    if (isActive()) {
        return getWord() + getWord().substr(1,2);
    }
    cout << "<<<object state is INACTIVE. emit the word itself.>>>" << endl;
    return getWord();
}
