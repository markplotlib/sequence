// Implementation file for the Repeater class
// Created by Mark Chesney on 11/27/2019.
#include "Repeater.h"
#include <iostream>
using namespace std;

// Constructor
Repeater::Repeater() {
    
}

string Repeater::emit() {
    cout << "<<<I am in Repeater::emit()>>>" << endl;
    if (isActive()) {
        return getWord().substr(0,2) + getWord().substr(1,2);
    }
    cout << "<<<object state is INACTIVE. emit the word itself.>>>" << endl;
    return getWord();
}
