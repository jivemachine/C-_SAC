#include <iostream>
#include <fstream>

using namespace std;
int main() 
{
    ifstream inputFile;

    double sum = 0,
           total = 0,
           average,
           number;


    inputFile.open("Random.txt");

    if (inputFile.fail())
    {
        cout << "Error opening the file." << endl;
    }
    else 
    {
        
        while(inputFile >> number)
        {
            
            sum += number;
            total++;
            
        }
        
        average = sum / total;

        cout << "Sum  : " << sum << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl; 

    }

    inputFile.close();
    cout << "File closed." << endl;

    return 0;
}