// Jeremy Cobb
//
// Assignment 6
//
// 05/03/2022

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // assigning variables
    double orderQty, discount, price, total, discountedTotal;

    price = 2.00;

    // Marketing message
    cout << "Hello! Welcome to the floppy disk online store where everything must go!!!" << endl;
    cout << "If you purchase 10 or more floppy disks you will get a MAJOR discount $$$" << endl;
    cout << "\n";
    cout << "Buy 10-19 floppy disks you will recieve 20% off your entire order" << endl;
    cout << "\n";
    cout << "20-49, and you'll get 30% off your entire order" << endl;
    cout << "\n";
    cout << "50-99 40% off" << endl;
    cout << "\n";
    cout << "and any order for 100 or more floppy disks receives half off of their order!" << endl;
    cout << "\n" << "\n";
    cout << "How many floppy disks would you like to purchase today?" << endl;
    cin >> orderQty;

    // making sure user enters valid quantity
    if (orderQty <= 0) {
        cout << "Quantity must be greater than 0." << endl;
    } else { if (orderQty >= 100) { // half-off
                total = price * orderQty;
                cout << "Thank you for your purchase!\n" << "You purchased " << orderQty << endl;
                discount = 50;
                cout << "Percent discount for this Quantity: " << discount << "%" << endl;
                discountedTotal = total - (total * (discount / 100));
                cout << "Price before discount: $" << total << endl;
                cout << "Price after discount: $" << setprecision(2) << fixed << discountedTotal << endl;
                cout << "Thank you!" << endl;
                return 0;
            } else if (orderQty >= 50) { // 40% discount
                total = price * orderQty;
                cout << "Thank you for your purchase!\n" << "You purchased " << orderQty << endl;
                discount = 40;
                cout << "Percent discount for this Quantity: " << discount << "%" << endl;
                cout << "Price before discount:  $" << total << endl;
                discountedTotal = total - (total * (discount / 100));
                cout << "Price after discount: $" << setprecision(2) << fixed <<  discountedTotal << endl;
                cout << "Thank you!" << endl;
                return 0;
            } else if(orderQty >= 20) { // 30% discount
                total = price * orderQty;
                cout << "Thank you for your purchase!\n" << "You purchased " << orderQty << endl;
                discount = 30;
                cout << "Percent discount for this Quantity: " << discount << "%" << endl;
                cout << "Price before discount:  $" << total << endl;
                discountedTotal = total - (total * (discount / 100));
                cout << "Price after discount: $" << setprecision(2) << fixed << discountedTotal << endl;
                cout << "Thank you!" << endl;
                return 0;
            } else if (orderQty >= 10) { // 20% discount
                total = price * orderQty;
                cout << "Thank you for your purchase!\n" << "You purchased " << orderQty << endl;
                discount = 20;
                cout << "Percent discount for this Quantity: " << discount << "%" << endl;
                cout << "Price before discount:  $" << total << endl;
                discountedTotal = total - (total * (discount / 100));
                cout << "Price after discount: $" << setprecision(2) << fixed << discountedTotal << endl;
                cout << "Thank you!" << endl;
                return 0;
            } else if (orderQty > 0) { // calculate order total
                total = price * orderQty;
                cout << "Thank you for your purchase!\n" << "You purchased " << orderQty << " at: $" << price << " per disk " << endl;
                cout << "Your total will be: $" << setprecision(2) << fixed << total << endl;
                cout << "Thank you!" << endl;
                return 0;
            }
    }    
}