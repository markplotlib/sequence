// Driver file
#include "Sequence.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    int runNum = 1;
    char runNewWord = 'y';
    char runAgain = 'y';
        
    cout << "\nWelcome to the Sequence tester!\n" << endl;
    cout << "--------------" << endl;

    while (runAgain == runNewWord) {
        cout << "Testing word " << runNum << endl;
        cout << "Would you like to test another word (y/n)? ";
        cin >> runAgain;
        runNum++;
    }

    cout << "\n--------------" << endl;
    cout << "Thank you for using the Sequence tester!\n" << endl;
    return 0;
}

