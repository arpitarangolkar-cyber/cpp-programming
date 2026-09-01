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

    class CheckingAccount {
    private:
        SavingAccount& mainAccount;

    public:
        CheckingAccount(SavingAccount& sa) : mainAccount(sa) {}

        void deposit(double amount) {
            if (amount > 0) {
                mainAccount.balance += amount;
                cout << "Deposited: $" << amount << " into Checking Account.\n";
            }
        }

        void withdraw(double amount) {
            if (amount > 0 && amount <= mainAccount.balance) {
                mainAccount.balance -= amount;
                cout << "Withdrew: $" << amount << " from Checking Account.\n";
            } else {
                cout << "Insufficient balance in Checking Account.\n";
            }
        }

        void display() {
            cout << "\n--- Checking Account Details ---" << endl;
            cout << "Linked Account Name: " << mainAccount.acc_Name << endl;
            cout << "Current Balance: $" << mainAccount.balance << endl;
        }
    };
};

int main() {
    SavingAccount sa("Arpita", 10112, 5000.0, 3.5);
    sa.display();
    sa.deposit(1500.0);
    sa.applyInterest();
    sa.display();
    SavingAccount::CheckingAccount ca(sa);
    ca.display();
    
    ca.withdraw(2000.0);
    ca.display();

    return 0;
}
