/*
This program prompts the user to enter temperature readings for 2 weeks,
each containing 3 days, with morning and evening readings for each day.
The program then stores and displays the recorded temperature data.
Programmer: Sophy Naliaka Wafula. 
Registration Number: BSE-05-0183/2024.
Date: 9th March 2025.
 */

#include <iostream>
using namespace std;

// Macros to define the size of the 3D array
#define WEEKS 2  
#define DAYS 3  
#define TIMES 2  // Morning and Evening readings per day

int main() {
    float temp[WEEKS][DAYS][TIMES]; // Declare 3D array

    // Prompt user to input temperature readings
    cout << "Enter temperature readings for " << WEEKS * DAYS * TIMES << " entries (Week, Day, Time):\n";
    for (int w = 0; w < WEEKS; w++) { // Loop through weeks
        for (int d = 0; d < DAYS; d++) { // Loop through days
            for (int t = 0; t < TIMES; t++) { // Loop through morning/evening times
                cout << "Week " << w + 1 << ", Day " << d + 1 << ", " 
                     << (t == 0 ? "Morning" : "Evening") << ": ";
                cin >> temp[w][d][t]; // Store temperature readings
            }
        }
    }

    // Display the recorded temperature data
    cout << "\nStored Temperature Data:\n";
    for (int w = 0; w < WEEKS; w++) { // Loop through weeks
        cout << "Week " << w + 1 << ":\n";
        for (int d = 0; d < DAYS; d++) { // Loop through days
            cout << "  Day " << d + 1 << " -> ";
            cout << "Morning: " << temp[w][d][0] << " Degrees, "; // Display morning temperature
            cout << "Evening: " << temp[w][d][1] << " Degrees\n"; // Display evening temperature
        }
    }

    return 0;
}
