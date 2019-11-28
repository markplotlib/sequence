// Driver file
#include "Sequence.h"
#include <iostream>
using namespace std;

int main() {
    Sequence * seq = new Sequence();
cout << "TEMP: THE WORD IS: " << seq->TEMPgetWord() << endl;
    cout << "Active State? " << boolalpha << seq->isActive() << endl;

    cout << "Making a guess, that word is FAT: " << boolalpha << seq->guess("FAT") << endl;
    cout << "Making a guess, that word is CAT: " << boolalpha << seq->guess("CAT") << endl;
    
    return 0;
}
