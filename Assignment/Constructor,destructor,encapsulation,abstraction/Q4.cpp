//Q-4. Write a C++ program to implement a class called Bank Account that has 
//private member variables for account number and balance. Include 
//member functions to deposit and withdraw money from the account. 

#include<iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
    int c; // Variable for deposit amount
    int wd; // Variable for withdrawal amount

public:
    Balancedetails(int accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    deposit() {
        cout << "Enter deposit amount: ";
        cin >> c;
        balance += c; // Add deposit amount to balance
        cout << "Amount deposited: " << c << endl;
    }

    withdraw() {
        cout << "Enter withdrawal amount: ";
        cin >> wd;
        if (wd > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= wd; // Deduct withdrawal amount from balance
            cout << "Amount Withdrawn: " << wd << endl;
        }
    }

    display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

main() {
    BankAccount obj;
    obj.Balancedetails(12345, 10000); // Initializing account number and balance
    obj.deposit();
    obj.withdraw();
    obj.display();
}

