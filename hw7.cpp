// Driver file
#include "Repeater.h"
#include <iostream>
using namespace std;

int main() {
    Repeater * rep = new Repeater();
    cout << "Active State? " << boolalpha << rep->isActive() << endl;

    cout << "Making a guess, that word is FAT: " << boolalpha << rep->guess("FAT") << endl;
    cout << "Making a guess, that word is CAT: " << boolalpha << rep->guess("CAT") << endl;
    
    return 0;
}
