/*
This program takes user input in a 1D array and finds the largest number.
Programmer: Sophy Naliaka Wafula. 
Registration Number: BSE-05-0183/2024.
Date: 9th January 2025.
*/

#include <iostream>
using namespace std;

// Macro to define the size of the array
#define SIZE 5  

int main() {
    int numbers[SIZE]; // Declare 1D array

    // Prompt the user to input numbers
    cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i]; // Store input in array
    }

    // Initialize maxNumber with the first element
    int maxNumber = numbers[0]; 
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i]; // Update max if a larger value is found
        }
    }

    // Display the largest number
    cout << "The largest number is: " << maxNumber << endl;

    return 0;
}
