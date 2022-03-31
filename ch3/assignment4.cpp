#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float test1, test2, test3, test4, test5, gpa; // assigning variables 
    
    char commaEater; // assigning commas to char value for formatting
    
    // give instructions to user
    cout << "What was your grade for your last 5 tests?";
    cout << "(seperate each grade with a comma)" << endl;
    
    // user input
    cin >> test1 >> commaEater >> test2 >> commaEater >> test3 >> commaEater >> test4 >> commaEater >> test5;
    
    // calculate gpa
    gpa = (test1 + test2 + test3 + test4 + test5) / 5;

    // display gpa
    cout << "Your gpa is: " << setprecision(1) << fixed << gpa << endl;
    return 0;
}