// Jeremy Cobb

// Assignment #7

// 03/25/2022
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // initializing variables
    const int MIN_STUDENTS = 1,  // minnimum number of students on field trip
              MAX_STUDENTS = 25; // maximum numbeer of students on field trip
    int students, counter;
    string first_student, last_student;

    // Teacher input
    cout << "Enter amount of students on field trip" << endl;
    cin >> students;
    
    // input validation while loop
    while (students < MIN_STUDENTS || students > MAX_STUDENTS)
    {
        cout << "ERROR: Invalid number of students, please enter a valid number of students";
        cout << "between 1-25" << endl;
        cin >> students;
    }

    // while loop adding names to array
    string names[students]; // initalizing names array
    for (counter = 0; counter < students; counter++)
    {
        cout << "Enter name of student " << endl;
        cin >> names[counter];
    }

    first_student = names[0];           // pop first student name from array
    last_student = names[students - 1]; // pop last student name from array
    cout << "\nfirst student in line is " << first_student << endl;
    cout << "Last student in line is " << last_student << endl;
    cout << "\n";
    return 0;

}
