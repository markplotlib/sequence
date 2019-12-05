// Driver file
#include "Repeater.h"
#include "Extractor.h"
#include "Variator.h"
#include <iostream>
#include <fstream>
using namespace std;

// function prototypes
void helloGoodbye(bool);
void guessLoop();
void populateArray(string[], int&, string);

// global constants
const char REPEAT = 'y';        // key to repeat loop


int main() {
    // initialize constants
    const string WORD_FILE = "words.dat";    // sample word bank stored in file
    const int WORD_BANK_SIZE = 99;  // arbitrary upper limit of word 
    const int SEQ_COLLECTION_SIZE = 6;  // length of Sequence object collection
    const int RUN_MIN = 4;          // minimal loop repetitions

    // declare variables
    Sequence * seqArr[SEQ_COLLECTION_SIZE];    // Sequence object collection
    string wordArray[WORD_BANK_SIZE];          // word bank

    // initialize variables
    int roundCount = 0;         // keeps track of round number
    // int wordCount = 0;              // total count of word bank
    int numWords = 0;             // running count of word bank
    
    // read words from file into working memory
// populateArray(wordArray, wordCount, WORD_FILE);

    ifstream infile;    
    // int numWords = 0;
    infile.open(WORD_FILE);
    for (string word; getline(infile, word); ) {
        wordArray[numWords++] = word;
    }
    infile.close();


    helloGoodbye(true);    // greeting

    while (++roundCount <= RUN_MIN) {
        cout << "Testing word " << roundCount << " out of " << RUN_MIN << "\n" << endl;
    } 


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

    guessLoop();

    helloGoodbye(false);  // salutation

    return 0;
}


void guessLoop() {
    string guess;
    char runAgain = 'y';        // user input value
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
}

void helloGoodbye(bool hello) {
    if (hello) {
        cout << "\nWelcome to the Sequence tester!\n" << endl;
        cout << "--------------" << endl;
	} else {
		cout << "Thank you for using the Sequence tester!\n" << endl;
	}
}


// void populateArray(string wordArray, int &wordCount, string WORD_FILE) {
//     ifstream infile;    
//     int numWords = 0;
//     infile.open(WORD_FILE);
//     for (string word; getline(infile, word); ) {
//         wordArray[numWords++] = word;
//     }
//     infile.close();
// }
