// Jeremy Cobb
// 04/26/2022
// Assignment 12

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void getSales(int [], int, string []);
void getMax(int [], int, string []);
void getMin(int[], int, string []);
void getTotal(int [], int);
void header();

int main() {

    // number of columns
    const int array_size = 5;
    int total, high, low, index = 0;

    // column headers
    string salsas[array_size] = {"mild", "medium", "sweet", "hot", "zesty"};

    // initalizing sales data with salsa headers
    int sales[array_size];

    // sales report header
    header();

    // getting sales data from user
    for (int count = 0; count < array_size; count++) {
        cout <<  "How many jars of " << salsas[count] << " were sold?" << endl;
        cin >> sales[count];
    }

    cout << endl;

    // getting sales fpr each product
    getSales(sales, array_size, salsas);

    // getting total
    getTotal(sales, array_size);

    // getting highest selling salsa
    getMax(sales, array_size, salsas);

    // getting lowest selling salsa
    getMin(sales, array_size, salsas);
}

void header() {
    cout << "----------SALES REPORT--------------" << endl;
}

void getMax(int num[], int SIZE_OF_ARRAY, string products[]) {
    int max = num[0];
    int index = 0;

    for (int i = 1; i < SIZE_OF_ARRAY; i++) {
        if (num[i] > max) {
            max = num[i];
            index = i;
        }
    }

    cout << "-----HIGHEST IN SALES------" << endl;
    cout << "The highest selling salsa is: " << products[index] << " with " << max << " in sales." <<  endl;
}

void getMin(int num[], int SIZE_OF_ARRAY, string products[]) {
    int min = num[0];
    int index = 0;

    for (int i = 1; i < SIZE_OF_ARRAY; i++) {
        if (num[i] < min) {
            min = num[i];
            index = i;
        }
    }
    cout << "------LOWEST SELLING-----" << endl;
    cout << "The lowest selling salsa is: " << products[index] << " with " << min << " in sales." << endl;
}

void getTotal(int num[], int SIZE_OF_ARRAY) {

    int total = 0;

    for (int count = 0; count < SIZE_OF_ARRAY; count++) {
        total += num[count];
    }

    cout << "Total sales are: " << total << endl;
}

void getSales(int num[], int SIZE_OF_ARRAY, string products[]) {

    cout << "------SALES x SALSA TYPES------" << endl;
    for (int count = 0; count < SIZE_OF_ARRAY; count++) {

        cout << "Salsa Type: " << products[count] << " sold " << num[count] << " units." << endl;

    }

}
