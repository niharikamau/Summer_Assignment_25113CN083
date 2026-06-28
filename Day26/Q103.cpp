#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create ATM simulation.\n";

    int choice;
    float balance = 5000, amount;

    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";

    cout << "Enter your choice:\n";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Balance = " << balance;
            break;

        case 2:
            cout << "Enter amount to deposit:\n";
            cin >> amount;
            balance += amount;
            cout << "Updated Balance = " << balance;
            break;

        case 3:
            cout << "Enter amount to withdraw:\n";
            cin >> amount;

            if(amount <= balance)
            {
                balance -= amount;
                cout << "Updated Balance = " << balance;
            }
            else
            {
                cout << "Insufficient Balance";
            }
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}