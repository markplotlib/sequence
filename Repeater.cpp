// Implementation file for the Repeater class
// Created by Mark Chesney on 11/27/2019.
#include "Repeater.h"
#include <iostream>
using namespace std;

// Constructor
Repeater::Repeater() {
    
}

void Repeater::emit() {
    if (isActive()) {
        cout << "emit: " << getWord().substr(0,2) + getWord().substr(1,2) << endl;
    } else {
        cout << "<<<object state is INACTIVE. emit the word itself.>>>" << endl;
        cout << getWord() << endl;
    }
}
