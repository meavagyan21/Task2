#include <iostream>
#include <cstring>

using namespace std;

class BankAccount {
private:
    char clientName[24];
    char accountNumber[16];
    double balance;

public:
    BankAccount(const char* name, const char* accNum, double initialBalance) {
        int i;
        for(i = 0; i < 23 && name[i] != '\0'; ++i)
            clientName[i] = name[i];
        clientName[i] = '\0';
        for(i = 0; i < 15 && accNum[i] != '\0'; ++i)
            accountNumber[i] = accNum[i];
        accountNumber[i] = '\0';
        balance = initialBalance;
    }

    void displayAccount() {
        cout << "Client Name: " << clientName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "$" << amount << " deposited successfully." << endl;
        } else {
            cout << "Invalid amount for deposit." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "$" << amount << " withdrawn successfully." << endl;
        } else {
            cout << "Insufficient funds or invalid amount for withdrawal." << endl;
        }
    }
};

int main() {
    BankAccount account("John Doe", "123456789012345", 1000.0);
    account.displayAccount();

    account.deposit(500.0);

    account.withdraw(200.0);
    
    account.withdraw(1500.0);
    

}
