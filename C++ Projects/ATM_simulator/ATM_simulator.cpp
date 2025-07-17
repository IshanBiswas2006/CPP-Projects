#include <iostream>
using namespace std;

float balance = 1000.0; 

void showMenu() {
    cout << "ATM Menu:"<<endl;
    cout << "1. Check Balance"<<endl;
    cout << "2. Deposit Money"<<endl;
    cout << "3. Withdraw Money"<<endl;
    cout << "4. Exit";
   
}

void checkBalance() {
    cout << "Current Balance: " << balance<<endl;
}

void depositMoney() {
    float amount;
    cout << "Enter amount to deposit:";
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout<< amount << " deposited successfully!";
    } else {
        cout << "Invalid amount!";
    }
}

void withdrawMoney() {
    float amount;
    cout << "Enter amount to withdraw: "<<endl;
    cin >> amount;
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << amount << " withdrawn successfully"<<endl;
    } else if (amount > balance) {
        cout << "Insufficient balance"<<endl;
    } else {
        cout << "Invalid amount"<<endl;
    }
}

int main() {
    int choice;

    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                cout << "Thank you for using ATM Bye"<<endl;
                break;
            default:
                cout << "Invalid option! Try again"<<endl;
        }

    } while (choice != 4);

    return 0;
}