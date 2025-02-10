/*This C++ program defines a BankAccount class that allows users to manage a simple bank account
 by setting and retrieving the account holder's name and account balance.

Programmer: Sophy Naliaka Wafula. 
Registration Number: BSE-05-0183/2024.
Date: 10th Febuary 2025.
*/

#include <iostream>
#include <string> 

using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Setter method for Account Holder Name
    void setAccountHolder(string accHolder) {
        accountHolder = accHolder;
    }
    
    // Getter method for Account Holder Name
    string getAccountHolder() {
        return accountHolder;
    }
    
    // Setter method for Balance
    void setBalance(double accBalance) {
        balance = accBalance;
    }
    
    // Getter method for Balance (should return double)
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount ba1;
    
    // Setting account holder name and balance
    ba1.setAccountHolder("Gabriel Jesus");
    ba1.setBalance(25000);

    // Display account holder and balance
    cout << "Account Holder: " << ba1.getAccountHolder() << endl;
    cout << "Account Balance is Ksh " << ba1.getBalance() << endl;

    return 0;		
}


 