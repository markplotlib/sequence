// Driver file
#include "Sequence.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string WORD_FILE = "words.dat";
    ifstream infile;
    int runNum = 1;
    const int RUN_MIN = 4;
    const char REPEAT = 'y';
    char runAgain = 'y';
        
string tempAns = "ADULT";
string tempHintEmit = "ADULLT";
string tempHintInvert = "AUDLT";
string guess;

    cout << "\nWelcome to the Sequence tester!\n" << endl;
    cout << "--------------" << endl;

    int NUM_WORDS = 48;
    string * wordArr = new string[NUM_WORDS];
    infile.open(WORD_FILE);
    int i = 0;
    for (string word; getline(infile, word); ) {
        wordArr[i++] = word;
    }
    infile.close();

    for (int j = 0; j < NUM_WORDS; j++) {
        cout << wordArr[j] << " ";
    }

    // while (runAgain == REPEAT) {
/*
        cout << "Testing word " << runNum << "\n" << endl;
        cout << "emit: " << tempHintEmit << endl;
        cout << "invert: " << tempHintInvert << "\n" << endl;
        cout << "What is your guess? ";
        cin >> guess;
        while (runAgain == REPEAT && guess != tempAns) {
            cout << "That is not correct. \nGuess again (y/n)? ";
            cin >> runAgain;
        }
        cout << "That's correct!\n";
        cout << "\n--------------" << endl;
        if (runNum > RUN_MIN) {
            cout << "Would you like to test another word (y/n)? ";
            cin >> runAgain;
        }
        runNum++;
*/
    // }
cout << REPEAT << RUN_MIN << runAgain << runNum << endl;

    cout << "\n--------------" << endl;
    cout << "Thank you for using the Sequence tester!\n" << endl;
    return 0;
}

