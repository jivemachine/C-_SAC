// Jeremy Cobb
//
// Assignment 9
//
// 04/09/2022
#include <iostream>
using namespace std;

// Function prototype
double calculateRetail(double, double);

int main()
{

    double cost, markup, price; // declaring variables
    
    // input validation with do while loop
        // asking for user input
        cout << "Please enter the wholesale price of the item\n";
        cin >> cost;
        
        // validating input
        while (cost < 0.01)
        {
            cout << "Please enter a valid price: ";
            cin >> cost;
        }

        // Continuing application
        // asking user for markup percentage
        cout << "Please enter the desired markup percentage\n";
        cin >> markup;

        // validating user input
        while (markup < 0)
        {
            cout << "Please enter valid markup percentage\n";
            cin >> markup;
        }

        // finish calucalations and display new price
        price = calculateRetail(cost, markup);
        cout << "The price of the item is: $" << price << endl;
        return 0;
} // exit function main

// defining calculateRetail function
double calculateRetail(double cost, double markup)
{
    return cost + (cost * (markup / 100));
}