/*
The program is used to find the volume of a cylinder and the seccond part calculates the library fines according to the overdue days by using human defined functions.
Programmer: Sophy Naliaka Wafula. 
Registration Number: BSE-05-0183/2024.
Date: 23rd January 2024.
*/

#include <iostream> //pre-processor
#include <cmath>   // Functions: pow() and M_PI
#include <string>  // For std::string
using namespace std;

// Function for calculating the volume of a cylinder
double calculateVolume(double radius, double height) {
    return M_PI * pow(radius, 2) * height;
}

// Function for calculating overdue fine for the library books
int calculateFine(int overdueDays) {
    if (overdueDays <= 7) {
        return overdueDays * 20; // Charge per day = Ksh. 20
    } else if (overdueDays <= 14) {
        return overdueDays * 50; // Charge per day = Ksh. 50
    } else {
        return overdueDays * 100; // Charge per day = Ksh. 100
    }
}

int main() {
    // 1. Volume of Cylinder
    cout << "(1): Volume of a Cylinder" << endl;
    double radius, height;
    cout << "Enter the cylinder's radius: ";
    cin >> radius;
    cout << "Enter the cylinder's height: ";
    cin >> height;

    double volume = calculateVolume(radius, height);
    cout << "The volume of the cylinder is: " << volume << " cubic units." << endl;

    // 2.Calculating Library Fines
    cout << "\n(1): Calculation for the Library Fines" << endl;
    string bookID;
    int dueDate, returnDate;
    cout << "Enter the Book ID: ";
    cin >> bookID;
    cout << "Enter the Due Date for the book (as day number i.e, 10 for 10th day): ";
    cin >> dueDate;
    cout << "Enter the Return Date for the book (as day number i.e, 15 for 15th day): ";
    cin >> returnDate;

    // Calculate overdue days
    int overdueDays = returnDate - dueDate;
    if (overdueDays <= 0) {
        cout << "No fine charged ." << endl;
    } else {
        int fine = calculateFine(overdueDays);
        cout << "Book ID: " << bookID << endl;
        cout << "Due Date: Day " << dueDate << endl;
        cout << "Return Date: Day " << returnDate << endl;
        cout << "Days Overdue: " << overdueDays << endl;
        cout << "Fine rate range due to overdue days : Ksh. " 
             << (overdueDays <= 7 ? 20 : (overdueDays <= 14 ? 50 : 100)) << " per day" << endl;
        cout << "Total Fine: Ksh. " << fine << endl;
    }

    return 0;
}
