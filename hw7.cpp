// Driver file
#include "Sequence.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string WORD_FILE = "words.dat";
    ifstream infile;
    int NUM_WORDS = 48;
    string * wordArr = new string[NUM_WORDS];
        
    cout << "\nWelcome to the Sequence tester!\n" << endl;
    cout << "--------------" << endl;

    // read in words file
    infile.open(WORD_FILE);
    int i = 0;
    for (string word; getline(infile, word); ) {
        wordArr[i++] = word;
    }
    infile.close();

    for (int j = 0; j < NUM_WORDS; j++) {
        cout << wordArr[j] << " " << rand() % 48 + 1 << " ";
    }

    cout << "\n--------------" << endl;
    cout << "Thank you for using the Sequence tester!\n" << endl;
    return 0;
}

