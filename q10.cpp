#include <iostream>
using namespace std;

class Bank
{
private:
    int accountNum;
    float balance;

public:
    void input()
    {
        cout << "Enter Account Number: ";
        cin >> accountNum;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposited successfully.\n";
    }

    void withdraw(float amount)
    {
        if (balance - amount >= 1000)
        {
            balance -= amount;
            cout << "Withdrawn successfully.\n";
        }
        else
        {
            cout << "Withdrawal failed!\n";
        }
    }

    void display()
    {
        cout << "Account Details\n";
        cout << "Account Number: " << accountNum << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Bank b;
    float amount;
    int choice;

    b.input();

    cout << "\n1. Deposit\n2. Withdraw\nEnter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter amount to deposit: ";
        cin >> amount;
        b.deposit(amount);
    }
    else if (choice == 2)
    {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        b.withdraw(amount);
    }

    b.display();

    return 0;
}
