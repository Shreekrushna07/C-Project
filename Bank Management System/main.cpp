#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Account {
public:
    int accountNumber;
    string name;
    float balance;

    Account(int accNum, string accName, float accBalance) {
        accountNumber = accNum;
        name = accName;
        balance = accBalance;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds" << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Bank {
private:
    vector<Account> accounts;

public:
    void createAccount() {
        int accNum;
        string accName;
        float accBalance;

        cout << "Enter Account Number: ";
        cin >> accNum;
        cout << "Enter Account Holder Name: ";
        cin >> accName;
        cout << "Enter Initial Balance: ";
        cin >> accBalance;

        Account newAccount(accNum, accName, accBalance);
        accounts.push_back(newAccount);

        cout << "Account created successfully!" << endl;
    }

    void deposit() {
        int accNum;
        float amount;

        cout << "Enter Account Number: ";
        cin >> accNum;
        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        for (auto &acc : accounts) {
            if (acc.accountNumber == accNum) {
                acc.deposit(amount);
                cout << "Deposit successful!" << endl;
                return;
            }
        }

        cout << "Account not found!" << endl;
    }

    void withdraw() {
        int accNum;
        float amount;

        cout << "Enter Account Number: ";
        cin >> accNum;
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        for (auto &acc : accounts) {
            if (acc.accountNumber == accNum) {
                acc.withdraw(amount);
                cout << "Withdrawal successful!" << endl;
                return;
            }
        }

        cout << "Account not found!" << endl;
    }

    void displayAccount() {
        int accNum;

        cout << "Enter Account Number: ";
        cin >> accNum;

        for (auto &acc : accounts) {
            if (acc.accountNumber == accNum) {
                acc.display();
                return;
            }
        }

        cout << "Account not found!" << endl;
    }
};

int main() {
    Bank bank;
    int choice;

    while (true) {
        cout << "\nBank Management System" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Display Account" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bank.createAccount();
                break;
            case 2:
                bank.deposit();
                break;
            case 3:
                bank.withdraw();
                break;
            case 4:
                bank.displayAccount();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}