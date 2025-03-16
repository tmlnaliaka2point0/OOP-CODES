/*This program defines a Patient structure, stores patient records, and displays them using a function. 
It also allows the user to input a 3rd new patient’s details and displays the entered information.
Programmer: Sophy Naliaka Wafula. 
Registration Number: BSE-05-0183/2024.
Date: 16th March 2025.*/

#include <iostream>
#include <string>

using namespace std; 

// Patient structure details
struct Patient {
    string name;      //Name of the patient
    int age;          //Age of the patient
    string diagnosis; //Type of the patient's sickness
};

// Function to display patient details
void displayPatients(const Patient& p) {
    cout << "Patient Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Diagnosis: " << p.diagnosis << endl;
    cout << endl;
}

int main() {
    // Fixed patient records from the question given with fixed values
    Patient patient1 = {"Sebastian Mogire", 26, "Lung Cancer"};
    Patient patient2 = {"Rickie Ouko", 22, "Brain Damage"};

    // Display patient records
    cout << "PATIENT 1 DETAILS" << endl;
    displayPatients(patient1);

    cout << "PATIENTS 2 DETAILS" << endl;
    displayPatients(patient2);

    // Modification for the the program to allow user input
    Patient patient3;
    cout << "Enter patient name: ";
    getline(cin, patient3.name);

    cout << "Enter patient age: ";
    cin >> patient3.age;
    cin.ignore(); // Clear input buffer

    cout << "Enter patient diagnosis: ";
    getline(cin, patient3.diagnosis);
    
    cout<<endl;
    // Display the patient record with user input
    cout << "PATIENT 3 DETAILS:" << endl;
    displayPatients(patient3);

    return 0;
}
