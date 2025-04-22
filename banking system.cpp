#include <iostream>
#include <string>
using namespace std;

string customerName;
int accountNumber;
double balance = 0;

void createAccount() {
    cout << "Enter customer name: ";
    cin.ignore();
    getline(cin, customerName);
    cout << "Enter account number: ";
    cin >> accountNumber;
    balance = 0;
    cout << "Account created successfully.\n";
}

void deposit() {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance += amount;
    cout << "Deposit successful.\n";
}

void withdraw() {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount > balance) {
        cout << "Insufficient balance.\n";
    } else {
        balance -= amount;
        cout << "Withdrawal successful.\n";
    }
}

void showBalance() {
    cout << "Customer: " << customerName << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
}

int main() {
    int choice;
    do {
        cout << "\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Show Balance\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: showBalance(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}

