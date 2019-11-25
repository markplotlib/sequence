// Driver file
#include "Sequence.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// function prototypes
void populateArray(string [], int &, string);

int main() {
    const string WORD_FILE = "words.dat";
    const int SIZE = 99;  // arbitrary upper limit of word count
    int word_count = 0;
    string wordArr[SIZE];

    cout << "\nWelcome to the Sequence tester!\n" << endl;
    cout << "--------------" << endl;

    // read words from file into working memory
    populateArray(wordArr, word_count, WORD_FILE);

    // TODO: generate random seed for next line
    int j = rand() % 48 + 1;
    cout << wordArr[j];

    cout << "\n--------------" << endl;
    cout << "Thank you for using the Sequence tester!\n" << endl;
    return 0;
}

// read words from file, into string array
void populateArray(string arr[], int &count, string filename) {
	ifstream infile;
    infile.open(filename);
    for (string word; getline(infile, word); ) {
        arr[count++] = word;
    }
    infile.close();
}
