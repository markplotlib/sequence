// Driver file
#include "Repeater.h"
#include "Extractor.h"
#include "Variator.h"
#include <iostream>
using namespace std;

int main() {
    string inversion, emission;
    
    Sequence * rep = new Repeater();
    emission = rep->emit();
    cout << "emit: " << emission << endl;
// needs changing
inversion = rep->invert();  // TODO: decide where to make index encapsulated 
    cout << "invert: " << inversion << "\n" << endl;

    Sequence * extr = new Extractor();
    emission = extr->emit();
    cout << "emit: " << emission << endl;
// needs changing
inversion = extr->invert();  // TODO: decide where to make index encapsulated
    cout << "invert: " << inversion << "\n" << endl;

    Sequence * vrtr = new Variator();
    emission = vrtr->emit();
    cout << "emit: " << emission << endl;
// needs changing
inversion = vrtr->invert();  // TODO: decide where to make index encapsulated 
    cout << "invert: " << inversion << "\n" << endl;

    // TODO: make this (below) a SEQUENCE function, 
    // not a method called on R nor E nor V!
    cout << "guess=CAT. outcome: " << boolalpha << rep->guess("CAT") << endl;    
    // cout << "guess=CAT. outcome: " << boolalpha << extr->guess("CAT") << endl;
    // cout << "guess=CAT. outcome: " << boolalpha << vrtr->guess("CAT") << endl;
    
    return 0;
}
