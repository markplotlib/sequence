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
    const int WORD_BANK_SIZE = 99;  // arbitrary upper limit of word 
    const int SEQ_COLLECTION_SIZE = 6;  // length of a collection of Sequence objects

    ifstream infile;
    Sequence * seqArr[SEQ_COLLECTION_SIZE];
    string wordArray[WORD_BANK_SIZE];
    int numWords = 0;  // total count of word bank

    // read words from file into working memory
    infile.open(WORD_FILE);
    for (string word; getline(infile, word); ) {
        wordArray[numWords++] = word;
    }
    infile.close();


    cout << "\nWelcome to the Sequence tester!\n" << endl;
    cout << "--------------" << endl;

    cout << "Testing word " << Sequence::incrementGuessingRound() << endl;

    // output strings
    string inversion, emission;

    // generate heterogenous collection of Sequence objects -- contain at least two instances of each object.     
    int seqItem = 0;
    while (seqItem < SEQ_COLLECTION_SIZE) {
        seqArr[seqItem++] = new Repeater();
        cout << seqItem << endl;
        seqArr[seqItem++] = new Extractor();
        cout << seqItem << endl;
        seqArr[seqItem++] = new Variator();
        cout << seqItem << endl;
    }

    for (int i = 0; i < SEQ_COLLECTION_SIZE; i++) {
        cout << "emit: " << (*seqArr)->emit() << endl;
        cout << "invert: " << (*seqArr)->invert() << "\n" << endl;
    }

    // TODO: make this (below) a SEQUENCE function, 
    // not a method called on R nor E nor V!
// cout << "guess=CAT. outcome: " << boolalpha << rep->guess("CAT") << endl;
    // cout << "guess=CAT. outcome: " << boolalpha << extr->guess("CAT") << endl;
    // cout << "guess=CAT. outcome: " << boolalpha << vrtr->guess("CAT") << endl;
    
    return 0;
}
