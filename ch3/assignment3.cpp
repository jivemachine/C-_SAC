// Jeremy Cobb

// Assignment 3

// 02-12-2022

#include <iostream>
using namespace std;

int main() {

  // start function
    
    double mpg, gallons, distance;                                                   // assign data types

    cout << "How many gallons of gas can your car hold?" << endl;                  // display gallons msg
    cin >> gallons;                                                               // get user input for gallons
    cin.ignore();                                                                // ignore newline space
    cout << "How many miles can your car drive on a full tank of gas?" << endl; // display distance msg
    cin >> distance;                                                           // user input for distance 
    mpg = distance / gallons;                                                 // calculating mpg
    cout << "Your car gets : " << mpg << " miles per gallon" << endl;        // displaying mpg
    return 0;                                                               // end function

}