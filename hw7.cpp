// Driver file
#include "Repeater.h"
#include "Extractor.h"
#include "Variator.h"
#include <iostream>
using namespace std;

int main() {
    Repeater * rep = new Repeater();
    cout << "guess=FAT. outcome: " << boolalpha << rep->guess("FAT") << endl;
    cout << "guess=CAT. outcome: " << boolalpha << rep->guess("CAT") << endl;    
    string repEmission = rep->emit();
    cout << repEmission << endl;

    Extractor * extr = new Extractor();
    cout << "guess=FAT. outcome: " << boolalpha << extr->guess("FAT") << endl;
    cout << "guess=CAT. outcome: " << boolalpha << extr->guess("CAT") << endl;
    string extrEmission = extr->emit();
    cout << extrEmission << endl;

    Variator * vrtr = new Variator();
    cout << "guess=FAT. outcome: " << boolalpha << vrtr->guess("FAT") << endl;
    cout << "guess=CAT. outcome: " << boolalpha << vrtr->guess("CAT") << endl;
    string vrtrEmission = vrtr->emit();
    cout << vrtrEmission << endl;

    return 0;
}
