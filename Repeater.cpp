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
        return getWord().substr(0,2) + getWord().substr(1,2);
    } else {
        return getWord();
    }
}
