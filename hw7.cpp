// Driver file
#include "Repeater.h"
#include "Extractor.h"
#include "Variator.h"
#include <iostream>
using namespace std;

int main() {
    Repeater * rep = new Repeater();
    rep->emit();
    rep->invert(1);
    
    Extractor * extr = new Extractor();
    extr->emit();
    extr->invert(1);
    
    Variator * vrtr = new Variator();
    vrtr->emit();
    vrtr->invert(1);

    // TODO: make this (below) a SEQUENCE function, 
    // not a method called on R nor E nor V!
    cout << "guess=CAT. outcome: " << boolalpha << rep->guess("CAT") << endl;    
    cout << "guess=CAT. outcome: " << boolalpha << extr->guess("CAT") << endl;
    cout << "guess=CAT. outcome: " << boolalpha << vrtr->guess("CAT") << endl;
    
    return 0;
}
