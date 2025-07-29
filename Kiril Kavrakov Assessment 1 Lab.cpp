#include <iostream>
#include <string>
using namespace std;

// 1. Coding is Cool
void showCodingMessage() {
    cout << "Yes! Coding is absolutely awesome!" << endl;
}

// 2. Simple Sums
void performAddition() {
    int num1, num2;
    cout << "Input two numbers to add: ";
    cin >> num1 >> num2;
    int result = num1 + num2;
    cout << "The total is: " << result << endl;
}

// 3. Biography
void displayBiography() {
    string fullName, favoriteActivity;
    int userAge;

    cout << "What's your name? ";
    getline(cin >> ws, fullName);
    cout << "How old are you? ";
    cin >> userAge;
    cout << "What's your favorite activity? ";
    getline(cin >> ws, favoriteActivity);

    cout << "\n--- Your Biography ---" << endl;
    cout << "Name: " << fullName << "\nAge: " << userAge << "\nHobby: " << favoriteActivity << endl;
}

// 4. Primitive Quiz
void showPrimitiveTypes() {
    int integerVal = 25;
    float floatVal = 4.75f;
    char initial = 'B';
    bool isTrue = false;

    cout << "Int: " << integerVal << endl;
    cout << "Float: " << floatVal << endl;
    cout << "Char: " << initial << endl;
    cout << "Bool: " << boolalpha << isTrue << endl;
}

// 5. Days of the Month
void printDaysInMonth() {
    int m;
    cout << "Enter a month number (1-12): ";
    cin >> m;

    if (m == 2)
        cout << "This month has 28 or 29 days." << endl;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        cout << "This month has 30 days." << endl;
    else if (m >= 1 && m <= 12)
        cout << "This month has 31 days." << endl;
    else
        cout << "Invalid input!" << endl;
}

int main() {
    cout << ">> Exercise: Coding is Cool\n";
    showCodingMessage();

    cout << "\n>> Exercise: Simple Sums\n";
    performAddition();

    cout << "\n>> Exercise: Biography\n";
    displayBiography();

    cout << "\n>> Exercise: Primitive Quiz\n";
    showPrimitiveTypes();

    cout << "\n>> Exercise: Days of the Month\n";
    printDaysInMonth();

    return 0;
}
