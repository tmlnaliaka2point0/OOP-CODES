/*This C++ program manages customer account details in a banking system using a Customer structure. 
It allows users to input the 3rd customer's details and displays them using a function while ensuring data integrity with const references.
Programmer: Sophy Naliaka Wafula. 
Registration Number: BSE-05-0183/2024.
Date: 16th March 2025.
*/

#include <iostream>
#include <string>

using namespace std; 

// Structure to store customer account details
struct Customer {
    string name;             // Customer's name
    double accountBalance;   // Customer's account balance
    string lastTransaction;  // Description of the last transaction
};

// Function to display customer details
// The 'const' keyword ensures that the function does not modify the passed customer data
void displayCustomer(const Customer& c) {
    cout << "Customer Name: " << c.name << endl;
    cout << "Account Balance: Ksh. " << c.accountBalance << endl;
    cout << "Last Transaction: " << c.lastTransaction << endl;
    cout << endl;
}

int main() {
    // Create two customer records with predefined (hardcoded) values
    Customer customer1 = {"Sebastian Mogire", 47350.75, "Withdrawal of 65,550 in cash. Sent Ksh. 34,450 to Airtel Mobile Bank of 'Sebastian Mogire'"};
    Customer customer2 = {"Rickie Ouko", 24000.50, "Sent Ksh. 50,000 to the Equity Bank Account of 'Rickie Ouko'"};

    // Display the fixed details of the customers
    cout << "CUSTOMER 1 DETAILS:" << endl;
    displayCustomer(customer1);

    cout << "CUSTOMER 2 DETAILS:" << endl;
    displayCustomer(customer2);

    // Area for user to input their own  for the third customer
    Customer customer3;
    cout << "Enter customer name: ";
    getline(cin >> ws, customer3.name);  // Using 'ws' to handle leading whitespace

    cout << "Enter account balance: ";
    cin >> customer3.accountBalance;

    cin.ignore(); // Ignore newline character left in the buffer
    cout << "Enter last transaction: ";
    getline(cin, customer3.lastTransaction);  // Taking full input with spaces
    
    cout<<endl;

    // Display the 3rd customer details entered by the user
    cout << "CUSTOMER 3 DETAILS:" << endl;
    
    cout<<endl;
    displayCustomer(customer3);

    return 0;
}
