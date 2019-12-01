// Driver file
#include "Repeater.h"
#include "Extractor.h"
#include "Variator.h"
#include <iostream>
using namespace std;

int main() {
    Repeater * rep = new Repeater();
    rep->emit();
    cout << "guess=FAT. outcome: " << boolalpha << rep->guess("FAT") << endl;
    cout << "guess=CAT. outcome: " << boolalpha << rep->guess("CAT") << endl;    
    
    Extractor * extr = new Extractor();
    extr->emit();
    cout << "guess=FAT. outcome: " << boolalpha << extr->guess("FAT") << endl;
    cout << "guess=CAT. outcome: " << boolalpha << extr->guess("CAT") << endl;
    
    Variator * vrtr = new Variator();
    vrtr->emit();
    cout << "guess=FAT. outcome: " << boolalpha << vrtr->guess("FAT") << endl;
    cout << "guess=CAT. outcome: " << boolalpha << vrtr->guess("CAT") << endl;
    
    return 0;
}
