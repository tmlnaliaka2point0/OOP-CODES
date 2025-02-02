/*
This program defines a Car class with the required attributes and methods, initializes a Car object, 
displays its details, and updates the mileage after driving specified distances.
Programmer: Sophy Naliaka Wafula. 
Registration Number: BSE-05-0183/2024.
Date: 2nd Febuary 2025.
*/

#include <iostream> //pre-processor
#include <string>  // For std::string
using namespace std;

// Define the Car class
class Car {
public:
    // Public data members to store car details
    string brand;  // Car brand
    string model;  // Car model
    float price;   // Car price
    int mileage;   // Car mileage

    // Constructor to initialize data members
    Car(string b, string m, float p, int mil) {
        brand = b;
        model = m;
        price = p;
        mileage = mil;
    }

    // Member function to display car details
    void display() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: Ksh " << price << endl;
        cout << "mileage: " << mileage << " miles" << endl;
    }

    // Member function to simulate driving and update mileage
    void drive(int distance) {
        mileage += distance;
        cout << "Car driven for " << distance << " miles. New mileage: " << mileage << " miles." << endl;
    }
};

int main() {
    // Create a Car object with specified details
    Car myCar("Toyota", "Corolla", 20000, 5000);
    
    // Display the car's details
    myCar.display();
    
    // Simulate driving for 150 miles and update mileage
    myCar.drive(150);
    
    // Simulate driving for 300 miles and update mileage
    myCar.drive(300);
    
    return 0;
}
