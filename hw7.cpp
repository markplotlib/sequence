// Driver file
#include "Sequence.h"
#include <iostream>
using namespace std;

int main() {
    Sequence * seq = new Sequence();
    cout << "THE WORD IS: " << seq->getWord() << endl;
    
    cout << "Active State? " << boolalpha << seq->isActive() << endl;


    return 0;
}

