#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create bank account system.\n";

    string name;
    int accountNo;
    float balance, amount;

    cout << "Enter Account Holder Name:\n";
    cin >> name;

    cout << "Enter Account Number:\n";
    cin >> accountNo;

    cout << "Enter Initial Balance:\n";
    cin >> balance;

    cout << "Enter Deposit Amount:\n";
    cin >> amount;

    balance += amount;

    cout << "\nAccount Details\n";
    cout << "Name : " << name << endl;
    cout << "Account Number : " << accountNo << endl;
    cout << "Balance : " << balance << endl;

    return 0;
}