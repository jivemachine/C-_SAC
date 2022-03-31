#include <iostream>
using namespace std;

// function reads 2 numbers
// outputs which of the 2 numbers are larger
// and which of the 2 are smaller
int main() {

    // assigning variables
    double num1, num2;
    char commaEater;

    // asking for user input
    cout << "Enter 2 comma seperated numbers: " << endl;
    cin >> num1 >> commaEater >> num2;

    // start if statement
    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    } else {
        cout << num2 << " is greater than " << num1 << endl;
    } // end if statement
    return 0;

}