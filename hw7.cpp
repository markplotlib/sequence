// Driver file
#include "Repeater.h"
#include "Extractor.h"
#include "Variator.h"
#include <iostream>
#include <fstream>
using namespace std;


int main() {
    // initialize constants
    const string WORD_FILE = "words.dat";    // sample word bank stored in file
    const int WORD_BANK_SIZE = 99;  // arbitrary upper limit of word 
    const int SEQ_COLLECTION_SIZE = 6;  // length of Sequence object collection
    const int RUN_MIN = 4;          // minimal loop repetitions
    const char REPEAT = 'y';        // key to repeat loop

    // declare variables
    string guess;                   // user input guess
    ifstream infile;                // object for reading in
    Sequence * seqArr[SEQ_COLLECTION_SIZE];    // Sequence object collection
    string wordArray[WORD_BANK_SIZE];          // word bank

    // initialize variables
    int numWords = 0;               // total count of word bank
    char runAgain = 'y';            // user input value

    // read words from file into working memory
    infile.open(WORD_FILE);
    for (string word; getline(infile, word); ) {
        wordArray[numWords++] = word;
    }
    infile.close();


    cout << "\nWelcome to the Sequence tester!\n" << endl;
    cout << "--------------" << endl;


cout << "HEY MARK! LOOP BEGINS HERE" << endl;


    cout << "Testing word " << Sequence::incrementGuessingRound()
         << " out of " << RUN_MIN << "\n" << endl;

    // output strings
    string inversion, emission;
    
    // set the sequence word
    Sequence::setWord(wordArray, numWords);

    // generate heterogenous collection of Sequence objects 
    // containing at least two instances of each object.
    int seqItem = 0;
    while (seqItem < SEQ_COLLECTION_SIZE) {
        seqArr[seqItem++] = new Repeater();
        seqArr[seqItem++] = new Extractor();
        seqArr[seqItem++] = new Variator();
    }

    for (int i = 0; i < SEQ_COLLECTION_SIZE; i++) {
        cout << "emit: " << seqArr[i]->emit() << endl;
        cout << "invert: " << seqArr[i]->invert() << "\n" << endl;
    }

    while (runAgain == REPEAT) {
		cout << "Please make a guess, ENTIRELY IN CAPS: ";
        cin >> guess;
        if (!(Sequence::correctGuess(guess))) {
			cout << "That is incorrect. Remember to guess ENTIRELY IN CAPS.";
            cout << "\nGuess again (y/n)? ";
            cin >> runAgain;
        } else {
            cout << "That's correct!\n";
            cout << "\n--------------" << endl;
            runAgain = 'n';
        }
    }


    // TODO: make this (below) a SEQUENCE function, 
    // not a method called on R nor E nor V!
// cout << "guess=CAT. outcome: " << boolalpha << rep->guess("CAT") << endl;
    // cout << "guess=CAT. outcome: " << boolalpha << extr->guess("CAT") << endl;
    // cout << "guess=CAT. outcome: " << boolalpha << vrtr->guess("CAT") << endl;
    
    return 0;
}
