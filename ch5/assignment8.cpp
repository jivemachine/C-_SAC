// Jeremy Cobb

// Assignment 8

// 03/31/2022
// Libraries
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

   // declaring ifstream object
   ifstream inputFile;
   // declaring variables
   long int num, counter = 0, sum = 0 , avg;

   // Open Random.txt file
   inputFile.open("Random.txt");

   // processing Random.txt file
   while (inputFile >> num)
   {

    //    inputFile >> num;  // assigning numbers from Random.txt to num variable
       sum = sum+num;     // adding one num per loop
       counter++;         // counting iterations
   }

    avg = sum / counter;                                                        // calculating average of all numbers
    cout << "There are: " << counter << " data points in this data set\n";      // Displaying number of datapoints
    cout << "The total of all of the numbers combined is: " << sum << endl;     // Displaying total of all numeric data
    cout << "The avg number in this dataset is: " << avg << endl;               // Displaying avg of all data

    // close file
    inputFile.close();
    return 0;
}