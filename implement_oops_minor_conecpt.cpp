#include <iostream>
using namespace std;

class Bank {
private:
    string accHolderName;
    int accNumber;
    string accType;
    double balance;

public:
    // 1️⃣ Default Constructor
    Bank() {
        accHolderName = "NA";
        accNumber = 0;
        accType = "NA";
        balance = 0.0;
    }

    // 2️⃣ Parameterized Constructor
    Bank(string name, int number, string type, double bal) {
        accHolderName = name;
        accNumber = number;
        accType = type;
        balance = bal;
    }

    // 3️⃣ Copy Constructor
    Bank(const Bank &obj) {
        accHolderName = obj.accHolderName;
        accNumber = obj.accNumber;
        accType = obj.accType;
        balance = obj.balance;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: Rs " << amount << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: Rs " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            cout << "Invalid withdrawal amount" << endl;
        }
    }

    // Display function
    void display() {
        cout << "\nAccount Holder Name: " << accHolderName << endl;
        cout << "Account Number     : " << accNumber << endl;
        cout << "Account Type       : " << accType << endl;
        cout << "Balance            : Rs " << balance << endl;
    }
};

int main() {
    // Using parameterized constructor
    Bank acc1("Mithlesh", 12345, "Saving", 2500);
    acc1.display();

    acc1.deposit(2000);
    acc1.withdraw(1500);

    acc1.display();

    // Using copy constructor
    Bank acc2 = acc1;
    acc2.display();

    return 0;
}
