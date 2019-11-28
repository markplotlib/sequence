// Driver file
#include "Sequence.h"
#include <iostream>
using namespace std;


int main() {

    Sequence * seq = new Sequence();
    cout << "THE WORD IS: " << seq->getWord() << endl;

    return 0;
}

