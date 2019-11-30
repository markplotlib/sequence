// Implementation file for the Repeater class
// Created by Mark Chesney on 11/27/2019.
#include "Repeater.h"
#include <iostream>
using namespace std;

// Constructor
Repeater::Repeater() {
    
}

string Repeater::emit() {
    if (isActive()) {
        return "I am in Repeater.emit.\n";
    }
    cout << "object state is INACTIVE." << endl;
    return "emit the word itself\n";
}
