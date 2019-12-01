// Driver file
#include "Repeater.h"
#include "Extractor.h"
#include "Variator.h"
#include <iostream>
using namespace std;

int main() {
    string inversion, emission;
    
    Repeater * rep = new Repeater();
    emission = rep->emit();
    cout << "emit: " << emission << endl;
    
    rep->invert(1);
    inversion = rep->emit();
    cout << "invert: " << inversion << "\n" << endl;


    Extractor * extr = new Extractor();
    extr->emit();
    emission = extr->emit();
    cout << "emit: " << emission << endl;

    extr->invert(1);
    inversion = extr->emit();
    cout << "invert: " << inversion << "\n" << endl;


    Variator * vrtr = new Variator();
    vrtr->emit();
    emission = vrtr->emit();
    cout << "emit: " << emission << endl;

    vrtr->invert(1);
    inversion = vrtr->emit();
    cout << "invert: " << inversion << "\n" << endl;

    // TODO: make this (below) a SEQUENCE function, 
    // not a method called on R nor E nor V!
    cout << "guess=CAT. outcome: " << boolalpha << rep->guess("CAT") << endl;    
    cout << "guess=CAT. outcome: " << boolalpha << extr->guess("CAT") << endl;
    cout << "guess=CAT. outcome: " << boolalpha << vrtr->guess("CAT") << endl;
    
    return 0;
}
