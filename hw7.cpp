// Driver file
#include "Repeater.h"
#include "Extractor.h"
#include "Variator.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // sample word bank is stored in a file
    const string WORD_FILE = "words.dat";
    const int SIZE = 99;  // arbitrary upper limit of word 

    ifstream infile;
    string wordArray[SIZE];
    int numWords = 0;  // total count of word bank

    // read words from file into working memory
    infile.open(WORD_FILE);
    for (string word; getline(infile, word); ) {
        wordArray[numWords++] = word;
    }
    infile.close();

    for (int j = 0; j < numWords; j++) {
        cout << wordArray[j] << " ";
    }
    cout << endl;

    // output strings
    string inversion, emission;
    
    Sequence * rep = new Repeater();
    emission = rep->emit();
    cout << "emit: " << emission << endl;
    inversion = rep->invert();
    cout << "invert: " << inversion << "\n" << endl;

    Sequence * extr = new Extractor();
    emission = extr->emit();
    cout << "emit: " << emission << endl;
    inversion = extr->invert();
    cout << "invert: " << inversion << "\n" << endl;

    Sequence * vrtr = new Variator();
    emission = vrtr->emit();
    cout << "emit: " << emission << endl;
    inversion = vrtr->invert();
    cout << "invert: " << inversion << "\n" << endl;

    // TODO: make this (below) a SEQUENCE function, 
    // not a method called on R nor E nor V!
    cout << "guess=CAT. outcome: " << boolalpha << rep->guess("CAT") << endl;    
    // cout << "guess=CAT. outcome: " << boolalpha << extr->guess("CAT") << endl;
    // cout << "guess=CAT. outcome: " << boolalpha << vrtr->guess("CAT") << endl;
    
    return 0;
}
