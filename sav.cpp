#include <iostream>
#include <string>

using namespace std;

class SavingAccount {
private:
    string acc_Name;
    int acc_No;
    double balance;
    double interest_rate;

public:
    // Parameterized Constructor
    SavingAccount(string name, int num, double bal, double rate) {
        acc_Name = name;
        acc_No = num;
        balance = bal;
        interest_rate = rate;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << " into Saving Account.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << " from Saving Account.\n";
        } else {
            cout << "Insufficient balance or invalid amount in Saving Account.\n";
        }
    }

    void applyInterest() {
        double interest = balance * (interest_rate / 100);
        balance += interest;
        cout << "Interest of $" << interest << " applied.\n";
    }

    void display() {
        cout << "\n--- Saving Account Details ---" << endl;
        cout << "Account Name: " << acc_Name << endl;
        cout << "Account Number: " << acc_No << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest Rate: " << interest_rate << "%" << endl;
    }
}; 

int main() {
    
    SavingAccount myAccount("Arpita", 1001, 500.0, 4.5);
    myAccount.display();
    myAccount.deposit(150.0);
    myAccount.withdraw(100.0);
    myAccount.applyInterest();
    myAccount.display();

    return 0;
}

