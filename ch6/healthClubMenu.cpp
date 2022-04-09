// this is a menu driven program that makes a function call
// for each selection the user makes
#include <iostream>
#include <iomanip>
using namespace std;

//f function prototypes
void showMenu();
void showFees(double, int);

int main() 
{
    int choice; // to hold a menu choice
    int months; // to hold a numbeer of months

    // constants for the menu choices
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;
    
    // constants for mebership rates
    const double ADULT = 40.00,
                 CHILD = 20.00,
                 SENIOR = 30.00;

    // set up numeric output formatting
    cout << fixed << showpoint << setprecision(3);

    do 
    {
        // Display the menu and get the users choice 
        showMenu();
        cin >> choice;

        // validate the menu selection
        while(choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Please enter a valid menu choice";
            cin >> choice;
        }

        // if the user does not want to quit, proceeed
        if (choice != QUIT_CHOICE)
        {
            // Get the number of months
            cout << "For how many months? ";
            cin >> months;

            // Display membership fees
            switch(choice)
            {
                case ADULT_CHOICE:
                    showFees(ADULT, months);
                    break;
                case CHILD_CHOICE:
                    showFees(CHILD, months);
                    break;
                case SENIOR_CHOICE:
                    showFees(SENIOR, months);
            }
        }
    } while (choice  != QUIT_CHOICE);
    return 0;
}


// definition of function showMenu which displays menu

void showMenu()
{
    cout << "\n\t\tHealth Club Membership Menu\n\n"
         << "1. Standard Adult Membership\n"
         << "2. Child Membership\n"
         << "3. Senior Membership\n"
         << "4. Quit program\n\n"
         << "Enter your choice: ";
}

// Definition of function showFees. The memberRate parameter holds the monthly membership rate and the months parameteer holds the
// number of months. the function displays thee total charges.

void showFees(double memberRate, int months)
{
    cout << "The total charges are $"
         << (memberRate * months) << endl;
}