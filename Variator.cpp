// Implementation file for the Variator class
// Created by Mark Chesney on 11/30/2019.
#include "Variator.h"
#include <iostream>
using namespace std;

// Constructor
Variator::Variator() {
    
}

string Variator::emit() {
    if (isActive()) {
        return getWord() + getWord().substr(1,2);
    } else {
        return getWord();
    }
}
