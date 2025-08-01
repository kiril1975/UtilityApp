#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// 1. Brute Force Attack
void simulateBruteForce() {
    string correctCode = "4321";
    for (int guess = 0; guess <= 9999; ++guess) {
        string trial = to_string(guess);
        trial.insert(trial.begin(), 4 - trial.length(), '0');
        cout << "Attempt: " << trial << endl;
        if (trial == correctCode) {
            cout << "Success! The code is: " << trial << endl;
            break;
        }
    }
}

// 2. Some Counting
void countNumbers() {
    cout << "Counting from 1 to 100:" << endl;
    for (int n = 1; n <= 100; n++) {
        cout << n << " ";
        if (n % 10 == 0) cout << endl;
    }
}

// 3. Simple Search
void runSimpleSearch() {
    int data[] = {2, 4, 6, 8, 10};
    int size = sizeof(data) / sizeof(data[0]);
    int searchFor;
    cout << "Enter a number to find: ";
    cin >> searchFor;

    bool match = false;
    for (int i = 0; i < size; i++) {
        if (data[i] == searchFor) {
            cout << "Found " << searchFor << " at index " << i << endl;
            match = true;
            break;
        }
    }
    if (!match) cout << "Number not found." << endl;
}

// 4. Hello
void greetUser() {
    string username;
    cout << "What's your name? ";
    getline(cin >> ws, username);
    cout << "Hi there, " << username << "! Welcome!" << endl;
}
// 5. Is it even?
void checkEvenOdd() {
    int value;
    cout << "Type an integer: ";
    cin >> value;
    cout << value << " is " << ((value % 2 == 0) ? "even" : "odd") << "." << endl;
}

int main() {
    cout << ">> Brute Force Attack Simulation\n";
    simulateBruteForce();

    cout << "\n>> Counting\n";
    countNumbers();

    cout << "\n>> Simple Search\n";
    runSimpleSearch();

    cout << "\n>> Greeting\n";
    greetUser();

    cout << "\n>> Even or Odd Check\n";
    checkEvenOdd();

    return 0;
}