// Driver file
#include "Repeater.h"
#include "Extractor.h"
#include "Variator.h"
#include <iostream>
using namespace std;

int main() {
    Repeater * rep = new Repeater();
    cout << "Active State? " << boolalpha << rep->isActive() << endl;
    cout << "Making a guess, that word is FAT: " << boolalpha << rep->guess("FAT") << endl;
    cout << "Making a guess, that word is CAT: " << boolalpha << rep->guess("CAT") << endl;    
    string repEmission = rep->emit();
    cout << repEmission << endl;

    Extractor * extr = new Extractor();
    cout << "Active State? " << boolalpha << extr->isActive() << endl;
    cout << "Making a guess, that word is FAT: " << boolalpha << extr->guess("FAT") << endl;
    cout << "Making a guess, that word is CAT: " << boolalpha << extr->guess("CAT") << endl;
    string extrEmission = extr->emit();
    cout << extrEmission << endl;

    Variator * vrtr = new Variator();
    cout << "Active State? " << boolalpha << vrtr->isActive() << endl;
    cout << "Making a guess, that word is FAT: " << boolalpha << vrtr->guess("FAT") << endl;
    cout << "Making a guess, that word is CAT: " << boolalpha << vrtr->guess("CAT") << endl;
    string vrtrEmission = vrtr->emit();
    cout << vrtrEmission << endl;

    return 0;
}
